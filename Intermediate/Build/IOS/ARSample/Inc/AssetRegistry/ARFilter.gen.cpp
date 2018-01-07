// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ARFilter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARFilter() {}
// Cross Module References
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FARFilter();
	UPackage* Z_Construct_UPackage__Script_AssetRegistry();
// End Cross Module References
class UScriptStruct* FARFilter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASSETREGISTRY_API uint32 Get_Z_Construct_UScriptStruct_FARFilter_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FARFilter, Z_Construct_UPackage__Script_AssetRegistry(), TEXT("ARFilter"), sizeof(FARFilter), Get_Z_Construct_UScriptStruct_FARFilter_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FARFilter(FARFilter::StaticStruct, TEXT("/Script/AssetRegistry"), TEXT("ARFilter"), false, nullptr, nullptr);
static struct FScriptStruct_AssetRegistry_StaticRegisterNativesFARFilter
{
	FScriptStruct_AssetRegistry_StaticRegisterNativesFARFilter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ARFilter")),new UScriptStruct::TCppStructOps<FARFilter>);
	}
} ScriptStruct_AssetRegistry_StaticRegisterNativesFARFilter;
	UScriptStruct* Z_Construct_UScriptStruct_FARFilter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FARFilter_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AssetRegistry();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ARFilter"), sizeof(FARFilter), Get_Z_Construct_UScriptStruct_FARFilter_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ARFilter.h" },
				{ "ToolTip", "A struct to serve as a filter for Asset Registry queries. Each component element is processed as an 'OR' operation while all the components are processed together as an 'AND' operation." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARFilter>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeOnlyOnDiskAssets_MetaData[] = {
				{ "Category", "AssetRegistry" },
				{ "ModuleRelativePath", "Public/ARFilter.h" },
				{ "ToolTip", "If true, only on-disk assets will be returned. Be warned that this is rarely what you want and should only be used for performance reasons" },
			};
#endif
			auto NewProp_bIncludeOnlyOnDiskAssets_SetBit = [](void* Obj){ ((FARFilter*)Obj)->bIncludeOnlyOnDiskAssets = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeOnlyOnDiskAssets = { UE4CodeGen_Private::EPropertyClass::Bool, "bIncludeOnlyOnDiskAssets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FARFilter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIncludeOnlyOnDiskAssets_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIncludeOnlyOnDiskAssets_MetaData, ARRAY_COUNT(NewProp_bIncludeOnlyOnDiskAssets_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecursiveClasses_MetaData[] = {
				{ "Category", "AssetRegistry" },
				{ "ModuleRelativePath", "Public/ARFilter.h" },
				{ "ToolTip", "If true, subclasses of ClassNames will also be included and RecursiveClassesExclusionSet will be excluded." },
			};
#endif
			auto NewProp_bRecursiveClasses_SetBit = [](void* Obj){ ((FARFilter*)Obj)->bRecursiveClasses = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecursiveClasses = { UE4CodeGen_Private::EPropertyClass::Bool, "bRecursiveClasses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FARFilter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRecursiveClasses_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRecursiveClasses_MetaData, ARRAY_COUNT(NewProp_bRecursiveClasses_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecursivePaths_MetaData[] = {
				{ "Category", "AssetRegistry" },
				{ "ModuleRelativePath", "Public/ARFilter.h" },
				{ "ToolTip", "If true, PackagePath components will be recursive" },
			};
#endif
			auto NewProp_bRecursivePaths_SetBit = [](void* Obj){ ((FARFilter*)Obj)->bRecursivePaths = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecursivePaths = { UE4CodeGen_Private::EPropertyClass::Bool, "bRecursivePaths", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FARFilter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRecursivePaths_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRecursivePaths_MetaData, ARRAY_COUNT(NewProp_bRecursivePaths_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecursiveClassesExclusionSet_MetaData[] = {
				{ "Category", "AssetRegistry" },
				{ "ModuleRelativePath", "Public/ARFilter.h" },
				{ "ToolTip", "Only if bRecursiveClasses is true, the results will exclude classes (and subclasses) in this list" },
			};
#endif
			static const UE4CodeGen_Private::FSetPropertyParams NewProp_RecursiveClassesExclusionSet = { UE4CodeGen_Private::EPropertyClass::Set, "RecursiveClassesExclusionSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002004, 1, nullptr, STRUCT_OFFSET(FARFilter, RecursiveClassesExclusionSet), METADATA_PARAMS(NewProp_RecursiveClassesExclusionSet_MetaData, ARRAY_COUNT(NewProp_RecursiveClassesExclusionSet_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_RecursiveClassesExclusionSet_ElementProp = { UE4CodeGen_Private::EPropertyClass::Name, "RecursiveClassesExclusionSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassNames_MetaData[] = {
				{ "Category", "AssetRegistry" },
				{ "ModuleRelativePath", "Public/ARFilter.h" },
				{ "ToolTip", "The filter component for class names. Instances of the specified classes, but not subclasses (by default), will be included. Derived classes will be included only if bRecursiveClasses is true." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClassNames = { UE4CodeGen_Private::EPropertyClass::Array, "ClassNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002004, 1, nullptr, STRUCT_OFFSET(FARFilter, ClassNames), METADATA_PARAMS(NewProp_ClassNames_MetaData, ARRAY_COUNT(NewProp_ClassNames_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClassNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "ClassNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectPaths_MetaData[] = {
				{ "Category", "AssetRegistry" },
				{ "ModuleRelativePath", "Public/ARFilter.h" },
				{ "ToolTip", "The filter component containing specific object paths" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectPaths = { UE4CodeGen_Private::EPropertyClass::Array, "ObjectPaths", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002004, 1, nullptr, STRUCT_OFFSET(FARFilter, ObjectPaths), METADATA_PARAMS(NewProp_ObjectPaths_MetaData, ARRAY_COUNT(NewProp_ObjectPaths_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ObjectPaths_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "ObjectPaths", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackagePaths_MetaData[] = {
				{ "Category", "AssetRegistry" },
				{ "ModuleRelativePath", "Public/ARFilter.h" },
				{ "ToolTip", "The filter component for package paths" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PackagePaths = { UE4CodeGen_Private::EPropertyClass::Array, "PackagePaths", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002004, 1, nullptr, STRUCT_OFFSET(FARFilter, PackagePaths), METADATA_PARAMS(NewProp_PackagePaths_MetaData, ARRAY_COUNT(NewProp_PackagePaths_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackagePaths_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "PackagePaths", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageNames_MetaData[] = {
				{ "Category", "AssetRegistry" },
				{ "ModuleRelativePath", "Public/ARFilter.h" },
				{ "ToolTip", "The filter component for package names" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PackageNames = { UE4CodeGen_Private::EPropertyClass::Array, "PackageNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002004, 1, nullptr, STRUCT_OFFSET(FARFilter, PackageNames), METADATA_PARAMS(NewProp_PackageNames_MetaData, ARRAY_COUNT(NewProp_PackageNames_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackageNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "PackageNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIncludeOnlyOnDiskAssets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRecursiveClasses,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRecursivePaths,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RecursiveClassesExclusionSet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RecursiveClassesExclusionSet_ElementProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClassNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClassNames_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectPaths,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectPaths_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PackagePaths,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PackagePaths_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PackageNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PackageNames_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AssetRegistry,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ARFilter",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FARFilter),
				alignof(FARFilter),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FARFilter_CRC() { return 3190753029U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
