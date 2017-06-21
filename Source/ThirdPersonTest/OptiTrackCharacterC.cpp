// Fill out your copyright notice in the Description page of Project Settings.

#include "OptiTrackCharacterC.h"


// Sets default values
AOptiTrackCharacterC::AOptiTrackCharacterC()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOptiTrackCharacterC::BeginPlay()
{
	Super::BeginPlay();
	poseableMesh = NewObject<UPoseableMeshComponent>(this);
	poseableMesh->RegisterComponent();
	//****** Stuck here : Cannot Convert USkeletalMeshComponent to USkeletalMesh
	//poseableMesh->SkeletalMesh = new USkeletalMesh(this->GetMesh());
	// calculate transforms
	//FRotator rotation = FRotator(0.0, 3.0, 0.0);
	//apply bone action
	//poseableMesh->SetBoneRotationByName(FName("hand_r"), rotation, EBoneSpaces::ComponentSpace);
}

// Called every frame
void AOptiTrackCharacterC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AOptiTrackCharacterC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

