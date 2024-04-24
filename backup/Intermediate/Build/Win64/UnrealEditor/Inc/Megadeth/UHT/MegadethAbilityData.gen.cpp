// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Megadeth/MegadethAbilityData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMegadethAbilityData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	MEGADETH_API UScriptStruct* Z_Construct_UScriptStruct_FMegadethAbilityData();
	UPackage* Z_Construct_UPackage__Script_Megadeth();
// End Cross Module References

static_assert(std::is_polymorphic<FMegadethAbilityData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMegadethAbilityData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MegadethAbilityData;
class UScriptStruct* FMegadethAbilityData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MegadethAbilityData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MegadethAbilityData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMegadethAbilityData, (UObject*)Z_Construct_UPackage__Script_Megadeth(), TEXT("MegadethAbilityData"));
	}
	return Z_Registration_Info_UScriptStruct_MegadethAbilityData.OuterSingleton;
}
template<> MEGADETH_API UScriptStruct* StaticStruct<FMegadethAbilityData>()
{
	return FMegadethAbilityData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMegadethAbilityData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AbilityName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCooldown_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_AbilityCooldown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityDamage_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_AbilityDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCost_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_AbilityCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_AbilityDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySplashArt_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilitySplashArt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a struct description */" },
#endif
		{ "ModuleRelativePath", "MegadethAbilityData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a struct description" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMegadethAbilityData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewProp_AbilityName_MetaData[] = {
		{ "Category", "MegadethAbilityData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description */" },
#endif
		{ "DisplayName", "AbilityName" },
		{ "MakeStructureDefaultValue", "Ability" },
		{ "ModuleRelativePath", "MegadethAbilityData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewProp_AbilityName = { "AbilityName", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMegadethAbilityData, AbilityName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewProp_AbilityName_MetaData), Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewProp_AbilityName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewProp_AbilityCooldown_MetaData[] = {
		{ "Category", "MegadethAbilityData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description */" },
#endif
		{ "DisplayName", "AbilityCooldown" },
		{ "MakeStructureDefaultValue", "5.000000" },
		{ "ModuleRelativePath", "MegadethAbilityData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewProp_AbilityCooldown = { "AbilityCooldown", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMegadethAbilityData, AbilityCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewProp_AbilityCooldown_MetaData), Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewProp_AbilityCooldown_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewProp_AbilityDamage_MetaData[] = {
		{ "Category", "MegadethAbilityData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description */" },
#endif
		{ "DisplayName", "AbilityDamage" },
		{ "MakeStructureDefaultValue", "5.000000" },
		{ "ModuleRelativePath", "MegadethAbilityData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewProp_AbilityDamage = { "AbilityDamage", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMegadethAbilityData, AbilityDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewProp_AbilityDamage_MetaData), Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewProp_AbilityDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewProp_AbilityCost_MetaData[] = {
		{ "Category", "MegadethAbilityData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description */" },
#endif
		{ "DisplayName", "AbilityCost" },
		{ "MakeStructureDefaultValue", "0.000000" },
		{ "ModuleRelativePath", "MegadethAbilityData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewProp_AbilityCost = { "AbilityCost", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMegadethAbilityData, AbilityCost), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewProp_AbilityCost_MetaData), Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewProp_AbilityCost_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewProp_AbilityDescription_MetaData[] = {
		{ "Category", "MegadethAbilityData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description */" },
#endif
		{ "DisplayName", "AbilityDescription" },
		{ "ModuleRelativePath", "MegadethAbilityData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description" },
#endif
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewProp_AbilityDescription = { "AbilityDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMegadethAbilityData, AbilityDescription), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewProp_AbilityDescription_MetaData), Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewProp_AbilityDescription_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewProp_AbilitySplashArt_MetaData[] = {
		{ "Category", "MegadethAbilityData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description */" },
#endif
		{ "DisplayName", "AbilitySplashArt" },
		{ "ModuleRelativePath", "MegadethAbilityData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewProp_AbilitySplashArt = { "AbilitySplashArt", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMegadethAbilityData, AbilitySplashArt), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewProp_AbilitySplashArt_MetaData), Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewProp_AbilitySplashArt_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewProp_AbilityName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewProp_AbilityCooldown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewProp_AbilityDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewProp_AbilityCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewProp_AbilityDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewProp_AbilitySplashArt,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Megadeth,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"MegadethAbilityData",
		Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::PropPointers),
		sizeof(FMegadethAbilityData),
		alignof(FMegadethAbilityData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMegadethAbilityData()
	{
		if (!Z_Registration_Info_UScriptStruct_MegadethAbilityData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MegadethAbilityData.InnerSingleton, Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MegadethAbilityData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethAbilityData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethAbilityData_h_Statics::ScriptStructInfo[] = {
		{ FMegadethAbilityData::StaticStruct, Z_Construct_UScriptStruct_FMegadethAbilityData_Statics::NewStructOps, TEXT("MegadethAbilityData"), &Z_Registration_Info_UScriptStruct_MegadethAbilityData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMegadethAbilityData), 2298548772U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethAbilityData_h_1592057402(TEXT("/Script/Megadeth"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethAbilityData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projekty_UE5_Megadeth_Source_Megadeth_MegadethAbilityData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
