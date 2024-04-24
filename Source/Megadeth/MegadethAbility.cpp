// Fill out your copyright notice in the Description page of Project Settings.


#include "MegadethAbility.h"

#include "MegadethCharacter.h"

// Sets default values
AMegadethAbility::AMegadethAbility()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMegadethAbility::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMegadethAbility::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// void AMegadethAbility::InvokeAbility_Implementation(AMegadethCharacter* Character)
// {
// 	FString AbilityName = GetName();
// 	FString invokerName = Character->GetName();
// 	UE_LOG(LogTemp, Warning, TEXT("Ability %s invoked by %s"), *AbilityName, *invokerName);
// 	Destroy();
// }


