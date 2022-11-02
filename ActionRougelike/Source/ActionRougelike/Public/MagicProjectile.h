// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UAction.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "MagicProjectile.generated.h"

UCLASS()
class ACTIONROUGELIKE_API AMagicProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMagicProjectile();

protected:

	UPROPERTY(EditDefaultsOnly,Category="Effect")
	TSubclassOf<UAction> BurningEffect;
	
	UPROPERTY(EditDefaultsOnly,Category = "Attack")
	USoundBase* SoundBase;

	UPROPERTY(EditDefaultsOnly,Category = "Attack")
	TSubclassOf<UCameraShakeBase> Shake;

	UPROPERTY(EditDefaultsOnly, Category = "Attack")
	float Damage;

	UPROPERTY(EditDefaultsOnly,Category="Damage")
	FGameplayTag ParryTag;
	
	UFUNCTION()
	void OnActorOverlap(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult & SweepResult);

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


	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	
};
