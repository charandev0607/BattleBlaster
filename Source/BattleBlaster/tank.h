// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "basepawn.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "Inputaction.h"

#include "tank.generated.h"
class UCameraComponent;
/**
 * 
 */
UCLASS()
class BATTLEBLASTER_API Atank : public Abasepawn
{
	GENERATED_BODY()
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	Atank();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere,Category="Input")
	class UInputMappingContext* defaultmappingcontext;

	UPROPERTY(EditAnywhere,Category="Input")
	UInputAction* moveaction;

	UPROPERTY(EditAnywhere,Category="Input")
	UInputAction* turnaction;

	UPROPERTY(EditAnywhere,Category="Input")
	UInputAction* fireaction;

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* springarmcomp;
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* cameracomp;
	void moveinput(const FInputActionValue& value);
	void turninput(const FInputActionValue& value);
	UPROPERTY(EditAnywhere)
	float speed=600.0f;
	UPROPERTY(EditAnywhere)
	float turnspeed = 100.0f;

	bool playerisalive;

	APlayerController* playercontroller;

	void handledestruction();
	void setplayerenabled(bool enabled);
};
