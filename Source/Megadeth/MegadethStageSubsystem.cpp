// Fill out your copyright notice in the Description page of Project Settings.


#include "MegadethStageSubsystem.h"

#include "MegadethDifficultySubsystem.h"
#include "Kismet/GameplayStatics.h"

void UMegadethStageSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UMegadethStageSubsystem::Deinitialize()
{
	Super::Deinitialize();
}

void UMegadethStageSubsystem::OnEnteredTavern()
{
	EnteredTavern.Broadcast();
	TArray<AActor*> Enemies;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "Enemy", Enemies);

	for(AActor* enemy : Enemies)
	{
		enemy->Destroy();	
	}

	//Delete all portals on level
	TArray<AActor*> Portals;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "FieldPortal", Portals);

	for(AActor* portal : Portals)
	{
		portal->Destroy();
	}
	
	//Delete all spawned upgrade pedestals on level
	TArray<AActor*> UPedestals;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "FieldUpgradePickup", UPedestals);

	for(AActor* pedestal : UPedestals)
	{
		pedestal->Destroy();
	}

	//Destroy mines
	TArray<AActor*> Mines;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "Mine", UPedestals);

	for(AActor* mine : Mines)
	{
		mine->Destroy();
	}
	
	UMegadethDifficultySubsystem* DifficultySubsystem = GetWorld()->GetSubsystem<UMegadethDifficultySubsystem>();
	DifficultySubsystem->ToggleTimeFlow(false);
	
	
	UE_LOG(LogTemp, Warning, TEXT("Entered Tavern after Stage: %d"), DifficultySubsystem->GetStageCount());

	//Increase the stageCount to make Going in the stage a bit faster
	DifficultySubsystem->SetStageCount(DifficultySubsystem->GetStageCount() + 1);
}

void UMegadethStageSubsystem::OnEnteredStage()
{
	UMegadethDifficultySubsystem* DifficultySubsystem = GetWorld()->GetSubsystem<UMegadethDifficultySubsystem>();
	DifficultySubsystem->ToggleTimeFlow(true);
	EnteredStage.Broadcast();
	
	//Since i don't know how to bind two subsystems together because one can still be uninitalized while the other
	//tries to bind. I will just broadcast this event to make sure all combat directors udpates their coefficient.
	//Better way would be to let DIfficultySubsystem to broadcast it but i don't know how to bind it with StageSubsystem
	DifficultySubsystem->CalculateDifficulty();
	DifficultySubsystem->OnDifficultyIncreased.Broadcast();

	UE_LOG(LogTemp, Warning, TEXT("Entered new stage, Stage count: %d"), DifficultySubsystem->GetStageCount());
	
}
