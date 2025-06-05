// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <Components/CapsuleComponent.h>
#include "GameFramework/Actor.h"
#include <NiagaraComponent.h>
#include <Components/TimelineComponent.h>
#include "Turret.generated.h"



UCLASS()
class PORTALGAME_API ATurret : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATurret();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void AnyDamage();

	//UFUNCTION(BlueprintCallable)
	//void SetLaserLocations();

	UFUNCTION(BlueprintCallable)
	void ChangeLaserEndingLocation();

	UFUNCTION(BlueprintCallable)
	void ChangeLaserBeginLocation();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	UStaticMeshComponent* GetTurretBaseComp();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	UStaticMeshComponent* GetTurretLeftComp();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	UStaticMeshComponent* GetTurretRightComp();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	UStaticMeshComponent* GetCubeComp();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	UCapsuleComponent* GetCapsuleComp();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	UNiagaraComponent* GetLaserComp();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	UTimelineComponent* GetTurretLeftPositionTimeline();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	UTimelineComponent* GetTurretRightPositionTimeline();


	UStaticMeshComponent* TurretBase;
	UStaticMeshComponent* TurretLeft;
	UStaticMeshComponent* TurretRight;
	UStaticMeshComponent* Cube;
	UCapsuleComponent* Capsule;
	UNiagaraComponent* Laser;
	UTimelineComponent* TurretLeftPosition;
	UTimelineComponent* TurretRightPosition;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


};
