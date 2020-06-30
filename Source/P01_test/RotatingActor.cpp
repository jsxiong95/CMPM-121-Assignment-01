// Fill out your copyright notice in the Description page of Project Settings.


#include "RotatingActor.h"

// Sets default values
ARotatingActor::ARotatingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	XValue = 0.f;
	YValue = 0.f;
	ZValue = 0.f;

}

// Called when the game starts or when spawned
void ARotatingActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARotatingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FQuat QuatRotation = FQuat(FRotator(XValue, YValue, ZValue));
	AddActorLocalRotation(QuatRotation, false, 0, ETeleportType::None);
}

