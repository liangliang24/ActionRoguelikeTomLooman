// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProjectileBase.h"
#include "DashProjectile.generated.h"

/**
 * 
 */
UCLASS()
class ACTIONROUGELIKE_API ADashProjectile : public AProjectileBase
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditDefaultsOnly,Category="Teleport")
	float TeleportDelay;

	UPROPERTY(EditDefaultsOnly,Category="Teleport")
	float DetonateDelay;

	FTimerHandle TimerHandle_DelayedDetonate;

	virtual void Explode_Implementation() override;

	void TeleportInstigator();

	virtual void BeginPlay() override;
public:
	ADashProjectile();
};
