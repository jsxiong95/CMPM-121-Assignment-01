// Fill out your copyright notice in the Description page of Project Settings.


#include "StatMesh.h"

// Sets default values
AStatMesh::AStatMesh()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SuperMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MY MESH"));
}

// Called when the game starts or when spawned
void AStatMesh::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStatMesh::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

