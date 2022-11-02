// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ActionComponent.h"
#include "AttributeComponent.h"
#include "WorldUserWidget.h"
#include "GameFramework/Character.h"
#include "Perception/PawnSensingComponent.h"
#include "AICharacter.generated.h"

UCLASS()
class ACTIONROUGELIKE_API AAICharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAICharacter();

protected:

	UPROPERTY(VisibleAnywhere,Category="Components")
	UActionComponent* ActionComp;
	
	UPROPERTY(VisibleAnywhere,Category="Components")
	UPawnSensingComponent* PawnSensingComp;
	
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category="Components")
	UAttributeComponent* AttributeComp;

	UPROPERTY(EditDefaultsOnly,Category="Attack")
	TSubclassOf<UUserWidget> HealthBarWidgetClass;
	
	UWorldUserWidget* ActiveHealthBar;
	

	void SetTargetActor(AActor* TargetActor);
	
	UFUNCTION()
	void OnHealthChanged(AActor* InstigatorActor, UAttributeComponent* OwningComp, float NewHeawlth, float Delta);

	UFUNCTION()
	void OnSeePawn(APawn* Pawn);

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PostInitializeComponents() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	bool IsAlive();
};


