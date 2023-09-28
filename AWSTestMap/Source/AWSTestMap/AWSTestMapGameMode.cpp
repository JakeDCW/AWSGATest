// Copyright Epic Games, Inc. All Rights Reserved.

#include "AWSTestMapGameMode.h"
#include "AWSTestMapCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAWSTestMapGameMode::AAWSTestMapGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
