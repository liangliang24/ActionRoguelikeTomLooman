// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTTask_HealSelf.h"

#include "AIController.h"
#include "AttributeComponent.h"
#include "GameFramework/Character.h"

EBTNodeResult::Type UBTTask_HealSelf::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	AAIController* MyAIController = OwnerComp.GetAIOwner();

	if (MyAIController)
	{
		ACharacter* OwningAI = MyAIController->GetCharacter();
		if (OwningAI)
		{
			UAttributeComponent* AttributeComp = Cast<UAttributeComponent>(OwningAI->GetComponentByClass(UAttributeComponent::StaticClass()));
			if (AttributeComp)
			{
				AttributeComp->ApplyHealthChange(AttributeComp->GetHealthMax(),OwningAI,OwningAI);
				return EBTNodeResult::Succeeded;
			}
		}
		
	}
	return EBTNodeResult::Failed;
}
