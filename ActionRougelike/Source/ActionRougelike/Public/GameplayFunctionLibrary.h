// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class ACTIONROUGELIKE_API UGameplayFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable,Category="Gameplay")
	static bool ApplyDamage(AActor* TargetActor,AActor* DamageCauser,float DamageAmount);

	UFUNCTION(BlueprintCallable,Category="Gameplay")
	static bool ApplyDirectionalDamage(AActor* TargetActor,AActor* DamageCauser,float DamageAmount,const FHitResult& HitResult);
};
