// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MyProjectGameMode.h"
#include "MyProjectPawn.h"
#include "MyProjectHud.h"

AMyProjectGameMode::AMyProjectGameMode()
{
	DefaultPawnClass = AMyProjectPawn::StaticClass();
	HUDClass = AMyProjectHud::StaticClass();
}
