// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "BaseAttributeSet.generated.h"

/**
 * 
 */
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class GUNFIGHT2_API UBaseAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="BaseAttributeSet",ReplicatedUsing = OnRep_HP)
	FGameplayAttributeData HP;  // 血量
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet,HP);

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="BaseAttributeSet",ReplicatedUsing = OnRep_Max_HP)
	FGameplayAttributeData Max_HP;  // 最大血量
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet,Max_HP);

	// 复制回调声明
	UFUNCTION()
	virtual void OnRep_HP(const FGameplayAttributeData& OldHP);
    
	UFUNCTION()
	virtual void OnRep_Max_HP(const FGameplayAttributeData& OldMaxHP);
	
	virtual void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData &Data) override;
	
protected:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
