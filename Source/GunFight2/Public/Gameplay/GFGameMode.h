// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "GFGameMode.generated.h"

/**
 * 
 */
class AGFPlayerStateBase;
UCLASS()
class GUNFIGHT2_API AGFGameMode : public AGameMode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TArray<AGFPlayerStateBase*> ArrPlayerState;  // 服务端用于存放玩家状态的数组
};
