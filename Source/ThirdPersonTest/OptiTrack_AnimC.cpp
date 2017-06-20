// Fill out your copyright notice in the Description page of Project Settings.

#include "OptiTrack_AnimC.h"


// Sets default values
AOptiTrack_AnimC::AOptiTrack_AnimC()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOptiTrack_AnimC::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOptiTrack_AnimC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AOptiTrack_AnimC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

