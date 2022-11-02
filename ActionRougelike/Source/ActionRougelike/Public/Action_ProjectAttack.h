// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UAction.h"
#include "Action_ProjectAttack.generated.h"

/**
 * 
 */
UCLASS()
class ACTIONROUGELIKE_API UAction_ProjectAttack : public UAction
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditAnywhere, Category="Attack")
	TSubclassOf<AActor> ProjectileClass;

	UPROPERTY(EditAnywhere, Category="Attack")
	UAnimMontage* AttackAnim;

	UPROPERTY(EditAnywhere, Category = "Attack")
	UParticleSystem* AttackParticle;

	UPROPERTY(EditAnywhere, Category = "Attack")
	FName HandSocketName;

	UPROPERTY(EditAnywhere, Category = "Attack")
	float AttackDelay;
	
	UFUNCTION()
	void AttackDelay_Elasped(ACharacter* InstigatorCharacter);

	
	
public:

	virtual void StartAction_Implementation(AActor* Instigator) override;

	UAction_ProjectAttack();

	
};
