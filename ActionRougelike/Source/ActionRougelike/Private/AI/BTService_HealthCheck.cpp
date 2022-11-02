// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTService_HealthCheck.h"

#include "BehaviorTree/BlackboardComponent.h"

UBTService_HealthCheck::UBTService_HealthCheck()
{
	bHeal = false;
}

void UBTService_HealthCheck::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();

	if (ensure(BlackboardComp))
	{
		float Health = BlackboardComp->GetValueAsFloat(HealthName.SelectedKeyName);

		float LowHealth = BlackboardComp->GetValueAsFloat(LowHealthName.SelectedKeyName);
		
		
		if (Health <= LowHealth)
		{
			bHeal = true;
		}
		else if (Health > LowHealth&&bHeal == true)
		{
			if (Health >= 80.0f)
			{
				bHeal = false;
			}
		}

		BlackboardComp->SetValueAsBool(bGoHeal.SelectedKeyName,bHeal);
	}
}
