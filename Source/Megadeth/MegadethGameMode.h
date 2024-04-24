// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MegadethGameMode.generated.h"

UCLASS(minimalapi)
class AMegadethGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMegadethGameMode();
	
	UPROPERTY(EditDefaultsOnly, Category= "Interface")
	TSubclassOf<UUserWidget> HUDWidget;

	UPROPERTY()
	UUserWidget* HUDWidgetInstance;

	virtual void BeginPlay() override;
};



