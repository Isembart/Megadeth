// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MegadethEnemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MEGADETH_MegadethEnemy_generated_h
#error "MegadethEnemy.generated.h already included, missing '#pragma once' in MegadethEnemy.h"
#endif
#define MEGADETH_MegadethEnemy_generated_h

#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethEnemy_h_12_DELEGATE \
MEGADETH_API void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath);


#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethEnemy_h_17_SPARSE_DATA
#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethEnemy_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethEnemy_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethEnemy_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ScaleStats_Implementation(float DifficultyCoefficient); \
 \
	DECLARE_FUNCTION(execScaleStats); \
	DECLARE_FUNCTION(execDie);


#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethEnemy_h_17_ACCESSORS
#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethEnemy_h_17_CALLBACK_WRAPPERS
#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethEnemy_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMegadethEnemy(); \
	friend struct Z_Construct_UClass_AMegadethEnemy_Statics; \
public: \
	DECLARE_CLASS(AMegadethEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Megadeth"), NO_API) \
	DECLARE_SERIALIZER(AMegadethEnemy)


#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethEnemy_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMegadethEnemy(AMegadethEnemy&&); \
	NO_API AMegadethEnemy(const AMegadethEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMegadethEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMegadethEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMegadethEnemy) \
	NO_API virtual ~AMegadethEnemy();


#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethEnemy_h_14_PROLOG
#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethEnemy_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethEnemy_h_17_SPARSE_DATA \
	FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethEnemy_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethEnemy_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethEnemy_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethEnemy_h_17_ACCESSORS \
	FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethEnemy_h_17_CALLBACK_WRAPPERS \
	FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethEnemy_h_17_INCLASS_NO_PURE_DECLS \
	FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethEnemy_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEGADETH_API UClass* StaticClass<class AMegadethEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
