// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MegadethCombatDirector.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSpawnedWave);

UCLASS()
class MEGADETH_API AMegadethCombatDirector : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMegadethCombatDirector();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintAssignable)
	FSpawnedWave OnSpawnedWave;
	
	UPROPERTY(BlueprintAssignable)
	FSpawnedWave OnSpawnCarrier;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Difficulty", meta = (AllowPrivate))
	//If true, the system is currently spawning enemies and manages waves
	bool bSpawning = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Difficulty", meta = (AllowPrivate))
	//credits used to spawn different enemies
	float EnemyCredits = 0;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Difficulty", meta = (AllowPrivate))
	//Credits per second. is calculated with difficulty coefficient
	float CreditsPerSecond = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Difficulty", meta = (AllowPrivate))
	//Static multiplier to change game feel, mainly used for testing. will not be calculated
	float CreditsMultiplier = 2;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Difficulty", meta = (AllowPrivate));
	//Table containing enemy waves. Will be filled in blueprint classes
	class UDataTable* EnemyWaveTable;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Difficulty", meta = (AllowPrivate))
	//Chance of spawning portal carrier enemy. Increases with time. Resets after spawning carrier and resets per stage
	float CarrierSpawnChance = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Difficulty", meta = (AllowPrivate))
	//float to store time passed per stage used to calculate carrier spawn chance per stage
	float TimePerStage = 0;
	
	UPROPERTY(BlueprintReadOnly, Category="Difficulty", meta = (AllowPrivate))
	//Difficulty coefficient. Not writeable. Only accessible here to avoid reaching to subsystem for it
	float DifficultyCoefficient;
	
	UFUNCTION()
	void OnEnteredTavern();
	
	UFUNCTION()
	void OnEnteredStage();
private:
	//Delay between spawning waves
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Difficulty", meta = (AllowPrivateAccess = true))
	float RoundDelay = 1;

	UFUNCTION()
	void UpdateDifficulty();

};
