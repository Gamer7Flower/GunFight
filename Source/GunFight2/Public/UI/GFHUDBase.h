// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerScreenUI.h"
#include "GameFramework/HUD.h"
#include "GFHUDBase.generated.h"

/**
 * 
 */
UCLASS()
class GUNFIGHT2_API AGFHUDBase : public AHUD
{
	GENERATED_BODY()
public:
	virtual void BeginPlay();
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Widgets")
	TSubclassOf<UUserWidget> PlayerScreenUIClass;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Widgets")
	UPlayerScreenUI* PlayerScreenUI;

};
