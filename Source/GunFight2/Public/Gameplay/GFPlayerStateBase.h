// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "GFPlayerStateBase.generated.h"

/**
 * 
 */
UCLASS()
class GUNFIGHT2_API AGFPlayerStateBase : public APlayerState
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="PlayerState" ,Replicated)
	int32 P_Index = 999;  // 玩家序号
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="PlayerState" ,ReplicatedUsing = OnRep_P_Name)
	FString P_Name = "NewPlayer";  // 玩家名

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="PlayerState" ,ReplicatedUsing = OnRep_P_Score)
	int32 P_Score = 0;  // 玩家得分
	

	UFUNCTION()
	void OnRep_P_Name();
	
	UFUNCTION()
	void OnRep_P_Score();
	
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
