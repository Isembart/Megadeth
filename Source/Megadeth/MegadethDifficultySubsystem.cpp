// Fill out your copyright notice in the Description page of Project Settings.


#include "MegadethDifficultySubsystem.h"
#include "Megadeth.h"

void UMegadethDifficultySubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	// UE_LOG(LogMegadeth, Log, TEXT("Difficulty Subsystem Initialized"));

	//Order of these methods are important!
	//This delegate is called by stage subsystem whenever player enters new stage
	//In order to update all directors we call OnDifficultyIncreased but since DifficultyCoefficient is calculated
	//only in Tick() we need to recalculate it before broadcasting
	// OnDifficultyIncreased.AddUniqueDynamic(this,&UMegadethDifficultySubsystem::CalculateDifficultyWithoutBroadcasting);
	OnDifficultyIncreased.AddUniqueDynamic(this,&UMegadethDifficultySubsystem::LogDebugCoefficients);


	//first calculation
	CalculateDifficulty();
	OnDifficultyIncreased.Broadcast();
}

void UMegadethDifficultySubsystem::ToggleTimeFlow(bool enabled)
{
	bTimeFlowEnabled = enabled;
}

float UMegadethDifficultySubsystem::GetDifficultyCoefficient() const
{
	return DifficultyCoefficient;
}

FString UMegadethDifficultySubsystem::GetTimeInString() const
{
	int Minutes = Time/60;
	int Seconds = static_cast<int>(Time) % 60;
	FString TimeString = FString::Printf(TEXT("%02d:%02d"),Minutes,Seconds);
	// FString TimeString = FString::Printf(TEXT("%d:%d"),(int32)Time/60,(int32)Time%60);
	return TimeString;
}

TStatId UMegadethDifficultySubsystem::GetStatId() const
{
	// return Super::GetStatId();
	RETURN_QUICK_DECLARE_CYCLE_STAT(UMegadethDifficultySubsystem, STATGROUP_Tickables);
}


void UMegadethDifficultySubsystem::Deinitialize()
{
	Super::Deinitialize();
}

void UMegadethDifficultySubsystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(bTimeFlowEnabled)
	{
		Time += DeltaTime;
		CalculateDifficulty();
	}
}

void UMegadethDifficultySubsystem::LogDebugCoefficients()
{
	UE_LOG(LogTemp,Warning,TEXT("DiffSubsystem: Difficulty increased to %f, TimeInMinutes: %d, StageFactor: %f"),DifficultyCoefficient,(int32)Time/60,FMath::Pow(1.15,StageCompleted));
}

void UMegadethDifficultySubsystem::CalculateDifficulty()
{
const int TimeInMinutes = Time / 45; //NOT TIME IN MINUTES!!!!

	DifficultyCoefficient = FMath::Pow(1.15,StageCompleted) * (TimeFactor * TimeInMinutes+1);
	// PRINT_FLOAT_ON_SCREEN(DifficultyCoefficient);
	if(TimeInMinutes != LastTimeInMinutes)
	{
		OnDifficultyIncreased.Broadcast();
		// LogDebugCoefficients();
	}
	LastTimeInMinutes = TimeInMinutes;	
}



