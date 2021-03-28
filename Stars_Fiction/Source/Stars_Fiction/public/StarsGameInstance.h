// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "StarsGameInstance.generated.h"

class AStarsPlayerController;

UCLASS()
class STARS_FICTION_API UStarsGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	AStarsPlayerController* GetPlayerController() { return PlayerController; }

	UFUNCTION(BlueprintCallable)
	void SetPlayerController(AStarsPlayerController* Controller) { PlayerController = Controller; }

private:
	AStarsPlayerController* PlayerController;
	
};
