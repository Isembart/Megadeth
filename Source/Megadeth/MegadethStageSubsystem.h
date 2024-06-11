// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "MegadethStageSubsystem.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEnteredStage);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEnteredTavern);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FActivatedTeleporter);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTeleporterCharged);

UCLASS()
class MEGADETH_API UMegadethStageSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	UPROPERTY(BlueprintAssignable)
	FEnteredStage EnteredStage;

	UPROPERTY(BlueprintAssignable)
	FEnteredStage EnteredTavern;
	
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FTeleporterCharged TeleporterCharged;
	
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FActivatedTeleporter ActivatedTeleporter;
	
	UFUNCTION(BlueprintCallable)
	void OnEnteredTavern();
	

	UFUNCTION(BlueprintCallable)
	void OnEnteredStage();
private:
	
};
