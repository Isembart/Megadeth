// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Megadeth/MegadethEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMegadethEnemy() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	MEGADETH_API UClass* Z_Construct_UClass_AMegadethCharacter_NoRegister();
	MEGADETH_API UClass* Z_Construct_UClass_AMegadethEnemy();
	MEGADETH_API UClass* Z_Construct_UClass_AMegadethEnemy_NoRegister();
	MEGADETH_API UFunction* Z_Construct_UDelegateFunction_Megadeth_OnDeath__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Megadeth();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Megadeth_OnDeath__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Megadeth_OnDeath__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MegadethEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Megadeth_OnDeath__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Megadeth, nullptr, "OnDeath__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Megadeth_OnDeath__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Megadeth_OnDeath__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_Megadeth_OnDeath__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Megadeth_OnDeath__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath)
{
	OnDeath.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(AMegadethEnemy::execScaleStats)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DifficultyCoefficient);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScaleStats_Implementation(Z_Param_DifficultyCoefficient);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMegadethEnemy::execDie)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Die();
		P_NATIVE_END;
	}
	struct MegadethEnemy_eventScaleStats_Parms
	{
		float DifficultyCoefficient;
	};
	static FName NAME_AMegadethEnemy_ScaleStats = FName(TEXT("ScaleStats"));
	void AMegadethEnemy::ScaleStats(float DifficultyCoefficient)
	{
		MegadethEnemy_eventScaleStats_Parms Parms;
		Parms.DifficultyCoefficient=DifficultyCoefficient;
		ProcessEvent(FindFunctionChecked(NAME_AMegadethEnemy_ScaleStats),&Parms);
	}
	void AMegadethEnemy::StaticRegisterNativesAMegadethEnemy()
	{
		UClass* Class = AMegadethEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Die", &AMegadethEnemy::execDie },
			{ "ScaleStats", &AMegadethEnemy::execScaleStats },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMegadethEnemy_Die_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMegadethEnemy_Die_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Function that destroys enemy actor. It is in separate function to be able to bind it to the OnDeath delegate\n" },
#endif
		{ "ModuleRelativePath", "MegadethEnemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function that destroys enemy actor. It is in separate function to be able to bind it to the OnDeath delegate" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMegadethEnemy_Die_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMegadethEnemy, nullptr, "Die", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMegadethEnemy_Die_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMegadethEnemy_Die_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMegadethEnemy_Die()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMegadethEnemy_Die_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMegadethEnemy_ScaleStats_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DifficultyCoefficient;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMegadethEnemy_ScaleStats_Statics::NewProp_DifficultyCoefficient = { "DifficultyCoefficient", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MegadethEnemy_eventScaleStats_Parms, DifficultyCoefficient), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMegadethEnemy_ScaleStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMegadethEnemy_ScaleStats_Statics::NewProp_DifficultyCoefficient,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMegadethEnemy_ScaleStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Function to scale base stats with difficulty coefficient.\n//Only provide the coefficient, not (1 + coefficient)!\n//This function is blueprint native, so it can be overridden in blueprint classes\n" },
#endif
		{ "ModuleRelativePath", "MegadethEnemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to scale base stats with difficulty coefficient.\nOnly provide the coefficient, not (1 + coefficient)!\nThis function is blueprint native, so it can be overridden in blueprint classes" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMegadethEnemy_ScaleStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMegadethEnemy, nullptr, "ScaleStats", nullptr, nullptr, Z_Construct_UFunction_AMegadethEnemy_ScaleStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMegadethEnemy_ScaleStats_Statics::PropPointers), sizeof(MegadethEnemy_eventScaleStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMegadethEnemy_ScaleStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMegadethEnemy_ScaleStats_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMegadethEnemy_ScaleStats_Statics::PropPointers) < 2048);
	static_assert(sizeof(MegadethEnemy_eventScaleStats_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMegadethEnemy_ScaleStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMegadethEnemy_ScaleStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMegadethEnemy);
	UClass* Z_Construct_UClass_AMegadethEnemy_NoRegister()
	{
		return AMegadethEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AMegadethEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDeath_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMegadethEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Megadeth,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethEnemy_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMegadethEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMegadethEnemy_Die, "Die" }, // 3588521513
		{ &Z_Construct_UFunction_AMegadethEnemy_ScaleStats, "ScaleStats" }, // 669239279
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethEnemy_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MegadethEnemy.h" },
		{ "ModuleRelativePath", "MegadethEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethEnemy_Statics::NewProp_OnDeath_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Function delegate to broadcast when the enemy dies\n" },
#endif
		{ "ModuleRelativePath", "MegadethEnemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function delegate to broadcast when the enemy dies" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMegadethEnemy_Statics::NewProp_OnDeath = { "OnDeath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethEnemy, OnDeath), Z_Construct_UDelegateFunction_Megadeth_OnDeath__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethEnemy_Statics::NewProp_OnDeath_MetaData), Z_Construct_UClass_AMegadethEnemy_Statics::NewProp_OnDeath_MetaData) }; // 2170893302
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethEnemy_Statics::NewProp_Health_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "MegadethEnemy.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AMegadethEnemy_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0040000000000805, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethEnemy, Health), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethEnemy_Statics::NewProp_Health_MetaData), Z_Construct_UClass_AMegadethEnemy_Statics::NewProp_Health_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethEnemy_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "MegadethEnemy.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AMegadethEnemy_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethEnemy, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethEnemy_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_AMegadethEnemy_Statics::NewProp_MaxHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethEnemy_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "MegadethEnemy.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AMegadethEnemy_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethEnemy, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethEnemy_Statics::NewProp_MovementSpeed_MetaData), Z_Construct_UClass_AMegadethEnemy_Statics::NewProp_MovementSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethEnemy_Statics::NewProp_Damage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "MegadethEnemy.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AMegadethEnemy_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0040000000000805, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethEnemy, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethEnemy_Statics::NewProp_Damage_MetaData), Z_Construct_UClass_AMegadethEnemy_Statics::NewProp_Damage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethEnemy_Statics::NewProp_Player_MetaData[] = {
		{ "ModuleRelativePath", "MegadethEnemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMegadethEnemy_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethEnemy, Player), Z_Construct_UClass_AMegadethCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethEnemy_Statics::NewProp_Player_MetaData), Z_Construct_UClass_AMegadethEnemy_Statics::NewProp_Player_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMegadethEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethEnemy_Statics::NewProp_OnDeath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethEnemy_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethEnemy_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethEnemy_Statics::NewProp_MovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethEnemy_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethEnemy_Statics::NewProp_Player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMegadethEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMegadethEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMegadethEnemy_Statics::ClassParams = {
		&AMegadethEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMegadethEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AMegadethEnemy_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethEnemy_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMegadethEnemy()
	{
		if (!Z_Registration_Info_UClass_AMegadethEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMegadethEnemy.OuterSingleton, Z_Construct_UClass_AMegadethEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMegadethEnemy.OuterSingleton;
	}
	template<> MEGADETH_API UClass* StaticClass<AMegadethEnemy>()
	{
		return AMegadethEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMegadethEnemy);
	AMegadethEnemy::~AMegadethEnemy() {}
	struct Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMegadethEnemy, AMegadethEnemy::StaticClass, TEXT("AMegadethEnemy"), &Z_Registration_Info_UClass_AMegadethEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMegadethEnemy), 917164275U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethEnemy_h_3795273837(TEXT("/Script/Megadeth"),
		Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
