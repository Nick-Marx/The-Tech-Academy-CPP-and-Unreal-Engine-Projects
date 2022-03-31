// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BoxMove.h"
#include "PlayerBlock.generated.h"

UCLASS()
class TTA_GSA_API APlayerBlock : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerBlock();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//visible property
	UPROPERTY(EditAnywhere)
		class USceneComponent* CubeComponent;

	//move speed property
	UPROPERTY(EditAnywhere)
		float moveSpeed = 100.0f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//input functions
	void MoveXAxis(float axisValue);
	void MoveYAxis(float axisValue);

	//input variable
	FVector currentVelocity;

};
