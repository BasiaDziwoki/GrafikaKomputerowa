// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerCharacter.h"
#include "Engine/LocalPlayer.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Components/SceneComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "JumpPortalInterface.h"
#include "GameFramework/PlayerController.h"


// Sets default values
APlayerCharacter::APlayerCharacter() 
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	isGrabbingObject = false;
	isPaused = false;
	SetActorHiddenInGame(false);


}

void APlayerCharacter::JumpPortal(FVector Location)
{
	FVector Velocity = GetVelocity();
	JumpVelocity = Velocity.Size();
	ActorRotation = GetActorRotation();
	SetActorLocationAndRotation(Location, ActorRotation);
	FRotator NewRotation = ActorRotation * (-1, -1, 1);
	GetController()->SetControlRotation(NewRotation);
	SetActorRotation(NewRotation);
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	CharacterMovementC = GetCharacterMovementComp();
	Camera = GetCameraComp();
	PhysicsHandle = GetPhysicsHandleComp();
}

void APlayerCharacter::GrabPressed()
{
	FVector NewLocation;
	FVector Location = Camera->GetComponentLocation();
	FRotator Rotation = Camera->GetComponentRotation();
	NewLocation = UKismetMathLibrary::GetForwardVector(Rotation) * 200;
	NewLocation = NewLocation + Location;
	FHitResult HitResult(ForceInit);
	if (GetWorld()->LineTraceSingleByChannel(HitResult, Location, NewLocation, ECC_Pawn))
	{
		AActor* HitActor=HitResult.GetActor();
		UPrimitiveComponent* HitComponent=HitResult.GetComponent();

		PhysicsHandle->GrabComponentAtLocationWithRotation(HitComponent, "None", HitComponent->GetComponentLocation(), FRotator());
		HitActor->TakeDamage(10,FDamageEvent::FDamageEvent(), nullptr, nullptr);
		isGrabbingObject = true;
	}

}

void APlayerCharacter::GrabReleased()
{
	if (isGrabbingObject)
	{
		PhysicsHandle->ReleaseComponent();
		isGrabbingObject = false;
	}
}


// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (isGrabbingObject)
	{
		FVector NewLocation;
		FVector Location= Camera->GetComponentLocation();
		FRotator Rotation= Camera->GetComponentRotation();
		NewLocation = UKismetMathLibrary::GetForwardVector(Rotation)*200;
		NewLocation = NewLocation + Location;
		PhysicsHandle->SetTargetLocation(NewLocation);
	}
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("Turn Right / Left Mouse"), this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis(TEXT("Look Up / Down Mouse"), this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis(TEXT("Move Right / Left"), this, &APlayerCharacter::MoveRightLeft);
	PlayerInputComponent->BindAxis(TEXT("Move Forward / Backward"), this, &APlayerCharacter::MoveForwardBackward);

	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &APlayerCharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Released, this, &APlayerCharacter::StopJumping);
	PlayerInputComponent->BindAction(TEXT("Grab"), EInputEvent::IE_Pressed, this, &APlayerCharacter::GrabPressed);
	PlayerInputComponent->BindAction(TEXT("Grab"), EInputEvent::IE_Released, this, &APlayerCharacter::GrabReleased);

}

void APlayerCharacter::IA_Look(float ActionValueX, float ActionValueY)
{
	AddControllerYawInput(ActionValueX);
	AddControllerPitchInput(ActionValueY);
}

void APlayerCharacter::IA_Move(float ActionValueX, float ActionValueY)
{
	FVector Right = GetActorRightVector();
	FVector Forward = GetActorForwardVector();
	AddMovementInput(Right, ActionValueX);
	AddMovementInput(Forward, ActionValueY);
}

void APlayerCharacter::MoveForwardBackward(float Value)
{
	IA_Move(0.0f,Value);
}

void APlayerCharacter::MoveRightLeft(float Value)
{
	IA_Move(Value,0.0f);
}





