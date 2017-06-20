// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "OptiTrack_AnimC.generated.h"

UCLASS()
class THIRDPERSONTEST_API AOptiTrack_AnimC : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AOptiTrack_AnimC();
	//Set Variables of the bones that are to be controlled
	UPROPERTY(BlueprintReadOnly, Category = "OptiTrack_Skeleton")
	FRotator mArmRotation;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
