// Fill out your copyright notice in the Description page of Project Settings.


#include "Portal.h"
#include "Kismet/KismetMathLibrary.h"
#include <Camera/CameraComponent.h>
#include "PlayerCharacter.h"


// Sets default values
APortal::APortal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void APortal::BeginOverlap1(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	FVector TargetPoint = GetTargetPoint(SweepResult, TP2, TP1);
	JumpPortalM(OtherActor, Col1, P1Capture, OverlappedComponent, TargetPoint);
}

void APortal::BeginOverlap2(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	FVector TargetPoint = GetTargetPoint(SweepResult, TP1, TP2);
	JumpPortalM(OtherActor, Col2, P2Capture, OverlappedComponent, TargetPoint);
}

void APortal::EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OverlappedComponent == ExitCollider)
	{
		ExitCollider = nullptr;
	}
}

// Called when the game starts or when spawned
void APortal::BeginPlay()
{
	Super::BeginPlay();
	P1Capture = GetP1CaptureComp();
	P2Capture = GetP2CaptureComp();
	PSim_D1 = GetPSim_D1Comp();
	PSim_D2 = GetPSim_D2Comp();
	Col1 = GetCol1Comp();
	Col2 = GetCol2Comp();
	DummyPortal = GetDummyPortalComp();
	U = GetUComp();
	D = GetDComp();
	L = GetLComp();
	R = GetRComp();
	TP1 = GetTP1Comp();
	TP2 = GetTP2Comp();
	ExitCollider = GetExitCollider();
	Col1->SetGenerateOverlapEvents(true);
	Col2->SetGenerateOverlapEvents(true);
	FScriptDelegate ScriptDelegate1;
	ScriptDelegate1.BindUFunction(this, "EndOverlap");
	Col1->OnComponentEndOverlap.Add(ScriptDelegate1);
	FScriptDelegate ScriptDelegate2;
	ScriptDelegate2.BindUFunction(this, "EndOverlap");
	Col2->OnComponentEndOverlap.Add(ScriptDelegate2);
	FScriptDelegate ScriptDelegate3;
	ScriptDelegate3.BindUFunction(this, "BeginOverlap2");
	Col1->OnComponentBeginOverlap.Add(ScriptDelegate3);
	FScriptDelegate ScriptDelegate4;
	ScriptDelegate4.BindUFunction(this, "BeginOverlap1");
	Col2->OnComponentBeginOverlap.Add(ScriptDelegate4);



}

// Called every frame
void APortal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

void APortal::ClearExitCollider(UObject* Object)
{
	if (Object == ExitCollider)
	{
		ExitCollider=nullptr;
	}
}

//void APortal::PlacePortal(bool Blue_Orange, FVector NewLocation, FRotator NewRotation)
//{
//
//}
//
//void APortal::CanPlacePortal(FVector Location, FRotator Rotation)
//{
//	DummyPortal->SetWorldLocationAndRotation(Location, Rotation);
//}

void APortal::JumpPortalM(UObject* Jumper, UBoxComponent* ExitColliderR, USceneComponent* TargetCapture, UObject* TriggerCollider, FVector TargetPoint)
{
	if (TriggerCollider != ExitCollider)
	{
		ExitCollider = ExitColliderR;
		FRotator Rotation = TargetCapture->GetComponentRotation();
		APlayerCharacter::Execute_JumpPortal(Jumper, TargetPoint, Rotation);
	}
}

FVector APortal::GetTargetPoint(FHitResult HitResult, USceneComponent* Enter, USceneComponent* Exit)
{
	FVector IP = HitResult.ImpactPoint;
	Enter->SetWorldLocation(IP);
	FVector RL = Enter->GetRelativeLocation();
	FVector NewLocation = GetActorForwardVector() + RL;
	Exit->SetRelativeLocation(NewLocation);
	FVector WL = Exit->GetComponentLocation();
	return WL;
}


