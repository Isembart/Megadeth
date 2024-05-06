// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "MegadethAbilityData.h"
#include "MegadethPlayerStats.h"
#include "GameFramework/Character.h"
#include "Containers/Array.h"

#include "MegadethCharacter.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerDeath);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerGoldChange);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerHpChangeSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerLeveupSignature);
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

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FPlayerLeveupSignature LevelUp;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Stats")
	FMegadethPlayerStats Stats;
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

	int previousLevel = 1;
	
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category="Stats", meta = (AllowPrivateAccess = "true"))
	double RemainingTimeToRegen = Stats.TimeToRegen;
};

