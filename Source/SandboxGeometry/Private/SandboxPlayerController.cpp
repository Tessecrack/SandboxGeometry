// Fill out your copyright notice in the Description page of Project Settings.


#include "SandboxPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "SandboxPawn.h"

DEFINE_LOG_CATEGORY_STATIC(LogSandboxPlayerController, All, All)

void ASandboxPlayerController::BeginPlay()
{
	Super::BeginPlay();

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASandboxPawn::StaticClass(), Pawns);
}

void ASandboxPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	if (!InputComponent) return;
	InputComponent->BindAction("ChangePawn", IE_Pressed, this, &ASandboxPlayerController::ChangePawn);
}

void ASandboxPlayerController::ChangePawn()
{
	if (Pawns.Num() <= 1) return;

	ASandboxPawn* currentPawn = Cast<ASandboxPawn>(Pawns[currentPawnIndex]);

	currentPawnIndex = (currentPawnIndex + 1) % Pawns.Num();

	if (!currentPawn) return;

	UE_LOG(LogSandboxPlayerController, Error, TEXT("Change pawn"));

	Possess(currentPawn);
}