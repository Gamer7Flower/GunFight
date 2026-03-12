// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/BaseAbilitySystemComponent.h"

UBaseAbilitySystemComponent::UBaseAbilitySystemComponent()
{
	
}


void UBaseAbilitySystemComponent::ApplyInitialEffects()
{
	if (!GetOwner() || !GetOwner()->HasAuthority()) return;
	
	for (const TSubclassOf<UGameplayEffect>& EffectClass : InitialEffects)
	{
		FGameplayEffectSpecHandle EffectSpecHandle = MakeOutgoingSpec(EffectClass,1,MakeEffectContext());
		ApplyGameplayEffectSpecToSelf(*EffectSpecHandle.Data.Get());
	}
}

void UBaseAbilitySystemComponent::GiveInitialAbilities()
{
	if (!GetOwner() || !GetOwner()->HasAuthority()) return;
	
	for (const TSubclassOf<UGameplayAbility>& AbilityClass : Abilities)
	{
		GiveAbility(FGameplayAbilitySpec(AbilityClass,0,-1,nullptr));

	}

	for (const TSubclassOf<UGameplayAbility>& AbilityClass : BaseAbilities)
	{
		GiveAbility(FGameplayAbilitySpec(AbilityClass,1,-1,nullptr));
	}
}

// 只在服务器上执行去为对应玩家应用GE
void UBaseAbilitySystemComponent::ApplyGEToPlayer(TSubclassOf<UGameplayEffect> EffectClass)
{
	if (!GetOwner() || !GetOwner()->HasAuthority() || !EffectClass) return;
    
	FGameplayEffectSpecHandle EffectSpecHandle = MakeOutgoingSpec(EffectClass, 1, MakeEffectContext());
	if (EffectSpecHandle.Data.IsValid())
	{
		ApplyGameplayEffectSpecToSelf(*EffectSpecHandle.Data.Get());
	}
}
