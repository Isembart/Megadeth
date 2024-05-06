// Fill out your copyright notice in the Description page of Project Settings.


#include "MegadethCombatDirector.h"

#include "MegadethDifficultySubsystem.h"
#include "MegadethStageSubsystem.h"
#include "Math/UnitConversion.h"

// Sets default values
AMegadethCombatDirector::AMegadethCombatDirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMegadethCombatDirector::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetSubsystem<UMegadethDifficultySubsystem>()->OnDifficultyIncreased.AddUniqueDynamic(this, &AMegadethCombatDirector::UpdateDifficulty);
	UpdateDifficulty();


	//Bind to tavern and stage events
	GetWorld()->GetSubsystem<UMegadethStageSubsystem>()->EnteredTavern.AddUniqueDynamic(this, &AMegadethCombatDirector::OnEnteredTavern);
	GetWorld()->GetSubsystem<UMegadethStageSubsystem>()->EnteredStage.AddUniqueDynamic(this, &AMegadethCombatDirector::OnEnteredStage);

}

void AMegadethCombatDirector::OnEnteredTavern()
{
	bSpawning = false;
	TimePerStage = 0;
	EnemyCredits = 0;
}

void AMegadethCombatDirector::OnEnteredStage()
{
	bSpawning = true;
}

void AMegadethCombatDirector::UpdateDifficulty()
{
	DifficultyCoefficient = GetWorld()->GetSubsystem<UMegadethDifficultySubsystem>()->GetDifficultyCoefficient();
	UE_LOG(LogTemp, Warning, TEXT("CombatDirector: Difficulty updated to %f"), DifficultyCoefficient);
}

// Called every frame
void AMegadethCombatDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if(bSpawning)
	{
	
	TimePerStage += DeltaTime;

	CreditsPerSecond = CreditsMultiplier * (1 + 0.4 * DifficultyCoefficient);
	CarrierSpawnChance = 0.0506 * TimePerStage;
	
	EnemyCredits += CreditsPerSecond * DeltaTime;
		RoundDelay-= DeltaTime;
		if(RoundDelay <= 0)
		{
			if(rand()%100 < CarrierSpawnChance)
         	{
         		OnSpawnCarrier.Broadcast();
         		TimePerStage = 0;
         	}
			//Spawn enemies
			// RoundDelay = TimeBetweenRounds; //this will be handled in blueprints
			OnSpawnedWave.Broadcast();
		}
	}
}

