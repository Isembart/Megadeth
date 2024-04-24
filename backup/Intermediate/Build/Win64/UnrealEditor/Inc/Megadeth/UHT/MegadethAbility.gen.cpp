// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Megadeth/MegadethAbility.h"
#include "Megadeth/MegadethAbilityData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMegadethAbility() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MEGADETH_API UClass* Z_Construct_UClass_AMegadethAbility();
	MEGADETH_API UClass* Z_Construct_UClass_AMegadethAbility_NoRegister();
	MEGADETH_API UClass* Z_Construct_UClass_AMegadethCharacter_NoRegister();
	MEGADETH_API UScriptStruct* Z_Construct_UScriptStruct_FMegadethAbilityData();
	UPackage* Z_Construct_UPackage__Script_Megadeth();
// End Cross Module References
	DEFINE_FUNCTION(AMegadethAbility::execInvokeAbility)
	{
		P_GET_OBJECT(AMegadethCharacter,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InvokeAbility_Implementation(Z_Param_Character);
		P_NATIVE_END;
	}
	struct MegadethAbility_eventInvokeAbility_Parms
	{
		AMegadethCharacter* Character;
	};
	static FName NAME_AMegadethAbility_InvokeAbility = FName(TEXT("InvokeAbility"));
	void AMegadethAbility::InvokeAbility(AMegadethCharacter* Character)
	{
		MegadethAbility_eventInvokeAbility_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_AMegadethAbility_InvokeAbility),&Parms);
	}
	void AMegadethAbility::StaticRegisterNativesAMegadethAbility()
	{
		UClass* Class = AMegadethAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InvokeAbility", &AMegadethAbility::execInvokeAbility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMegadethAbility_InvokeAbility_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMegadethAbility_InvokeAbility_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MegadethAbility_eventInvokeAbility_Parms, Character), Z_Construct_UClass_AMegadethCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMegadethAbility_InvokeAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMegadethAbility_InvokeAbility_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMegadethAbility_InvokeAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "MegadethAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMegadethAbility_InvokeAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMegadethAbility, nullptr, "InvokeAbility", nullptr, nullptr, Z_Construct_UFunction_AMegadethAbility_InvokeAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMegadethAbility_InvokeAbility_Statics::PropPointers), sizeof(MegadethAbility_eventInvokeAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMegadethAbility_InvokeAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMegadethAbility_InvokeAbility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMegadethAbility_InvokeAbility_Statics::PropPointers) < 2048);
	static_assert(sizeof(MegadethAbility_eventInvokeAbility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMegadethAbility_InvokeAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMegadethAbility_InvokeAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMegadethAbility);
	UClass* Z_Construct_UClass_AMegadethAbility_NoRegister()
	{
		return AMegadethAbility::StaticClass();
	}
	struct Z_Construct_UClass_AMegadethAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMegadethAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Megadeth,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethAbility_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMegadethAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMegadethAbility_InvokeAbility, "InvokeAbility" }, // 3950484869
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethAbility_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethAbility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MegadethAbility.h" },
		{ "ModuleRelativePath", "MegadethAbility.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethAbility_Statics::NewProp_AbilityData_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "MegadethAbility.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMegadethAbility_Statics::NewProp_AbilityData = { "AbilityData", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethAbility, AbilityData), Z_Construct_UScriptStruct_FMegadethAbilityData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethAbility_Statics::NewProp_AbilityData_MetaData), Z_Construct_UClass_AMegadethAbility_Statics::NewProp_AbilityData_MetaData) }; // 2298548772
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMegadethAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethAbility_Statics::NewProp_AbilityData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMegadethAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMegadethAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMegadethAbility_Statics::ClassParams = {
		&AMegadethAbility::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMegadethAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethAbility_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_AMegadethAbility_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethAbility_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMegadethAbility()
	{
		if (!Z_Registration_Info_UClass_AMegadethAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMegadethAbility.OuterSingleton, Z_Construct_UClass_AMegadethAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMegadethAbility.OuterSingleton;
	}
	template<> MEGADETH_API UClass* StaticClass<AMegadethAbility>()
	{
		return AMegadethAbility::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMegadethAbility);
	AMegadethAbility::~AMegadethAbility() {}
	struct Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMegadethAbility, AMegadethAbility::StaticClass, TEXT("AMegadethAbility"), &Z_Registration_Info_UClass_AMegadethAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMegadethAbility), 2991771789U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethAbility_h_3356047483(TEXT("/Script/Megadeth"),
		Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
