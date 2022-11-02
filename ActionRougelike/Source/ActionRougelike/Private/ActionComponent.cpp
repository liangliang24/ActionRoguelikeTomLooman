// Fill out your copyright notice in the Description page of Project Settings.


#include "ActionComponent.h"


// Sets default values for this component's properties
UActionComponent::UActionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UActionComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UActionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FString DebugMsg = GetNameSafe(GetOwner()) + ":" + ActiveGameplayTags.ToStringSimple();
	GEngine->AddOnScreenDebugMessage(-1,0.0f,FColor::White,DebugMsg);
}

void UActionComponent::AddAction(AActor* Instigator,TSubclassOf<UAction> ActionClass)
{
	if (!ensure(ActionClass))
	{
		return ;
	}

	//第一个参数是拥有这个Object的物体；第二个参数是生成的物体
	UAction* NewAction = NewObject<UAction>(this,ActionClass);
	if (ensure(NewAction))
	{
		Actions.Add(NewAction);

		if (NewAction->bAutoStart&&ensure(NewAction->CanStart(Instigator)))
		{
			NewAction->StartAction(Instigator);
		}
	}
}

bool UActionComponent::StartActionByName(AActor* Instigator, FName ActionName)
{
	for (UAction* Action:Actions)
	{
		if (Action&&Action->ActionName==ActionName)
		{
			if (Action->CanStart(Instigator))
			{
				Action->SetIsRunSuccess(true);
				Action->StartAction(Instigator);
             	return true;
				
			}
			
		}
	}
	return false;
}

bool UActionComponent::StopActionByName(AActor* Instigator, FName ActionName)
{
	for (UAction* Action:Actions)
	{
		if (Action&&Action->ActionName==ActionName)
		{
			if (Action->GetIsRunSuccess())
			{
				Action->StopAction(Instigator);
				return true;
			}
			
		}
	}
	return false;
}

void UActionComponent::RemoveAction(UAction* Action)
{
	if (!ensure(Action&&!Action->GetIsRunSuccess()))
	{
		return;
	}

	Actions.Remove(Action);
}
