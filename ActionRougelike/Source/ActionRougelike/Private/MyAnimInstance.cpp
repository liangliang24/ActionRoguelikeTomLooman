// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"

#include "ActionComponent.h"
#include "GameplayTagContainer.h"

void UMyAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	AActor* OwningActor = GetOwningActor();

	if (OwningActor)
	{
		ActionComp = Cast<UActionComponent>(OwningActor->GetComponentByClass(UActionComponent::StaticClass()));
	}
}

void UMyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	//检查一下当前是否为眩晕状态
	static FGameplayTag StunnedTag = FGameplayTag::RequestGameplayTag("Status.Stuned");

	if (ActionComp)
	{
		bIsStunned = ActionComp->ActiveGameplayTags.HasTag(StunnedTag);
	}
}
