// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldUserWidget.h"

#include "Blueprint/WidgetLayoutLibrary.h"
#include "Kismet/GameplayStatics.h"

void UWorldUserWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	FVector2D ScreenPosition;
	//将关卡的位置投射到屏幕上，第一个参数是拥有投射到的屏幕的玩家
	//如果投射到屏幕范围内返回true

	if (IsValid(AttachedActor))
	{
		if(UGameplayStatics::ProjectWorldToScreen(GetOwningPlayer(),AttachedActor->GetActorLocation(), ScreenPosition))
		{
			//需要获得正确的缩放比例，ProjectWorldToScreen无法获得正确的缩放比例
			float Scale = UWidgetLayoutLibrary::GetViewportScale(this);
			ScreenPosition/=Scale;

			if (ParentSizeBox)
			{
				//将SizeBox渲染到正确的位置上
				ParentSizeBox->SetRenderTranslation(ScreenPosition);
			}
		}
	}
	else
	{
		RemoveFromParent();

		UE_LOG(LogTemp,Log,TEXT("AttachActor isn't valid"));
	}
}
