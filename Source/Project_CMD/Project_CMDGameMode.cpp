// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project_CMDGameMode.h"
#include "UObject/ConstructorHelpers.h"

AProject_CMDGameMode::AProject_CMDGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/PlayerCharacter/SamplePlayerBP"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
