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

	UFUNCTION()
	void BeginOverlap1(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

	UFUNCTION()
	void BeginOverlap2(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

	UFUNCTION()
	void EndOverlap(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	USceneComponent* GetD1Comp();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	USceneComponent* GetTP1Comp();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	USceneComponent* GetPSim_D1Comp();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	USceneComponent* GetCamRoot1Comp();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	UStaticMeshComponent* GetDoor1Comp();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	UBoxComponent* GetCol1Comp();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	USceneCaptureComponent2D* GetP1CaptureComp();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	UArrowComponent* GetD1ForwardDirectionComp();


	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	USceneComponent* GetD2Comp();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	USceneComponent* GetTP2Comp();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	USceneComponent* GetPSim_D2Comp();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	USceneComponent* GetCamRoot2Comp();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	UStaticMeshComponent* GetDoor2Comp();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	UBoxComponent* GetCol2Comp();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	USceneCaptureComponent2D* GetP2CaptureComp();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	UArrowComponent* GetD2ForwardDirectionComp();


	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	USceneComponent* GetDummyPortalComp();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	USceneComponent* GetUComp();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	USceneComponent* GetDComp();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	USceneComponent* GetLComp();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	USceneComponent* GetRComp();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	UBoxComponent* GetExitCollider();

	USceneComponent* PSim_D1;
	USceneComponent* PSim_D2;
	USceneCaptureComponent2D* P1Capture;
	USceneCaptureComponent2D* P2Capture;
	USceneComponent* D1;
	USceneComponent* D2;
	UArrowComponent* D1ForwardDirection;
	UArrowComponent* D2ForwardDirection;

	UBoxComponent* ExitCollider;
	UBoxComponent* Col1;
	UBoxComponent* Col2;
	USceneComponent* DummyPortal;
	USceneComponent* U;
	USceneComponent* D;
	USceneComponent* L;
	USceneComponent* R;
	USceneComponent* TP1;
	USceneComponent* TP2;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void ClearExitCollider(UObject* Object);

	//void PlacePortal(bool Blue_Orange, FVector NewLocation, FRotator NewRotation);
	//void CanPlacePortal(FVector Location, FRotator Rotation);
	////bool CheckSurface(USceneComponent* Object);
	void JumpPortalM(UObject* Object, UBoxComponent* ExitCollider, USceneComponent* TargetCapture, UObject* TriggerCollider, FVector TargetPoint);

	FVector GetTargetPoint(FHitResult HitResult, USceneComponent* Enter, USceneComponent* Exit);

};
