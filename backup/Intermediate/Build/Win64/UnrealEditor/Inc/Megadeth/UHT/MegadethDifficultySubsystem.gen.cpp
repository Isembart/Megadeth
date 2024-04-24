// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Megadeth/MegadethDifficultySubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMegadethDifficultySubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
	MEGADETH_API UClass* Z_Construct_UClass_UMegadethDifficultySubsystem();
	MEGADETH_API UClass* Z_Construct_UClass_UMegadethDifficultySubsystem_NoRegister();
	MEGADETH_API UFunction* Z_Construct_UDelegateFunction_Megadeth_DifficultyIncreased__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Megadeth();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Megadeth_DifficultyIncreased__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Megadeth_DifficultyIncreased__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MegadethDifficultySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Megadeth_DifficultyIncreased__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Megadeth, nullptr, "DifficultyIncreased__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Megadeth_DifficultyIncreased__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Megadeth_DifficultyIncreased__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_Megadeth_DifficultyIncreased__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Megadeth_DifficultyIncreased__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDifficultyIncreased_DelegateWrapper(const FMulticastScriptDelegate& DifficultyIncreased)
{
	DifficultyIncreased.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UMegadethDifficultySubsystem::execLogDebugCoefficients)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LogDebugCoefficients();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMegadethDifficultySubsystem::execGetStageCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStageCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMegadethDifficultySubsystem::execSetStageCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetStageCount(Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMegadethDifficultySubsystem::execGetDifficultyCoefficient)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDifficultyCoefficient();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMegadethDifficultySubsystem::execToggleTimeFlow)
	{
		P_GET_UBOOL(Z_Param_enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleTimeFlow(Z_Param_enabled);
		P_NATIVE_END;
	}
	void UMegadethDifficultySubsystem::StaticRegisterNativesUMegadethDifficultySubsystem()
	{
		UClass* Class = UMegadethDifficultySubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDifficultyCoefficient", &UMegadethDifficultySubsystem::execGetDifficultyCoefficient },
			{ "GetStageCount", &UMegadethDifficultySubsystem::execGetStageCount },
			{ "LogDebugCoefficients", &UMegadethDifficultySubsystem::execLogDebugCoefficients },
			{ "SetStageCount", &UMegadethDifficultySubsystem::execSetStageCount },
			{ "ToggleTimeFlow", &UMegadethDifficultySubsystem::execToggleTimeFlow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMegadethDifficultySubsystem_GetDifficultyCoefficient_Statics
	{
		struct MegadethDifficultySubsystem_eventGetDifficultyCoefficient_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMegadethDifficultySubsystem_GetDifficultyCoefficient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MegadethDifficultySubsystem_eventGetDifficultyCoefficient_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMegadethDifficultySubsystem_GetDifficultyCoefficient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMegadethDifficultySubsystem_GetDifficultyCoefficient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMegadethDifficultySubsystem_GetDifficultyCoefficient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MegadethDifficultySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMegadethDifficultySubsystem_GetDifficultyCoefficient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMegadethDifficultySubsystem, nullptr, "GetDifficultyCoefficient", nullptr, nullptr, Z_Construct_UFunction_UMegadethDifficultySubsystem_GetDifficultyCoefficient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMegadethDifficultySubsystem_GetDifficultyCoefficient_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMegadethDifficultySubsystem_GetDifficultyCoefficient_Statics::MegadethDifficultySubsystem_eventGetDifficultyCoefficient_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMegadethDifficultySubsystem_GetDifficultyCoefficient_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMegadethDifficultySubsystem_GetDifficultyCoefficient_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMegadethDifficultySubsystem_GetDifficultyCoefficient_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMegadethDifficultySubsystem_GetDifficultyCoefficient_Statics::MegadethDifficultySubsystem_eventGetDifficultyCoefficient_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMegadethDifficultySubsystem_GetDifficultyCoefficient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMegadethDifficultySubsystem_GetDifficultyCoefficient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMegadethDifficultySubsystem_GetStageCount_Statics
	{
		struct MegadethDifficultySubsystem_eventGetStageCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMegadethDifficultySubsystem_GetStageCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MegadethDifficultySubsystem_eventGetStageCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMegadethDifficultySubsystem_GetStageCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMegadethDifficultySubsystem_GetStageCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMegadethDifficultySubsystem_GetStageCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MegadethDifficultySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMegadethDifficultySubsystem_GetStageCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMegadethDifficultySubsystem, nullptr, "GetStageCount", nullptr, nullptr, Z_Construct_UFunction_UMegadethDifficultySubsystem_GetStageCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMegadethDifficultySubsystem_GetStageCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMegadethDifficultySubsystem_GetStageCount_Statics::MegadethDifficultySubsystem_eventGetStageCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMegadethDifficultySubsystem_GetStageCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMegadethDifficultySubsystem_GetStageCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMegadethDifficultySubsystem_GetStageCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMegadethDifficultySubsystem_GetStageCount_Statics::MegadethDifficultySubsystem_eventGetStageCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMegadethDifficultySubsystem_GetStageCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMegadethDifficultySubsystem_GetStageCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMegadethDifficultySubsystem_LogDebugCoefficients_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMegadethDifficultySubsystem_LogDebugCoefficients_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MegadethDifficultySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMegadethDifficultySubsystem_LogDebugCoefficients_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMegadethDifficultySubsystem, nullptr, "LogDebugCoefficients", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMegadethDifficultySubsystem_LogDebugCoefficients_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMegadethDifficultySubsystem_LogDebugCoefficients_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMegadethDifficultySubsystem_LogDebugCoefficients()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMegadethDifficultySubsystem_LogDebugCoefficients_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMegadethDifficultySubsystem_SetStageCount_Statics
	{
		struct MegadethDifficultySubsystem_eventSetStageCount_Parms
		{
			int32 Count;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMegadethDifficultySubsystem_SetStageCount_Statics::NewProp_Count_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMegadethDifficultySubsystem_SetStageCount_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MegadethDifficultySubsystem_eventSetStageCount_Parms, Count), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMegadethDifficultySubsystem_SetStageCount_Statics::NewProp_Count_MetaData), Z_Construct_UFunction_UMegadethDifficultySubsystem_SetStageCount_Statics::NewProp_Count_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMegadethDifficultySubsystem_SetStageCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MegadethDifficultySubsystem_eventSetStageCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMegadethDifficultySubsystem_SetStageCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMegadethDifficultySubsystem_SetStageCount_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMegadethDifficultySubsystem_SetStageCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMegadethDifficultySubsystem_SetStageCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MegadethDifficultySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMegadethDifficultySubsystem_SetStageCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMegadethDifficultySubsystem, nullptr, "SetStageCount", nullptr, nullptr, Z_Construct_UFunction_UMegadethDifficultySubsystem_SetStageCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMegadethDifficultySubsystem_SetStageCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMegadethDifficultySubsystem_SetStageCount_Statics::MegadethDifficultySubsystem_eventSetStageCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMegadethDifficultySubsystem_SetStageCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMegadethDifficultySubsystem_SetStageCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMegadethDifficultySubsystem_SetStageCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMegadethDifficultySubsystem_SetStageCount_Statics::MegadethDifficultySubsystem_eventSetStageCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMegadethDifficultySubsystem_SetStageCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMegadethDifficultySubsystem_SetStageCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMegadethDifficultySubsystem_ToggleTimeFlow_Statics
	{
		struct MegadethDifficultySubsystem_eventToggleTimeFlow_Parms
		{
			bool enabled;
		};
		static void NewProp_enabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_enabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMegadethDifficultySubsystem_ToggleTimeFlow_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((MegadethDifficultySubsystem_eventToggleTimeFlow_Parms*)Obj)->enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMegadethDifficultySubsystem_ToggleTimeFlow_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MegadethDifficultySubsystem_eventToggleTimeFlow_Parms), &Z_Construct_UFunction_UMegadethDifficultySubsystem_ToggleTimeFlow_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMegadethDifficultySubsystem_ToggleTimeFlow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMegadethDifficultySubsystem_ToggleTimeFlow_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMegadethDifficultySubsystem_ToggleTimeFlow_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Toggles increasing difficulty by time flow\n//@param enabled - if true, difficulty will increase by time flow, if false, difficulty will not be increased\n" },
#endif
		{ "ModuleRelativePath", "MegadethDifficultySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggles increasing difficulty by time flow\n@param enabled - if true, difficulty will increase by time flow, if false, difficulty will not be increased" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMegadethDifficultySubsystem_ToggleTimeFlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMegadethDifficultySubsystem, nullptr, "ToggleTimeFlow", nullptr, nullptr, Z_Construct_UFunction_UMegadethDifficultySubsystem_ToggleTimeFlow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMegadethDifficultySubsystem_ToggleTimeFlow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMegadethDifficultySubsystem_ToggleTimeFlow_Statics::MegadethDifficultySubsystem_eventToggleTimeFlow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMegadethDifficultySubsystem_ToggleTimeFlow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMegadethDifficultySubsystem_ToggleTimeFlow_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMegadethDifficultySubsystem_ToggleTimeFlow_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMegadethDifficultySubsystem_ToggleTimeFlow_Statics::MegadethDifficultySubsystem_eventToggleTimeFlow_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMegadethDifficultySubsystem_ToggleTimeFlow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMegadethDifficultySubsystem_ToggleTimeFlow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMegadethDifficultySubsystem);
	UClass* Z_Construct_UClass_UMegadethDifficultySubsystem_NoRegister()
	{
		return UMegadethDifficultySubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMegadethDifficultySubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDifficultyIncreased_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDifficultyIncreased;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTimeFlowEnabled_MetaData[];
#endif
		static void NewProp_bTimeFlowEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTimeFlowEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DifficultyCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DifficultyCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StageFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StageFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StageCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StageCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Megadeth,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMegadethDifficultySubsystem_GetDifficultyCoefficient, "GetDifficultyCoefficient" }, // 794063019
		{ &Z_Construct_UFunction_UMegadethDifficultySubsystem_GetStageCount, "GetStageCount" }, // 3445656184
		{ &Z_Construct_UFunction_UMegadethDifficultySubsystem_LogDebugCoefficients, "LogDebugCoefficients" }, // 1864093870
		{ &Z_Construct_UFunction_UMegadethDifficultySubsystem_SetStageCount, "SetStageCount" }, // 917703583
		{ &Z_Construct_UFunction_UMegadethDifficultySubsystem_ToggleTimeFlow, "ToggleTimeFlow" }, // 2270172364
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MegadethDifficultySubsystem.h" },
		{ "ModuleRelativePath", "MegadethDifficultySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_OnDifficultyIncreased_MetaData[] = {
		{ "ModuleRelativePath", "MegadethDifficultySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_OnDifficultyIncreased = { "OnDifficultyIncreased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMegadethDifficultySubsystem, OnDifficultyIncreased), Z_Construct_UDelegateFunction_Megadeth_DifficultyIncreased__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_OnDifficultyIncreased_MetaData), Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_OnDifficultyIncreased_MetaData) }; // 2550049453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_bTimeFlowEnabled_MetaData[] = {
		{ "AllowPrivate", "" },
		{ "Category", "Difficulty" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Used to pause increasing difficulty when player is in tavern\n" },
#endif
		{ "ModuleRelativePath", "MegadethDifficultySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to pause increasing difficulty when player is in tavern" },
#endif
	};
#endif
	void Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_bTimeFlowEnabled_SetBit(void* Obj)
	{
		((UMegadethDifficultySubsystem*)Obj)->bTimeFlowEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_bTimeFlowEnabled = { "bTimeFlowEnabled", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMegadethDifficultySubsystem), &Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_bTimeFlowEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_bTimeFlowEnabled_MetaData), Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_bTimeFlowEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_DifficultyCoefficient_MetaData[] = {
		{ "AllowPrivate", "" },
		{ "Category", "Difficulty" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Main difficulty multiplier. scales with time\n" },
#endif
		{ "ModuleRelativePath", "MegadethDifficultySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main difficulty multiplier. scales with time" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_DifficultyCoefficient = { "DifficultyCoefficient", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMegadethDifficultySubsystem, DifficultyCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_DifficultyCoefficient_MetaData), Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_DifficultyCoefficient_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_Time_MetaData[] = {
		{ "AllowPrivate", "" },
		{ "Category", "Difficulty" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//float to store time passed\n" },
#endif
		{ "ModuleRelativePath", "MegadethDifficultySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "float to store time passed" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMegadethDifficultySubsystem, Time), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_Time_MetaData), Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_Time_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_TimeFactor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Time factor used to calculate difficulty\n" },
#endif
		{ "ModuleRelativePath", "MegadethDifficultySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time factor used to calculate difficulty" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_TimeFactor = { "TimeFactor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMegadethDifficultySubsystem, TimeFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_TimeFactor_MetaData), Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_TimeFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_StageFactor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Factor used to scale difficulty\n" },
#endif
		{ "ModuleRelativePath", "MegadethDifficultySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Factor used to scale difficulty" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_StageFactor = { "StageFactor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMegadethDifficultySubsystem, StageFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_StageFactor_MetaData), Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_StageFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_StageCount_MetaData[] = {
		{ "ModuleRelativePath", "MegadethDifficultySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_StageCount = { "StageCount", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMegadethDifficultySubsystem, StageCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_StageCount_MetaData), Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_StageCount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_OnDifficultyIncreased,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_bTimeFlowEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_DifficultyCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_TimeFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_StageFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::NewProp_StageCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMegadethDifficultySubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::ClassParams = {
		&UMegadethDifficultySubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMegadethDifficultySubsystem()
	{
		if (!Z_Registration_Info_UClass_UMegadethDifficultySubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMegadethDifficultySubsystem.OuterSingleton, Z_Construct_UClass_UMegadethDifficultySubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMegadethDifficultySubsystem.OuterSingleton;
	}
	template<> MEGADETH_API UClass* StaticClass<UMegadethDifficultySubsystem>()
	{
		return UMegadethDifficultySubsystem::StaticClass();
	}
	UMegadethDifficultySubsystem::UMegadethDifficultySubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMegadethDifficultySubsystem);
	UMegadethDifficultySubsystem::~UMegadethDifficultySubsystem() {}
	struct Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethDifficultySubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethDifficultySubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMegadethDifficultySubsystem, UMegadethDifficultySubsystem::StaticClass, TEXT("UMegadethDifficultySubsystem"), &Z_Registration_Info_UClass_UMegadethDifficultySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMegadethDifficultySubsystem), 1856757390U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethDifficultySubsystem_h_2940803330(TEXT("/Script/Megadeth"),
		Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethDifficultySubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethDifficultySubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
