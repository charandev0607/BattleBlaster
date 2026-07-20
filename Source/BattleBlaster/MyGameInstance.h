// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class BATTLEBLASTER_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	int32 currentlevelindex = 1;
	UPROPERTY(VisibleAnywhere)
	int32 lastlevelindex = 4;
	void loadnextlevel();
	void restartlevel();
	void restartgame();
private:
	void changelevel(int32 index);
	
};
