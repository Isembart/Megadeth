// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "MegadethAbilityExchangeSubsystem.generated.h"

/**
 *
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FExchangedSkills);

UCLASS()
class MEGADETH_API UMegadethAbilityExchangeSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FExchangedSkills ExchangedSkills;
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
};
