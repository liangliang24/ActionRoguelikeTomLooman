// Fill out your copyright notice in the Description page of Project Settings.


#include "Action_ProjectAttack.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

UAction_ProjectAttack::UAction_ProjectAttack()
{
	AttackDelay = 0.17f;
	HandSocketName = "Muzzle_01";
}

void UAction_ProjectAttack::StartAction_Implementation(AActor* InstigatorCharacter)
{
	ACharacter* MyCharacter = Cast<ACharacter>(InstigatorCharacter);
	if (MyCharacter)
	{
		//因为这个函数并不在uobject中，所以我们要调用角色的对应函数
		MyCharacter->PlayAnimMontage(AttackAnim);

		FTimerHandle FTimerHandle_AttackDelay;
		FTimerDelegate Delegate_AttackDelay;
		Delegate_AttackDelay.BindUFunction(this,"AttackDelay_Elasped",MyCharacter);
		//因为这一个是有参数的，为了传入我们的参数所以不能用原本的定时器
		GetWorld()->GetTimerManager().SetTimer(FTimerHandle_AttackDelay,Delegate_AttackDelay,AttackDelay,false);
	}
}
//这里重写了攻击的行为，并且更改必要的地方。除了普通的更改之外，需要注意调用组件和getworld
void UAction_ProjectAttack::AttackDelay_Elasped(ACharacter* Instigator)
{
	Super::StartAction_Implementation(Instigator);

	if (ensure(ProjectileClass))
	{
		FVector HandLocation = Instigator->GetMesh()->GetSocketLocation("Muzzle_01");
		UGameplayStatics::SpawnEmitterAtLocation(this, AttackParticle, HandLocation, Instigator->GetControlRotation(),false);
		
		FTransform SpawnTM = FTransform(Instigator->GetControlRotation(), HandLocation);
		FActorSpawnParameters SpawnParams;
		
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		SpawnParams.Instigator = Instigator;
		FHitResult Hit;
		//GetPawnViewLocation是Pawn类中的方法，我们在PlayerCharacter中重写了这一方法，因为传入时候是传入PlayerCharacter，所以会调用PlayerCharacter中的类，这是向下造型的一种
		FVector Start = Instigator->GetPawnViewLocation();
		FVector End = Start + 20000.0f * Instigator->GetControlRotation().Vector();
		FCollisionQueryParams QueryParams;
		QueryParams.AddIgnoredActor(Instigator);
		//为了确保GetWorld可以正确执行，我们需要重写它，以便于让我们有访问蓝图的权力
		if(GetWorld()->LineTraceSingleByChannel(Hit,Start,End,ECollisionChannel::ECC_Visibility,QueryParams))
		{
			FRotator ShootTo = (Hit.ImpactPoint-HandLocation).Rotation();
			SpawnTM = FTransform(ShootTo,HandLocation);
		}
		GetWorld()->SpawnActor<AActor>(ProjectileClass, SpawnTM, SpawnParams);
	}
	FTimerHandle FTimerHandle_StopAttackDelay;
	FTimerDelegate Delegate_StopAttackDelay;
	Delegate_StopAttackDelay.BindUFunction(this,"StopAction",Instigator);
	//因为这一个是有参数的，为了传入我们的参数所以不能用原本的定时器
	GetWorld()->GetTimerManager().SetTimer(FTimerHandle_StopAttackDelay,Delegate_StopAttackDelay,1.06,false,1.06);
	//StopAction(Instigator);
}


