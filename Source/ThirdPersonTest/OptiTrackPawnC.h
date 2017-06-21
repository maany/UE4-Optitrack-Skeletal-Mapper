// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "UObjectGlobals.h"
#include "Components/PoseableMeshComponent.h"
#include "Engine/SkeletalMesh.h"
#include "OptiTrackPawnC.generated.h"


UCLASS(Blueprintable)
class THIRDPERSONTEST_API AOptiTrackPawnC : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AOptiTrackPawnC();
	// The PoseableMesh Component
	UPoseableMeshComponent* poseableMesh;
	// SkeletalMesh
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OptiTrack")
	USkeletalMesh* skeletalMesh;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OptiTrack")
	FRotator rotation;

	UFUNCTION(BlueprintCallable, Category = "OptiTrack")
	void SunshineTest();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	float yawCount = 0;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
