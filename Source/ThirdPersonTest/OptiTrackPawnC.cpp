// Fill out your copyright notice in the Description page of Project Settings.

#include "OptiTrackPawnC.h"


// Sets default values
AOptiTrackPawnC::AOptiTrackPawnC()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AOptiTrackPawnC::SunshineTest()
{
}

// Called when the game starts or when spawned
void AOptiTrackPawnC::BeginPlay()
{
	Super::BeginPlay();
	//Get PoseableMesh of the component
	//UPoseableMeshComponent* poseableMesh = (UPoseableMeshComponent*)GetComponentByClass(UPoseableMeshComponent::StaticClass());
	//poseableMesh = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("OptiTrackPoseableMeshComponent"));
	poseableMesh = NewObject<UPoseableMeshComponent>(this);
	poseableMesh->RegisterComponent();
	poseableMesh->SkeletalMesh = this->skeletalMesh;
	poseableMesh->ToggleVisibility();
	//poseableMesh->SkeletalMesh = skeletalMesh;
	// calculate transforms
	yawCount++;
	if (yawCount > 90) {
		yawCount = 0;
	}
	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "OptiTrack")
	rotation = FRotator(0.0,yawCount,0.0);
	//apply bone action
	//poseableMesh->SetBoneRotationByName(FName("hand_r"), rotation, EBoneSpaces::ComponentSpace);
}

// Called every frame
void AOptiTrackPawnC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// calculate transforms
	yawCount++;
	if (yawCount > 90) {
		yawCount = 0;
	}
	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "OptiTrack")
	rotation = FRotator(0.0, yawCount, 0.0);
}

// Called to bind functionality to input
void AOptiTrackPawnC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

