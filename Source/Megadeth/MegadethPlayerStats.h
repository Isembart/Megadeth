#pragma once

#include "CoreMinimal.h"

#include "MegadethPlayerStats.generated.h"
class UImage;
/** Please add a struct description */
USTRUCT(BlueprintType)
struct FMegadethPlayerStats : public FTableRowBase
{
	GENERATED_BODY()
	/** Please add a variable description */
	// UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(DisplayName="AbilityName", MakeStructureDefaultValue="Ability"))
	// FName AbilityName = "Ability";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats")
	double BaseHealth = 80;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category="Stats")
	double Health = BaseHealth;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category="Stats")
	double MaxHealth = BaseHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats")
	double BaseHealthRegen = 5;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category="Stats")
	double HealthRegen = BaseHealthRegen;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats")
	double TimeToRegen = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats")
	double BaseDamage = 12;
	
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category="Stats")
	double Damage = BaseDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats")
	double BaseCritChance = 1;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats")
	double CritChance = BaseCritChance;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats")
	int Level = 1;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats", meta = (AllowPrivateAccess = "true"))
	int Gold = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats", meta = (AllowPrivateAccess = "true"))
	int XP = 0;

};
