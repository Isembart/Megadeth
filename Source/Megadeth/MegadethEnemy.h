// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "MegadethEnemy.generated.h"

class AMegadethCharacter;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeath);

UCLASS()
class MEGADETH_API AMegadethEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMegadethEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	//Function that destroys enemy actor. It is in separate function to be able to bind it to the OnDeath delegate
	void Die();

	virtual float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
	
	//Function delegate to broadcast when the enemy dies
	UPROPERTY(BlueprintAssignable)
	FOnDeath OnDeath;

	//Function to scale base stats with difficulty coefficient.
	//Only provide the coefficient, not (1 + coefficient)!
	//This function is blueprint native, so it can be overridden in blueprint classes
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Stats")
	void ScaleStats(float DifficultyCoefficient);
private:	
	//these variables serves as base values but will be multiplied according to difficulty coefficient
	//they can be used in game but their default values are used as base
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats", meta = (AllowPrivateAccess = "true"))
	double Health = 80;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats", meta = (AllowPrivateAccess = "true"))
	double MaxHealth = 80;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats", meta = (AllowPrivateAccess = "true"))
	double MovementSpeed = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats", meta = (AllowPrivateAccess = "true"))
	double Damage = 12;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats", meta = (AllowPrivateAccess = "true"))
	int Level = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats", meta = (AllowPrivateAccess = "true"))
	double XpReward = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats", meta = (AllowPrivateAccess = "true"))
	double GoldReward = 1;
	
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category="Combat", meta = (AllowPrivateAccess = "true"))
	AMegadethCharacter* Player;
};
