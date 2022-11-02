// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayInterface.h"
#include "GameFramework/Actor.h"
#include "ItemChest.generated.h"

UCLASS()
class ACTIONROUGELIKE_API AItemChest : public AActor, public IGameplayInterface
{
	GENERATED_BODY()
	//这个是实现接口的一个语法（名称_Implementation）,但是这个并不是接口的一部分
	//可以这么使用是因为前面的UFUNCTION(BlueprintNativeEvent)
	void Interact_Implementation(APawn* InstigatorPawn) override;

	void OnActorLoaded_Implementation() override;
public:	
	// Sets default values for this actor's properties
	AItemChest();

protected:

	UPROPERTY(EditAnywhere)
	float TargetPitch;

	//只有标记了Replicated变量才可以被复制否则会报错
	//ReplicatedUsing是可以把这个变量绑定到另一个变量,但是被绑定的函数只会自动在玩家客户端本地触发，而不会在服务端上自动触发
	UPROPERTY(BlueprintReadOnly,SaveGame)
	bool bLidOpened;
	
	
	
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* BaseMesh;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	UStaticMeshComponent* LidMesh;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
