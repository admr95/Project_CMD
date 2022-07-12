// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project_CMDGameMode.h"
#include "Project_CMDCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_CMDGameMode::AProject_CMDGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
