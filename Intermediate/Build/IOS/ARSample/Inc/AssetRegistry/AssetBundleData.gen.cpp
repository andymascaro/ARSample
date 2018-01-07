// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AssetBundleData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetBundleData() {}
// Cross Module References
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FAssetBundleData();
	UPackage* Z_Construct_UPackage__Script_AssetRegistry();
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FAssetBundleEntry();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
// End Cross Module References
class UScriptStruct* FAssetBundleData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASSETREGISTRY_API uint32 Get_Z_Construct_UScriptStruct_FAssetBundleData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetBundleData, Z_Construct_UPackage__Script_AssetRegistry(), TEXT("AssetBundleData"), sizeof(FAssetBundleData), Get_Z_Construct_UScriptStruct_FAssetBundleData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetBundleData(FAssetBundleData::StaticStruct, TEXT("/Script/AssetRegistry"), TEXT("AssetBundleData"), false, nullptr, nullptr);
static struct FScriptStruct_AssetRegistry_StaticRegisterNativesFAssetBundleData
{
	FScriptStruct_AssetRegistry_StaticRegisterNativesFAssetBundleData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetBundleData")),new UScriptStruct::TCppStructOps<FAssetBundleData>);
	}
} ScriptStruct_AssetRegistry_StaticRegisterNativesFAssetBundleData;
	UScriptStruct* Z_Construct_UScriptStruct_FAssetBundleData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetBundleData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AssetRegistry();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetBundleData"), sizeof(FAssetBundleData), Get_Z_Construct_UScriptStruct_FAssetBundleData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AssetBundleData.h" },
				{ "ToolTip", "A struct with a list of asset bundle entries. If one of these is inside a UObject it will get automatically exported as the asset registry tag AssetBundleData" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetBundleData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bundles_MetaData[] = {
				{ "ModuleRelativePath", "Public/AssetBundleData.h" },
				{ "ToolTip", "List of bundles defined" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bundles = { UE4CodeGen_Private::EPropertyClass::Array, "Bundles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAssetBundleData, Bundles), METADATA_PARAMS(NewProp_Bundles_MetaData, ARRAY_COUNT(NewProp_Bundles_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bundles_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Bundles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAssetBundleEntry, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bundles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bundles_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AssetRegistry,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AssetBundleData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAssetBundleData),
				alignof(FAssetBundleData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetBundleData_CRC() { return 3999296707U; }
class UScriptStruct* FAssetBundleEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASSETREGISTRY_API uint32 Get_Z_Construct_UScriptStruct_FAssetBundleEntry_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetBundleEntry, Z_Construct_UPackage__Script_AssetRegistry(), TEXT("AssetBundleEntry"), sizeof(FAssetBundleEntry), Get_Z_Construct_UScriptStruct_FAssetBundleEntry_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetBundleEntry(FAssetBundleEntry::StaticStruct, TEXT("/Script/AssetRegistry"), TEXT("AssetBundleEntry"), false, nullptr, nullptr);
static struct FScriptStruct_AssetRegistry_StaticRegisterNativesFAssetBundleEntry
{
	FScriptStruct_AssetRegistry_StaticRegisterNativesFAssetBundleEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetBundleEntry")),new UScriptStruct::TCppStructOps<FAssetBundleEntry>);
	}
} ScriptStruct_AssetRegistry_StaticRegisterNativesFAssetBundleEntry;
	UScriptStruct* Z_Construct_UScriptStruct_FAssetBundleEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetBundleEntry_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AssetRegistry();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetBundleEntry"), sizeof(FAssetBundleEntry), Get_Z_Construct_UScriptStruct_FAssetBundleEntry_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AssetBundleData.h" },
				{ "ToolTip", "A struct representing a single AssetBundle" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetBundleEntry>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BundleAssets_MetaData[] = {
				{ "ModuleRelativePath", "Public/AssetBundleData.h" },
				{ "ToolTip", "List of string assets contained in this bundle" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BundleAssets = { UE4CodeGen_Private::EPropertyClass::Array, "BundleAssets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAssetBundleEntry, BundleAssets), METADATA_PARAMS(NewProp_BundleAssets_MetaData, ARRAY_COUNT(NewProp_BundleAssets_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BundleAssets_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BundleAssets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BundleName_MetaData[] = {
				{ "ModuleRelativePath", "Public/AssetBundleData.h" },
				{ "ToolTip", "Specific name of this bundle, should be unique for a given scope" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BundleName = { UE4CodeGen_Private::EPropertyClass::Name, "BundleName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAssetBundleEntry, BundleName), METADATA_PARAMS(NewProp_BundleName_MetaData, ARRAY_COUNT(NewProp_BundleName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BundleScope_MetaData[] = {
				{ "ModuleRelativePath", "Public/AssetBundleData.h" },
				{ "ToolTip", "Asset this bundle is saved within. This is empty for global bundles, or in the saved bundle info" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BundleScope = { UE4CodeGen_Private::EPropertyClass::Struct, "BundleScope", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAssetBundleEntry, BundleScope), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(NewProp_BundleScope_MetaData, ARRAY_COUNT(NewProp_BundleScope_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BundleAssets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BundleAssets_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BundleName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BundleScope,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AssetRegistry,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AssetBundleEntry",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAssetBundleEntry),
				alignof(FAssetBundleEntry),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetBundleEntry_CRC() { return 493186109U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
