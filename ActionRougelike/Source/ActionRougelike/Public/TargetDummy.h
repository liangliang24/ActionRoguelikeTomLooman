// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeComponent.h"
#include "GameFramework/Actor.h"
#include "TargetDummy.generated.h"

UCLASS()
class ACTIONROUGELIKE_API ATargetDummy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATargetDummy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere);
	UAttributeComponent* AttributeComp;

	UFUNCTION()
	void OnHealchChanged(AActor* InstigatorActor, UAttributeComponent* OwningComp, float NewHeawlth, float Delta);
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
