// Copyright Epic Games, Inc. All Rights Reserved.

#include "RiddleMeThisGameMode.h"
#include "RiddleMeThisCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARiddleMeThisGameMode::ARiddleMeThisGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
