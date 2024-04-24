// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Megadeth/MegadethPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMegadethPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	MEGADETH_API UClass* Z_Construct_UClass_AMegadethPlayerController();
	MEGADETH_API UClass* Z_Construct_UClass_AMegadethPlayerController_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Megadeth();
// End Cross Module References
	DEFINE_FUNCTION(AMegadethPlayerController::execAutoAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AutoAttack_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AMegadethPlayerController_AutoAttack = FName(TEXT("AutoAttack"));
	void AMegadethPlayerController::AutoAttack()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMegadethPlayerController_AutoAttack),NULL);
	}
	void AMegadethPlayerController::StaticRegisterNativesAMegadethPlayerController()
	{
		UClass* Class = AMegadethPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AutoAttack", &AMegadethPlayerController::execAutoAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMegadethPlayerController_AutoAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMegadethPlayerController_AutoAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MegadethPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMegadethPlayerController_AutoAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMegadethPlayerController, nullptr, "AutoAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMegadethPlayerController_AutoAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMegadethPlayerController_AutoAttack_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMegadethPlayerController_AutoAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMegadethPlayerController_AutoAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMegadethPlayerController);
	UClass* Z_Construct_UClass_AMegadethPlayerController_NoRegister()
	{
		return AMegadethPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMegadethPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShortPressThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShortPressThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraAngleAimCompensation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraAngleAimCompensation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationInterpolation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationInterpolation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FXCursor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FXCursor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationClickAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationClickAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationTouchAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationTouchAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoAttackAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AutoAttackAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability1Action1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability1Action1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability1Action2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability1Action2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability1Action3_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability1Action3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability1Action4_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability1Action4;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMegadethPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Megadeth,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethPlayerController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMegadethPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMegadethPlayerController_AutoAttack, "AutoAttack" }, // 3753867823
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethPlayerController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MegadethPlayerController.h" },
		{ "ModuleRelativePath", "MegadethPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_ShortPressThreshold_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time Threshold to know if it was a short press */" },
#endif
		{ "ModuleRelativePath", "MegadethPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time Threshold to know if it was a short press" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_ShortPressThreshold = { "ShortPressThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethPlayerController, ShortPressThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_ShortPressThreshold_MetaData), Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_ShortPressThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_CameraAngleAimCompensation_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MegadethPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_CameraAngleAimCompensation = { "CameraAngleAimCompensation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethPlayerController, CameraAngleAimCompensation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_CameraAngleAimCompensation_MetaData), Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_CameraAngleAimCompensation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_RotationInterpolation_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MegadethPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_RotationInterpolation = { "RotationInterpolation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethPlayerController, RotationInterpolation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_RotationInterpolation_MetaData), Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_RotationInterpolation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_FXCursor_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FX Class that we will spawn when clicking */" },
#endif
		{ "ModuleRelativePath", "MegadethPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FX Class that we will spawn when clicking" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_FXCursor = { "FXCursor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethPlayerController, FXCursor), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_FXCursor_MetaData), Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_FXCursor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "MegadethPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethPlayerController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_SetDestinationClickAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "MegadethPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_SetDestinationClickAction = { "SetDestinationClickAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethPlayerController, SetDestinationClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_SetDestinationClickAction_MetaData), Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_SetDestinationClickAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_SetDestinationTouchAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "MegadethPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_SetDestinationTouchAction = { "SetDestinationTouchAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethPlayerController, SetDestinationTouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_SetDestinationTouchAction_MetaData), Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_SetDestinationTouchAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_AutoAttackAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Abilities\n" },
#endif
		{ "ModuleRelativePath", "MegadethPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Abilities" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_AutoAttackAction = { "AutoAttackAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethPlayerController, AutoAttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_AutoAttackAction_MetaData), Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_AutoAttackAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_Ability1Action1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MegadethPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_Ability1Action1 = { "Ability1Action1", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethPlayerController, Ability1Action1), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_Ability1Action1_MetaData), Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_Ability1Action1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_Ability1Action2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MegadethPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_Ability1Action2 = { "Ability1Action2", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethPlayerController, Ability1Action2), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_Ability1Action2_MetaData), Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_Ability1Action2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_Ability1Action3_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MegadethPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_Ability1Action3 = { "Ability1Action3", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethPlayerController, Ability1Action3), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_Ability1Action3_MetaData), Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_Ability1Action3_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_Ability1Action4_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MegadethPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_Ability1Action4 = { "Ability1Action4", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethPlayerController, Ability1Action4), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_Ability1Action4_MetaData), Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_Ability1Action4_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMegadethPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_ShortPressThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_CameraAngleAimCompensation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_RotationInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_FXCursor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_SetDestinationClickAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_SetDestinationTouchAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_AutoAttackAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_Ability1Action1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_Ability1Action2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_Ability1Action3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethPlayerController_Statics::NewProp_Ability1Action4,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMegadethPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMegadethPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMegadethPlayerController_Statics::ClassParams = {
		&AMegadethPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMegadethPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethPlayerController_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMegadethPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMegadethPlayerController()
	{
		if (!Z_Registration_Info_UClass_AMegadethPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMegadethPlayerController.OuterSingleton, Z_Construct_UClass_AMegadethPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMegadethPlayerController.OuterSingleton;
	}
	template<> MEGADETH_API UClass* StaticClass<AMegadethPlayerController>()
	{
		return AMegadethPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMegadethPlayerController);
	AMegadethPlayerController::~AMegadethPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMegadethPlayerController, AMegadethPlayerController::StaticClass, TEXT("AMegadethPlayerController"), &Z_Registration_Info_UClass_AMegadethPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMegadethPlayerController), 3431619405U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethPlayerController_h_3966661970(TEXT("/Script/Megadeth"),
		Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
