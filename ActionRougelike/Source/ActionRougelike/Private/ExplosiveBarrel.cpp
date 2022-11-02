// Fill out your copyright notice in the Description page of Project Settings.


#include "ExplosiveBarrel.h"

#include "AttributeComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AExplosiveBarrel::AExplosiveBarrel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComp");
	RootComponent = StaticMeshComp;
	StaticMeshComp->SetSimulatePhysics(true);
	RadialForceComp = CreateDefaultSubobject<URadialForceComponent>("RadialForceComp");
	RadialForceComp->SetupAttachment(StaticMeshComp);
	RadialForceComp->SetAutoActivate(false);
	RadialForceComp->ImpulseStrength = 2000.0f;
	//如果为真，冲量将忽略物体的质量，并始终导致固定的速度变化
	RadialForceComp->bImpulseVelChange = true;
	RadialForceComp->Radius = 700.0f;
	RadialForceComp->AddCollisionChannelToAffect(ECC_WorldDynamic);
	StaticMeshComp->OnComponentHit.AddDynamic(this,&AExplosiveBarrel::OnActorHit);
}

// Called when the game starts or when spawned
void AExplosiveBarrel::BeginPlay()
{
	Super::BeginPlay();
	
}

void AExplosiveBarrel::OnActorHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	FVector NormalImpulse, const FHitResult& Hit)
{
	RadialForceComp->FireImpulse();

	//第一个参数是类别名称，自己指定或者已有的类型名称;
	//第二个参数是赘述，Error或者Warning,Log等等;
	//第三个参数是我们需要记录或者打印的东西，需要用到TEXT宏。   
	//UE_LOG(LogTemp,Log,TEXT("FireImpulse"));
	//也可以像c语言中的printf那样输出
	//在GetNameSafe是把F字符串转换成预期的类型
	//UE_LOG(LogTemp,Log,TEXT("OtherActor:%s, at game time:%f"),*GetNameSafe(OtherActor),GetWorld()->TimeSeconds);

	if (OtherActor)
	{
		UAttributeComponent* AttributeComp = Cast<UAttributeComponent>(OtherActor->GetComponentByClass(UAttributeComponent::StaticClass()));
		if (AttributeComp)
		{
			AttributeComp->ApplyHealthChange(-50.0f,this,OtherActor);
		}
	}
	
	FString CombinedString = FString::Printf(TEXT("Hit at location:%s"),*Hit.ImpactPoint.ToString());
	//第一个参数是正在玩的关卡;
	//第二个参数是显示的位置;
	//第三个参数是要显示的字符串;
	//第四个参数是想要附加的Actor;
	//第五个参数是颜色;
	//第六个参数是显示的时间;
	//第七个参数是是否让字体有阴影;
	
	DrawDebugString(GetWorld(),Hit.ImpactPoint,CombinedString,nullptr,FColor::Green,2.0f,true);
}

// Called every frame
void AExplosiveBarrel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

