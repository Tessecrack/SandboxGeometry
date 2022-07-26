// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SandboxPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SANDBOXGEOMETRY_API ASandboxPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected: 
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
private:
	UPROPERTY()
	TArray<AActor*> Pawns;

	int currentPawnIndex = 0;

	void ChangePawn();
};
