// Fill out your copyright notice in the Description page of Project Settings.

#include "projectile.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
Aprojectile::Aprojectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	projectilemesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("projectilemesh"));
	SetRootComponent(projectilemesh);
	projectilemovementcomp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("projectilemovementcomponent"));
	projectilemovementcomp->InitialSpeed = 1000.0f;
	projectilemovementcomp->MaxSpeed = 1000.0f;
	projectilemesh->OnComponentHit.AddDynamic(this, &Aprojectile::onhit);
}

// Called when the game starts or when spawned
void Aprojectile::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void Aprojectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void Aprojectile::onhit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	AActor* myowner = GetOwner();
	if (myowner) {
		if (OtherActor && OtherActor != myowner && OtherActor != this) {
			UGameplayStatics::ApplyDamage(OtherActor, damage, myowner->GetInstigatorController(), this, UDamageType::StaticClass());

		}
	}
	Destroy();
}

