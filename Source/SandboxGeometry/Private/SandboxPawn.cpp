// Fill out your copyright notice in the Description page of Project Settings.


#include "SandboxPawn.h"
#include "Camera/CameraComponent.h"

DEFINE_LOG_CATEGORY_STATIC(LogSandboxPawn, All, All)

ASandboxPawn::ASandboxPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComponent");
	CameraComponent = CreateAbstractDefaultSubobject<UCameraComponent>("Camera");

	SetRootComponent(SceneComponent);
	StaticMeshComponent->SetupAttachment(GetRootComponent());
	CameraComponent->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void ASandboxPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASandboxPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!velocityVector.IsZero())
	{
		const FVector newLocation = GetActorLocation() + Velocity * DeltaTime * velocityVector;
		SetActorLocation(newLocation);
		velocityVector = FVector::ZeroVector;

		/*
		velocityVector *= DeltaTime;
		this->AddActorLocalOffset(velocityVector);
		*/
	}
}

// Called to bind functionality to input
void ASandboxPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	if (!PlayerInputComponent) return;
	PlayerInputComponent->BindAxis("MoveForward", this, &ASandboxPawn::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASandboxPawn::MoveRight);
}

void ASandboxPawn::MoveForward(float axisValue)
{
	//UE_LOG(LogSandboxPawn, Display, TEXT("Move forward: %f"), axisValue);
	velocityVector.X = axisValue * Velocity;
}

void ASandboxPawn::MoveRight(float axisValue)
{
	//UE_LOG(LogSandboxPawn, Display, TEXT("Move right: %f"), axisValue);
	velocityVector.Y = axisValue * Velocity;
}

void ASandboxPawn::PossessedBy(AController* newController)
{
	Super::PossessedBy(newController);
	if (!newController) return;
	UE_LOG(LogSandboxPawn, Error, TEXT("%s POSSESSED %s"), *GetName(), *newController->GetName());
}

void ASandboxPawn::UnPossessed()
{
	Super::UnPossessed();
	UE_LOG(LogSandboxPawn, Warning, TEXT("%s UNPOSSESSED"), *GetName());
}