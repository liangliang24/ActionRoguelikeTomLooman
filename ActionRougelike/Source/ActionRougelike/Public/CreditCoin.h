// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayInterface.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "CreditCoin.generated.h"

UCLASS()
class ACTIONROUGELIKE_API ACreditCoin : public AActor,public IGameplayInterface
{
	GENERATED_BODY()
	void Interact_Implementation(APawn* InstigatorPawn) override;
public:	
	// Sets default values for this actor's properties
	ACreditCoin();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	USphereComponent* SphereComp;
	
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	UStaticMeshComponent* MeshComp;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
