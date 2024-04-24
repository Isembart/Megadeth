// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Megadeth/MegadethStageSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMegadethStageSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	MEGADETH_API UClass* Z_Construct_UClass_UMegadethStageSubsystem();
	MEGADETH_API UClass* Z_Construct_UClass_UMegadethStageSubsystem_NoRegister();
	MEGADETH_API UFunction* Z_Construct_UDelegateFunction_Megadeth_EnteredStage__DelegateSignature();
	MEGADETH_API UFunction* Z_Construct_UDelegateFunction_Megadeth_EnteredTavern__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Megadeth();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Megadeth_EnteredStage__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Megadeth_EnteredStage__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "MegadethStageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Megadeth_EnteredStage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Megadeth, nullptr, "EnteredStage__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Megadeth_EnteredStage__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Megadeth_EnteredStage__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_Megadeth_EnteredStage__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Megadeth_EnteredStage__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FEnteredStage_DelegateWrapper(const FMulticastScriptDelegate& EnteredStage)
{
	EnteredStage.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_Megadeth_EnteredTavern__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Megadeth_EnteredTavern__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MegadethStageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Megadeth_EnteredTavern__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Megadeth, nullptr, "EnteredTavern__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Megadeth_EnteredTavern__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Megadeth_EnteredTavern__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_Megadeth_EnteredTavern__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Megadeth_EnteredTavern__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FEnteredTavern_DelegateWrapper(const FMulticastScriptDelegate& EnteredTavern)
{
	EnteredTavern.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UMegadethStageSubsystem::execOnEnteredStage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnteredStage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMegadethStageSubsystem::execOnEnteredTavern)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnteredTavern();
		P_NATIVE_END;
	}
	void UMegadethStageSubsystem::StaticRegisterNativesUMegadethStageSubsystem()
	{
		UClass* Class = UMegadethStageSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEnteredStage", &UMegadethStageSubsystem::execOnEnteredStage },
			{ "OnEnteredTavern", &UMegadethStageSubsystem::execOnEnteredTavern },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMegadethStageSubsystem_OnEnteredStage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMegadethStageSubsystem_OnEnteredStage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MegadethStageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMegadethStageSubsystem_OnEnteredStage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMegadethStageSubsystem, nullptr, "OnEnteredStage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMegadethStageSubsystem_OnEnteredStage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMegadethStageSubsystem_OnEnteredStage_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMegadethStageSubsystem_OnEnteredStage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMegadethStageSubsystem_OnEnteredStage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMegadethStageSubsystem_OnEnteredTavern_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMegadethStageSubsystem_OnEnteredTavern_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MegadethStageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMegadethStageSubsystem_OnEnteredTavern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMegadethStageSubsystem, nullptr, "OnEnteredTavern", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMegadethStageSubsystem_OnEnteredTavern_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMegadethStageSubsystem_OnEnteredTavern_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMegadethStageSubsystem_OnEnteredTavern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMegadethStageSubsystem_OnEnteredTavern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMegadethStageSubsystem);
	UClass* Z_Construct_UClass_UMegadethStageSubsystem_NoRegister()
	{
		return UMegadethStageSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMegadethStageSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnteredStage_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EnteredStage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnteredTavern_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EnteredTavern;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMegadethStageSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Megadeth,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMegadethStageSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMegadethStageSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMegadethStageSubsystem_OnEnteredStage, "OnEnteredStage" }, // 2581855284
		{ &Z_Construct_UFunction_UMegadethStageSubsystem_OnEnteredTavern, "OnEnteredTavern" }, // 1330437515
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMegadethStageSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMegadethStageSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MegadethStageSubsystem.h" },
		{ "ModuleRelativePath", "MegadethStageSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMegadethStageSubsystem_Statics::NewProp_EnteredStage_MetaData[] = {
		{ "ModuleRelativePath", "MegadethStageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMegadethStageSubsystem_Statics::NewProp_EnteredStage = { "EnteredStage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMegadethStageSubsystem, EnteredStage), Z_Construct_UDelegateFunction_Megadeth_EnteredStage__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMegadethStageSubsystem_Statics::NewProp_EnteredStage_MetaData), Z_Construct_UClass_UMegadethStageSubsystem_Statics::NewProp_EnteredStage_MetaData) }; // 2968184750
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMegadethStageSubsystem_Statics::NewProp_EnteredTavern_MetaData[] = {
		{ "ModuleRelativePath", "MegadethStageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMegadethStageSubsystem_Statics::NewProp_EnteredTavern = { "EnteredTavern", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMegadethStageSubsystem, EnteredTavern), Z_Construct_UDelegateFunction_Megadeth_EnteredStage__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMegadethStageSubsystem_Statics::NewProp_EnteredTavern_MetaData), Z_Construct_UClass_UMegadethStageSubsystem_Statics::NewProp_EnteredTavern_MetaData) }; // 2968184750
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMegadethStageSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMegadethStageSubsystem_Statics::NewProp_EnteredStage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMegadethStageSubsystem_Statics::NewProp_EnteredTavern,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMegadethStageSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMegadethStageSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMegadethStageSubsystem_Statics::ClassParams = {
		&UMegadethStageSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMegadethStageSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMegadethStageSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMegadethStageSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMegadethStageSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMegadethStageSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMegadethStageSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMegadethStageSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMegadethStageSubsystem.OuterSingleton, Z_Construct_UClass_UMegadethStageSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMegadethStageSubsystem.OuterSingleton;
	}
	template<> MEGADETH_API UClass* StaticClass<UMegadethStageSubsystem>()
	{
		return UMegadethStageSubsystem::StaticClass();
	}
	UMegadethStageSubsystem::UMegadethStageSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMegadethStageSubsystem);
	UMegadethStageSubsystem::~UMegadethStageSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethStageSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethStageSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMegadethStageSubsystem, UMegadethStageSubsystem::StaticClass, TEXT("UMegadethStageSubsystem"), &Z_Registration_Info_UClass_UMegadethStageSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMegadethStageSubsystem), 2492178551U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethStageSubsystem_h_4165333816(TEXT("/Script/Megadeth"),
		Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethStageSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethStageSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
