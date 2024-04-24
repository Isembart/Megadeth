// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Megadeth/MegadethCombatDirector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMegadethCombatDirector() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	MEGADETH_API UClass* Z_Construct_UClass_AMegadethCombatDirector();
	MEGADETH_API UClass* Z_Construct_UClass_AMegadethCombatDirector_NoRegister();
	MEGADETH_API UFunction* Z_Construct_UDelegateFunction_Megadeth_SpawnedWave__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Megadeth();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Megadeth_SpawnedWave__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Megadeth_SpawnedWave__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MegadethCombatDirector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Megadeth_SpawnedWave__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Megadeth, nullptr, "SpawnedWave__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Megadeth_SpawnedWave__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Megadeth_SpawnedWave__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_Megadeth_SpawnedWave__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Megadeth_SpawnedWave__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSpawnedWave_DelegateWrapper(const FMulticastScriptDelegate& SpawnedWave)
{
	SpawnedWave.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(AMegadethCombatDirector::execUpdateDifficulty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDifficulty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMegadethCombatDirector::execOnEnteredStage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnteredStage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMegadethCombatDirector::execOnEnteredTavern)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnteredTavern();
		P_NATIVE_END;
	}
	void AMegadethCombatDirector::StaticRegisterNativesAMegadethCombatDirector()
	{
		UClass* Class = AMegadethCombatDirector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEnteredStage", &AMegadethCombatDirector::execOnEnteredStage },
			{ "OnEnteredTavern", &AMegadethCombatDirector::execOnEnteredTavern },
			{ "UpdateDifficulty", &AMegadethCombatDirector::execUpdateDifficulty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMegadethCombatDirector_OnEnteredStage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMegadethCombatDirector_OnEnteredStage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MegadethCombatDirector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMegadethCombatDirector_OnEnteredStage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMegadethCombatDirector, nullptr, "OnEnteredStage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMegadethCombatDirector_OnEnteredStage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMegadethCombatDirector_OnEnteredStage_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMegadethCombatDirector_OnEnteredStage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMegadethCombatDirector_OnEnteredStage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMegadethCombatDirector_OnEnteredTavern_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMegadethCombatDirector_OnEnteredTavern_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MegadethCombatDirector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMegadethCombatDirector_OnEnteredTavern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMegadethCombatDirector, nullptr, "OnEnteredTavern", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMegadethCombatDirector_OnEnteredTavern_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMegadethCombatDirector_OnEnteredTavern_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMegadethCombatDirector_OnEnteredTavern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMegadethCombatDirector_OnEnteredTavern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMegadethCombatDirector_UpdateDifficulty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMegadethCombatDirector_UpdateDifficulty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MegadethCombatDirector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMegadethCombatDirector_UpdateDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMegadethCombatDirector, nullptr, "UpdateDifficulty", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMegadethCombatDirector_UpdateDifficulty_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMegadethCombatDirector_UpdateDifficulty_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMegadethCombatDirector_UpdateDifficulty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMegadethCombatDirector_UpdateDifficulty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMegadethCombatDirector);
	UClass* Z_Construct_UClass_AMegadethCombatDirector_NoRegister()
	{
		return AMegadethCombatDirector::StaticClass();
	}
	struct Z_Construct_UClass_AMegadethCombatDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSpawnedWave_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpawnedWave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSpawnCarrier_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpawnCarrier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpawning_MetaData[];
#endif
		static void NewProp_bSpawning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyCredits_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnemyCredits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreditsPerSecond_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CreditsPerSecond;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreditsMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CreditsMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenRounds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenRounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyWaveTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyWaveTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CarrierSpawnChance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CarrierSpawnChance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimePerStage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimePerStage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DifficultyCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DifficultyCoefficient;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMegadethCombatDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Megadeth,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethCombatDirector_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMegadethCombatDirector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMegadethCombatDirector_OnEnteredStage, "OnEnteredStage" }, // 2374852172
		{ &Z_Construct_UFunction_AMegadethCombatDirector_OnEnteredTavern, "OnEnteredTavern" }, // 2667944199
		{ &Z_Construct_UFunction_AMegadethCombatDirector_UpdateDifficulty, "UpdateDifficulty" }, // 269473886
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethCombatDirector_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethCombatDirector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MegadethCombatDirector.h" },
		{ "ModuleRelativePath", "MegadethCombatDirector.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_OnSpawnedWave_MetaData[] = {
		{ "ModuleRelativePath", "MegadethCombatDirector.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_OnSpawnedWave = { "OnSpawnedWave", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethCombatDirector, OnSpawnedWave), Z_Construct_UDelegateFunction_Megadeth_SpawnedWave__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_OnSpawnedWave_MetaData), Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_OnSpawnedWave_MetaData) }; // 1577117002
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_OnSpawnCarrier_MetaData[] = {
		{ "ModuleRelativePath", "MegadethCombatDirector.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_OnSpawnCarrier = { "OnSpawnCarrier", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethCombatDirector, OnSpawnCarrier), Z_Construct_UDelegateFunction_Megadeth_SpawnedWave__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_OnSpawnCarrier_MetaData), Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_OnSpawnCarrier_MetaData) }; // 1577117002
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_bSpawning_MetaData[] = {
		{ "AllowPrivate", "" },
		{ "Category", "Difficulty" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//If true, the system is currently spawning enemies and manages waves\n" },
#endif
		{ "ModuleRelativePath", "MegadethCombatDirector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the system is currently spawning enemies and manages waves" },
#endif
	};
#endif
	void Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_bSpawning_SetBit(void* Obj)
	{
		((AMegadethCombatDirector*)Obj)->bSpawning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_bSpawning = { "bSpawning", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMegadethCombatDirector), &Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_bSpawning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_bSpawning_MetaData), Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_bSpawning_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_EnemyCredits_MetaData[] = {
		{ "AllowPrivate", "" },
		{ "Category", "Difficulty" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//credits used to spawn different enemies\n" },
#endif
		{ "ModuleRelativePath", "MegadethCombatDirector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "credits used to spawn different enemies" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_EnemyCredits = { "EnemyCredits", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethCombatDirector, EnemyCredits), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_EnemyCredits_MetaData), Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_EnemyCredits_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_CreditsPerSecond_MetaData[] = {
		{ "AllowPrivate", "" },
		{ "Category", "Difficulty" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Credits per second. is calculated with difficulty coefficient\n" },
#endif
		{ "ModuleRelativePath", "MegadethCombatDirector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Credits per second. is calculated with difficulty coefficient" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_CreditsPerSecond = { "CreditsPerSecond", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethCombatDirector, CreditsPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_CreditsPerSecond_MetaData), Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_CreditsPerSecond_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_CreditsMultiplier_MetaData[] = {
		{ "AllowPrivate", "" },
		{ "Category", "Difficulty" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Static multiplier to change game feel, mainly used for testing. will not be calculated\n" },
#endif
		{ "ModuleRelativePath", "MegadethCombatDirector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static multiplier to change game feel, mainly used for testing. will not be calculated" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_CreditsMultiplier = { "CreditsMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethCombatDirector, CreditsMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_CreditsMultiplier_MetaData), Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_CreditsMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_TimeBetweenRounds_MetaData[] = {
		{ "AllowPrivate", "" },
		{ "Category", "Difficulty" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Time between spawning waves\n" },
#endif
		{ "ModuleRelativePath", "MegadethCombatDirector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time between spawning waves" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_TimeBetweenRounds = { "TimeBetweenRounds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethCombatDirector, TimeBetweenRounds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_TimeBetweenRounds_MetaData), Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_TimeBetweenRounds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_EnemyWaveTable_MetaData[] = {
		{ "AllowPrivate", "" },
		{ "Category", "Difficulty" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Table containing enemy waves. Will be filled in blueprint classes\n" },
#endif
		{ "ModuleRelativePath", "MegadethCombatDirector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Table containing enemy waves. Will be filled in blueprint classes" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_EnemyWaveTable = { "EnemyWaveTable", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethCombatDirector, EnemyWaveTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_EnemyWaveTable_MetaData), Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_EnemyWaveTable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_CarrierSpawnChance_MetaData[] = {
		{ "AllowPrivate", "" },
		{ "Category", "Difficulty" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Chance of spawning portal carrier enemy. Increases with time. Resets after spawning carrier and resets per stage\n" },
#endif
		{ "ModuleRelativePath", "MegadethCombatDirector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chance of spawning portal carrier enemy. Increases with time. Resets after spawning carrier and resets per stage" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_CarrierSpawnChance = { "CarrierSpawnChance", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethCombatDirector, CarrierSpawnChance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_CarrierSpawnChance_MetaData), Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_CarrierSpawnChance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_TimePerStage_MetaData[] = {
		{ "AllowPrivate", "" },
		{ "Category", "Difficulty" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//float to store time passed per stage used to calculate carrier spawn chance per stage\n" },
#endif
		{ "ModuleRelativePath", "MegadethCombatDirector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "float to store time passed per stage used to calculate carrier spawn chance per stage" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_TimePerStage = { "TimePerStage", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethCombatDirector, TimePerStage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_TimePerStage_MetaData), Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_TimePerStage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_DifficultyCoefficient_MetaData[] = {
		{ "AllowPrivate", "" },
		{ "Category", "Difficulty" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Difficulty coefficient. Not writeable. Only accessible here to avoid reaching to subsystem for it\n" },
#endif
		{ "ModuleRelativePath", "MegadethCombatDirector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Difficulty coefficient. Not writeable. Only accessible here to avoid reaching to subsystem for it" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_DifficultyCoefficient = { "DifficultyCoefficient", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethCombatDirector, DifficultyCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_DifficultyCoefficient_MetaData), Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_DifficultyCoefficient_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMegadethCombatDirector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_OnSpawnedWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_OnSpawnCarrier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_bSpawning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_EnemyCredits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_CreditsPerSecond,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_CreditsMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_TimeBetweenRounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_EnemyWaveTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_CarrierSpawnChance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_TimePerStage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethCombatDirector_Statics::NewProp_DifficultyCoefficient,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMegadethCombatDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMegadethCombatDirector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMegadethCombatDirector_Statics::ClassParams = {
		&AMegadethCombatDirector::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMegadethCombatDirector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethCombatDirector_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethCombatDirector_Statics::Class_MetaDataParams), Z_Construct_UClass_AMegadethCombatDirector_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethCombatDirector_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMegadethCombatDirector()
	{
		if (!Z_Registration_Info_UClass_AMegadethCombatDirector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMegadethCombatDirector.OuterSingleton, Z_Construct_UClass_AMegadethCombatDirector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMegadethCombatDirector.OuterSingleton;
	}
	template<> MEGADETH_API UClass* StaticClass<AMegadethCombatDirector>()
	{
		return AMegadethCombatDirector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMegadethCombatDirector);
	AMegadethCombatDirector::~AMegadethCombatDirector() {}
	struct Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethCombatDirector_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethCombatDirector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMegadethCombatDirector, AMegadethCombatDirector::StaticClass, TEXT("AMegadethCombatDirector"), &Z_Registration_Info_UClass_AMegadethCombatDirector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMegadethCombatDirector), 4000895704U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethCombatDirector_h_55479972(TEXT("/Script/Megadeth"),
		Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethCombatDirector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethCombatDirector_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
