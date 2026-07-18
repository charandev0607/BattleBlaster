// Fill out your copyright notice in the Description page of Project Settings.
#include "basepawn.h"
#include "projectile.h"

// Sets default values
Abasepawn::Abasepawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	capsulecomp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("capsulecomp"));
	SetRootComponent(capsulecomp);
	basemesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("basemesh"));
	basemesh->SetupAttachment(capsulecomp);
	turrentmesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("turrentmesh"));
	turrentmesh->SetupAttachment(basemesh);
	projectilespawnpoint = CreateDefaultSubobject<USceneComponent>(TEXT("projectilespawnpoint"));
	projectilespawnpoint->SetupAttachment(turrentmesh);
}

void Abasepawn::rotateturrent(FVector lookattarget)
{
	FVector vectortotarget = lookattarget - turrentmesh->GetComponentLocation();
	FRotator lookatlocation = FRotator(0.0f, vectortotarget.Rotation().Yaw, 0.0f);
	FRotator interpolatedrotation = FMath::RInterpTo(turrentmesh->GetComponentRotation(), lookatlocation, GetWorld()->GetDeltaSeconds(), 10.0f);
	turrentmesh->SetWorldRotation(interpolatedrotation);
}

void Abasepawn::fire()
{
	FVector spawnlocation= projectilespawnpoint->GetComponentLocation();
	FRotator spawnrotation = projectilespawnpoint->GetComponentRotation();
	Aprojectile* projectile=GetWorld()->SpawnActor<Aprojectile>(projectileclass,spawnlocation,spawnrotation);
	if (projectile) {
		projectile->SetOwner(this);
		AActor* projectileowner = projectile->GetOwner();
		if (projectileowner) {
			projectileowner->GetActorNameOrLabel();
		}
	}
}

void Abasepawn::handledestruction()
{
	UE_LOG(LogTemp, Display, TEXT("basepawn handledestruction"));
}



