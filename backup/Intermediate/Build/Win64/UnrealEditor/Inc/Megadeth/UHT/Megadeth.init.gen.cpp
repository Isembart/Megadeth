// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMegadeth_init() {}
	MEGADETH_API UFunction* Z_Construct_UDelegateFunction_Megadeth_DifficultyIncreased__DelegateSignature();
	MEGADETH_API UFunction* Z_Construct_UDelegateFunction_Megadeth_EnteredStage__DelegateSignature();
	MEGADETH_API UFunction* Z_Construct_UDelegateFunction_Megadeth_EnteredTavern__DelegateSignature();
	MEGADETH_API UFunction* Z_Construct_UDelegateFunction_Megadeth_OnDeath__DelegateSignature();
	MEGADETH_API UFunction* Z_Construct_UDelegateFunction_Megadeth_PlayerDeath__DelegateSignature();
	MEGADETH_API UFunction* Z_Construct_UDelegateFunction_Megadeth_SpawnedWave__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Megadeth;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Megadeth()
	{
		if (!Z_Registration_Info_UPackage__Script_Megadeth.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Megadeth_DifficultyIncreased__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Megadeth_EnteredStage__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Megadeth_EnteredTavern__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Megadeth_OnDeath__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Megadeth_PlayerDeath__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Megadeth_SpawnedWave__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Megadeth",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC6974608,
				0x254796B1,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Megadeth.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Megadeth.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Megadeth(Z_Construct_UPackage__Script_Megadeth, TEXT("/Script/Megadeth"), Z_Registration_Info_UPackage__Script_Megadeth, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC6974608, 0x254796B1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
