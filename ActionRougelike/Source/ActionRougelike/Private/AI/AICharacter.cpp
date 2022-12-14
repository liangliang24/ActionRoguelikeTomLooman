// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/AICharacter.h"

#include "AIController.h"
#include "BrainComponent.h"
#include "WorldUserWidget.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Blueprint/UserWidget.h"
#include "Components/CapsuleComponent.h"

// Sets default values
AAICharacter::AAICharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>("PawnSensingComp");

	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_WorldDynamic,ECR_Ignore);
	GetMesh()->SetGenerateOverlapEvents(true);
	AttributeComp = CreateDefaultSubobject<UAttributeComponent>("AttributeComp");

	ActionComp = CreateDefaultSubobject<UActionComponent>("ActionComp");
	
}



void AAICharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	PawnSensingComp->OnSeePawn.AddDynamic(this, &AAICharacter::OnSeePawn);
	AttributeComp->OnHealthChanged.AddDynamic(this, &AAICharacter::OnHealthChanged);
}


void AAICharacter::OnSeePawn(APawn* Pawn)
{
	SetTargetActor(Pawn);

	DrawDebugString(GetWorld(), Pawn->GetActorLocation(), "PlayerPawn", nullptr, FColor::Green, 2.0f, true);
}

// Called when the game starts or when spawned
void AAICharacter::BeginPlay()
{
	Super::BeginPlay();

	AAIController* MyAIController = Cast<AAIController>(GetController());

	if (MyAIController)
	{
		MyAIController->GetBlackboardComponent()->SetValueAsFloat("LowHealth",50.0f);
		MyAIController->GetBlackboardComponent()->SetValueAsFloat("Health",AttributeComp->GetHealth());
	}
	
}



// Called every frame
void AAICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AAICharacter::IsAlive()
{
	return AttributeComp->IsAlive();
}

void AAICharacter::SetTargetActor(AActor* TargetActor)
{
	AAIController* MyAIController = Cast<AAIController>(GetController());
	if(ensure(MyAIController))
	{
		MyAIController->GetBlackboardComponent()->SetValueAsObject("TargetActor", TargetActor);
	}
}

void AAICharacter::OnHealthChanged(AActor* InstigatorActor, UAttributeComponent* OwningComp, float NewHealth,
                                   float Delta)
{
	AAIController* MyAIController = Cast<AAIController>(GetController());
	if (MyAIController)
	{
		MyAIController->GetBlackboardComponent()->SetValueAsFloat("Health",NewHealth);
	}
	if (NewHealth <= 0.0f)
	{
		UAttributeComponent* PlayerAttributeComp = UAttributeComponent::GetAttributes(InstigatorActor);
		if (PlayerAttributeComp)
		{
			PlayerAttributeComp->SetCredit(20.0f);
		}
		if (MyAIController)
		{
			//??????????????????????????????,???????????????????????????????????????????????????????????????Died???????????????
			MyAIController->GetBrainComponent()->StopLogic("Died");
		}
		GetMesh()->SetAllBodiesSimulatePhysics(true);
		//?????????????????????????????????
		GetMesh()->SetCollisionProfileName("BlockAll");
		
		
		SetLifeSpan(10.0f);
	}


	if (ActiveHealthBar==nullptr)
	{
		//????????????????????????UMG???????????????????????????????????????,???????????????umg
		ActiveHealthBar = CreateWidget<UWorldUserWidget>(GetWorld(),HealthBarWidgetClass);
		if (ActiveHealthBar)
        {
			ActiveHealthBar->AttachedActor = this;
            ActiveHealthBar->AddToViewport();
        }
	}
	
	
	if (Delta<0.0f)
	{
		if (InstigatorActor!=this)
		{
			SetTargetActor(InstigatorActor);
		}
		GetMesh()->SetScalarParameterValueOnMaterials("TimeToHit", GetWorld()->TimeSeconds);
	}
}

