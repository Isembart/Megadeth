// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MegadethAbilityData.h"
#include "MegadethAbility.generated.h"

class AMegadethCharacter;

UCLASS()
class MEGADETH_API AMegadethAbility : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMegadethAbility();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Ability")
	FMegadethAbilityData AbilityData;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Ability")
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category="Ability")
	void InvokeAbility(AMegadethCharacter* Character, int Damage);

	UFUNCTION(BlueprintCallable)
	FMegadethAbilityData GetAbilityData() const{return AbilityData;};

};
