// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractionComponent.h"
#include "GameplayInterface.h"


// Sets default values for this component's properties
UInteractionComponent::UInteractionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}




// Called when the game starts
void UInteractionComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInteractionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	APawn* MyPawn = Cast<APawn>(GetOwner());
	if (MyPawn->IsLocallyControlled())
	{
		FindBestInteractable();
	}
	
	
	// ...
}

void UInteractionComponent::FindBestInteractable()
{
	//FHitResult Hit;
	FCollisionObjectQueryParams ObjectQueryParams;
	//添加碰撞查询的类型
	ObjectQueryParams.AddObjectTypesToQuery(ECC_WorldDynamic);

	AActor* MyOwner = GetOwner();
	FVector Start,End;
	FVector EyeLocation;
	FRotator EyeRotation;
	//获取角色的眼睛作为出发点
	//在控制器控制角色的时候将会把摄像头看向的地方作为方向
	MyOwner->GetActorEyesViewPoint(EyeLocation, EyeRotation);

	Start = EyeLocation;
	End = Start + 1000.0f * EyeRotation.Vector();
	//从关卡中的某一个点到另一个点查询两个点之间是否有可供碰撞的物体，这里是通过对象类型寻找
	//第一个参数是命中的结果,第二和第三个参数分别是开始的点和结束的点
	//第四个参数是碰撞查询对象的参数
	//GetWorld()->LineTraceSingleByObjectType(Hit, Start, End, ObjectQueryParams);

	TArray<FHitResult> Hits;
	FCollisionShape Shape;
	Shape.SetSphere(30.0f);
	//这个函数当遇到第一个碰撞的物体的时候就会停下，然后收集所有的重叠部分
	//前三个参数和线性查询一样
	//第四个参数是球体的旋转，但是查询中的旋转没有意义所以设置为空旋转
	//第五个是碰撞检测的球体的形状，可以是盒子，圆柱体或者球体
	GetWorld()->SweepMultiByObjectType(Hits, Start, End, FQuat::Identity, ObjectQueryParams, Shape);

	FocusedActor = nullptr;
	for (FHitResult Hit:Hits)
	{
		AActor* HitActor = Hit.GetActor();

		if(HitActor)
		{
			//检查碰撞的物体是不是可交互的
			if (HitActor->Implements<UGameplayInterface>())
			{
				FocusedActor = HitActor;
				//第一个参数是当前的关卡，第二个参数是击中的点，第三个参数是半径
				//第四个参数是段，就是绘制线的数量，第六个参数是持续事件
				//DrawDebugSphere(GetWorld(), Hit.ImpactPoint, 30.0f, 32, FColor::Red, false, 2.0f);
				break;
			}
		}
	}

	if (FocusedActor)
	{
		//
		if (DefaultWidgetInstance == nullptr&&ensure(DefaultWidgetClass))
		{
			UE_LOG(LogTemp,Log,TEXT("aaaa"));
			DefaultWidgetInstance = CreateWidget<UWorldUserWidget>(GetWorld(),DefaultWidgetClass);
			
		}

		if (DefaultWidgetInstance)
		{
			DefaultWidgetInstance->AttachedActor = FocusedActor;

			if (!DefaultWidgetInstance->IsInViewport())
			{
				DefaultWidgetInstance->AddToViewport();
			}
		}
		
	}
	else
	 {
		 if (DefaultWidgetInstance)
		 {
			 DefaultWidgetInstance->RemoveFromParent();
		 }
	    
	 }
	
	/*AActor* HitActor = Hit.GetActor();

	if(HitActor)
	{
		//检查碰撞的物体是不是可交互的
		if (HitActor->Implements<UGameplayInterface>())
		{
			APawn* MyPawn = Cast<APawn>(MyOwner);
			//执行交互的函数，Execute_+接口函数名
			//第一个参数是被调用的Actor，后面的参数是交互接口的参数列表
			IGameplayInterface::Execute_Interact(HitActor, MyPawn);
			
			
		}
	}*/

	//DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 2.0f, 0.0f, 2.0f);
}

void UInteractionComponent::PrimaryInteract()
{
	ServerInteract(FocusedActor);
}


void UInteractionComponent::ServerInteract_Implementation(AActor* Infocus)
{
	if (Infocus == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1,1.0f,FColor::Red,"No Focus Actor to interact");
		return ;
	}

	
	
	APawn* MyPawn = Cast<APawn>(GetOwner());
	//执行交互的函数，Execute_+接口函数名
	//第一个参数是被调用的Actor，后面的参数是交互接口的参数列表
	IGameplayInterface::Execute_Interact(Infocus, MyPawn);
}