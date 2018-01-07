// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/IAssetRegistry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAssetRegistry() {}
// Cross Module References
	ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistry_NoRegister();
	ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistry();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AssetRegistry();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistry_GetAllAssets();
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssets();
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FARFilter();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistry_GetSubPaths();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistry_HasAssets();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter();
// End Cross Module References
	void UAssetRegistry::StaticRegisterNativesUAssetRegistry()
	{
		UClass* Class = UAssetRegistry::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllAssets", (Native)&IAssetRegistry::execGetAllAssets },
			{ "GetAllCachedPaths", (Native)&IAssetRegistry::execGetAllCachedPaths },
			{ "GetAssetByObjectPath", (Native)&IAssetRegistry::execGetAssetByObjectPath },
			{ "GetAssets", (Native)&IAssetRegistry::execGetAssets },
			{ "GetAssetsByClass", (Native)&IAssetRegistry::execGetAssetsByClass },
			{ "GetAssetsByPackageName", (Native)&IAssetRegistry::execGetAssetsByPackageName },
			{ "GetAssetsByPath", (Native)&IAssetRegistry::execGetAssetsByPath },
			{ "GetSubPaths", (Native)&IAssetRegistry::execGetSubPaths },
			{ "HasAssets", (Native)&IAssetRegistry::execHasAssets },
			{ "IsLoadingAssets", (Native)&IAssetRegistry::execIsLoadingAssets },
			{ "RunAssetsThroughFilter", (Native)&IAssetRegistry::execRunAssetsThroughFilter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAssetRegistry_GetAllAssets()
	{
		struct AssetRegistry_eventGetAllAssets_Parms
		{
			TArray<FAssetData> OutAssetData;
			bool bIncludeOnlyOnDiskAssets;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AssetRegistry_eventGetAllAssets_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AssetRegistry_eventGetAllAssets_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bIncludeOnlyOnDiskAssets_SetBit = [](void* Obj){ ((AssetRegistry_eventGetAllAssets_Parms*)Obj)->bIncludeOnlyOnDiskAssets = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeOnlyOnDiskAssets = { UE4CodeGen_Private::EPropertyClass::Bool, "bIncludeOnlyOnDiskAssets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AssetRegistry_eventGetAllAssets_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIncludeOnlyOnDiskAssets_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutAssetData = { UE4CodeGen_Private::EPropertyClass::Array, "OutAssetData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AssetRegistry_eventGetAllAssets_Parms, OutAssetData), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAssetData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OutAssetData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIncludeOnlyOnDiskAssets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutAssetData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutAssetData_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AssetRegistry" },
				{ "CPP_Default_bIncludeOnlyOnDiskAssets", "false" },
				{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
				{ "ToolTip", "Gets asset data for all assets in the registry.\nThis method may be slow, use a filter if possible to avoid iterating over the entire registry.\n\n@param OutAssetData the list of assets in this path" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, "GetAllAssets", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420400, sizeof(AssetRegistry_eventGetAllAssets_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths()
	{
		struct AssetRegistry_eventGetAllCachedPaths_Parms
		{
			TArray<FString> OutPathList;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutPathList = { UE4CodeGen_Private::EPropertyClass::Array, "OutPathList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AssetRegistry_eventGetAllCachedPaths_Parms, OutPathList), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutPathList_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "OutPathList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutPathList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutPathList_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AssetRegistry" },
				{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
				{ "ToolTip", "Gets a list of all paths that are currently cached" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, "GetAllCachedPaths", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420400, sizeof(AssetRegistry_eventGetAllCachedPaths_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath()
	{
		struct AssetRegistry_eventGetAssetByObjectPath_Parms
		{
			FName ObjectPath;
			bool bIncludeOnlyOnDiskAssets;
			FAssetData ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AssetRegistry_eventGetAssetByObjectPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bIncludeOnlyOnDiskAssets_SetBit = [](void* Obj){ ((AssetRegistry_eventGetAssetByObjectPath_Parms*)Obj)->bIncludeOnlyOnDiskAssets = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeOnlyOnDiskAssets = { UE4CodeGen_Private::EPropertyClass::Bool, "bIncludeOnlyOnDiskAssets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AssetRegistry_eventGetAssetByObjectPath_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIncludeOnlyOnDiskAssets_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectPath_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ObjectPath = { UE4CodeGen_Private::EPropertyClass::Name, "ObjectPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AssetRegistry_eventGetAssetByObjectPath_Parms, ObjectPath), METADATA_PARAMS(NewProp_ObjectPath_MetaData, ARRAY_COUNT(NewProp_ObjectPath_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIncludeOnlyOnDiskAssets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectPath,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AssetRegistry" },
				{ "CPP_Default_bIncludeOnlyOnDiskAssets", "false" },
				{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
				{ "ToolTip", "Gets the asset data for the specified object path\n\n@param ObjectPath the path of the object to be looked up\n@param bIncludeOnlyOnDiskAssets if true, in-memory objects will be ignored. The call will be faster.\n@return the assets data;Will be invalid if object could not be found" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, "GetAssetByObjectPath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(AssetRegistry_eventGetAssetByObjectPath_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssets()
	{
		struct AssetRegistry_eventGetAssets_Parms
		{
			FARFilter Filter;
			TArray<FAssetData> OutAssetData;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AssetRegistry_eventGetAssets_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AssetRegistry_eventGetAssets_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutAssetData = { UE4CodeGen_Private::EPropertyClass::Array, "OutAssetData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AssetRegistry_eventGetAssets_Parms, OutAssetData), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAssetData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OutAssetData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter = { UE4CodeGen_Private::EPropertyClass::Struct, "Filter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AssetRegistry_eventGetAssets_Parms, Filter), Z_Construct_UScriptStruct_FARFilter, METADATA_PARAMS(NewProp_Filter_MetaData, ARRAY_COUNT(NewProp_Filter_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutAssetData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutAssetData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Filter,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AssetRegistry" },
				{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
				{ "ToolTip", "Gets asset data for all assets that match the filter.\nAssets returned must satisfy every filter component if there is at least one element in the component's array.\nAssets will satisfy a component if they match any of the elements in it.\n\n@param Filter filter to apply to the assets in the AssetRegistry\n@param OutAssetData the list of assets in this path" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, "GetAssets", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420400, sizeof(AssetRegistry_eventGetAssets_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass()
	{
		struct AssetRegistry_eventGetAssetsByClass_Parms
		{
			FName ClassName;
			TArray<FAssetData> OutAssetData;
			bool bSearchSubClasses;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AssetRegistry_eventGetAssetsByClass_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AssetRegistry_eventGetAssetsByClass_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bSearchSubClasses_SetBit = [](void* Obj){ ((AssetRegistry_eventGetAssetsByClass_Parms*)Obj)->bSearchSubClasses = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSearchSubClasses = { UE4CodeGen_Private::EPropertyClass::Bool, "bSearchSubClasses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AssetRegistry_eventGetAssetsByClass_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSearchSubClasses_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutAssetData = { UE4CodeGen_Private::EPropertyClass::Array, "OutAssetData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AssetRegistry_eventGetAssetsByClass_Parms, OutAssetData), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAssetData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OutAssetData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClassName = { UE4CodeGen_Private::EPropertyClass::Name, "ClassName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AssetRegistry_eventGetAssetsByClass_Parms, ClassName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSearchSubClasses,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutAssetData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutAssetData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClassName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AssetRegistry" },
				{ "CPP_Default_bSearchSubClasses", "false" },
				{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
				{ "ToolTip", "Gets asset data for all assets with the supplied class\n\n@param ClassName the class name of the assets requested\n@param OutAssetData the list of assets in this path\n@param bSearchSubClasses if true, all subclasses of the passed in class will be searched as well" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, "GetAssetsByClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420400, sizeof(AssetRegistry_eventGetAssetsByClass_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName()
	{
		struct AssetRegistry_eventGetAssetsByPackageName_Parms
		{
			FName PackageName;
			TArray<FAssetData> OutAssetData;
			bool bIncludeOnlyOnDiskAssets;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AssetRegistry_eventGetAssetsByPackageName_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AssetRegistry_eventGetAssetsByPackageName_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bIncludeOnlyOnDiskAssets_SetBit = [](void* Obj){ ((AssetRegistry_eventGetAssetsByPackageName_Parms*)Obj)->bIncludeOnlyOnDiskAssets = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeOnlyOnDiskAssets = { UE4CodeGen_Private::EPropertyClass::Bool, "bIncludeOnlyOnDiskAssets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AssetRegistry_eventGetAssetsByPackageName_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIncludeOnlyOnDiskAssets_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutAssetData = { UE4CodeGen_Private::EPropertyClass::Array, "OutAssetData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AssetRegistry_eventGetAssetsByPackageName_Parms, OutAssetData), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAssetData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OutAssetData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackageName = { UE4CodeGen_Private::EPropertyClass::Name, "PackageName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AssetRegistry_eventGetAssetsByPackageName_Parms, PackageName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIncludeOnlyOnDiskAssets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutAssetData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutAssetData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PackageName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AssetRegistry" },
				{ "CPP_Default_bIncludeOnlyOnDiskAssets", "false" },
				{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
				{ "ToolTip", "Gets asset data for the assets in the package with the specified package name\n\n@param PackageName the package name for the requested assets\n@param OutAssetData the list of assets in this path" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, "GetAssetsByPackageName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420400, sizeof(AssetRegistry_eventGetAssetsByPackageName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath()
	{
		struct AssetRegistry_eventGetAssetsByPath_Parms
		{
			FName PackagePath;
			TArray<FAssetData> OutAssetData;
			bool bRecursive;
			bool bIncludeOnlyOnDiskAssets;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AssetRegistry_eventGetAssetsByPath_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AssetRegistry_eventGetAssetsByPath_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bIncludeOnlyOnDiskAssets_SetBit = [](void* Obj){ ((AssetRegistry_eventGetAssetsByPath_Parms*)Obj)->bIncludeOnlyOnDiskAssets = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeOnlyOnDiskAssets = { UE4CodeGen_Private::EPropertyClass::Bool, "bIncludeOnlyOnDiskAssets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AssetRegistry_eventGetAssetsByPath_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIncludeOnlyOnDiskAssets_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bRecursive_SetBit = [](void* Obj){ ((AssetRegistry_eventGetAssetsByPath_Parms*)Obj)->bRecursive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecursive = { UE4CodeGen_Private::EPropertyClass::Bool, "bRecursive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AssetRegistry_eventGetAssetsByPath_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRecursive_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutAssetData = { UE4CodeGen_Private::EPropertyClass::Array, "OutAssetData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AssetRegistry_eventGetAssetsByPath_Parms, OutAssetData), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAssetData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OutAssetData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackagePath = { UE4CodeGen_Private::EPropertyClass::Name, "PackagePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AssetRegistry_eventGetAssetsByPath_Parms, PackagePath), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIncludeOnlyOnDiskAssets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRecursive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutAssetData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutAssetData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PackagePath,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AssetRegistry" },
				{ "CPP_Default_bIncludeOnlyOnDiskAssets", "false" },
				{ "CPP_Default_bRecursive", "false" },
				{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
				{ "ToolTip", "Gets asset data for all assets in the supplied folder path\n\n@param PackagePath the path to query asset data in\n@param OutAssetData the list of assets in this path\n@param bRecursive if true, all supplied paths will be searched recursively" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, "GetAssetsByPath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420400, sizeof(AssetRegistry_eventGetAssetsByPath_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAssetRegistry_GetSubPaths()
	{
		struct AssetRegistry_eventGetSubPaths_Parms
		{
			FString InBasePath;
			TArray<FString> OutPathList;
			bool bInRecurse;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bInRecurse_SetBit = [](void* Obj){ ((AssetRegistry_eventGetSubPaths_Parms*)Obj)->bInRecurse = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInRecurse = { UE4CodeGen_Private::EPropertyClass::Bool, "bInRecurse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AssetRegistry_eventGetSubPaths_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInRecurse_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutPathList = { UE4CodeGen_Private::EPropertyClass::Array, "OutPathList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AssetRegistry_eventGetSubPaths_Parms, OutPathList), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutPathList_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "OutPathList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBasePath_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InBasePath = { UE4CodeGen_Private::EPropertyClass::Str, "InBasePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AssetRegistry_eventGetSubPaths_Parms, InBasePath), METADATA_PARAMS(NewProp_InBasePath_MetaData, ARRAY_COUNT(NewProp_InBasePath_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInRecurse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutPathList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutPathList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InBasePath,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AssetRegistry" },
				{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
				{ "ToolTip", "Gets a list of all paths that are currently cached below the passed-in base path" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, "GetSubPaths", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420400, sizeof(AssetRegistry_eventGetSubPaths_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAssetRegistry_HasAssets()
	{
		struct AssetRegistry_eventHasAssets_Parms
		{
			FName PackagePath;
			bool bRecursive;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AssetRegistry_eventHasAssets_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AssetRegistry_eventHasAssets_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecursive_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			auto NewProp_bRecursive_SetBit = [](void* Obj){ ((AssetRegistry_eventHasAssets_Parms*)Obj)->bRecursive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecursive = { UE4CodeGen_Private::EPropertyClass::Bool, "bRecursive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AssetRegistry_eventHasAssets_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRecursive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRecursive_MetaData, ARRAY_COUNT(NewProp_bRecursive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackagePath = { UE4CodeGen_Private::EPropertyClass::Name, "PackagePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AssetRegistry_eventHasAssets_Parms, PackagePath), METADATA_PARAMS(NewProp_PackagePath_MetaData, ARRAY_COUNT(NewProp_PackagePath_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRecursive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PackagePath,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AssetRegistry" },
				{ "CPP_Default_bRecursive", "false" },
				{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
				{ "ToolTip", "Does the given path contain assets, optionally also testing sub-paths?\n\n@param PackagePath the path to query asset data in\n@param bRecursive if true, the supplied path will be tested recursively" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, "HasAssets", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(AssetRegistry_eventHasAssets_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets()
	{
		struct AssetRegistry_eventIsLoadingAssets_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AssetRegistry_eventIsLoadingAssets_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AssetRegistry_eventIsLoadingAssets_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AssetRegistry" },
				{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
				{ "ToolTip", "Returns true if the asset registry is currently loading files and does not yet know about all assets" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, "IsLoadingAssets", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(AssetRegistry_eventIsLoadingAssets_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter()
	{
		struct AssetRegistry_eventRunAssetsThroughFilter_Parms
		{
			TArray<FAssetData> AssetDataList;
			FARFilter Filter;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter = { UE4CodeGen_Private::EPropertyClass::Struct, "Filter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AssetRegistry_eventRunAssetsThroughFilter_Parms, Filter), Z_Construct_UScriptStruct_FARFilter, METADATA_PARAMS(NewProp_Filter_MetaData, ARRAY_COUNT(NewProp_Filter_MetaData)) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetDataList = { UE4CodeGen_Private::EPropertyClass::Array, "AssetDataList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AssetRegistry_eventRunAssetsThroughFilter_Parms, AssetDataList), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDataList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AssetDataList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Filter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetDataList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetDataList_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AssetRegistry" },
				{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
				{ "ToolTip", "Trims items out of the asset data list that do not pass the supplied filter" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, "RunAssetsThroughFilter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420400, sizeof(AssetRegistry_eventRunAssetsThroughFilter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAssetRegistry_NoRegister()
	{
		return UAssetRegistry::StaticClass();
	}
	UClass* Z_Construct_UClass_UAssetRegistry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterface,
				(UObject* (*)())Z_Construct_UPackage__Script_AssetRegistry,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAssetRegistry_GetAllAssets, "GetAllAssets" }, // 520899019
				{ &Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths, "GetAllCachedPaths" }, // 2751260001
				{ &Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath, "GetAssetByObjectPath" }, // 3067078419
				{ &Z_Construct_UFunction_UAssetRegistry_GetAssets, "GetAssets" }, // 363700801
				{ &Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass, "GetAssetsByClass" }, // 1692417613
				{ &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName, "GetAssetsByPackageName" }, // 2881746212
				{ &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath, "GetAssetsByPath" }, // 1059452824
				{ &Z_Construct_UFunction_UAssetRegistry_GetSubPaths, "GetSubPaths" }, // 2680457247
				{ &Z_Construct_UFunction_UAssetRegistry_HasAssets, "HasAssets" }, // 1322403852
				{ &Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets, "IsLoadingAssets" }, // 2812070449
				{ &Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter, "RunAssetsThroughFilter" }, // 45008666
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CannotImplementInterfaceInBlueprint", "" },
				{ "ModuleRelativePath", "Public/IAssetRegistry.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<IAssetRegistry>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAssetRegistry::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00084081u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetRegistry, 1881570138);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetRegistry(Z_Construct_UClass_UAssetRegistry, &UAssetRegistry::StaticClass, TEXT("/Script/AssetRegistry"), TEXT("UAssetRegistry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetRegistry);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
