// Fill out your copyright notice in the Description page of Project Settings.

#include "OptiTrackCharacterManager.h"


// Sets default values
AOptiTrackCharacterManager::AOptiTrackCharacterManager()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOptiTrackCharacterManager::BeginPlay()
{
	Super::BeginPlay();
	USkeletalMeshComponent* mesh = character->GetMesh();
	//UAnimInstance* animInstance = mesh->getAnimInstance();
	//mesh->EvaluateAnimation
	
}

// Called every frame
void AOptiTrackCharacterManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AOptiTrackCharacterManager::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
}


