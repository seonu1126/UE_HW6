// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseActor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class UE_HW6_API AMovingPlatform : public ABaseActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	float MoveSpeed = 100;
	float MaxRange = 500;
	FVector StartLocation;
	FVector MovingVec = FVector(1, 0, 0);
	
};
