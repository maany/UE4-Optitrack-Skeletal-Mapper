// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "OptiTrackAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class THIRDPERSONTEST_API UOptiTrackAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	//properties of skeleton that need to be controlled
	UPROPERTY(BlueprintReadOnly, Category = "OptiTrack_Skeleton")
	FRotator mArmRotation = FRotator(0.0,20.0,0.0);

	
	
	
};
