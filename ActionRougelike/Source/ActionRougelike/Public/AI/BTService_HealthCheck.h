// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_HealthCheck.generated.h"

/**
 * 
 */
UCLASS()
class ACTIONROUGELIKE_API UBTService_HealthCheck : public UBTService
{
	GENERATED_BODY()
public:
	UBTService_HealthCheck();
protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	bool bHeal;
	
	UPROPERTY(EditAnywhere,Category="AI")
	FBlackboardKeySelector HealthName;

	UPROPERTY(EditAnywhere,Category="AI")
	FBlackboardKeySelector LowHealthName;

	UPROPERTY(EditAnywhere,Category="AI")
	FBlackboardKeySelector bGoHeal;
};
