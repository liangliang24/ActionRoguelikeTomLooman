// Fill out your copyright notice in the Description page of Project Settings.


#include "CreditCoin.h"

#include "AttributeComponent.h"

void ACreditCoin::Interact_Implementation(APawn* InstigatorPawn)
{
	UAttributeComponent* AttributeComp = Cast<UAttributeComponent>(InstigatorPawn->GetComponentByClass(UAttributeComponent::StaticClass()));
	if (AttributeComp)
	{
		AttributeComp->SetCredit(20.0f);
		UE_LOG(LogTemp,Log,TEXT("Success"));
		Destroy();
	}
}
// Sets default values
ACreditCoin::ACreditCoin()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComp = CreateDefaultSubobject<USphereComponent>("SphereComp");
	RootComponent = SphereComp;
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>("MeshComp");
	MeshComp->SetupAttachment(SphereComp);
}

// Called when the game starts or when spawned
void ACreditCoin::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACreditCoin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

