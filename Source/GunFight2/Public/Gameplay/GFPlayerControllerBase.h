// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GFPlayerControllerBase.generated.h"

/**
 * 
 */
UCLASS()
class GUNFIGHT2_API AGFPlayerControllerBase : public APlayerController
{
	GENERATED_BODY()
public:
	// 服务端初始化ASC
	void OnPossess(APawn* P) override;
	
	// 客户端初始化ASC
	void AcknowledgePossession(APawn* P) override;

	UPROPERTY()
	class AGFCharacterBase* CharacterBase;
};
