// Fill out your copyright notice in the Description page of Project Settings.


#include "MegadethStageDirector.h"

#include "MegadethDifficultySubsystem.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
AMegadethStageDirector::AMegadethStageDirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMegadethStageDirector::BeginPlay()
{
	Super::BeginPlay();
}



// Called every frame
void AMegadethStageDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMegadethStageDirector::UpdateDifficulty()
{
	DifficultyCoefficient = GetWorld()->GetSubsystem<UMegadethDifficultySubsystem>()->GetDifficultyCoefficient();
	EnemyCredits = 100 + UKismetMathLibrary::Loge(DifficultyCoefficient);
	InteractableCredits = 100 + UKismetMathLibrary::Loge(DifficultyCoefficient);
}
