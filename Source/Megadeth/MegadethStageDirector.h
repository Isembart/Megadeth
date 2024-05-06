// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MegadethStageDirector.generated.h"

UCLASS()


class MEGADETH_API AMegadethStageDirector : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMegadethStageDirector();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Difficulty", meta = (AllowPrivateAccess = "true"))
	float EnemyCredits = 100;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Difficulty", meta = (AllowPrivate))
	float InteractableCredits = 100;

	UPROPERTY(BlueprintReadOnly, Category="Difficulty", meta = (AllowPrivate))
	//Difficulty coefficient. Not writeable. Only accessible here to avoid reaching to subsystem for it
	float DifficultyCoefficient;
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UDataTable> EnemyTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UDataTable> InteractableTable;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<AActor> InteractableClass;

	UFUNCTION(BlueprintCallable)
	void UpdateDifficulty();
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
};
