// Fill out your copyright notice in the Description page of Project Settings.


#include "HealPotion.h"
#include "AttributeComponent.h"

void AHealPotion::Interact_Implementation(APawn* InstigatorPawn)
{
	UAttributeComponent* AttributeComp = Cast<UAttributeComponent>(InstigatorPawn->GetComponentByClass(UAttributeComponent::StaticClass()));
	if (AttributeComp&&AttributeComp->SetCredit(-5.0f))
	{
		AttributeComp->ApplyHealthChange(20.0f,InstigatorPawn,InstigatorPawn);
		AttributeComp->SetCredit(-5.0f);
		HideAndCooldownPowerup();
	}
}

// Sets default values 
AHealPotion::AHealPotion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComp = CreateDefaultSubobject<USphereComponent>("SphereComp");
	RootComponent = SphereComp;
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>("MeshComp");
	MeshComp->SetupAttachment(SphereComp);

	RespawnName = 10.0f;
}

void AHealPotion::ShowPowerUp()
{
	SetPowerupState(true);
}

void AHealPotion::HideAndCooldownPowerup()
{
	SetPowerupState(false);

	GetWorldTimerManager().SetTimer(FTimerHandle_ShowPowerUp, this, &AHealPotion::ShowPowerUp, RespawnName);
}

void AHealPotion::SetPowerupState(bool IsActive)
{
	SetActorEnableCollision(IsActive);

	RootComponent->SetVisibility(IsActive, true);
}
