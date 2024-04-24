// Copyright Epic Games, Inc. All Rights Reserved.

#include "MegadethCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/DecalComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Materials/Material.h"
#include "Engine/World.h"
#include "MegadethAbility.h"
#include "Kismet/KismetMathLibrary.h"


AMegadethCharacter::AMegadethCharacter()
{
	// Set size for player capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate character to camera direction
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate character to moving direction
	GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when character does
	CameraBoom->TargetArmLength = 800.f;
	CameraBoom->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	TopDownCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	TopDownCameraComponent->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Activate ticking in order to update the cursor every frame.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	
}

void AMegadethCharacter::BeginPlay()
{
	Super::BeginPlay();
	iCooldowns.Init(0, Skills.Num());
}

void AMegadethCharacter::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

	//Cooldowns
	for(int i = 0; i < iCooldowns.Num(); i++)
    {
		if(iCooldowns[i] >= 0)
		{
			iCooldowns[i] -= DeltaSeconds;
		}
    }
	if(AACooldown >= 0)
	{
		AACooldown -= DeltaSeconds;
	}
	
	//Regen
	if(RemainingTimeToRegen > 0)
	{
		RemainingTimeToRegen -= DeltaSeconds;
	}
	else
	{
		Health += BaseHealthRegen * DeltaSeconds;
		if(Health > MaxHealth)
		{
			Health = MaxHealth;
		}
		PlayerHpChange.Broadcast();
	}
}

void AMegadethCharacter::InvokeAbility(const int AbilityIndex)
{
	// UE_LOG(LogTemp, Warning, TEXT("Controller invoked my ability! %d"), AbilityIndex);
	if(AbilityIndex >= Skills.Num()) return; // Out of bounds
	//if(Skills[AbilityIndex] == nullptr) return; // No ability set // the abilities are static classes for now. I cannot check if they're null and They will need to be instantiated before using them

	if(iCooldowns[AbilityIndex] > 0)
	{
		//Implement cooldown action
		return;
	}

	if(AMegadethAbility* AbilityInstance = GetWorld()->SpawnActor<AMegadethAbility>(Skills[AbilityIndex]); AbilityInstance != nullptr)
	{
		iCooldowns[AbilityIndex] = Skills[AbilityIndex].GetDefaultObject()->AbilityData.AbilityCooldown;
		AbilityInstance->InvokeAbility(this, Damage);
	}
}

void AMegadethCharacter::InvokeAutoAttack()
{
	if(AACooldown > 0)
	{
		//Implement cooldown action
		return;
	}
	if(AMegadethAbility* AbilityInstance = GetWorld()->SpawnActor<AMegadethAbility>(AutoAttack); AbilityInstance != nullptr)
	{
		AACooldown = AutoAttack.GetDefaultObject()->AbilityData.AbilityCooldown;
		AbilityInstance->InvokeAbility(this, Damage);
	}
	
}

TArray<FMegadethAbilityData> AMegadethCharacter::GetAbilityData() const
{
	TArray<FMegadethAbilityData> Data;
	for (auto MegadethAbilityData : Skills)
	{
		Data.Add(MegadethAbilityData.GetDefaultObject()->AbilityData);
	}
	return Data;
}

float AMegadethCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator,
	AActor* DamageCauser)
{
	Health -= DamageAmount;
	RemainingTimeToRegen = TimeToRegen;
	PlayerHpChange.Broadcast();
	
	//deathCheck
	if(Health <= 0)
	{
		PlayerDeath.Broadcast();
	}
	
	return Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
}

void AMegadethCharacter::AddGold(int Amount)
{
	Gold+= Amount;
	PlayerGoldChange.Broadcast();
}

void AMegadethCharacter::AddXp(int Amount)
{
	XP += Amount;
	Level = UKismetMathLibrary::Log(1+0.0275*XP,1.55)+1;
	// PlayerXpChange.Broadcast(XP, Level);
	PlayerXpChange.Broadcast(XP, Level);

	if(previousLevel != Level)
	{
		//level up!
		previousLevel = Level;
		// LevelUp.Broadcast();

		MaxHealth +=  BaseHealth/3;
		Health +=  BaseHealth/3;
		if(Health > MaxHealth)
		{
			Health = MaxHealth;
		}
		Damage += BaseDamage/5;
	}
}


