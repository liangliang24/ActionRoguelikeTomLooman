// Fill out your copyright notice in the Description page of Project Settings.


#include "DashProjectile.h"

#include "Kismet/GameplayStatics.h"


ADashProjectile::ADashProjectile()
{
	TeleportDelay = 0.2f;
	DetonateDelay = 0.2f;
}


void ADashProjectile::Explode_Implementation()
{

	Super::Explode_Implementation();
	
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle_DelayedDetonate);

	UGameplayStatics::SpawnEmitterAtLocation(this,ImpactVFX,GetActorLocation(),GetActorRotation());

	EffectComp->DeactivateSystem();

	MovementComp->StopMovementImmediately();
	SetActorEnableCollision(false);

	FTimerHandle TimerHandle_DelayTeleport;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_DelayTeleport,this,&ADashProjectile::TeleportInstigator,TeleportDelay);
	
	
}

void ADashProjectile::TeleportInstigator()
{
	AActor* ActorInstigator = GetInstigator();
	if(ensure(ActorInstigator))
	{
		ActorInstigator->SetActorLocationAndRotation(GetActorLocation(),ActorInstigator->GetActorRotation(),false);
	}
	Destroy();
}

void ADashProjectile::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(TimerHandle_DelayedDetonate,this,&ADashProjectile::TeleportInstigator,DetonateDelay,false);
	
}


