// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GAS/BaseAbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "GAS/BaseAttributeSet.h"

#include "GFCharacterBase.generated.h"

class UCameraComponent;
// GAS属性值变化多播委托（发送到蓝图）
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnValueChangedEvent, float ,NewVal);

UCLASS()
class GUNFIGHT2_API AGFCharacterBase : public ACharacter,public IAbilitySystemInterface
{
	GENERATED_BODY()

public:

	AGFCharacterBase();
	
	/*  GAS系统（Start）  */

	virtual UAbilitySystemComponent*GetAbilitySystemComponent() const override;
	void ServerSideInit();
	void ClientSideInit();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GAS", Replicated)
	UBaseAbilitySystemComponent* MyASC;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "GAS", Replicated)
	UBaseAttributeSet* MyAS;
	
	
	UPROPERTY(BlueprintAssignable,Category="GAS")
	FOnValueChangedEvent HPChangeEvent; // 血量变化多播委托

	// 属性变化时的广播
	void OnHPAttributeChanged(const FOnAttributeChangeData &Data);
	
	/*  GAS系统（End）  */
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Projectile")
	TSubclassOf<class AProjectileBase> ProjectileClass;  // 需要生成的子弹类型


	// // 服务端初始化ASC
	// virtual void PossessedBy(AController* NewController) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
