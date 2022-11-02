// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttributeComponent.generated.h"

class UAttributeComponent;
//创建事件
//第一个参数是委托的名字,后面的参数自己设置
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnHealthChanged, AActor*, InstigatorActor, UAttributeComponent*, OwningComp, float, NewHeawlth, float, Delta);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCreditChanged, UAttributeComponent*, OwningComp,float,NewCredit,float,Delta );
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ACTIONROUGELIKE_API UAttributeComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAttributeComponent();

	UFUNCTION(BlueprintCallable,Category="Attribute")
	static UAttributeComponent* GetAttributes(AActor* FromActor); 

protected:
	
	UPROPERTY(Replicated,EditDefaultsOnly,BlueprintReadOnly,Category="Attributes")
	float Health;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Attributes")
	float Credit;
public:
	float GetCredit() const;
	UFUNCTION(BlueprintCallable)
	bool SetCredit(float Delta);

	float GetHealth() const
	{
		return Health;
	}
protected:
	UPROPERTY(Replicated,EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes")
	float HealthMax;
public:
	float GetHealthMax() const
	{
		return HealthMax;
	}
	

	UFUNCTION(BlueprintCallable)
	bool IsAlive()const;
	UPROPERTY(BlueprintAssignable)
	FOnHealthChanged OnHealthChanged;
	UPROPERTY(BlueprintAssignable)
	FOnCreditChanged OnCreditChanged;
	
	UFUNCTION(BlueprintCallable)
	bool ApplyHealthChange(float Delta,AActor* InstigatorActor,AActor* ContextObject);		
};
