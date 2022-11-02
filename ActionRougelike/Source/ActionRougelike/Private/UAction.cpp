// Fill out your copyright notice in the Description page of Project Settings.


#include "UAction.h"

#include "ActionComponent.h"


void UAction::StartAction_Implementation(AActor* Instigator)
{
	UE_LOG(LogTemp,Log,TEXT("Running:%s"),*GetNameSafe(this));
	isRunSuccess = true;
	//因为动作可以是别人触发的，所以我们需要标记它的动作组件而不是它本身
	UActionComponent* ActionComp = GetOwningComponent();

	ActionComp->ActiveGameplayTags.AppendTags(GrantTags);
	
}

void UAction::StopAction_Implementation(AActor* Instigator)
{
	UE_LOG(LogTemp,Log,TEXT("Running:%s"),*GetNameSafe(this));
	//ensureAlways(isRunSuccess);
	//因为动作可以是别人触发的，所以我们需要标记它的动作组件而不是它本身
	UActionComponent* ActionComp = GetOwningComponent();

	ActionComp->ActiveGameplayTags.RemoveTags(GrantTags);
	isRunSuccess = false;
}


UActionComponent* UAction::GetOwningComponent() const
{
	return Cast<UActionComponent>(GetOuter());
}

void UAction::SetIsRunSuccess(bool bIsRunSuccess)
{
	isRunSuccess = bIsRunSuccess;
}

bool UAction::GetIsRunSuccess() const
{
	return isRunSuccess;
}

bool UAction::CanStart_Implementation(AActor* Instigator)
{
	if (GetIsRunSuccess())
	{
		return false;
	}
	UActionComponent* ActionComp = GetOwningComponent();

	return !ActionComp->ActiveGameplayTags.HasAny(BlockTags);
}

UWorld* UAction::GetWorld() const
{
	UActorComponent* ActorComp = Cast<UActorComponent>(GetOuter());
	if (ActorComp)
	{
		return ActorComp->GetWorld();
	}
	return nullptr;
}
