// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "MegadethDifficultySubsystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDifficultyIncreased);
/**
 * 
 */
UCLASS()
class MEGADETH_API UMegadethDifficultySubsystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	//Toggles increasing difficulty by time flow
    //@param enabled - if true, difficulty will increase by time flow, if false, difficulty will not be increased
    virtual void ToggleTimeFlow(bool enabled);

	UPROPERTY(BlueprintAssignable)
	FDifficultyIncreased OnDifficultyIncreased;

	UFUNCTION(BlueprintCallable)
	float GetDifficultyCoefficient() const;
	
	UFUNCTION(BlueprintCallable)
	int SetStageCount(const int Count) { return StageCompleted = Count; };
	
	UFUNCTION(BlueprintCallable)
	int GetStageCount() const { return StageCompleted; };

	UFUNCTION(BlueprintCallable)
	float GetTime() const { return Time; };
	UFUNCTION(BlueprintCallable)
	FString GetTimeInString() const;

	UFUNCTION()
	void CalculateDifficulty();
protected:
	virtual TStatId GetStatId() const override;
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Difficulty", meta = (AllowPrivate))
	//Used to pause increasing difficulty when player is in tavern
	bool bTimeFlowEnabled = false;

	//Main difficulty multiplier. scales with time
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Difficulty", meta = (AllowPrivate))
	float DifficultyCoefficient = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Difficulty", meta = (AllowPrivate))
	//float to store time passed
	float Time = 0;

	UPROPERTY()
	//Time factor used to calculate difficulty
	float TimeFactor = 0.0506;

	UPROPERTY()
	//Factor used to scale difficulty
	float StageFactor = 1.15f;

	UPROPERTY()
	int StageCompleted = 0;
private:
	//variable to track if the difficulty has changed (one minute passed)
	float LastTimeInMinutes = 0;

	UFUNCTION()
	void LogDebugCoefficients();
};
