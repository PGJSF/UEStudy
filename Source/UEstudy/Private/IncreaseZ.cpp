// Fill out your copyright notice in the Description page of Project Settings.

#include "IncreaseZ.h"

// Sets default values
AIncreaseZ::AIncreaseZ()
{
  // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
  PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AIncreaseZ::BeginPlay()
{
  Super::BeginPlay();

  if (GEngine)
  {
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("Hello"));
  }
}

// Called every frame
void AIncreaseZ::Tick(float DeltaTime)
{
  Super::Tick(DeltaTime);
}
