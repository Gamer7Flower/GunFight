// Fill out your copyright notice in the Description page of Project Settings.


#include "Gameplay/GFPlayerControllerBase.h"

#include "Gameplay/GFCharacterBase.h"

void AGFPlayerControllerBase::OnPossess(APawn* P)
{
	Super::OnPossess(P);
	CharacterBase = Cast<AGFCharacterBase>(P);
	if (CharacterBase)
	{
		CharacterBase->ServerSideInit();
	}
}

void AGFPlayerControllerBase::AcknowledgePossession(APawn* P)
{
	Super::AcknowledgePossession(P);
	CharacterBase = Cast<AGFCharacterBase>(P);
	if (CharacterBase)
	{
		CharacterBase->ClientSideInit();
	}
}