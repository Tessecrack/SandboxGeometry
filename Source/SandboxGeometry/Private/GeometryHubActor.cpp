// Fill out your copyright notice in the Description page of Project Settings.


#include "GeometryHubActor.h"

// Sets default values
AGeometryHubActor::AGeometryHubActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGeometryHubActor::BeginPlay()
{
	Super::BeginPlay();
	UWorld* world = GetWorld();
	
	if (world != nullptr)
	{
		world->SpawnActor(this->baseGeometryActor);
	}
}

// Called every frame
void AGeometryHubActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

