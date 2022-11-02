// Fill out your copyright notice in the Description page of Project Settings.


#include "TargetDummy.h"

// Sets default values
ATargetDummy::ATargetDummy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>("MeshComp");
	RootComponent = MeshComp;

	AttributeComp = CreateDefaultSubobject<UAttributeComponent>("AttributeComp");
	AttributeComp->OnHealthChanged.AddDynamic(this,&ATargetDummy::OnHealchChanged);
}

// Called when the game starts or when spawned
void ATargetDummy::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATargetDummy::OnHealchChanged(AActor* InstigatorActor, UAttributeComponent* OwningComp, float NewHeawlth,
	float Delta)
{
	UE_LOG(LogTemp,Log,TEXT("Access"));
	if (Delta<0.0f)
	{
		UE_LOG(LogTemp,Log,TEXT("Access1"));
		MeshComp->SetScalarParameterValueOnMaterials("TimeToHit", GetWorld()->TimeSeconds);
	}
	
}

// Called every frame
void ATargetDummy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

