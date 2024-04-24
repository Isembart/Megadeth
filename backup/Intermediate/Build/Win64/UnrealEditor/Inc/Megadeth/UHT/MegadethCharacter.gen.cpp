// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Megadeth/MegadethCharacter.h"
#include "Megadeth/MegadethAbilityData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMegadethCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	MEGADETH_API UClass* Z_Construct_UClass_AMegadethAbility_NoRegister();
	MEGADETH_API UClass* Z_Construct_UClass_AMegadethCharacter();
	MEGADETH_API UClass* Z_Construct_UClass_AMegadethCharacter_NoRegister();
	MEGADETH_API UFunction* Z_Construct_UDelegateFunction_Megadeth_PlayerDeath__DelegateSignature();
	MEGADETH_API UScriptStruct* Z_Construct_UScriptStruct_FMegadethAbilityData();
	UPackage* Z_Construct_UPackage__Script_Megadeth();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Megadeth_PlayerDeath__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Megadeth_PlayerDeath__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MegadethCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Megadeth_PlayerDeath__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Megadeth, nullptr, "PlayerDeath__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Megadeth_PlayerDeath__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Megadeth_PlayerDeath__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_Megadeth_PlayerDeath__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Megadeth_PlayerDeath__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPlayerDeath_DelegateWrapper(const FMulticastScriptDelegate& PlayerDeath)
{
	PlayerDeath.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(AMegadethCharacter::execGetAbilityData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMegadethAbilityData>*)Z_Param__Result=P_THIS->GetAbilityData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMegadethCharacter::execInvokeAutoAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InvokeAutoAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMegadethCharacter::execInvokeAbility)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AbilityIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InvokeAbility(Z_Param_AbilityIndex);
		P_NATIVE_END;
	}
	void AMegadethCharacter::StaticRegisterNativesAMegadethCharacter()
	{
		UClass* Class = AMegadethCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAbilityData", &AMegadethCharacter::execGetAbilityData },
			{ "InvokeAbility", &AMegadethCharacter::execInvokeAbility },
			{ "InvokeAutoAttack", &AMegadethCharacter::execInvokeAutoAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMegadethCharacter_GetAbilityData_Statics
	{
		struct MegadethCharacter_eventGetAbilityData_Parms
		{
			TArray<FMegadethAbilityData> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMegadethCharacter_GetAbilityData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMegadethAbilityData, METADATA_PARAMS(0, nullptr) }; // 2298548772
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMegadethCharacter_GetAbilityData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MegadethCharacter_eventGetAbilityData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2298548772
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMegadethCharacter_GetAbilityData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMegadethCharacter_GetAbilityData_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMegadethCharacter_GetAbilityData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMegadethCharacter_GetAbilityData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MegadethCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMegadethCharacter_GetAbilityData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMegadethCharacter, nullptr, "GetAbilityData", nullptr, nullptr, Z_Construct_UFunction_AMegadethCharacter_GetAbilityData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMegadethCharacter_GetAbilityData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMegadethCharacter_GetAbilityData_Statics::MegadethCharacter_eventGetAbilityData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMegadethCharacter_GetAbilityData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMegadethCharacter_GetAbilityData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMegadethCharacter_GetAbilityData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMegadethCharacter_GetAbilityData_Statics::MegadethCharacter_eventGetAbilityData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMegadethCharacter_GetAbilityData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMegadethCharacter_GetAbilityData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMegadethCharacter_InvokeAbility_Statics
	{
		struct MegadethCharacter_eventInvokeAbility_Parms
		{
			int32 AbilityIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMegadethCharacter_InvokeAbility_Statics::NewProp_AbilityIndex = { "AbilityIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MegadethCharacter_eventInvokeAbility_Parms, AbilityIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMegadethCharacter_InvokeAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMegadethCharacter_InvokeAbility_Statics::NewProp_AbilityIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMegadethCharacter_InvokeAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MegadethCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMegadethCharacter_InvokeAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMegadethCharacter, nullptr, "InvokeAbility", nullptr, nullptr, Z_Construct_UFunction_AMegadethCharacter_InvokeAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMegadethCharacter_InvokeAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMegadethCharacter_InvokeAbility_Statics::MegadethCharacter_eventInvokeAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMegadethCharacter_InvokeAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMegadethCharacter_InvokeAbility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMegadethCharacter_InvokeAbility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMegadethCharacter_InvokeAbility_Statics::MegadethCharacter_eventInvokeAbility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMegadethCharacter_InvokeAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMegadethCharacter_InvokeAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMegadethCharacter_InvokeAutoAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMegadethCharacter_InvokeAutoAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MegadethCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMegadethCharacter_InvokeAutoAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMegadethCharacter, nullptr, "InvokeAutoAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMegadethCharacter_InvokeAutoAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMegadethCharacter_InvokeAutoAttack_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMegadethCharacter_InvokeAutoAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMegadethCharacter_InvokeAutoAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMegadethCharacter);
	UClass* Z_Construct_UClass_AMegadethCharacter_NoRegister()
	{
		return AMegadethCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMegadethCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Skills_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skills_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Skills;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoAttack_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AutoAttack;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_iCooldowns_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_iCooldowns_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_iCooldowns;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AACooldown_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_AACooldown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMegadethCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Megadeth,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMegadethCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMegadethCharacter_GetAbilityData, "GetAbilityData" }, // 1730927191
		{ &Z_Construct_UFunction_AMegadethCharacter_InvokeAbility, "InvokeAbility" }, // 2325945674
		{ &Z_Construct_UFunction_AMegadethCharacter_InvokeAutoAttack, "InvokeAutoAttack" }, // 3852098149
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MegadethCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MegadethCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Top down camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MegadethCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Top down camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_TopDownCameraComponent_MetaData), Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_TopDownCameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MegadethCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera above the character" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_CameraBoom_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_Skills_Inner = { "Skills", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AMegadethAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_Skills_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Skills" },
		{ "ModuleRelativePath", "MegadethCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_Skills = { "Skills", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethCharacter, Skills), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_Skills_MetaData), Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_Skills_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_AutoAttack_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Skills" },
		{ "ModuleRelativePath", "MegadethCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_AutoAttack = { "AutoAttack", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethCharacter, AutoAttack), Z_Construct_UClass_UClass, Z_Construct_UClass_AMegadethAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_AutoAttack_MetaData), Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_AutoAttack_MetaData) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_iCooldowns_Inner = { "iCooldowns", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_iCooldowns_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Skills" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Abilities\n//internal cooldowns\n" },
#endif
		{ "ModuleRelativePath", "MegadethCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Abilities\ninternal cooldowns" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_iCooldowns = { "iCooldowns", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethCharacter, iCooldowns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_iCooldowns_MetaData), Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_iCooldowns_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_AACooldown_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Skills" },
		{ "ModuleRelativePath", "MegadethCharacter.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_AACooldown = { "AACooldown", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethCharacter, AACooldown), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_AACooldown_MetaData), Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_AACooldown_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Stats\n" },
#endif
		{ "ModuleRelativePath", "MegadethCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stats" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethCharacter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_Health_MetaData), Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_Health_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "MegadethCharacter.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethCharacter, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_MaxHealth_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMegadethCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_TopDownCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_Skills_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_Skills,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_AutoAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_iCooldowns_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_iCooldowns,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_AACooldown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethCharacter_Statics::NewProp_MaxHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMegadethCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMegadethCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMegadethCharacter_Statics::ClassParams = {
		&AMegadethCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMegadethCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMegadethCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMegadethCharacter()
	{
		if (!Z_Registration_Info_UClass_AMegadethCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMegadethCharacter.OuterSingleton, Z_Construct_UClass_AMegadethCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMegadethCharacter.OuterSingleton;
	}
	template<> MEGADETH_API UClass* StaticClass<AMegadethCharacter>()
	{
		return AMegadethCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMegadethCharacter);
	AMegadethCharacter::~AMegadethCharacter() {}
	struct Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMegadethCharacter, AMegadethCharacter::StaticClass, TEXT("AMegadethCharacter"), &Z_Registration_Info_UClass_AMegadethCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMegadethCharacter), 2147260357U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethCharacter_h_2432917472(TEXT("/Script/Megadeth"),
		Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
