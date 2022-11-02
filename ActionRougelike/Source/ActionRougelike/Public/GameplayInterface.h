// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UGameplayInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ACTIONROUGELIKE_API IGameplayInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	//希望调用交互函数的时候，是谁在使用它
	//同时暴露给蓝图
	//BlueprintNativeEvent可以让函数既可以在蓝图中实现也可以在c++中实现
	//但是BlueprintImplementableEvent只能在蓝图中实现
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Interact(APawn* InstigatorPawn);

	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void OnActorLoaded();
};
