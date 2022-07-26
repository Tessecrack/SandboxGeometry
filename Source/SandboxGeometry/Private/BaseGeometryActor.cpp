// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGeometryActor.h"

DEFINE_LOG_CATEGORY_STATIC(LogBaseGeometry, All, All)

// Sets default values
ABaseGeometryActor::ABaseGeometryActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SetRootComponent(BaseMesh);
}

// Called when the game starts or when spawned
void ABaseGeometryActor::BeginPlay()
{
	Super::BeginPlay();
	
	InitialLocation = GetActorLocation();

	UMaterialInstanceDynamic* dynMat = BaseMesh->CreateAndSetMaterialInstanceDynamic(0);

	if (dynMat)
	{
		dynMat->SetVectorParameterValue("Color", GeometryData.Color);
	}
	/*
	SetColor(GeometryData.Color);
	GetWorldTimerManager().SetTimer(TimerHandle, this, &ABaseGeometryActor::OnTimerFired, GeometryData.TimerRate, true);
	*/
}

void ABaseGeometryActor::EndPlay(const EEndPlayReason::Type endPlayReason)
{
	//UE_LOG(LogBaseGeometry, Error, TEXT("Actor denied: %s"), this->GetName());
	Super::EndPlay(endPlayReason);
}

// Called every frame
void ABaseGeometryActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	HandleMovement();
}

void ABaseGeometryActor::HandleMovement()
{
	switch (GeometryData.MoveType)
	{
		case EMovementType::Sin:
		{
			FVector currentLocation = GetActorLocation();
			if (GetWorld())
			{
				float time = GetWorld()->GetTimeSeconds();
				currentLocation.Z = InitialLocation.Z + GeometryData.Amplitude * FMath::Sin(GeometryData.Frequency * time);

				SetActorLocation(currentLocation);
			}
		}
		break;
		case EMovementType::Static:
		{
			break;
		}
		default: break;
	}
}

void ABaseGeometryActor::SetColor(const FLinearColor& color)
{
	if (!BaseMesh) 
	{
		return;
	}
	UMaterialInstanceDynamic* dynamicMat = BaseMesh->CreateAndSetMaterialInstanceDynamic(0);

	if (dynamicMat)
	{
		dynamicMat->SetVectorParameterValue("Color", color);
	}
}

void ABaseGeometryActor::OnTimerFired()
{
	if (++TimerCount <= MaxTimerCount)
	{
		const FLinearColor newColor = FLinearColor::MakeRandomColor();
		SetColor(newColor);
		OnColorChanged.Broadcast(newColor, GetName());
	}
	else
	{
		GetWorldTimerManager().ClearTimer(TimerHandle);
		OnTimerFinished.Broadcast(this);
	}
}