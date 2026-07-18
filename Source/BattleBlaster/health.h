// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "battleblastergamemode.h"
#include "health.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BATTLEBLASTER_API Uhealth : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	Uhealth();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere)
	float maxhealth=100.0f;
	UPROPERTY(VisibleAnywhere)
	float health;
	Abattleblastergamemode* bbgamemode;
	UFUNCTION()
	void damagetaken(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController*  InstigatedBy, AActor* DamageCauser);
};
