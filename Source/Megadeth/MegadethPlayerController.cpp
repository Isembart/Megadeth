// Copyright Epic Games, Inc. All Rights Reserved.

#include "MegadethPlayerController.h"
#include "GameFramework/Pawn.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "MegadethCharacter.h"
#include "Engine/World.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "Kismet/KismetMathLibrary.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

AMegadethPlayerController::AMegadethPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;
	CachedDestination = FVector::ZeroVector;
	FollowTime = 0.f;
}

void AMegadethPlayerController::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Add Input Mapping Context
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(DefaultMappingContext, 0);
	}
}

void AMegadethPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
	{
		// Setup mouse input events
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Started, this, &AMegadethPlayerController::OnInputStarted);
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Triggered, this, &AMegadethPlayerController::OnSetDestinationTriggered);
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Completed, this, &AMegadethPlayerController::OnSetDestinationReleased);
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Canceled, this, &AMegadethPlayerController::OnSetDestinationReleased);

		//Ability bindings
		EnhancedInputComponent->BindAction(Ability1Action1, ETriggerEvent::Triggered, this, &AMegadethPlayerController::InvokeAbility1);
		EnhancedInputComponent->BindAction(Ability1Action2, ETriggerEvent::Triggered, this, &AMegadethPlayerController::InvokeAbility2);
		EnhancedInputComponent->BindAction(Ability1Action3, ETriggerEvent::Triggered, this, &AMegadethPlayerController::InvokeAbility3);
		EnhancedInputComponent->BindAction(Ability1Action4, ETriggerEvent::Triggered, this, &AMegadethPlayerController::InvokeAbility4);

		//auto attack
		EnhancedInputComponent->BindAction(AutoAttackAction, ETriggerEvent::Triggered, this, &AMegadethPlayerController::AutoAttack);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void AMegadethPlayerController::OnInputStarted()
{
	StopMovement();
}

// Triggered every frame when the input is held down
void AMegadethPlayerController::OnSetDestinationTriggered()
{
	// We flag that the input is being pressed
	FollowTime += GetWorld()->GetDeltaSeconds();
	
	// We look for the location in the world where the player has pressed the input
	FHitResult Hit;
	bool bHitSuccessful = false;

	bHitSuccessful = GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, true, Hit);

	// If we hit a surface, cache the location
	if (bHitSuccessful)
	{
		CachedDestination = Hit.Location;
	}
	
	// Move towards mouse pointer or touch
	APawn* ControlledPawn = GetPawn();
	if (ControlledPawn != nullptr)
	{
		FVector WorldDirection = (CachedDestination - ControlledPawn->GetActorLocation()).GetSafeNormal();
		ControlledPawn->AddMovementInput(WorldDirection, 1.0, false);
	}
}

void AMegadethPlayerController::OnSetDestinationReleased()
{
	// If it was a short press
	// if (FollowTime <= ShortPressThreshold)
	// {
		// We move there and spawn some particles
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, CachedDestination);
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, FXCursor, CachedDestination, FRotator::ZeroRotator, FVector(1.f, 1.f, 1.f), true, true, ENCPoolMethod::None, true);
	// }
	FollowTime = 0.f;
}

void AMegadethPlayerController::InvokeAbility1()
{
	AMegadethCharacter* character = Cast<AMegadethCharacter>(GetPawn());
	if(character != nullptr)
	{
		OrientPlayerTowardsCursor();
		character->InvokeAbility(0);
	}
}

void AMegadethPlayerController::InvokeAbility2()
{
	AMegadethCharacter* character = Cast<AMegadethCharacter>(GetPawn());
	if(character != nullptr)
	{
		OrientPlayerTowardsCursor();
		character->InvokeAbility(1);
	}
}
void AMegadethPlayerController::InvokeAbility3()
{
	AMegadethCharacter* character = Cast<AMegadethCharacter>(GetPawn());
	if(character != nullptr)
	{
		OrientPlayerTowardsCursor();
		character->InvokeAbility(2);
	}
}
void AMegadethPlayerController::InvokeAbility4()
{
	AMegadethCharacter* character = Cast<AMegadethCharacter>(GetPawn());
	if(character != nullptr)
	{
		OrientPlayerTowardsCursor();
		character->InvokeAbility(3);
	}
}


void AMegadethPlayerController::AutoAttack_Implementation()
{
	if(AMegadethCharacter* character = Cast<AMegadethCharacter>(GetPawn()))
	{
		OrientPlayerTowardsCursor();
		// StopMovement();
		character->InvokeAutoAttack();
	}	
}

void AMegadethPlayerController::OrientPlayerTowardsCursor()
{
	if(AMegadethCharacter* character = Cast<AMegadethCharacter>(GetPawn()))
	{
		FHitResult HitResult;
		//TraceTypeQuery1 is PlayerAim
		bool bHit = GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery1, false, HitResult);
		if(bHit)
		{
			FVector HitLocation = HitResult.Location;
			//to compensate camera angle we subtract a value from X
			HitLocation.X -= CameraAngleAimCompensation;

			FRotator LookAtRotator = UKismetMathLibrary::FindLookAtRotation(character->GetActorLocation(), HitLocation);

			//we only want to rotate in Yaw (around Z)
			LookAtRotator.Pitch = 0;
			LookAtRotator.Roll = 0;
			
			// FRotator interpolatedRotation = FMath::RInterpConstantTo(character->GetActorRotation(), LookAtRotator, GetWorld()->GetDeltaSeconds(), RotationInterpolation);
			character->SetActorRotation(LookAtRotator);
		}
	}
}
