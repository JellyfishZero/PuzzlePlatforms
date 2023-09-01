// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MovingPlatform.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLEPLATFORMS_API AMovingPlatform : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:
	AMovingPlatform();

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basic Setting")
	int32 Speed = 10;

	virtual void Tick(float DeltaTime) override;
};
