// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "D_Character.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS()
class ROGUELIKEACTION_API AD_Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AD_Character();

protected:
	/**
	 * Created a camera component attached to the player character;11
	 */
	UCameraComponent* CameraComp;
	USpringArmComponent* SpringArmComp;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
