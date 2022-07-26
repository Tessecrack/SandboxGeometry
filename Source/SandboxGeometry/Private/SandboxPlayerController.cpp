// Fill out your copyright notice in the Description page of Project Settings.


#include "SandboxPlayerController.h"

DEFINE_LOG_CATEGORY_STATIC(LogSandboxPlayerController, All, All)

void ASandboxPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("ChangePawn", IE_Pressed, this, &ASandboxPlayerController::ChangePawn);
}

void ASandboxPlayerController::ChangePawn()
{
	UE_LOG(LogSandboxPlayerController, Error, TEXT("Change pawn"));
}