// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "MyAIController.generated.h"

/**
 * 
 */
UCLASS()
class ACTIONROUGELIKE_API AMyAIController : public AAIController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;


	UPROPERTY(EditDefaultsOnly,Category="AI")
	UBehaviorTree* BehaviorTree;
};
