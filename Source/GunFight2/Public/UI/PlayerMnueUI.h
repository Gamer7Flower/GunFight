// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerMnueUI.generated.h"

/**
 * 
 */

class UButton;
class UEditableTextBox;

UCLASS()
class GUNFIGHT2_API UPlayerMnueUI : public UUserWidget
{
	GENERATED_BODY()
public:

	virtual void NativeConstruct() override;
	
	UPROPERTY(meta =(BindWidget))
	UEditableTextBox* TextBox_IpAddress;

	UPROPERTY(meta =(BindWidget))
	UButton* Button_Host;
	
	UPROPERTY(meta =(BindWidget))
	UButton* Button_Join;

	UPROPERTY(EditDefaultsOnly)
	TSoftObjectPtr<UWorld> HostingLevel;

	UFUNCTION()
	void HostButtonClicked();
	UFUNCTION()
	void JoinButtonClicked();
	
};
