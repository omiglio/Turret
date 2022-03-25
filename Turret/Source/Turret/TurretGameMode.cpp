// Copyright Epic Games, Inc. All Rights Reserved.

#include "TurretGameMode.h"
#include "TurretHUD.h"
#include "TurretCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATurretGameMode::ATurretGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATurretHUD::StaticClass();
}
