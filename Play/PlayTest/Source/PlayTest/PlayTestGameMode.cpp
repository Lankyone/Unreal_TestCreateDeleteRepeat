// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "PlayTestGameMode.h"
#include "PlayTestHUD.h"
#include "PlayTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

APlayTestGameMode::APlayTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APlayTestHUD::StaticClass();
}
