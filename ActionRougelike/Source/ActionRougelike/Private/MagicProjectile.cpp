// Fill out your copyright notice in the Description page of Project Settings.


#include "MagicProjectile.h"

#include "ActionComponent.h"

#include "GameplayFunctionLibrary.h"
#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"

#include "Particles/ParticleSystemComponent.h"

// Sets default values
AMagicProjectile::AMagicProjectile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComp = CreateDefaultSubobject<USphereComponent>("SphereComp");
	//SphereComp->SetCollisionObjectType(ECC_WorldDynamic);
	SphereComp->SetCollisionProfileName("MagicProjectile");
	SphereComp->OnComponentBeginOverlap.AddDynamic(this,&AMagicProjectile::OnActorOverlap);
	RootComponent = SphereComp;

	EffectComp = CreateDefaultSubobject<UParticleSystemComponent>("EffectComp");
	EffectComp->SetupAttachment(SphereComp);

	MovementComp = CreateDefaultSubobject<UProjectileMovementComponent>("MovementComp");
	MovementComp->InitialSpeed = 10000.0f;
	//为真时，子弹会随着旋转匹配速度的方向
	MovementComp->bRotationFollowsVelocity = true;
	MovementComp->bInitialVelocityInLocalSpace = true;
	SphereComp->IgnoreActorWhenMoving(GetInstigator(), true);
	Damage = -20.0f;
}

void AMagicProjectile::OnActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
	DrawDebugSphere(GetWorld(), GetActorLocation(), 2.0f, 16, FColor::Red, false, 2.0f, 2, 2.0f);
	UGameplayStatics::PlayWorldCameraShake(this, Shake, GetActorLocation(), 100.0f, 500.0f);
	if (OtherActor&&OtherActor!=GetInstigator())
	{
		UActionComponent* ActionComp = Cast<UActionComponent>(OtherActor->GetComponentByClass(UActionComponent::StaticClass()));
		if (ActionComp&&ActionComp->ActiveGameplayTags.HasTag(ParryTag))
		{
			MovementComp->Velocity = -MovementComp->Velocity;

			SetInstigator(Cast<APawn>(OtherActor));
			return;
		}
		
	    /*//UE_LOG(LogTemp,Log,TEXT("Overlap"))
		//GetComponentByClass是一个迭代器，寻找第一个出现符合条件的我们指定的类
		UAttributeComponent* AttributeComp = Cast<UAttributeComponent>(OtherActor->GetComponentByClass(UAttributeComponent::StaticClass()));
		//确保AttributeComp不为空，比如立方体没有AttributeComp
		if (AttributeComp)
		{
			AttributeComp->ApplyHealthChange(Damage,GetInstigator(),OtherActor);
			//UE_LOG(LogTemp,Log,TEXT("Applyed"))
			
		}*/
		UGameplayFunctionLibrary::ApplyDirectionalDamage(OtherActor,GetInstigator(),Damage,SweepResult);
	    UGameplayStatics::SpawnEmitterAtLocation(this, ImpactVFX, GetActorLocation(), GetActorRotation(),false);
		UGameplayStatics::PlaySoundAtLocation(this, SoundBase, GetActorLocation(), GetActorRotation());
		if (ActionComp)
		{
			ActionComp->AddAction(GetInstigator(),BurningEffect);
		}
	    Destroy();

	}
}


// Called when the game starts or when spawned
void AMagicProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMagicProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

