// Fill out your copyright notice in the Description page of Project Settings.


#include "Gameplay/GFPlayerStateBase.h"

#include "Net/UnrealNetwork.h"

void AGFPlayerStateBase::OnRep_P_Name()
{
}

void AGFPlayerStateBase::OnRep_P_Score()
{
}

void AGFPlayerStateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AGFPlayerStateBase, P_Name);
	DOREPLIFETIME(AGFPlayerStateBase, P_Score);
	DOREPLIFETIME(AGFPlayerStateBase, P_Index);
}
