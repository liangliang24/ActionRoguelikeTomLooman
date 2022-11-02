// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyGameModeBase.h"
#include "GameFramework/PlayerState.h"
#include "MyPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class ACTIONROUGELIKE_API AMyPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	float Credits;
	UFUNCTION(BlueprintCallable)
	float GetCredits();
	
	UPROPERTY()
	int Health;
	
	UFUNCTION(BlueprintNativeEvent)
	void SavePlayerState(UMySaveGame* MySaveGame);

	UFUNCTION(BlueprintNativeEvent)
	void LoadPlayerState(UMySaveGame* MySaveGame);

	
};
