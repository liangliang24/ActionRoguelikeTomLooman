// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WorldUserWidget.h"
#include "Components/ActorComponent.h"
#include "InteractionComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ACTIONROUGELIKE_API UInteractionComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	void PrimaryInteract();
	
	// Sets default values for this component's properties
	UInteractionComponent();

protected:
	//Unreliable - 只会发送一次，不管服务器有没有收到
	//Reliable - 会一遍又一遍地发送，直到确保服务器收到为止
	UFUNCTION(Server,Reliable)
	void ServerInteract(AActor* InFocus);
	
	void FindBestInteractable();
	
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY()
	AActor* FocusedActor;

	UPROPERTY(EditDefaultsOnly,Category="UI")
	TSubclassOf<UWorldUserWidget> DefaultWidgetClass;

	UPROPERTY()
	UWorldUserWidget* DefaultWidgetInstance;
	
	
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};
