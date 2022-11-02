// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayInterface.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "HealPotion.generated.h"

UCLASS()
class ACTIONROUGELIKE_API AHealPotion : public AActor,public IGameplayInterface
{
	GENERATED_BODY()

	void Interact_Implementation(APawn* InstigatorPawn) override;
public:	
	// Sets default values for this actor's properties
	AHealPotion();
	

protected:
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	USphereComponent* SphereComp;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MeshComp;
	FTimerHandle FTimerHandle_ShowPowerUp;
	void ShowPowerUp();

	void HideAndCooldownPowerup();

	void SetPowerupState(bool IsActive);
public:	

private:
	float RespawnName;
	
};
