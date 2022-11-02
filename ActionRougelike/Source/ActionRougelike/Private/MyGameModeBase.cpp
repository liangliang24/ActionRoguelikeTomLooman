// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "EngineUtils.h"
#include "GameplayInterface.h"
#include "MySaveGame.h"
#include "PlayerCharacter.h"
#include "Engine/AssetManager.h"
#include "EnvironmentQuery/EnvQueryManager.h"
#include "GameFramework/GameStateBase.h"
#include "GameFramework/SaveGame.h"
#include "Kismet/GameplayStatics.h"
#include "Serialization/ObjectAndNameAsStringProxyArchive.h"


//添加一个控制台函数
//第一个参数是名称;第二个参数是默认值;第三个参数是对这个命令的描述;第四个参数是这个控制台命令的类型，可以是cheat或者默认也可以是其它
static TAutoConsoleVariable<bool> CVarSpawnBots(TEXT("su.SpawnBots"),true,TEXT("Enable spawning of bots via timer."),ECVF_Cheat);

AMyGameModeBase::AMyGameModeBase()
{
	SpawnTimerInterval = 2.0f;

	SlotName = "SaveGame01";

	PlayerStateClass = APlayerState::StaticClass(); 
}

void AMyGameModeBase::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

	LoadSaveGame();
}



void AMyGameModeBase::SpawnBot(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus)
{
	
	if (QueryStatus != EEnvQueryStatus::Success)
	{
		UE_LOG(LogTemp,Warning,TEXT("Failed"));
		return;
		
	}

	int AINums = 0;
	for (TActorIterator<AAICharacter> It(GetWorld());It;++It)
	{
		AAICharacter* Bot = *It;
		if(Bot->IsAlive())
		{
			AINums++;
		}
	}


	if (DifficultyCurve)
	{
		float MaxAINums = DifficultyCurve->GetFloatValue(GetWorld()->TimeSeconds);
		if (AINums>MaxAINums)
		{
			return;
		}
	}
	TArray<FVector> ResultsLocation = QueryInstance->GetResultsAsLocations();
	if (ResultsLocation.Num()>0)
	{
		//我们需要在生成的时候从表中随机挑选一个数据
		if (MonsterTable)
		{
			TArray<FMonsterInFoRow*> Rows;
			
			//第一个参数是一个FString,用于调试
			//第二个参数是一个数组的指针，存储获取到的所有数据列
			MonsterTable->GetAllRows("",Rows);

			int32 RandomIndex = FMath::RandRange(0,Rows.Num()-1);
			FMonsterInFoRow* SelectedRow = Rows[RandomIndex];

			UAssetManager* Manager = UAssetManager::GetIfValid();
			if (Manager)
			{
				TArray<FName> Bundles;

				//添加一个委托类似于定时器，第二个参数是要调用的函数
				FStreamableDelegate Delegate = FStreamableDelegate::CreateUObject(this, &AMyGameModeBase::OnMonsterLoaded, SelectedRow->MonsterId,ResultsLocation[0]);

				
				Manager->LoadPrimaryAsset(SelectedRow->MonsterId, Bundles, Delegate);
			}
			
			
		}
	}
}

void AMyGameModeBase::OnMonsterLoaded(FPrimaryAssetId LoadedId, FVector SpawnLocation)
{
	UAssetManager* Manager = UAssetManager::GetIfValid();

	if (Manager)
	{
		UMonsterData* MonsterData = Cast<UMonsterData>(Manager->GetPrimaryAssetObject(LoadedId));

		if (MonsterData)
		{
			AActor* NewBot = GetWorld()->SpawnActor<AActor>(MonsterData->MonsterClass,SpawnLocation,FRotator::ZeroRotator);

			if (NewBot)
			{
				UActionComponent* ActionComp = Cast<UActionComponent>(NewBot->GetComponentByClass(UActionComponent::StaticClass()));
				if (ActionComp)
				{
					for (TSubclassOf<UAction> ActionClass : MonsterData->Actions)
					{
						ActionComp->AddAction(NewBot,ActionClass);
					}
				}
			} 
		}
	}
	
}
void AMyGameModeBase::SpawnBotTimerElasped()
{
	if(!CVarSpawnBots.GetValueOnGameThread())
	{
		GetWorldTimerManager().ClearTimer(FTimerHandle_SpawnBots);
	}
	UEnvQueryInstanceBlueprintWrapper* QueryInstance = UEnvQueryManager::RunEQSQuery(this,SpawnBotQueryTemplate,this,EEnvQueryRunMode::RandomBest25Pct,nullptr);
	
	
	
	QueryInstance->GetOnQueryFinishedEvent().AddDynamic(this,&AMyGameModeBase::SpawnBot);
}

void AMyGameModeBase::SpawnCoin(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus)
{
	if (QueryStatus != EEnvQueryStatus::Success)
	{
		UE_LOG(LogTemp,Warning,TEXT("Failed"));
		return;
	}
	TArray<FVector> ResultsLocation = QueryInstance->GetResultsAsLocations();
	GetWorld()->SpawnActor<AActor>(CoinClass,ResultsLocation[0],FRotator::ZeroRotator);
	UE_LOG(LogTemp,Log,TEXT("Coin Spawn Success!"))
}

void AMyGameModeBase::SpawnCoinTimerElasped()
{
	UEnvQueryInstanceBlueprintWrapper* QueryInstance = UEnvQueryManager::RunEQSQuery(this,SpawnCoinQueryTemplate,this,EEnvQueryRunMode::RandomBest25Pct,nullptr);

	QueryInstance->GetOnQueryFinishedEvent().AddDynamic(this,&AMyGameModeBase::SpawnCoin);
}

void AMyGameModeBase::RespawnPlayerElasped(AController* Controller)
{
	
	if (ensure(Controller))
	{
		
		Controller->UnPossess();
		
		RestartPlayer(Controller);

		
	}
}

void AMyGameModeBase::DestroyActor(AActor* Died)
{
	Died->Destroy();
}

void AMyGameModeBase::OnActorKill(AActor* VictimActor, AActor* Killer)
{
	APlayerCharacter* Player = Cast<APlayerCharacter>(VictimActor);
	if (Player)
	{
		/*FTimerHandle TimerHandle_Relife;
		//定时器重载的第二个参数设置委托
		FTimerDelegate Delegate;
		//这个委托会绑定一个UFunction,第一个参数是调用的类，第二个参数是函数的名字，后面的参数是函数的参数
		Delegate.BindUFunction(this,"RespawnPlayerElasped",Player->GetController());
		GetWorldTimerManager().SetTimer(TimerHandle_Relife, Delegate,2.0f,false);*/
		FTimerHandle TimerHandle_DestroyLife;
		FTimerDelegate FTimerDelegate_DestroyActor;
		FTimerDelegate_DestroyActor.BindUFunction(this,"DestroyActor",Player);
		GetWorldTimerManager().SetTimer(TimerHandle_DestroyLife, FTimerDelegate_DestroyActor,2.0f,false);
	}
	UE_LOG(LogTemp,Log,TEXT("OnActorKill.Victim:%s;Killer:%s"),*GetNameSafe(Player),*GetNameSafe(Killer))
}

void AMyGameModeBase::StartPlay()
{
	Super::StartPlay();
	
	GetWorldTimerManager().SetTimer(FTimerHandle_SpawnBots,this,&AMyGameModeBase::SpawnBotTimerElasped,SpawnTimerInterval,true);
	GetWorldTimerManager().SetTimer(FTimerHandle_SpawnCoin,this,&AMyGameModeBase::SpawnCoinTimerElasped,SpawnTimerInterval,true);
}

void AMyGameModeBase::KillAllAI()
{
	for (TActorIterator<AAICharacter> IT(GetWorld());IT;++IT)
	{
		AAICharacter* BOT = *IT;
		
		UAttributeComponent* AttributeComp = Cast<UAttributeComponent>(BOT->GetComponentByClass(UAttributeComponent::StaticClass()));
		AttributeComp->ApplyHealthChange(-AttributeComp->GetHealthMax(),nullptr,BOT);
	}
}

void AMyGameModeBase::WriteSaveGame()
{
	
	//GameState是可用的变量
	for (int32 i = 0;i < GameState->PlayerArray.Num();i++)
	{
		AMyPlayerState* PS = Cast<AMyPlayerState>(GameState->PlayerArray[i]);

		if (PS)
		{
			PS->SavePlayerState(CurrentSaveGame);
			break;
		}
	}
	CurrentSaveGame->SavedActors.Empty();
	for (FActorIterator It(GetWorld());It;++It)
	{
		AActor* Actor = *It;

		if (!Actor->Implements<UGameplayInterface>())
		{
			continue;
		}

		FActorSaveData ActorData;
		ActorData.ActorName = Actor->GetName();
		ActorData.Transform = Actor->GetActorTransform();

		//从Actor中传入数据到数组中
		FMemoryWriter MemWriter(ActorData.ByteData);
		
		FObjectAndNameAsStringProxyArchive Ar(MemWriter,true);
		//找到UPROPERTY(SaveGame)标识的变量
		Ar.ArIsSaveGame = true;
		//把Actor中UPROPERTY(SaveGame)中传入数据
		Actor->Serialize(Ar);
		
		
		CurrentSaveGame->SavedActors.Add(ActorData);
	}
	UGameplayStatics::SaveGameToSlot(CurrentSaveGame,SlotName,0);
}

void AMyGameModeBase::LoadSaveGame()
{
	//检查是否存在存档，第一个参数是保存文件的名称，第二个参数是保存者的下标，确定是平台的哪一个保存游戏的数据
	if (UGameplayStatics::DoesSaveGameExist(SlotName,0))
	{
		
		CurrentSaveGame = Cast<UMySaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName,0));
		if (CurrentSaveGame == nullptr)
		{
			UE_LOG(LogTemp,Warning,TEXT("Failed to load SaveGame Data"));
			return ;
		}
		UE_LOG(LogTemp,Log,TEXT("Loaded SaveGame Data"));
	}
	else
	{
		CurrentSaveGame = Cast<UMySaveGame>(UGameplayStatics::CreateSaveGameObject(UMySaveGame::StaticClass()));
		UE_LOG(LogTemp,Log,TEXT("Create New SaveGame Data"));
	}

	for (FActorIterator It(GetWorld());It;++It)
	{
		AActor* Actor = *It;

		if (!Actor->Implements<UGameplayInterface>())
		{
			continue;
		}

		for (FActorSaveData ActorData:CurrentSaveGame->SavedActors)
		{
			if (ActorData.ActorName == Actor->GetName())
			{
				Actor->SetActorTransform(ActorData.Transform);

				//从Actor中传入数据到数组中
				FMemoryReader MemReader(ActorData.ByteData);
		
				FObjectAndNameAsStringProxyArchive Ar(MemReader,true);
				//找到UPROPERT Y(SaveGame)标识的变量
				Ar.ArIsSaveGame = true;
				//将数据转换到Actor中
				Actor->Serialize(Ar);

				IGameplayInterface::Execute_OnActorLoaded(Actor);
				break;
			}
		}
	}
}

void AMyGameModeBase::HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer)
{
	Super::HandleStartingNewPlayer_Implementation(NewPlayer);

	AMyPlayerState* PS = NewPlayer->GetPlayerState<AMyPlayerState>();
	if (PS)
	{
		PS->LoadPlayerState(CurrentSaveGame);
	}
}
