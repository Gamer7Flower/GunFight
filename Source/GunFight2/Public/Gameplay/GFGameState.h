// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "GFGameState.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRepRemainingTime, int32, NewValue);
UCLASS()
class GUNFIGHT2_API AGFGameState : public AGameState
{
	GENERATED_BODY()
public:
	
	UPROPERTY(ReplicatedUsing = OnRep_RemainingTime)
	int32 RemainingTime = 0;  // 倒计时变量，默认60s

protected:
	// 网络复制设置，用于标记需要复制的变量
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	// 变量同步回调函数
	UFUNCTION()
	void OnRep_RemainingTime();
};
