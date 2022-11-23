// Fill out your copyright notice in the Description page of Project Settings.


#include "Food.h"
#include "SnakeBase.h"
// Sets default values
AFood::AFood()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AFood::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AFood::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFood::Interact(AActor* Interactor, bool bIsHead)
{
	if (bIsHead)
	{
		auto Snake = Cast<ASnakeBase>(Interactor);
		if (IsValid(Snake))
		{
			Snake->AddSnakeElement();
			this->RespawnFood();
			score = score + 100;
			sec = 30;
		}
	}
}

void AFood::RespawnFood()
{
	FVector2D calculatedCords = FVector2D(FMath::RandRange(startCoords.X, endCoords.X), FMath::RandRange(startCoords.Y, endCoords.Y));
	this->SetActorLocation(FVector(calculatedCords.X, calculatedCords.Y, GetActorLocation().Z));
}