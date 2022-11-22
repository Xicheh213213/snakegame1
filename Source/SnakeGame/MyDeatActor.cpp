// Fill out your copyright notice in the Description page of Project Settings.


#include "MyDeatActor.h"

// Sets default values
AMyDeatActor::AMyDeatActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyDeatActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyDeatActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

