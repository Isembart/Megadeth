// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Megadeth/MegadethGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMegadethGameMode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MEGADETH_API UClass* Z_Construct_UClass_AMegadethGameMode();
	MEGADETH_API UClass* Z_Construct_UClass_AMegadethGameMode_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Megadeth();
// End Cross Module References
	void AMegadethGameMode::StaticRegisterNativesAMegadethGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMegadethGameMode);
	UClass* Z_Construct_UClass_AMegadethGameMode_NoRegister()
	{
		return AMegadethGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMegadethGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HUDWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDWidgetInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMegadethGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Megadeth,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MegadethGameMode.h" },
		{ "ModuleRelativePath", "MegadethGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethGameMode_Statics::NewProp_HUDWidget_MetaData[] = {
		{ "Category", "Interface" },
		{ "ModuleRelativePath", "MegadethGameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMegadethGameMode_Statics::NewProp_HUDWidget = { "HUDWidget", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethGameMode, HUDWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethGameMode_Statics::NewProp_HUDWidget_MetaData), Z_Construct_UClass_AMegadethGameMode_Statics::NewProp_HUDWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMegadethGameMode_Statics::NewProp_HUDWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MegadethGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMegadethGameMode_Statics::NewProp_HUDWidgetInstance = { "HUDWidgetInstance", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMegadethGameMode, HUDWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethGameMode_Statics::NewProp_HUDWidgetInstance_MetaData), Z_Construct_UClass_AMegadethGameMode_Statics::NewProp_HUDWidgetInstance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMegadethGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethGameMode_Statics::NewProp_HUDWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMegadethGameMode_Statics::NewProp_HUDWidgetInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMegadethGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMegadethGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMegadethGameMode_Statics::ClassParams = {
		&AMegadethGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMegadethGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMegadethGameMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMegadethGameMode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMegadethGameMode()
	{
		if (!Z_Registration_Info_UClass_AMegadethGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMegadethGameMode.OuterSingleton, Z_Construct_UClass_AMegadethGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMegadethGameMode.OuterSingleton;
	}
	template<> MEGADETH_API UClass* StaticClass<AMegadethGameMode>()
	{
		return AMegadethGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMegadethGameMode);
	AMegadethGameMode::~AMegadethGameMode() {}
	struct Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMegadethGameMode, AMegadethGameMode::StaticClass, TEXT("AMegadethGameMode"), &Z_Registration_Info_UClass_AMegadethGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMegadethGameMode), 3274607578U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethGameMode_h_2994940719(TEXT("/Script/Megadeth"),
		Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
