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


// Called every frame
void APortal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

//void APortal::ClearExitCollider(UObject* Object)
//{
//	if (Object == ExitCollider)
//	{
//		ExitCollider=nullptr;
//	}
//}

//void APortal::PlacePortal(bool Blue_Orange, FVector NewLocation, FRotator NewRotation)
//{
//
//}
//
//void APortal::CanPlacePortal(FVector Location, FRotator Rotation)
//{
//	DummyPortal->SetWorldLocationAndRotation(Location, Rotation);
//}
//
//void APortal::JumpPortalM(UObject* Jumper, UBoxComponent* ExitColliderR, USceneComponent* TargetCapture, UObject* TriggerCollider, FVector TargetPoint)
//{
//	if (TriggerCollider != ExitCollider)
//	{
//		ExitCollider = ExitColliderR;
//		FRotator Rotation = TargetCapture->GetComponentRotation();
//		APlayerCharacter::Execute_JumpPortal(Jumper, TargetPoint, Rotation);
//	}
//}
//
//FVector APortal::GetTargetPoint(FHitResult HitResult, USceneComponent* Enter, USceneComponent* Exit)
//{
//	FVector IP = HitResult.ImpactPoint;
//	Enter->SetWorldLocation(IP);
//	FVector RL = Enter->GetRelativeLocation();
//	FVector NewLocation = GetActorForwardVector() + RL;
//	Exit->SetRelativeLocation(NewLocation);
//	FVector WL = Exit->GetComponentLocation();
//	return WL;
//}

//void APortal::UpdateCameras()
//{
//	FVector NewLocation = GetActorLocation();
//	PSim_D1->SetWorldLocation(NewLocation);
//	PSim_D2->SetWorldLocation(NewLocation);
//	UpdateCaptureM(P1Capture, PSim_D2);
//	UpdateCaptureM(P2Capture, PSim_D1);
//}
//
//void APortal::UpdateCaptureM(USceneCaptureComponent2D* Capture, USceneComponent* Psim)
//{
//	Capture->SetRelativeLocation(Psim->GetRelativeLocation());
//	FVector Start = Capture->GetComponentLocation();
//	FVector Target = Capture->GetAttachParent()->GetComponentLocation();
//	FRotator NewRotation = UKismetMathLibrary::FindLookAtRotation(Start, Target);
//	Capture->SetWorldRotation(NewRotation);
//	double VectorLength = Capture->GetRelativeLocation().Length();
//	double FOV = UKismetMathLibrary::Clamp(UKismetMathLibrary::Atan(UKismetMathLibrary::Divide_DoubleDouble(200, UKismetMathLibrary::Max(VectorLength, 1))), 5, 100);
//	Capture->FOVAngle = FOV;
//}

void APortal::BeginPlay()
{
	Super::BeginPlay();

	// Jeœli masz komponent, np. CollisionComponent:
	// if (CollisionComponent)
	// {
	//     CollisionComponent->SetGenerateOverlapEvents(true);
	// }

	// Na razie pusty — byle istnia³!
}


