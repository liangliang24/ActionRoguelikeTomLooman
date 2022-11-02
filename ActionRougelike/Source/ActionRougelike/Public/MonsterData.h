// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UAction.h"
#include "Engine/DataAsset.h"
#include "MonsterData.generated.h"

/**
 * 
 */
UCLASS()
class ACTIONROUGELIKE_API UMonsterData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Spawn Info")
	TSubclassOf<AActor> MonsterClass;

	//这个怪物所拥有的技能或者Buff
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Spawn Info")
	TArray<TSubclassOf<UAction>> Actions;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="UI")
	UTexture2D* Icon;

	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId("Monsters",GetFName());
	}
	
};
