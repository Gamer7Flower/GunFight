// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "BaseAbilitySystemComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class GUNFIGHT2_API UBaseAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()
public:

	UBaseAbilitySystemComponent();
	

	void ApplyInitialEffects();
	void GiveInitialAbilities();

	UFUNCTION(BlueprintCallable,Category="GAS")
	void ApplyGEToPlayer(TSubclassOf<UGameplayEffect> EffectClass);
private:
	UPROPERTY(EditDefaultsOnly,Category="GameplayEffects")
	TArray<TSubclassOf<UGameplayEffect>> InitialEffects;

	UPROPERTY(EditDefaultsOnly,Category="GameplayAbility")
	TArray<TSubclassOf<UGameplayAbility>> Abilities;

	UPROPERTY(EditDefaultsOnly,Category="GameplayAbility")
	TArray<TSubclassOf<UGameplayAbility>> BaseAbilities;
};
