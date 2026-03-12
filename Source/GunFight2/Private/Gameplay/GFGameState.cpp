// Fill out your copyright notice in the Description page of Project Settings.


#include "Gameplay/GFGameState.h"

#include "Net/UnrealNetwork.h"

void AGFGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AGFGameState, RemainingTime);
}

void AGFGameState::OnRep_RemainingTime()
{
}