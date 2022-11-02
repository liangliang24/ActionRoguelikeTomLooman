// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "ExplosiveBarrel.generated.h"

UCLASS()
class ACTIONROUGELIKE_API AExplosiveBarrel : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AExplosiveBarrel();

protected:

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	UStaticMeshComponent* StaticMeshComp;
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	URadialForceComponent* RadialForceComp;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION()
	void OnActorHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit );

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
