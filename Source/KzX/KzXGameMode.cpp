// Copyright Epic Games, Inc. All Rights Reserved.

#include "KzXGameMode.h"
#include "KzXCharacter.h"
#include "UObject/ConstructorHelpers.h"

AKzXGameMode::AKzXGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
