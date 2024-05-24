// Fill out your copyright notice in the Description page of Project Settings.


#include "MegadethEnemy.h"

#include "Megadeth.h"
#include "MegadethCharacter.h"

// Sets default values
AMegadethEnemy::AMegadethEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMegadethEnemy::BeginPlay()
{
	Super::BeginPlay();

	Player = Cast<AMegadethCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());

	OnDeath.AddDynamic(this, &AMegadethEnemy::Die);
}

// Called every frame
void AMegadethEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// if(Player)
	// {
	// 	FVector Direction = Player->GetActorLocation() - GetActorLocation();
	// 	Direction.Normalize();
	//
	// 	AddMovementInput(Direction, MovementSpeed, false);
	// }
}

// Called to bind functionality to input
void AMegadethEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
}

//Function that will be executed when enemy dies
void AMegadethEnemy::Die()
{
	if(Player)
	{
		Player->AddXp(XpReward);
		Player->AddGold(GoldReward);
	}
	
	Destroy();
}

float AMegadethEnemy::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator,
	AActor* DamageCauser)
{

	Health -= DamageAmount;
	
	//deathCheck
	if(Health <= 0)
	{
		OnDeath.Broadcast();
	}
	
	return Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	
}

void AMegadethEnemy::ScaleStats_Implementation(float DifficultyCoefficient)
{
	Level = 1 + (DifficultyCoefficient - 1)/0.2;
	
	Health = Health + Health/3 * (Level -1);
	MaxHealth = Health;

	Damage = Damage + Damage/3 * (Level -1);
	
	XpReward = DifficultyCoefficient * XpReward;
	GoldReward = DifficultyCoefficient * GoldReward;
}

