// Fill out your copyright notice in the Description page of Project Settings.


#include "battleblastergamemode.h"
#include "enemyturrent.h"
#include "Kismet/GameplayStatics.h"
#include "MyGameInstance.h"

void Abattleblastergamemode::BeginPlay()
{
	Super::BeginPlay();
	TArray<AActor*> enemies;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), Aenemyturrent::StaticClass(), enemies);
	enemycount = enemies.Num();
	UE_LOG(LogTemp, Display, TEXT("number of enemeies:%d"), enemycount);
	APawn* playerpawn=UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	playertank = Cast<Atank>(playerpawn);
	if (!playertank) {
		UE_LOG(LogTemp, Display, TEXT("no player tank"));
	}
	int32 i = 0;
	while (i < enemycount) {
		AActor* enemy = enemies[i];
		if (enemy&&playertank) {
			Aenemyturrent* enemyturrent = Cast<Aenemyturrent>(enemy);
			enemyturrent->playertank = playertank;
			i++;
		}
	}
}

void Abattleblastergamemode::actordied(AActor* deadactor)
{
	if (deadactor == playertank) {
		playertank->handledestruction();
		isgameover = true;
	}
	else {
		Aenemyturrent* deadtower = Cast<Aenemyturrent>(deadactor);
		if (deadtower) {
			deadtower->handledestruction();
			enemycount--;
			if (enemycount == 0) {
				isgameover = true;
				isvictory = true;
			}
		}
	}
	if (isgameover) {
		FTimerHandle gameoverhandle;
		GetWorldTimerManager().SetTimer(gameoverhandle, this,&Abattleblastergamemode::ongameovertimertimeout,gameovertimer, false);
	}
}


void Abattleblastergamemode::ongameovertimertimeout()
{
	UGameInstance* gameinstance = GetGameInstance();
	if (gameinstance) {
		UMyGameInstance* mygameinstance=Cast<UMyGameInstance>(gameinstance);
		if (mygameinstance) {
			if (isvictory) {
				mygameinstance->loadnextlevel();
			}
			else {
				mygameinstance->restartlevel();

			}

		}
	}
}
