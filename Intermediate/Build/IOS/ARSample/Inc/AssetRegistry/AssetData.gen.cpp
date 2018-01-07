// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AssetData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetData() {}
// Cross Module References
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	UPackage* Z_Construct_UPackage__Script_AssetRegistry();
// End Cross Module References
class UScriptStruct* FAssetData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASSETREGISTRY_API uint32 Get_Z_Construct_UScriptStruct_FAssetData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetData, Z_Construct_UPackage__Script_AssetRegistry(), TEXT("AssetData"), sizeof(FAssetData), Get_Z_Construct_UScriptStruct_FAssetData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetData(FAssetData::StaticStruct, TEXT("/Script/AssetRegistry"), TEXT("AssetData"), false, nullptr, nullptr);
static struct FScriptStruct_AssetRegistry_StaticRegisterNativesFAssetData
{
	FScriptStruct_AssetRegistry_StaticRegisterNativesFAssetData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetData")),new UScriptStruct::TCppStructOps<FAssetData>);
	}
} ScriptStruct_AssetRegistry_StaticRegisterNativesFAssetData;
	UScriptStruct* Z_Construct_UScriptStruct_FAssetData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AssetRegistry();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetData"), sizeof(FAssetData), Get_Z_Construct_UScriptStruct_FAssetData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AssetData.h" },
				{ "ToolTip", "A struct to hold important information about an assets found by the Asset Registry\nThis struct is transient and should never be serialized" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetClass_MetaData[] = {
				{ "Category", "AssetData" },
				{ "ModuleRelativePath", "Public/AssetData.h" },
				{ "ToolTip", "The name of the asset's class" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssetClass = { UE4CodeGen_Private::EPropertyClass::Name, "AssetClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002014, 1, nullptr, STRUCT_OFFSET(FAssetData, AssetClass), METADATA_PARAMS(NewProp_AssetClass_MetaData, ARRAY_COUNT(NewProp_AssetClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
				{ "Category", "AssetData" },
				{ "ModuleRelativePath", "Public/AssetData.h" },
				{ "ToolTip", "The name of the asset without the package" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssetName = { UE4CodeGen_Private::EPropertyClass::Name, "AssetName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002014, 1, nullptr, STRUCT_OFFSET(FAssetData, AssetName), METADATA_PARAMS(NewProp_AssetName_MetaData, ARRAY_COUNT(NewProp_AssetName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[] = {
				{ "Category", "AssetData" },
				{ "ModuleRelativePath", "Public/AssetData.h" },
				{ "ToolTip", "The path to the package in which the asset is found, this is /Game/Path with the Package stripped off" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackagePath = { UE4CodeGen_Private::EPropertyClass::Name, "PackagePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002014, 1, nullptr, STRUCT_OFFSET(FAssetData, PackagePath), METADATA_PARAMS(NewProp_PackagePath_MetaData, ARRAY_COUNT(NewProp_PackagePath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[] = {
				{ "Category", "AssetData" },
				{ "ModuleRelativePath", "Public/AssetData.h" },
				{ "ToolTip", "The name of the package in which the asset is found, this is the full long package name such as /Game/Path/Package" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackageName = { UE4CodeGen_Private::EPropertyClass::Name, "PackageName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002014, 1, nullptr, STRUCT_OFFSET(FAssetData, PackageName), METADATA_PARAMS(NewProp_PackageName_MetaData, ARRAY_COUNT(NewProp_PackageName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectPath_MetaData[] = {
				{ "Category", "AssetData" },
				{ "ModuleRelativePath", "Public/AssetData.h" },
				{ "ToolTip", "The object path for the asset in the form PackageName.AssetName. Only top level objects in a package can have AssetData" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ObjectPath = { UE4CodeGen_Private::EPropertyClass::Name, "ObjectPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002014, 1, nullptr, STRUCT_OFFSET(FAssetData, ObjectPath), METADATA_PARAMS(NewProp_ObjectPath_MetaData, ARRAY_COUNT(NewProp_ObjectPath_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PackagePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PackageName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectPath,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AssetRegistry,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AssetData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAssetData),
				alignof(FAssetData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetData_CRC() { return 1029586158U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
