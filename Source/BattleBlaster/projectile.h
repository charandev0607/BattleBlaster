// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"

#include "projectile.generated.h"

UCLASS()
class BATTLEBLASTER_API Aprojectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Aprojectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(VisibleAnywhere)
	UNiagaraComponent* trailparticles;
	UPROPERTY(EditAnywhere)
	UNiagaraSystem* hitparticles;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* projectilemesh;
	UPROPERTY(VisibleAnywhere)
	UProjectileMovementComponent* projectilemovementcomp;
	UPROPERTY(EditAnywhere)
	float damage = 35.0f;
	UFUNCTION()
	void onhit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};