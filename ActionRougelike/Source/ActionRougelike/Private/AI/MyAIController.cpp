// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/MyAIController.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"

void AMyAIController::BeginPlay()
{
	Super::BeginPlay();

	if(ensureMsgf(BehaviorTree,TEXT("BehaviorTree is nullptr!")))
	{
		RunBehaviorTree(BehaviorTree);
	}
	/*
	APawn* MyPawn = UGameplayStatics::GetPlayerPawn(this, 0);
	if (MyPawn)
	{
		GetBlackboardComponent()->SetValueAsObject("TargetActor", MyPawn);
	}*/

	
}
 