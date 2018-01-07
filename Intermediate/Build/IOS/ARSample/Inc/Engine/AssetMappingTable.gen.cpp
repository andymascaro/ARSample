// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AssetMappingTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetMappingTable() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAssetMapping();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetMappingTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetMappingTable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FAssetMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAssetMapping_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetMapping, Z_Construct_UPackage__Script_Engine(), TEXT("AssetMapping"), sizeof(FAssetMapping), Get_Z_Construct_UScriptStruct_FAssetMapping_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetMapping(FAssetMapping::StaticStruct, TEXT("/Script/Engine"), TEXT("AssetMapping"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAssetMapping
{
	FScriptStruct_Engine_StaticRegisterNativesFAssetMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetMapping")),new UScriptStruct::TCppStructOps<FAssetMapping>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAssetMapping;
	UScriptStruct* Z_Construct_UScriptStruct_FAssetMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetMapping_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetMapping"), sizeof(FAssetMapping), Get_Z_Construct_UScriptStruct_FAssetMapping_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AssetMappingTable.h" },
				{ "ToolTip", "This defines one asset mapping" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetMapping>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetAsset_MetaData[] = {
				{ "Category", "FAssetMapping" },
				{ "ModuleRelativePath", "Classes/Animation/AssetMappingTable.h" },
				{ "ToolTip", "source asset *" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetAsset = { UE4CodeGen_Private::EPropertyClass::Object, "TargetAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAssetMapping, TargetAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(NewProp_TargetAsset_MetaData, ARRAY_COUNT(NewProp_TargetAsset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceAsset_MetaData[] = {
				{ "Category", "FAssetMapping" },
				{ "ModuleRelativePath", "Classes/Animation/AssetMappingTable.h" },
				{ "ToolTip", "source asset *" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceAsset = { UE4CodeGen_Private::EPropertyClass::Object, "SourceAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAssetMapping, SourceAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(NewProp_SourceAsset_MetaData, ARRAY_COUNT(NewProp_SourceAsset_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetAsset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceAsset,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AssetMapping",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAssetMapping),
				alignof(FAssetMapping),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetMapping_CRC() { return 1793133373U; }
	void UAssetMappingTable::StaticRegisterNativesUAssetMappingTable()
	{
	}
	UClass* Z_Construct_UClass_UAssetMappingTable_NoRegister()
	{
		return UAssetMappingTable::StaticClass();
	}
	UClass* Z_Construct_UClass_UAssetMappingTable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object" },
				{ "IncludePath", "Animation/AssetMappingTable.h" },
				{ "ModuleRelativePath", "Classes/Animation/AssetMappingTable.h" },
				{ "ToolTip", "UAssetMappingTable : that has AssetMappingTableging data\n        - used for retargeting\n        - support to share different animations" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MappedAssets_MetaData[] = {
				{ "Category", "AssetMappingTable" },
				{ "ModuleRelativePath", "Classes/Animation/AssetMappingTable.h" },
				{ "ToolTip", "Mappin of asset between source and target *" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MappedAssets = { UE4CodeGen_Private::EPropertyClass::Array, "MappedAssets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000020041, 1, nullptr, STRUCT_OFFSET(UAssetMappingTable, MappedAssets), METADATA_PARAMS(NewProp_MappedAssets_MetaData, ARRAY_COUNT(NewProp_MappedAssets_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MappedAssets_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "MappedAssets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAssetMapping, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MappedAssets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MappedAssets_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAssetMappingTable>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAssetMappingTable::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetMappingTable, 1559935063);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetMappingTable(Z_Construct_UClass_UAssetMappingTable, &UAssetMappingTable::StaticClass, TEXT("/Script/Engine"), TEXT("UAssetMappingTable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetMappingTable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
