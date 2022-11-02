// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_HealSelf.generated.h"

/**
 * 
 */
UCLASS()
class ACTIONROUGELIKE_API UBTTask_HealSelf : public UBTTaskNode
{
	GENERATED_BODY()

protected:
	void ChangeHealth();
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
