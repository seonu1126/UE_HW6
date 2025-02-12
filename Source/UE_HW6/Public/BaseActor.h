// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseActor.generated.h"

UCLASS()
class UE_HW6_API ABaseActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	USceneComponent* SceneRoot;
	UStaticMeshComponent* StaticMeshComp;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
