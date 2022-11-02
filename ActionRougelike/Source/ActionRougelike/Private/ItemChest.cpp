// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemChest.h"

#include "Net/UnrealNetwork.h"

void AItemChest::Interact_Implementation(APawn* InstigatorPawn)
{

	bLidOpened = !bLidOpened;
	float CurrentPitch = bLidOpened?TargetPitch:0.0f;
	//设置了物体的相对旋转，相对于所连接的物体
	LidMesh->SetRelativeRotation(FRotator(CurrentPitch, 0, 0));
}

void AItemChest::OnActorLoaded_Implementation()
{
	float CurrentPitch = bLidOpened?TargetPitch:0.0f;
	//设置了物体的相对旋转，相对于所连接的物体
	LidMesh->SetRelativeRotation(FRotator(CurrentPitch, 0, 0));

}

// Sets default values
AItemChest::AItemChest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>("BaseMesh");
	RootComponent = BaseMesh;

	LidMesh = CreateDefaultSubobject<UStaticMeshComponent>("LidMesh");
	LidMesh->SetupAttachment(BaseMesh);

	bLidOpened = false;
}

// Called when the game starts or when spawned
void AItemChest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItemChest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}




