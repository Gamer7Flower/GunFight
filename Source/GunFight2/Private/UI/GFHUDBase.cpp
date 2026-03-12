// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/GFHUDBase.h"
#include "UI/PlayerScreenUI.h"
#include "Blueprint/UserWidget.h"

void AGFHUDBase::BeginPlay()
{
	Super::BeginPlay();
	if (PlayerScreenUIClass)
	{
		PlayerScreenUI = CreateWidget<UPlayerScreenUI>(GetWorld(), PlayerScreenUIClass);
		if (PlayerScreenUI)
		{
			PlayerScreenUI->AddToViewport();
		}
	}
}
