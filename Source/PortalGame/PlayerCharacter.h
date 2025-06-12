// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "GameFramework/Character.h"
#include "CoreMinimal.h"
#include <PhysicsEngine/PhysicsHandleComponent.h>
#include <Camera/CameraComponent.h>
#include <GameFramework/CharacterMovementComponent.h>
#include <Components/CanvasPanel.h>
#include "JumpPortalInterface.h"
#include "PlayerCharacter.generated.h"


UCLASS()
class PORTALGAME_API APlayerCharacter : public ACharacter, public IJumpPortalInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();


private:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	/** Please add a variable description */

protected:
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Default")
	double JumpVelocity;

	UFUNCTION(BlueprintImplementableEvent,BlueprintPure)
	UCameraComponent* GetCameraComp();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	UPhysicsHandleComponent* GetPhysicsHandleComp();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	UCharacterMovementComponent* GetCharacterMovementComp();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void IA_Look(float ActionValueX, float ActionValueY);

	void IA_Move(float ActionValueX, float ActionValueY);

	void MoveForwardBackward(float Value);

	void MoveRightLeft(float Value);

	void GrabPressed();
	void GrabReleased();

	//void JumpPortal(FVector Location);


	public:
		/** Please add a variable description */
		UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Default")
		FRotator ActorRotation;

		/** Please add a variable description */
		UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Default")
		bool isGrabbingObject;

		/** Please add a variable description */
		UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Default")
		bool isPaused;


		UCharacterMovementComponent* CharacterMovementC;
		UCameraComponent* Camera;
		UPhysicsHandleComponent* PhysicsHandle;
};
