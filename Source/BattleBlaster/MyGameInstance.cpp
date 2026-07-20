// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "Kismet/GameplayStatics.h"

void UMyGameInstance::loadnextlevel()
{
	if (currentlevelindex < lastlevelindex) {
		changelevel(currentlevelindex++);
	}
	else {
		restartgame();
	}
}

void UMyGameInstance::restartlevel()
{
	changelevel(currentlevelindex);
}

void UMyGameInstance::restartgame()
{
	changelevel(1);
}

void UMyGameInstance::changelevel(int32 index)
{
	if (index >0 && index <= lastlevelindex) {
		currentlevelindex = index;
		FString currentlevelname= FString::Printf(TEXT("Level_%d"), currentlevelindex);
		UGameplayStatics::OpenLevel(GetWorld(), *currentlevelname);
	}
}
