// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include <Components/BoxComponent.h>
#include <Components/SceneCaptureComponent2D.h>
#include <Components/ArrowComponent.h>
#include "Components/TimelineComponent.h"
#include "Portal.generated.h"


UCLASS()
class PORTALGAME_API APortal : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APortal();

protected:
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//UFUNCTION(BlueprintCallable)
	//void ClearExitCollider(UObject* Object);

	//void PlacePortal(bool Blue_Orange, FVector NewLocation, FRotator NewRotation);
	//void CanPlacePortal(FVector Location, FRotator Rotation);
	////bool CheckSurface(USceneComponent* Object);
	//void JumpPortalM(UObject* Object, UBoxComponent* ExitCollider, USceneComponent* TargetCapture, UObject* TriggerCollider, FVector TargetPoint);

	//FVector GetTargetPoint(FHitResult HitResult, USceneComponent* Enter, USceneComponent* Exit);
	
	//void UpdateCameras();

	//void UpdateCaptureM(USceneCaptureComponent2D* Capture, USceneComponent* Psim);

};
