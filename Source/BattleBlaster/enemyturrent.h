// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "basepawn.h"
#include "tank.h"
#include "Kismet/GameplayStatics.h"
#include "enemyturrent.generated.h"

/**
 * 
 */
UCLASS()
class BATTLEBLASTER_API Aenemyturrent : public Abasepawn
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	Atank* playertank;
	float firingrange = 700.0f;
	float distance;
	void checkfirecondition();
	bool isinfirerange();
	float firerate = 2.0f;
	void handledestruction();
};
