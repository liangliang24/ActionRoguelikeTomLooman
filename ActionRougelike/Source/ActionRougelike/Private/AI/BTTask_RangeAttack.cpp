// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTTask_RangeAttack.h"

#include "AIController.h"
#include "AttributeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

EBTNodeResult::Type UBTTask_RangeAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* MyAIController = OwnerComp.GetAIOwner();
	if(ensure(MyAIController))
	{
		ACharacter* MyAICharacter = MyAIController->GetCharacter();
		if(ensure(MyAICharacter))
		{
			FVector HandLocation = MyAICharacter->GetMesh()->GetSocketLocation("Muzzle_01");
			AActor* TargetActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(AttackedActor.SelectedKeyName));
			if (TargetActor == nullptr)
			{
				return EBTNodeResult::Failed;
			}
			if (!UAttributeComponent::GetAttributes(TargetActor)->IsAlive())
			{
				return EBTNodeResult::Failed;
			}
			FRotator FireRotation = (TargetActor->GetActorLocation() - HandLocation).Rotation();
			FireRotation.Pitch += FMath::RandRange(-5,5);
			FireRotation.Yaw += FMath::RandRange(-5,5);
			FireRotation.Roll += FMath::RandRange(-5,5); 
			FTransform SpawnTM = FTransform(FireRotation, HandLocation);
			FActorSpawnParameters SpawnParameters;
			SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			SpawnParameters.Instigator = MyAIController->GetPawn();
			AActor* Projectile = GetWorld()->SpawnActor<AActor>(ProjectileClass, SpawnTM, SpawnParameters);
			return Projectile ? EBTNodeResult::Succeeded : EBTNodeResult::Failed;
		}
		else
		{
			return EBTNodeResult::Failed;
		}
	}
	else
	{
		return EBTNodeResult::Failed;
	}

}
