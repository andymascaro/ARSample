// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/AssetManagerTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetManagerTypes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPrimaryAssetCookRule();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetRules();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static UEnum* EPrimaryAssetCookRule_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPrimaryAssetCookRule, Z_Construct_UPackage__Script_Engine(), TEXT("EPrimaryAssetCookRule"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPrimaryAssetCookRule(EPrimaryAssetCookRule_StaticEnum, TEXT("/Script/Engine"), TEXT("EPrimaryAssetCookRule"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EPrimaryAssetCookRule_CRC() { return 3837717040U; }
	UEnum* Z_Construct_UEnum_Engine_EPrimaryAssetCookRule()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPrimaryAssetCookRule"), 0, Get_Z_Construct_UEnum_Engine_EPrimaryAssetCookRule_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPrimaryAssetCookRule::Unknown", (int64)EPrimaryAssetCookRule::Unknown },
				{ "EPrimaryAssetCookRule::NeverCook", (int64)EPrimaryAssetCookRule::NeverCook },
				{ "EPrimaryAssetCookRule::DevelopmentCook", (int64)EPrimaryAssetCookRule::DevelopmentCook },
				{ "EPrimaryAssetCookRule::AlwaysCook", (int64)EPrimaryAssetCookRule::AlwaysCook },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlwaysCook.ToolTip", "Asset will always be cooked, in both production and development." },
				{ "DevelopmentCook.ToolTip", "Asset can be cooked for development and testing, but should never be shipped in a production build." },
				{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
				{ "NeverCook.ToolTip", "Asset should never be cooked/shipped in any situation. An error will be generated if something depends on it." },
				{ "ToolTip", "Rule about when to cook/ship a primary asset" },
				{ "Unknown.ToolTip", "Nothing is known about this asset specifically. It will cook if something else depends on it." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPrimaryAssetCookRule",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EPrimaryAssetCookRule",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPrimaryAssetTypeInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo, Z_Construct_UPackage__Script_Engine(), TEXT("PrimaryAssetTypeInfo"), sizeof(FPrimaryAssetTypeInfo), Get_Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPrimaryAssetTypeInfo(FPrimaryAssetTypeInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("PrimaryAssetTypeInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPrimaryAssetTypeInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFPrimaryAssetTypeInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PrimaryAssetTypeInfo")),new UScriptStruct::TCppStructOps<FPrimaryAssetTypeInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPrimaryAssetTypeInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PrimaryAssetTypeInfo"), sizeof(FPrimaryAssetTypeInfo), Get_Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
				{ "ToolTip", "Structure with publicly exposed information about an asset type. These can be loaded out of a config file." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPrimaryAssetTypeInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfAssets_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
				{ "ToolTip", "Number of tracked assets of that type" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfAssets = { UE4CodeGen_Private::EPropertyClass::Int, "NumberOfAssets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FPrimaryAssetTypeInfo, NumberOfAssets), METADATA_PARAMS(NewProp_NumberOfAssets_MetaData, ARRAY_COUNT(NewProp_NumberOfAssets_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDynamicAsset_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
				{ "ToolTip", "True if this is an asset created at runtime that has no on disk representation. Cannot be set in config" },
			};
#endif
			auto NewProp_bIsDynamicAsset_SetBit = [](void* Obj){ ((FPrimaryAssetTypeInfo*)Obj)->bIsDynamicAsset = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDynamicAsset = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsDynamicAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FPrimaryAssetTypeInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsDynamicAsset_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsDynamicAsset_MetaData, ARRAY_COUNT(NewProp_bIsDynamicAsset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetScanPaths_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
				{ "ToolTip", "Combination of directories and individual assets to search for this asset type. Will have the Directories and Assets added to it" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetScanPaths = { UE4CodeGen_Private::EPropertyClass::Array, "AssetScanPaths", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FPrimaryAssetTypeInfo, AssetScanPaths), METADATA_PARAMS(NewProp_AssetScanPaths_MetaData, ARRAY_COUNT(NewProp_AssetScanPaths_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetScanPaths_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "AssetScanPaths", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[] = {
				{ "Category", "Rules" },
				{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
				{ "ShowOnlyInnerProperties", "" },
				{ "ToolTip", "Default management rules for this type, individual assets can be overridden" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rules = { UE4CodeGen_Private::EPropertyClass::Struct, "Rules", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FPrimaryAssetTypeInfo, Rules), Z_Construct_UScriptStruct_FPrimaryAssetRules, METADATA_PARAMS(NewProp_Rules_MetaData, ARRAY_COUNT(NewProp_Rules_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecificAssets_MetaData[] = {
				{ "Category", "AssetType" },
				{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
				{ "ToolTip", "Individual assets to scan" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpecificAssets = { UE4CodeGen_Private::EPropertyClass::Array, "SpecificAssets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(FPrimaryAssetTypeInfo, SpecificAssets), METADATA_PARAMS(NewProp_SpecificAssets_MetaData, ARRAY_COUNT(NewProp_SpecificAssets_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpecificAssets_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SpecificAssets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Directories_MetaData[] = {
				{ "Category", "AssetType" },
				{ "LongPackageName", "" },
				{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
				{ "RelativeToGameContentDir", "" },
				{ "ToolTip", "Directories to search for this asset type" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Directories = { UE4CodeGen_Private::EPropertyClass::Array, "Directories", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(FPrimaryAssetTypeInfo, Directories), METADATA_PARAMS(NewProp_Directories_MetaData, ARRAY_COUNT(NewProp_Directories_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Directories_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Directories", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEditorOnly_MetaData[] = {
				{ "Category", "AssetType" },
				{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
				{ "ToolTip", "True if this type is editor only" },
			};
#endif
			auto NewProp_bIsEditorOnly_SetBit = [](void* Obj){ ((FPrimaryAssetTypeInfo*)Obj)->bIsEditorOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEditorOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsEditorOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FPrimaryAssetTypeInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsEditorOnly_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsEditorOnly_MetaData, ARRAY_COUNT(NewProp_bIsEditorOnly_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBlueprintClasses_MetaData[] = {
				{ "Category", "AssetType" },
				{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
				{ "ToolTip", "True if the assets loaded are blueprints classes, false if they are normal UObjects" },
			};
#endif
			auto NewProp_bHasBlueprintClasses_SetBit = [](void* Obj){ ((FPrimaryAssetTypeInfo*)Obj)->bHasBlueprintClasses = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBlueprintClasses = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasBlueprintClasses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FPrimaryAssetTypeInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasBlueprintClasses_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasBlueprintClasses_MetaData, ARRAY_COUNT(NewProp_bHasBlueprintClasses_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetBaseClassLoaded_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
				{ "ToolTip", "Base Class of all assets of this type" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_AssetBaseClassLoaded = { UE4CodeGen_Private::EPropertyClass::Class, "AssetBaseClassLoaded", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FPrimaryAssetTypeInfo, AssetBaseClassLoaded), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_AssetBaseClassLoaded_MetaData, ARRAY_COUNT(NewProp_AssetBaseClassLoaded_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetBaseClass_MetaData[] = {
				{ "AllowAbstract", "" },
				{ "Category", "AssetType" },
				{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
				{ "ToolTip", "Base Class of all assets of this type" },
			};
#endif
			static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_AssetBaseClass = { UE4CodeGen_Private::EPropertyClass::SoftClass, "AssetBaseClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044000000000001, 1, nullptr, STRUCT_OFFSET(FPrimaryAssetTypeInfo, AssetBaseClass), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_AssetBaseClass_MetaData, ARRAY_COUNT(NewProp_AssetBaseClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetType_MetaData[] = {
				{ "Category", "AssetType" },
				{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
				{ "ToolTip", "The logical name for this type of Primary Asset" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PrimaryAssetType = { UE4CodeGen_Private::EPropertyClass::Name, "PrimaryAssetType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FPrimaryAssetTypeInfo, PrimaryAssetType), METADATA_PARAMS(NewProp_PrimaryAssetType_MetaData, ARRAY_COUNT(NewProp_PrimaryAssetType_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumberOfAssets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsDynamicAsset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetScanPaths,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetScanPaths_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rules,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpecificAssets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpecificAssets_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Directories,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Directories_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsEditorOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasBlueprintClasses,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetBaseClassLoaded,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetBaseClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrimaryAssetType,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PrimaryAssetTypeInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FPrimaryAssetTypeInfo),
				alignof(FPrimaryAssetTypeInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_CRC() { return 154436887U; }
class UScriptStruct* FPrimaryAssetRules::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPrimaryAssetRules_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPrimaryAssetRules, Z_Construct_UPackage__Script_Engine(), TEXT("PrimaryAssetRules"), sizeof(FPrimaryAssetRules), Get_Z_Construct_UScriptStruct_FPrimaryAssetRules_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPrimaryAssetRules(FPrimaryAssetRules::StaticStruct, TEXT("/Script/Engine"), TEXT("PrimaryAssetRules"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPrimaryAssetRules
{
	FScriptStruct_Engine_StaticRegisterNativesFPrimaryAssetRules()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PrimaryAssetRules")),new UScriptStruct::TCppStructOps<FPrimaryAssetRules>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPrimaryAssetRules;
	UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetRules()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPrimaryAssetRules_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PrimaryAssetRules"), sizeof(FPrimaryAssetRules), Get_Z_Construct_UScriptStruct_FPrimaryAssetRules_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
				{ "ToolTip", "Structure defining rules for what to do with assets, this is defined per type and can be overridden per asset" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPrimaryAssetRules>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookRule_MetaData[] = {
				{ "Category", "Rules" },
				{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
				{ "ToolTip", "Rule describing when this asset should be cooked." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CookRule = { UE4CodeGen_Private::EPropertyClass::Enum, "CookRule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FPrimaryAssetRules, CookRule), Z_Construct_UEnum_Engine_EPrimaryAssetCookRule, METADATA_PARAMS(NewProp_CookRule_MetaData, ARRAY_COUNT(NewProp_CookRule_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CookRule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChunkId_MetaData[] = {
				{ "Category", "Rules" },
				{ "DisplayName", "Chunk ID" },
				{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
				{ "ToolTip", "Assets will be put into this Chunk ID specifically, if set to something other than -1. The default Chunk is Chunk 0." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChunkId = { UE4CodeGen_Private::EPropertyClass::Int, "ChunkId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FPrimaryAssetRules, ChunkId), METADATA_PARAMS(NewProp_ChunkId_MetaData, ARRAY_COUNT(NewProp_ChunkId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyRecursively_MetaData[] = {
				{ "Category", "Rules" },
				{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
				{ "ToolTip", "If true, this rule will apply to all referenced Secondary Assets recursively, as long as they are not managed by a higher-priority Primary Asset." },
			};
#endif
			auto NewProp_bApplyRecursively_SetBit = [](void* Obj){ ((FPrimaryAssetRules*)Obj)->bApplyRecursively = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyRecursively = { UE4CodeGen_Private::EPropertyClass::Bool, "bApplyRecursively", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FPrimaryAssetRules), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bApplyRecursively_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bApplyRecursively_MetaData, ARRAY_COUNT(NewProp_bApplyRecursively_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
				{ "Category", "Rules" },
				{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
				{ "ToolTip", "Primary Assets with a higher priority will take precedence over lower priorities when assigning management for referenced assets. If priorities match, both will manage the same Secondary Asset." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority = { UE4CodeGen_Private::EPropertyClass::Int, "Priority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FPrimaryAssetRules, Priority), METADATA_PARAMS(NewProp_Priority_MetaData, ARRAY_COUNT(NewProp_Priority_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CookRule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CookRule_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChunkId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bApplyRecursively,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Priority,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PrimaryAssetRules",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FPrimaryAssetRules),
				alignof(FPrimaryAssetRules),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPrimaryAssetRules_CRC() { return 4238762068U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
