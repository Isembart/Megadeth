#pragma once

#include "CoreMinimal.h"

#include "MegadethAbilityData.generated.h"
class UImage;
/** Please add a struct description */
USTRUCT(BlueprintType)
struct FMegadethAbilityData : public FTableRowBase
{
	GENERATED_BODY()
public:
	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(DisplayName="AbilityName", MakeStructureDefaultValue="Ability"))
	FName AbilityName = "Ability";

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(DisplayName="AbilityCooldown", MakeStructureDefaultValue="5.000000"))
	double AbilityCooldown;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(DisplayName="AbilityDamageMultiplier", MakeStructureDefaultValue="5.000000"))
	double AbilityDamage;
	
	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(DisplayName="AbilityCost", MakeStructureDefaultValue="0.000000"))
	double AbilityCost;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="AbilityDescription"))
	FText AbilityDescription;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="AbilitySplashArt"))
	TObjectPtr<UTexture2D> AbilitySplashArt;
};
