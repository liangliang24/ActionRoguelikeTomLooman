// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
 
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UAction.generated.h"


class UActionComponent;
/** 
 * 
 */
//让它可以作为一个蓝图类
UCLASS(Blueprintable)
class ACTIONROUGELIKE_API UAction : public UObject
{
	GENERATED_BODY()
protected:

	UFUNCTION(BlueprintCallable,Category="Action")
	UActionComponent* GetOwningComponent() const;
	
	//在动作开始时候给动作授予标签，所有这些标签都会赋予刀ActionComponent的ActiveGameplayTags中
	UPROPERTY(EditDefaultsOnly,Category="Tags")
	FGameplayTagContainer GrantTags;

	//检查行为能否进行
	UPROPERTY(EditDefaultsOnly,Category="Tags")
	FGameplayTagContainer BlockTags;

	bool isRunSuccess = false;
public:

	UPROPERTY(EditDefaultsOnly,Category="Action")
	bool bAutoStart;
	
	void SetIsRunSuccess(bool bIsRunSuccess);
	bool GetIsRunSuccess() const;
	UFUNCTION(BlueprintNativeEvent,Category="Action")
	bool CanStart(AActor* Instigator);
	
	UFUNCTION(BlueprintNativeEvent,Category="Action")
	void StartAction(AActor* Instigator);

	UFUNCTION(BlueprintNativeEvent,Category="Action")
	void StopAction(AActor* Instigator);
	
	//给行为加上名字让我们直接去启动或停止不用对类进行引用
	UPROPERTY(EditDefaultsOnly,Category="Action")
	FName ActionName;

	virtual UWorld* GetWorld() const override;
};
