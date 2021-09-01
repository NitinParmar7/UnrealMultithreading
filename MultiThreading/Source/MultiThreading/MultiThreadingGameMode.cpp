// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiThreadingGameMode.h"
#include "MultiThreadingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiThreadingGameMode::AMultiThreadingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
