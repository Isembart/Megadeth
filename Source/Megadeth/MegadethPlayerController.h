// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "MegadethPlayerController.generated.h"

/** Forward declaration to improve compiling times */
class UNiagaraSystem;
class UInputMappingContext;
class UInputAction;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS()
class AMegadethPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AMegadethPlayerController();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	TEnumAsByte<ETraceTypeQuery> PlayerAimTraceTypeQuery;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	float CameraAngleAimCompensation = 60;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	float RotationInterpolation = 500;
	/** FX Class that we will spawn when clicking */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UNiagaraSystem* FXCursor;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;
	
	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* SetDestinationClickAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* MoveAction;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* MouseMoveAction;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* ScrollAction;
	
	// Abilities
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* AutoAttackAction;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* Ability1Action1;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* Ability1Action2;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* Ability1Action3;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* Ability1Action4;

	UPROPERTY(EditAnywhere)
	float CameraZoomSpeed;
	
	UPROPERTY(EditAnywhere)
	double MinPitch;
	UPROPERTY(EditAnywhere)
	double MaxPitch;

	// UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	// FRotator RotationToMouse;

	virtual void Tick(float DeltaTime);
protected:
	/** True if the controlled character should navigate to the mouse cursor. */
	uint32 bMoveToMouseCursor : 1;

	virtual void SetupInputComponent() override;
	
	// To add mapping context
	virtual void BeginPlay();


	/** Input handlers for SetDestination action. */
	void OnInputStarted();
	void OnSetDestinationTriggered();
	void OnSetDestinationReleased();
	void OnTouchTriggered();
	void OnTouchReleased();

	void OnMovement(const FInputActionValue& Value);
	void OnMouseMovement(const FInputActionValue& Value);
	void OnScroll(const FInputActionValue& Value);

	//This contains a shit ton of redundancy. But using one input action beeing a 3d vector and then reading its coordinates is so conterintuitive for me.
	//I dont know how to bind a function with an argument to IA.
	//Bcs of that. heres many functions doing exactly the same :D
	void InvokeAbility1();
	void InvokeAbility2();
	void InvokeAbility3();
	void InvokeAbility4();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void AutoAttack();

	UFUNCTION(BlueprintCallable)
	void OrientPlayerTowardsCursor();
private:
	FVector CachedDestination;
	class AMegadethCharacter* character;

	bool bIsTouch; // Is it a touch device
	float FollowTime; // For how long it has been pressed


};


