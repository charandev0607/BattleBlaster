// Fill out your copyright notice in the Description page of Project Settings.


#include "health.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
Uhealth::Uhealth()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void Uhealth::BeginPlay()
{
	Super::BeginPlay();
	health = maxhealth;
	GetOwner()->OnTakeAnyDamage.AddDynamic(this,&Uhealth::damagetaken);
	AGameModeBase* gamemodebase = UGameplayStatics::GetGameMode(GetWorld());
	if (gamemodebase) {
		bbgamemode = Cast <Abattleblastergamemode>(gamemodebase);
	}
}


// Called every frame
void Uhealth::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void Uhealth::damagetaken(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	if (Damage > 0.0f) {
		health -= Damage;
		if (health <= 0.0f) {
			if (bbgamemode) {
				bbgamemode->actordied(DamagedActor);
			}
		}
	}
}
