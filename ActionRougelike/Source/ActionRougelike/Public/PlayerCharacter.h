// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ActionComponent.h"
#include "AttributeComponent.h"
#include "InteractionComponent.h"
#include "MyPlayerState.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/AudioComponent.h"
#include "PlayerCharacter.generated.h"


UCLASS()
class ACTIONROUGELIKE_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()
protected:

	//指定我们生成的物体，小兵或者子弹等等
	//UPROPERTY将它暴露给蓝图去编辑指定生成的Actor类
	UPROPERTY(EditAnywhere, Category="Attack")
	TSubclassOf<AActor> ProjectileClass;

	UPROPERTY()
	AMyPlayerState* PS;

	
	UPROPERTY(EditAnywhere, Category = "Attack")
	UParticleSystem* AttackParticle;

	UPROPERTY(EditAnywhere,Category="Attack")
	TSubclassOf<AActor> DashProjectile;

	UPROPERTY(EditAnywhere,Category="Attack")
	TSubclassOf<AActor> BlackHoleProjectile;

	UPROPERTY(EditAnywhere, Category="Attack")
	UAnimMontage* AttackAnim;

	UPROPERTY(EditDefaultsOnly,Category="Attack")
	UAudioComponent* AudioComp;
	
	UPROPERTY(EditAnywhere, Category="Dead")
	UAnimMontage* DeathAnim;
	FTimerHandle TimerHandle_PrimaryAttack;
public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArmComp;
	
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* CameraComp;

	UPROPERTY(VisibleAnywhere)
	UInteractionComponent* InteractionComp;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category="Components")
	UAttributeComponent* AttributeComp;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category="Components")
	UActionComponent* ActionComp;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	void MoveForward(float value);

	void SpawnProjectile(TSubclassOf<AActor> ProjectileClass);

	void MoveRight(float value);
	//因为是动作所以不需要任何参数
	void PrimaryAttack();

	void PrimaryAttack_TimeElased();

	void Dash_TimeElased();

	void BlackHole_TimeElased();

	void PrimaryInteract();

	void SprintStart();

	void SprintStop();
	
	void Dash();

	void BlackHole();
	
	UFUNCTION()
	void OnHealthChanged(AActor* InstigatorActor, UAttributeComponent* OwningComp, float NewHeawlth, float Delta);
	UFUNCTION()
	void OnCreditChanged(UAttributeComponent* OwningComp, float NewCredit, float Delta);
	virtual void PostInitializeComponents() override;
	virtual FVector GetPawnViewLocation() const override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(Exec)
	void HealSelf(float amount);

};
