// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UAction.h"
#include "ActionEffect.generated.h"

/**
 * 
 */
UCLASS()
class ACTIONROUGELIKE_API UActionEffect : public UAction
{
	GENERATED_BODY()
public:

	UActionEffect();
	
	void StartAction_Implementation(AActor* Instigator) override;

	void StopAction_Implementation(AActor* Instigator) override;

	
	
protected:

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Effect")
	float Duration;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Effect")
	float Period;

	FTimerHandle PeriodHandle;
	FTimerHandle DurationHandle;

	UFUNCTION(BlueprintNativeEvent,Category="Effect")
	void ExecutePeriodcEffect(AActor* Instigator);
};
