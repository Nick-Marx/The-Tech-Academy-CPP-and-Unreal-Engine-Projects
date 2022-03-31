// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerBlock.h"

// Sets default values
APlayerBlock::APlayerBlock()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//set pawn to be controlled by player 1
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	//dummy root component to attach things to
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	//allow player to be visible
	CubeComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionCube"));

	//attach to root component
	CubeComponent->SetupAttachment(RootComponent);

	
	

}

void APlayerBlock::MoveXAxis(float axisValue) {
	//move up or down
	currentVelocity.X = FMath::Clamp(axisValue, -1.0f, 1.0f) * moveSpeed;
}

void APlayerBlock::MoveYAxis(float axisValue) {
	//move up or down
	currentVelocity.Y = FMath::Clamp(axisValue, -1.0f, 1.0f) * moveSpeed;
}

// Called when the game starts or when spawned
void APlayerBlock::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerBlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Player move controls
	if (!currentVelocity.IsZero()) {
		FVector newLocation = GetActorLocation() + (currentVelocity * DeltaTime);
		SetActorLocation(newLocation);
	}
	
}

// Called to bind functionality to input
void APlayerBlock::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//check every frame for movement
	InputComponent->BindAxis("MoveX", this, &APlayerBlock::MoveXAxis);
	InputComponent->BindAxis("MoveY", this, &APlayerBlock::MoveYAxis);
}

