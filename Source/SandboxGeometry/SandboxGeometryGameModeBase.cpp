// Copyright Epic Games, Inc. All Rights Reserved.


#include "SandboxGeometryGameModeBase.h"
#include "SandboxPawn.h"
#include "SandboxPlayerController.h"

ASandboxGeometryGameModeBase::ASandboxGeometryGameModeBase()
{
	DefaultPawnClass = ASandboxPawn::StaticClass();
	PlayerControllerClass = ASandboxPlayerController::StaticClass();
}

