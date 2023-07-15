// Copyright Epic Games, Inc. All Rights Reserved.

#include "Test_ProjectGameMode.h"
#include "Test_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATest_ProjectGameMode::ATest_ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
