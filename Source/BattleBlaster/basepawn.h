// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/CapsuleComponent.h"
#include "projectile.h"
#include "basepawn.generated.h"

UCLASS()
class BATTLEBLASTER_API Abasepawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	Abasepawn();

protected:
	UPROPERTY(VisibleAnywhere)
	UCapsuleComponent* capsulecomp;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* basemesh;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* turrentmesh;
	UPROPERTY(VisibleAnywhere)
	USceneComponent* projectilespawnpoint;
	UPROPERTY(EditAnywhere)
	TSubclassOf<Aprojectile> projectileclass;
public:
	void rotateturrent(FVector lookattarget);
	void fire();
	void handledestruction();
};
