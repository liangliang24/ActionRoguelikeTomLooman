// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerState.h"

void AMyPlayerState::LoadPlayerState_Implementation(UMySaveGame* SaveObject)
{
	if (SaveObject)
	{
		Credits = SaveObject->Credits;
	}
}

void AMyPlayerState::SavePlayerState_Implementation(UMySaveGame* SaveObject)
{
	if (SaveObject)
	{
		SaveObject->Credits = Credits;
	}
}



float AMyPlayerState::GetCredits()
{
	return Credits;
}
