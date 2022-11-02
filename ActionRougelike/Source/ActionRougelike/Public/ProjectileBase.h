// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "ProjectileBase.generated.h"


UCLASS()
class ACTIONROUGELIKE_API AProjectileBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectileBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly,Category="Effects")
	UParticleSystem* ImpactVFX;
	//作为最基本的碰撞组件
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	USphereComponent* SphereComp;
	//这个组件给予物体一个速度，进入直线
	UPROPERTY(VisibleAnywhere)
	UProjectileMovementComponent* MovementComp;
	//粒子系统组件，展示子弹
	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* EffectComp;

	UFUNCTION()
	void OnActorHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void Explode();

	virtual void PostInitializeComponents() override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};


