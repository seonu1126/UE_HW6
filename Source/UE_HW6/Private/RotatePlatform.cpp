// Fill out your copyright notice in the Description page of Project Settings.


#include "RotatePlatform.h"

// Sets default values
ARotatePlatform::ARotatePlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/Resources/Props/Floor_400x400.Floor_400x400"));
	if (MeshAsset.Succeeded()) {
		StaticMeshComp->SetStaticMesh(MeshAsset.Object);
	}
	
	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("/Game/Resources/Materials/M_Metal_Gold.M_Metal_Gold"));
	if (MaterialAsset.Succeeded()) {
		StaticMeshComp->SetMaterial(0, MaterialAsset.Object);
	}


} 

// Called when the game starts or when spawned
void ARotatePlatform::BeginPlay()
{
	
	Super::BeginPlay();
	
}

// Called every frame
void ARotatePlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	//회전시키기
	FRotator Rotation(0, RotateSpeed * DeltaTime, 0);
	AddActorLocalRotation(Rotation);

}

