// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "tank.h"
#include "battleblastergamemode.generated.h"

/**
 * 
 */
UCLASS()
class BATTLEBLASTER_API Abattleblastergamemode : public AGameModeBase
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
public:

	UPROPERTY(EditAnywhere)
	float gameovertimer = 3.0f;
	Atank* playertank;
	int32 enemycount;
	void actordied(AActor* deadactor);
	void ongameovertimertimeout();
	bool isgameover = false;
	bool isvictory = false;
};
