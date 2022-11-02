// Fill out your copyright notice in the Description page of Project Settings.


#include "AttributeComponent.h"

#include "MyGameModeBase.h"
#include "Net/UnrealNetwork.h"

TAutoConsoleVariable<float> CVarDamageMultiplier(TEXT("su.DamageMultiplier"),1.0f,TEXT("Globle Damage Modifier for Attribute Component."),ECVF_Cheat);

// Sets default values for this component's properties
UAttributeComponent::UAttributeComponent()
{
	Health = 100.0f;
	HealthMax = 100.0f;
	Credit = 0.0f;

	SetIsReplicatedByDefault(true);
}

UAttributeComponent* UAttributeComponent::GetAttributes(AActor* FromActor)
{
	if (FromActor)
	{
		return Cast<UAttributeComponent>(FromActor->GetComponentByClass(UAttributeComponent::StaticClass()));
	}
	return nullptr;
}

float UAttributeComponent::GetCredit() const
{
	return Credit;
}

bool UAttributeComponent::SetCredit(float Delta)
{
	Credit += Delta;
	if (Credit  < 0)
	{
		Credit -= Delta;return false;
		
	}

		OnCreditChanged.Broadcast(this,Credit,Delta);
		return true;

	

}



bool UAttributeComponent::IsAlive() const
{
	return Health > 0;
}

bool UAttributeComponent::ApplyHealthChange(float Delta,AActor* InstigatorActor,AActor* ContextObject)
{
	if (Delta < 0.0f)
	{
		float DamageMultiplier = CVarDamageMultiplier.GetValueOnGameThread();

		Delta*=DamageMultiplier;
	}
	if (!ContextObject->CanBeDamaged()&&Delta<0)
	{
		return false;
	}
	if (Health<=0)
	{
		
		return false;
	}
	else
	{
		Health+=Delta;
		if (Health<=0)
		{
			//获得服务器中当前关卡的游戏模式
            AMyGameModeBase* GM = GetWorld()->GetAuthGameMode<AMyGameModeBase>();
			if (GM)
			{
				GM->OnActorKill(ContextObject,InstigatorActor);
			}
		}
		if (Health>HealthMax)
		{
			Health = HealthMax;
		}
		OnHealthChanged.Broadcast(InstigatorActor,this,Health,Delta);
		//UE_LOG(LogTemp,Log,TEXT("Applying"));
		return true;
	}
}

void UAttributeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UAttributeComponent,Health);
	DOREPLIFETIME(UAttributeComponent,HealthMax);

	//加上条件的复制，这里条件COND_OwnerOnly是只有主人才可以知道它的变化，COND_InitialOnly是只在第一次发送
	//DOREPLIFETIME_CONDITION(UAttributeComponent,HealthMax,COND_OwnerOnly);
}

