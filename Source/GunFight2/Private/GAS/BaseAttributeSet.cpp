// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/BaseAttributeSet.h"
#include "GameplayEffectExtension.h"
#include "Gameplay/GFCharacterBase.h"
#include "Net/UnrealNetwork.h"

void UBaseAttributeSet::OnRep_HP(const FGameplayAttributeData& OldHP)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, HP, OldHP)
}

void UBaseAttributeSet::OnRep_Max_HP(const FGameplayAttributeData& OldMaxHP)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet,Max_HP, OldMaxHP)
}

void UBaseAttributeSet::PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);
	if (Data.EvaluatedData.Attribute == GetHPAttribute())
	{
		SetHP(FMath::Clamp(GetHP(),0.0f ,GetMax_HP()));
	}
}

void UBaseAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, HP, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Max_HP, COND_None, REPNOTIFY_Always);
}
