// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MegadethCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMegadethAbilityData;
#ifdef MEGADETH_MegadethCharacter_generated_h
#error "MegadethCharacter.generated.h already included, missing '#pragma once' in MegadethCharacter.h"
#endif
#define MEGADETH_MegadethCharacter_generated_h

#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethCharacter_h_12_DELEGATE \
MEGADETH_API void FPlayerDeath_DelegateWrapper(const FMulticastScriptDelegate& PlayerDeath);


#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethCharacter_h_19_SPARSE_DATA
#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethCharacter_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethCharacter_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAbilityData); \
	DECLARE_FUNCTION(execInvokeAutoAttack); \
	DECLARE_FUNCTION(execInvokeAbility);


#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethCharacter_h_19_ACCESSORS
#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethCharacter_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMegadethCharacter(); \
	friend struct Z_Construct_UClass_AMegadethCharacter_Statics; \
public: \
	DECLARE_CLASS(AMegadethCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Megadeth"), NO_API) \
	DECLARE_SERIALIZER(AMegadethCharacter)


#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMegadethCharacter(AMegadethCharacter&&); \
	NO_API AMegadethCharacter(const AMegadethCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMegadethCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMegadethCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMegadethCharacter) \
	NO_API virtual ~AMegadethCharacter();


#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethCharacter_h_16_PROLOG
#define FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethCharacter_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethCharacter_h_19_SPARSE_DATA \
	FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethCharacter_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethCharacter_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethCharacter_h_19_ACCESSORS \
	FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethCharacter_h_19_INCLASS_NO_PURE_DECLS \
	FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEGADETH_API UClass* StaticClass<class AMegadethCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
