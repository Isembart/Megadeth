// Copyright Epic Games, Inc. All Rights Reserved.

#include "MegadethGameMode.h"
#include "MegadethPlayerController.h"
#include "MegadethCharacter.h"
#include "Blueprint/UserWidget.h"
#include "UObject/ConstructorHelpers.h"

AMegadethGameMode::AMegadethGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AMegadethPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}

void AMegadethGameMode::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp,Warning,TEXT("GameMode BeginPlay"));
		UE_LOG(LogTemp, Warning, TEXT("HUDWidget is not null"));
		//getplayercontroller
		AMegadethPlayerController* MegadethPlayerController = Cast<AMegadethPlayerController>(GetWorld()->GetFirstPlayerController());
		HUDWidgetInstance = CreateWidget<UUserWidget>(MegadethPlayerController, HUDWidget);
			
		if(HUDWidgetInstance != nullptr)
		{
			UE_LOG(LogTemp, Warning, TEXT("INSTANCECREATED"));
			HUDWidgetInstance->AddToViewport();
		}

}



