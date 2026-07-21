// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "screenmessage.generated.h"

/**
 * 
 */
UCLASS()
class BATTLEBLASTER_API Uscreenmessage : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UTextBlock* messagetextblock;
	void setmessagetext(FString message);
};
