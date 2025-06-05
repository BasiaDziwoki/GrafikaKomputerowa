// Fill out your copyright notice in the Description page of Project Settings.


#include "Turret.h"
#include <Kismet/GameplayStatics.h>
#include "PlayerCharacter.h"

// Sets default values
ATurret::ATurret()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATurret::BeginPlay()
{
	Super::BeginPlay();
	Cube = GetCubeComp();
	Laser = GetLaserComp();
	Capsule = GetCapsuleComp();
	TurretLeft = GetTurretLeftComp();
	TurretRight = GetTurretRightComp();

	TurretLeftPosition = GetTurretLeftPositionTimeline();
	TurretRightPosition = GetTurretRightPositionTimeline();

	
}

void ATurret::AnyDamage()
{
	TurretLeftPosition->Play();
	float PositionLeft = TurretLeftPosition->GetPlaybackPosition();
	TurretLeft->SetRelativeLocation(FVector(PositionLeft, 1, 1));
	TurretRightPosition->Play();
	float PositionRight = TurretRightPosition->GetPlaybackPosition();
	TurretRight->SetRelativeLocation(FVector(PositionRight, 1, 1));
	Laser->Deactivate();
	Capsule->DestroyComponent();
}

//void ATurret::SetLaserLocations()
//{
//	FVector Location = Cube->GetComponentLocation();
//	Laser->SetNiagaraVariableVec3("User.BeamStart", Location);
//	Location = Location * FVector(20, 0, 0);
//	Laser->SetNiagaraVariableVec3("User.Beam End", Location);
//}

void ATurret::ChangeLaserEndingLocation()
{
	FVector LocationStart = Cube->GetComponentLocation();
	FVector LocationEnd = LocationStart * FVector(-20, 1, 1);
	FHitResult HitResult(ForceInit);
	if (GetWorld()->LineTraceSingleByChannel(HitResult, LocationStart, LocationEnd, ECC_Pawn))
	{
		Laser->SetNiagaraVariableVec3("User.Beam End", HitResult.Location);
	}
}

void ATurret::ChangeLaserBeginLocation()
{
	FVector Location = Cube->GetComponentLocation();
	Laser->SetNiagaraVariableVec3("User.BeamStart", Location);
}


// Called every frame
void ATurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

