// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ActionComponent.h"
#include "Animation/AnimInstance.h"
#include "MyAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class ACTIONROUGELIKE_API UMyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Animation")
	bool bIsStunned;

	UPROPERTY(BlueprintReadOnly,Category="Animation")
	UActionComponent* ActionComp;

	//相当于Actor的BeginPlay
	virtual void NativeInitializeAnimation() override;
	//相当于Actor的Tick
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
};
