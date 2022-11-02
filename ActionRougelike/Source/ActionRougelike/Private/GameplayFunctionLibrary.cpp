// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayFunctionLibrary.h"

#include "AttributeComponent.h"

bool UGameplayFunctionLibrary::ApplyDamage(AActor* TargetActor, AActor* DamageCauser, float DamageAmount)
{
	UAttributeComponent* AttributeComp = Cast<UAttributeComponent>(TargetActor->GetComponentByClass(UAttributeComponent::StaticClass()));
	if (AttributeComp)
	{
		return AttributeComp->ApplyHealthChange(DamageAmount,DamageCauser,TargetActor);
	}
	return false;
}

bool UGameplayFunctionLibrary::ApplyDirectionalDamage(AActor* TargetActor, AActor* DamageCauser, float DamageAmount,
	const FHitResult& HitResult)
{
	if (ApplyDamage(TargetActor,DamageCauser,DamageAmount))
	{
		UPrimitiveComponent* HitComp = HitResult.GetComponent();
		if (HitComp&&HitComp->IsSimulatingPhysics(HitResult.BoneName))
		{
			HitComp->AddImpulseAtLocation(-HitResult.ImpactNormal*300000.0f,HitResult.ImpactPoint,HitResult.BoneName);
		}
		return true;
	}
	return false;
}
