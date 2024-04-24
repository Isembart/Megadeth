// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MegadethDifficultySubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MEGADETH_MegadethDifficultySubsystem_generated_h
#error "MegadethDifficultySubsystem.generated.h already included, missing '#pragma once' in MegadethDifficultySubsystem.h"
#endif
#define MEGADETH_MegadethDifficultySubsystem_generated_h

#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethDifficultySubsystem_h_9_DELEGATE \
MEGADETH_API void FDifficultyIncreased_DelegateWrapper(const FMulticastScriptDelegate& DifficultyIncreased);


#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethDifficultySubsystem_h_16_SPARSE_DATA
#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethDifficultySubsystem_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethDifficultySubsystem_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethDifficultySubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLogDebugCoefficients); \
	DECLARE_FUNCTION(execGetStageCount); \
	DECLARE_FUNCTION(execSetStageCount); \
	DECLARE_FUNCTION(execGetDifficultyCoefficient); \
	DECLARE_FUNCTION(execToggleTimeFlow);


#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethDifficultySubsystem_h_16_ACCESSORS
#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethDifficultySubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMegadethDifficultySubsystem(); \
	friend struct Z_Construct_UClass_UMegadethDifficultySubsystem_Statics; \
public: \
	DECLARE_CLASS(UMegadethDifficultySubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Megadeth"), NO_API) \
	DECLARE_SERIALIZER(UMegadethDifficultySubsystem)


#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethDifficultySubsystem_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMegadethDifficultySubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMegadethDifficultySubsystem(UMegadethDifficultySubsystem&&); \
	NO_API UMegadethDifficultySubsystem(const UMegadethDifficultySubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMegadethDifficultySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMegadethDifficultySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMegadethDifficultySubsystem) \
	NO_API virtual ~UMegadethDifficultySubsystem();


#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethDifficultySubsystem_h_13_PROLOG
#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethDifficultySubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethDifficultySubsystem_h_16_SPARSE_DATA \
	FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethDifficultySubsystem_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethDifficultySubsystem_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethDifficultySubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethDifficultySubsystem_h_16_ACCESSORS \
	FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethDifficultySubsystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethDifficultySubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEGADETH_API UClass* StaticClass<class UMegadethDifficultySubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethDifficultySubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
