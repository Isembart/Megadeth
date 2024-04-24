// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

DECLARE_LOG_CATEGORY_EXTERN(LogMegadeth, Log, All);

#define PRINT_FLOAT_ON_SCREEN(FloatValue)                       \
do {                                                         \
GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::White, \
FString::Printf(TEXT("%f"), FloatValue)); \
} while (false)