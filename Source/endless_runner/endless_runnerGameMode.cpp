// Copyright Epic Games, Inc. All Rights Reserved.

#include "endless_runnerGameMode.h"
#include "endless_runnerCharacter.h"
#include "UObject/ConstructorHelpers.h"

Aendless_runnerGameMode::Aendless_runnerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
