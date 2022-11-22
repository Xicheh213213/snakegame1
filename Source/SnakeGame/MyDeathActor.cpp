// Fill out your copyright notice in the Description page of Project Settings.


#include "MyDeathActor.h"

// Sets default values
AMyDeathActor::AMyDeathActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMyDeathActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyDeathActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	CollideWall();
}

void AMyDeathActor::CollideWall()
{
	TArray<AActor*>CollectedActors;
	GetOverlappingActors(CollectedActors);
	for(int32 i = 0; i<CollectedActors.Num(); i++)
	{
		CollectedActors[i]->Destroy(true, true);
	}
}

