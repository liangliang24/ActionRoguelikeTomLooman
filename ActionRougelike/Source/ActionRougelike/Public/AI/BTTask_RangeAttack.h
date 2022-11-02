// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_RangeAttack.generated.h"

/**
 * 
 */
UCLASS()
class ACTIONROUGELIKE_API UBTTask_RangeAttack : public UBTTaskNode
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditAnywhere,Category="Attack")
	FBlackboardKeySelector AttackedActor;

	UPROPERTY(EditAnywhere,Category="Attack")
	TSubclassOf<AActor> ProjectileClass;

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
