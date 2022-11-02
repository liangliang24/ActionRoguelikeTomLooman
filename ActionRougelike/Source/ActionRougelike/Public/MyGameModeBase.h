// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MonsterData.h"
#include "MySaveGame.h"
#include "AI/AICharacter.h"
#include "Engine/DataTable.h"
#include "EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameModeBase.generated.h"

USTRUCT(BlueprintType)
struct FMonsterInFoRow : public FTableRowBase
{
	GENERATED_BODY()

public:

	FMonsterInFoRow()
	{
		Weight = 1.0f;
		SpawnCost = 5.0f;
		KillReward = 20.0f;
	}
	
	//要生成的AI
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FPrimaryAssetId MonsterId;
	//TSubclassOf<AActor> MonsterClass;

	//选中这个AI的概率
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float Weight;

	//生成这个AI所需要花费的
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	float SpawnCost;


	//击杀这个AI奖励的分数
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float KillReward;
	
};

/**
 * 
 */
UCLASS()
class ACTIONROUGELIKE_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

protected:
	
	FString SlotName;
	
	UPROPERTY()
	UMySaveGame* CurrentSaveGame;

	UPROPERTY(EditDefaultsOnly,Category="AI")
	UDataTable* MonsterTable;
	
	UPROPERTY(VisibleAnywhere,Category="AI")
	float SpawnTimerInterval;

	FTimerHandle FTimerHandle_SpawnBots;
	
	FTimerHandle FTimerHandle_SpawnCoin;
	
	UPROPERTY(EditDefaultsOnly,Category="AI")
	UEnvQuery* SpawnBotQueryTemplate;
	
	/*UPROPERTY(EditDefaultsOnly,Category="AI")
	TSubclassOf<AAICharacter> MinionClass;*/

	UPROPERTY(EditDefaultsOnly,Category="AI")
	TSubclassOf<AActor> CoinClass;

	UPROPERTY(EditDefaultsOnly,Category="AI")
	UEnvQuery* SpawnCoinQueryTemplate;
	
	UPROPERTY(EditDefaultsOnly,Category="AI")
	UCurveFloat* DifficultyCurve;
	
	void OnMonsterLoaded(FPrimaryAssetId LoadedId, FVector SpawnLocation);
	
	UFUNCTION()
	void SpawnBot(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus);

	UFUNCTION()
	void SpawnBotTimerElasped();

	UFUNCTION()
	void SpawnCoin(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus);
	
	UFUNCTION()
	void SpawnCoinTimerElasped();
	
	UFUNCTION()
	void RespawnPlayerElasped(AController* Controller);

	UFUNCTION()
	void DestroyActor(AActor* Died);
public:
	UFUNCTION()
	virtual void OnActorKill(AActor* VictimActor,AActor* Killer);
	
	AMyGameModeBase();

	//我们需要在游戏开始（StartPlay）之前就完成存档的加载（LoadSaveGame）
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;

	
	virtual void StartPlay() override;

	UFUNCTION(Exec)
	void KillAllAI();

	UFUNCTION(BlueprintCallable,Category="SaveGame")
	void WriteSaveGame();

	UFUNCTION(BlueprintCallable,Category="SaveGame")
	void LoadSaveGame();
	
	//加载玩家角色的状态需要知道玩家的ID，LoadSaveGame是在游戏初始化的时候进行的，我们需要在更早的时候读取存档
	virtual void HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer) override;
};
