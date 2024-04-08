// Fill out your copyright notice in the Description page of Project Settings.

#include "ATestActor.h"

// Sets default values
AATestActor::AATestActor()
{
  // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
  PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AATestActor::BeginPlay()
{
  Super::BeginPlay();
  num = MyVector.Z;
  SetActorLocation(FVector(0, 0, 100));
}

// Called every frame
void AATestActor::Tick(float DeltaTime)
{
  Super::Tick(DeltaTime);
}
