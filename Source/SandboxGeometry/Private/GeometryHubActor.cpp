// Fill out your copyright notice in the Description page of Project Settings.


#include "GeometryHubActor.h"

DEFINE_LOG_CATEGORY_STATIC(LogGeometryHub, All, All)

// Sets default values
AGeometryHubActor::AGeometryHubActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//InitialGenerationObjects();
}

// Called when the game starts or when spawned
void AGeometryHubActor::BeginPlay()
{
	Super::BeginPlay();
	UWorld* world = GetWorld();

	if (world != nullptr)
	{
		//SpawnObjectsFromGeometryPayload(world);
	}

	DoActorSpawn();
}

// Called every frame
void AGeometryHubActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UE_LOG(LogGeometryHub, Warning, TEXT("property pointer is valid %i is valid %i"), PropertyActor != nullptr, IsValid(PropertyActor));

	UE_LOG(LogGeometryHub, Error, TEXT("none property pointer is valid %i is valid %i"), NonePropertyActor != nullptr, IsValid(NonePropertyActor));
}

void AGeometryHubActor::SpawnObjectsFromGeometryPayload(UWorld* world)
{
	for (const FGeometryPayload payload : GeometryPayloads)
	{
		ABaseGeometryActor* baseActor = world->SpawnActorDeferred<ABaseGeometryActor>(payload.baseGeometryActor, payload.InitialTransform);

		if (baseActor)
		{
			baseActor->SetGeometryData(payload.geometryData);
			baseActor->OnColorChanged.AddDynamic(this, &AGeometryHubActor::OnColorChanged);
			baseActor->OnTimerFinished.AddUObject(this, &AGeometryHubActor::OnTimerFinished);
			baseActor->FinishSpawning(payload.InitialTransform);
		}
	}
}

void AGeometryHubActor::InitialGenerationObjects()
{
	int randomCounterObjects = 10;

	for (int i = 0; i < randomCounterObjects; i++)
	{
		const FLinearColor vec = FLinearColor::MakeRandomColor();

		float x = vec.R * 3000.0f + 300;
		float y = vec.G * 3000.0f + 400;
		float z = vec.B * 3000.0f + 500;

		const FTransform transform = FTransform(FRotator::ZeroRotator, FVector(x, y, z));
		
		FGeometryPayload geometryPayload;
		geometryPayload.baseGeometryActor = baseGeometryActor;
		geometryPayload.InitialTransform = transform;
		FGeometryData data; 
		data.Color = FLinearColor::MakeRandomColor();
		data.MoveType = FMath::RandBool() ? EMovementType::Sin : EMovementType::Static;
		geometryPayload.geometryData = data;


		GeometryPayloads.Push(geometryPayload);
	}
}

void AGeometryHubActor::OnColorChanged(const FLinearColor& color, const FString& name)
{
	//UE_LOG(LogGeometryHub, Warning, TEXT("Actor name: %s Color %s"), *name, *color.ToString());
}

void AGeometryHubActor::OnTimerFinished(AActor* actor)
{
	if (!actor)
	{
		return;
	}
	//UE_LOG(LogGeometryHub, Error, TEXT("Timer finished: %s"), *actor->GetName());

	ABaseGeometryActor* baseActor = Cast<ABaseGeometryActor>(actor);

	if (!baseActor) return;

	//UE_LOG(LogGeometryHub, Display, TEXT("Cast is success; amplitude: %s"), baseActor->GetGeometryData().Amplitude);

	baseActor->Destroy();
	//baseActor->SetLifeSpan(2.0);
}

void AGeometryHubActor::DoActorSpawn()
{
	if (!GetWorld()) 
	{
		return;
	}

	FTransform GeometryTransform = FTransform(FRotator::ZeroRotator, FVector(700.0f, 300.0f, 100.0f));
	NonePropertyActor = GetWorld()->SpawnActor<ABaseGeometryActor>(baseGeometryActor, GeometryTransform);

	GeometryTransform = FTransform(FRotator::ZeroRotator, FVector(700.0f, 600.0f, 100.0f));
	PropertyActor = GetWorld()->SpawnActor<ABaseGeometryActor>(baseGeometryActor, GeometryTransform);
}