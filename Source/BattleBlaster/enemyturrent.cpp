// Fill out your copyright notice in the Description page of Project Settings.


#include "enemyturrent.h"

void Aenemyturrent::BeginPlay()
{
	Super::BeginPlay();
	FTimerHandle firetimerhandle;
	GetWorldTimerManager().SetTimer(firetimerhandle,this,&Aenemyturrent::checkfirecondition,firerate,true);
}

void Aenemyturrent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	{
		if (isinfirerange()) {
			rotateturrent(playertank->GetActorLocation());
		}
	}
}
bool Aenemyturrent::isinfirerange()
{
	bool result = false;
	distance = FVector::Dist(GetActorLocation(), playertank->GetActorLocation());
	result = (distance <= firingrange);
	return result;
}
void Aenemyturrent::checkfirecondition()
{
	if (isinfirerange()&&playertank&&playertank->playerisalive) {
		fire();
	}
}
void Aenemyturrent::handledestruction() {
	Super::handledestruction();
	Destroy();
}

