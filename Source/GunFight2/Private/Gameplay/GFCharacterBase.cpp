// Fill out your copyright notice in the Description page of Project Settings.


#include "Gameplay/GFCharacterBase.h"
#include "GAS/BaseAbilitySystemComponent.h"
#include "GAS/BaseAttributeSet.h"
#include "Net/UnrealNetwork.h"

AGFCharacterBase::AGFCharacterBase()
{
	// 绑定GAS组件
	MyASC = CreateDefaultSubobject<UBaseAbilitySystemComponent>("MyASC");
	MyASC->SetIsReplicated(true);
	MyASC->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);
	// 监听GAS属性变化（变化时广播）
	MyASC->GetGameplayAttributeValueChangeDelegate(UBaseAttributeSet::GetHPAttribute()).AddUObject(this,&AGFCharacterBase::OnHPAttributeChanged);

	MyAS = CreateDefaultSubobject<UBaseAttributeSet>("MyAS");
}

UAbilitySystemComponent* AGFCharacterBase::GetAbilitySystemComponent() const
{
	return MyASC;
}

void AGFCharacterBase::ServerSideInit()
{
	MyASC->InitAbilityActorInfo(this,this);
	MyASC->ApplyInitialEffects();
	MyASC->GiveInitialAbilities();
}

void AGFCharacterBase::ClientSideInit()
{
	MyASC->InitAbilityActorInfo(this,this);
}


void AGFCharacterBase::OnHPAttributeChanged(const FOnAttributeChangeData& Data)
{
	HPChangeEvent.Broadcast(Data.NewValue);
}


void AGFCharacterBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AGFCharacterBase, MyASC);
}


