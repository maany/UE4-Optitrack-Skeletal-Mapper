// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "OptiTrackCharacterManager.generated.h"

UCLASS()
class THIRDPERSONTEST_API AOptiTrackCharacterManager : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AOptiTrackCharacterManager();
	UPROPERTY(EditAnywhere)
	ACharacter* character;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	
	
};

class CustomAnimInstance : public UAnimInstance() {
	void EvaluateAnimation(FPoseContext& Output) {

	}
};
