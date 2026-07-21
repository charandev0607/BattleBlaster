// Fill out your copyright notice in the Description page of Project Settings.


#include "screenmessage.h"

void Uscreenmessage::setmessagetext(FString message)
{
	FText messagetext = FText::FromString(message);
	messagetextblock->SetText(messagetext); 
}
