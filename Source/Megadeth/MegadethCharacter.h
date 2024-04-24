// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "MegadethAbilityData.h"
#include "GameFramework/Character.h"
#include "Containers/Array.h"

#include "MegadethCharacter.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerDeath);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerGoldChange);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerHpChangeSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerXpChange, int32, TotalXP, int32, CurrentLevel);


class AMegadethAbility;

UCLASS(Blueprintable)
class AMegadethCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AMegadethCharacter();

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;
	virtual  void BeginPlay() override;

	/** Returns TopDownCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	UFUNCTION(BlueprintCallable)
	void InvokeAbility(int AbilityIndex);

	UFUNCTION(BlueprintCallable)
	void InvokeAutoAttack();

	UFUNCTION(BlueprintCallable)
	TArray<FMegadethAbilityData> GetAbilityData() const;
	
	virtual float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

	FPlayerDeath PlayerDeath;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Skills", meta = (AllowPrivateAccess = "true"))
	TArray<TSubclassOf<AMegadethAbility>> Skills;

	UFUNCTION(BlueprintCallable)
	void AddGold(int Amount);
	UFUNCTION(BlueprintCallable)
	void AddXp(int Amount);

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FPlayerGoldChange PlayerGoldChange;
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FPlayerXpChange PlayerXpChange;
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FPlayerHpChangeSignature PlayerHpChange;
	
private:
	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;


	UPROPERTY(EditDefaultsOnly, Category="Skills", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AMegadethAbility> AutoAttack;
	
	//Abilities
	//internal cooldowns
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Skills", meta = (AllowPrivateAccess = "true"))
	TArray<double> iCooldowns;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Skills", meta = (AllowPrivateAccess = "true"))
	double AACooldown = 0;

	//Stats
	//Base
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BaseStats", meta = (AllowPrivateAccess = "true"))
	double BaseHealth = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BaseStats", meta = (AllowPrivateAccess = "true"))
	double BaseDamage = 12;
	
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category="Stats", meta = (AllowPrivateAccess = "true"))
	double Health = BaseHealth;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category="Stats", meta = (AllowPrivateAccess = "true"))
	double MaxHealth = BaseHealth;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category="Stats", meta = (AllowPrivateAccess = "true"))
	double Damage = BaseDamage;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category="Stats", meta = (AllowPrivateAccess = "true"))
	int Level = 1;

	//private variable to track level ups
	int previousLevel = 1;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats", meta = (AllowPrivateAccess = "true"))
	int Gold = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats", meta = (AllowPrivateAccess = "true"))
	int XP = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats", meta = (AllowPrivateAccess = "true"))
	double BaseHealthRegen = 20;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats", meta = (AllowPrivateAccess = "true"))
	double HealthRegen = BaseHealthRegen;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats", meta = (AllowPrivateAccess = "true"))
	double TimeToRegen = 5;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category="Stats", meta = (AllowPrivateAccess = "true"))
	double RemainingTimeToRegen = TimeToRegen;
};

