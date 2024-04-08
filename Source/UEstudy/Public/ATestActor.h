// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

// generated
#include "ATestActor.generated.h"

UCLASS()
class UESTUDY_API AATestActor : public AActor
{
  GENERATED_BODY()

 public:
  // Sets default values for this actor's properties
  AATestActor();

  UPROPERTY(EditAnywhere)
  FVector MyVector = FVector(0.0, 0.0, 0.0);

  UPROPERTY(EditAnywhere)
  float num = 3.14;

 protected:
  // Called when the game starts or when spawned
  virtual void BeginPlay() override;

 public:
  // Called every frame
  virtual void Tick(float DeltaTime) override;
};
