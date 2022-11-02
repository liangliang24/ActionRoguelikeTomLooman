// Fill out your copyright notice in the Description page of Project Settings.


#include "ActionEffect.h"
#include "ActionComponent.h"
void UActionEffect::ExecutePeriodcEffect_Implementation(AActor* Instigator)
{
	
}

UActionEffect::UActionEffect()
{
	bAutoStart = true;
}

void UActionEffect::StartAction_Implementation(AActor* Instigator)
{
	Super::StartAction_Implementation(Instigator);

	if (Duration > 0.0f)
	{
		FTimerDelegate Delegate;
		Delegate.BindUFunction(this,"StopAction",Instigator);

		GetWorld()->GetTimerManager().SetTimer(DurationHandle,Delegate,Duration,false);
	}

	if (Period > 0.0f)
	{
		FTimerDelegate Delegate;
		Delegate.BindUFunction(this,"ExecutePeriodcEffect",Instigator);

		GetWorld()->GetTimerManager().SetTimer(PeriodHandle,Delegate,Duration,true,0);
	}
}

void UActionEffect::StopAction_Implementation(AActor* Instigator)
{
	if (GetWorld()->GetTimerManager().GetTimerRemaining(PeriodHandle) < KINDA_SMALL_NUMBER)
	{
		ExecutePeriodcEffect(Instigator);
	}
	Super::StopAction_Implementation(Instigator);
	GetWorld()->GetTimerManager().ClearTimer(PeriodHandle);
	GetWorld()->GetTimerManager().ClearTimer(DurationHandle);

	UActionComponent* ActionComp = GetOwningComponent();
	if (ActionComp)
	{
		ActionComp->RemoveAction(this);
	}
}
