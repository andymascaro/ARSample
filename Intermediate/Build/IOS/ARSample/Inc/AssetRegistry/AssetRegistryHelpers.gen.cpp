// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AssetRegistryHelpers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetRegistryHelpers() {}
// Cross Module References
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTagAndValue();
	UPackage* Z_Construct_UPackage__Script_AssetRegistry();
	ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistryHelpers_NoRegister();
	ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistryHelpers();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData();
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry();
	ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistry_NoRegister();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_GetClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_IsValid();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues();
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FARFilter();
	ASSETREGISTRY_API UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
class UScriptStruct* FTagAndValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASSETREGISTRY_API uint32 Get_Z_Construct_UScriptStruct_FTagAndValue_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTagAndValue, Z_Construct_UPackage__Script_AssetRegistry(), TEXT("TagAndValue"), sizeof(FTagAndValue), Get_Z_Construct_UScriptStruct_FTagAndValue_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTagAndValue(FTagAndValue::StaticStruct, TEXT("/Script/AssetRegistry"), TEXT("TagAndValue"), false, nullptr, nullptr);
static struct FScriptStruct_AssetRegistry_StaticRegisterNativesFTagAndValue
{
	FScriptStruct_AssetRegistry_StaticRegisterNativesFTagAndValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TagAndValue")),new UScriptStruct::TCppStructOps<FTagAndValue>);
	}
} ScriptStruct_AssetRegistry_StaticRegisterNativesFTagAndValue;
	UScriptStruct* Z_Construct_UScriptStruct_FTagAndValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTagAndValue_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AssetRegistry();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TagAndValue"), sizeof(FTagAndValue), Get_Z_Construct_UScriptStruct_FTagAndValue_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTagAndValue>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "Category", "AssetData" },
				{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Str, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002004, 1, nullptr, STRUCT_OFFSET(FTagAndValue, Value), METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
				{ "Category", "AssetData" },
				{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag = { UE4CodeGen_Private::EPropertyClass::Name, "Tag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002004, 1, nullptr, STRUCT_OFFSET(FTagAndValue, Tag), METADATA_PARAMS(NewProp_Tag_MetaData, ARRAY_COUNT(NewProp_Tag_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tag,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AssetRegistry,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TagAndValue",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FTagAndValue),
				alignof(FTagAndValue),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTagAndValue_CRC() { return 3209563420U; }
	void UAssetRegistryHelpers::StaticRegisterNativesUAssetRegistryHelpers()
	{
		UClass* Class = UAssetRegistryHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateAssetData", (Native)&UAssetRegistryHelpers::execCreateAssetData },
			{ "GetAsset", (Native)&UAssetRegistryHelpers::execGetAsset },
			{ "GetAssetRegistry", (Native)&UAssetRegistryHelpers::execGetAssetRegistry },
			{ "GetClass", (Native)&UAssetRegistryHelpers::execGetClass },
			{ "GetExportTextName", (Native)&UAssetRegistryHelpers::execGetExportTextName },
			{ "GetFullName", (Native)&UAssetRegistryHelpers::execGetFullName },
			{ "GetTagValue", (Native)&UAssetRegistryHelpers::execGetTagValue },
			{ "IsAssetLoaded", (Native)&UAssetRegistryHelpers::execIsAssetLoaded },
			{ "IsRedirector", (Native)&UAssetRegistryHelpers::execIsRedirector },
			{ "IsUAsset", (Native)&UAssetRegistryHelpers::execIsUAsset },
			{ "IsValid", (Native)&UAssetRegistryHelpers::execIsValid },
			{ "SetFilterTagsAndValues", (Native)&UAssetRegistryHelpers::execSetFilterTagsAndValues },
			{ "ToSoftObjectPath", (Native)&UAssetRegistryHelpers::execToSoftObjectPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData()
	{
		struct AssetRegistryHelpers_eventCreateAssetData_Parms
		{
			const UObject* InAsset;
			bool bAllowBlueprintClass;
			FAssetData ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AssetRegistryHelpers_eventCreateAssetData_Parms, ReturnValue), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bAllowBlueprintClass_SetBit = [](void* Obj){ ((AssetRegistryHelpers_eventCreateAssetData_Parms*)Obj)->bAllowBlueprintClass = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowBlueprintClass = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowBlueprintClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AssetRegistryHelpers_eventCreateAssetData_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowBlueprintClass_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAsset_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAsset = { UE4CodeGen_Private::EPropertyClass::Object, "InAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AssetRegistryHelpers_eventCreateAssetData_Parms, InAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_InAsset_MetaData, ARRAY_COUNT(NewProp_InAsset_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowBlueprintClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAsset,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Asset Data" },
				{ "CPP_Default_bAllowBlueprintClass", "false" },
				{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
				{ "ToolTip", "Creates asset data from a UObject.\n\n@param InAsset       The asset to create asset data for\n@param bAllowBlueprintClass  By default trying to create asset data for a blueprint class will create one for the UBlueprint instead" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, "CreateAssetData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(AssetRegistryHelpers_eventCreateAssetData_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset()
	{
		struct AssetRegistryHelpers_eventGetAsset_Parms
		{
			FAssetData InAssetData;
			UObject* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AssetRegistryHelpers_eventGetAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAssetData = { UE4CodeGen_Private::EPropertyClass::Struct, "InAssetData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AssetRegistryHelpers_eventGetAsset_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(NewProp_InAssetData_MetaData, ARRAY_COUNT(NewProp_InAssetData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAssetData,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Asset Data" },
				{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
				{ "ToolTip", "Returns the asset UObject if it is loaded or loads the asset if it is unloaded then returns the result" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, "GetAsset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(AssetRegistryHelpers_eventGetAsset_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry()
	{
		struct AssetRegistryHelpers_eventGetAssetRegistry_Parms
		{
			TScriptInterface<IAssetRegistry> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Interface, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000580, 1, nullptr, STRUCT_OFFSET(AssetRegistryHelpers_eventGetAssetRegistry_Parms, ReturnValue), Z_Construct_UClass_UAssetRegistry_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Asset Registry" },
				{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, "GetAssetRegistry", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(AssetRegistryHelpers_eventGetAssetRegistry_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_GetClass()
	{
		struct AssetRegistryHelpers_eventGetClass_Parms
		{
			FAssetData InAssetData;
			UClass* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AssetRegistryHelpers_eventGetClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAssetData = { UE4CodeGen_Private::EPropertyClass::Struct, "InAssetData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AssetRegistryHelpers_eventGetClass_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(NewProp_InAssetData_MetaData, ARRAY_COUNT(NewProp_InAssetData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAssetData,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Asset Data" },
				{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, "GetClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(AssetRegistryHelpers_eventGetClass_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName()
	{
		struct AssetRegistryHelpers_eventGetExportTextName_Parms
		{
			FAssetData InAssetData;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AssetRegistryHelpers_eventGetExportTextName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAssetData = { UE4CodeGen_Private::EPropertyClass::Struct, "InAssetData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AssetRegistryHelpers_eventGetExportTextName_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(NewProp_InAssetData_MetaData, ARRAY_COUNT(NewProp_InAssetData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAssetData,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Asset Data" },
				{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
				{ "ToolTip", "Returns the name for the asset in the form: Class'ObjectPath'" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, "GetExportTextName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(AssetRegistryHelpers_eventGetExportTextName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName()
	{
		struct AssetRegistryHelpers_eventGetFullName_Parms
		{
			FAssetData InAssetData;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AssetRegistryHelpers_eventGetFullName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAssetData = { UE4CodeGen_Private::EPropertyClass::Struct, "InAssetData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AssetRegistryHelpers_eventGetFullName_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(NewProp_InAssetData_MetaData, ARRAY_COUNT(NewProp_InAssetData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAssetData,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Asset Data" },
				{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
				{ "ToolTip", "Returns the full name for the asset in the form: Class ObjectPath" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, "GetFullName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(AssetRegistryHelpers_eventGetFullName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue()
	{
		struct AssetRegistryHelpers_eventGetTagValue_Parms
		{
			FAssetData InAssetData;
			FName InTagName;
			FString OutTagValue;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AssetRegistryHelpers_eventGetTagValue_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AssetRegistryHelpers_eventGetTagValue_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutTagValue = { UE4CodeGen_Private::EPropertyClass::Str, "OutTagValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AssetRegistryHelpers_eventGetTagValue_Parms, OutTagValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTagName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_InTagName = { UE4CodeGen_Private::EPropertyClass::Name, "InTagName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AssetRegistryHelpers_eventGetTagValue_Parms, InTagName), METADATA_PARAMS(NewProp_InTagName_MetaData, ARRAY_COUNT(NewProp_InTagName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAssetData = { UE4CodeGen_Private::EPropertyClass::Struct, "InAssetData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AssetRegistryHelpers_eventGetTagValue_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(NewProp_InAssetData_MetaData, ARRAY_COUNT(NewProp_InAssetData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutTagValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InTagName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAssetData,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Asset Data" },
				{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
				{ "ToolTip", "Gets the value associated with the given tag as a string" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, "GetTagValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(AssetRegistryHelpers_eventGetTagValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded()
	{
		struct AssetRegistryHelpers_eventIsAssetLoaded_Parms
		{
			FAssetData InAssetData;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AssetRegistryHelpers_eventIsAssetLoaded_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AssetRegistryHelpers_eventIsAssetLoaded_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAssetData = { UE4CodeGen_Private::EPropertyClass::Struct, "InAssetData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AssetRegistryHelpers_eventIsAssetLoaded_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(NewProp_InAssetData_MetaData, ARRAY_COUNT(NewProp_InAssetData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAssetData,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Asset Data" },
				{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
				{ "ToolTip", "Returns true if the asset is loaded" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, "IsAssetLoaded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(AssetRegistryHelpers_eventIsAssetLoaded_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector()
	{
		struct AssetRegistryHelpers_eventIsRedirector_Parms
		{
			FAssetData InAssetData;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AssetRegistryHelpers_eventIsRedirector_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AssetRegistryHelpers_eventIsRedirector_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAssetData = { UE4CodeGen_Private::EPropertyClass::Struct, "InAssetData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AssetRegistryHelpers_eventIsRedirector_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(NewProp_InAssetData_MetaData, ARRAY_COUNT(NewProp_InAssetData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAssetData,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Asset Data" },
				{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
				{ "ToolTip", "Returns true if the this asset is a redirector." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, "IsRedirector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(AssetRegistryHelpers_eventIsRedirector_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset()
	{
		struct AssetRegistryHelpers_eventIsUAsset_Parms
		{
			FAssetData InAssetData;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AssetRegistryHelpers_eventIsUAsset_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AssetRegistryHelpers_eventIsUAsset_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAssetData = { UE4CodeGen_Private::EPropertyClass::Struct, "InAssetData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AssetRegistryHelpers_eventIsUAsset_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(NewProp_InAssetData_MetaData, ARRAY_COUNT(NewProp_InAssetData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAssetData,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Asset Data" },
				{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
				{ "ToolTip", "Returns true if this asset was found in a UAsset file" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, "IsUAsset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(AssetRegistryHelpers_eventIsUAsset_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_IsValid()
	{
		struct AssetRegistryHelpers_eventIsValid_Parms
		{
			FAssetData InAssetData;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AssetRegistryHelpers_eventIsValid_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AssetRegistryHelpers_eventIsValid_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAssetData = { UE4CodeGen_Private::EPropertyClass::Struct, "InAssetData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AssetRegistryHelpers_eventIsValid_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(NewProp_InAssetData_MetaData, ARRAY_COUNT(NewProp_InAssetData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAssetData,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Asset Data" },
				{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
				{ "ToolTip", "Checks to see if this AssetData refers to an asset or is NULL" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, "IsValid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(AssetRegistryHelpers_eventIsValid_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues()
	{
		struct AssetRegistryHelpers_eventSetFilterTagsAndValues_Parms
		{
			FARFilter InFilter;
			TArray<FTagAndValue> InTagsAndValues;
			FARFilter ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AssetRegistryHelpers_eventSetFilterTagsAndValues_Parms, ReturnValue), Z_Construct_UScriptStruct_FARFilter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTagsAndValues_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InTagsAndValues = { UE4CodeGen_Private::EPropertyClass::Array, "InTagsAndValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AssetRegistryHelpers_eventSetFilterTagsAndValues_Parms, InTagsAndValues), METADATA_PARAMS(NewProp_InTagsAndValues_MetaData, ARRAY_COUNT(NewProp_InTagsAndValues_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTagsAndValues_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "InTagsAndValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTagAndValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFilter_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFilter = { UE4CodeGen_Private::EPropertyClass::Struct, "InFilter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AssetRegistryHelpers_eventSetFilterTagsAndValues_Parms, InFilter), Z_Construct_UScriptStruct_FARFilter, METADATA_PARAMS(NewProp_InFilter_MetaData, ARRAY_COUNT(NewProp_InFilter_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InTagsAndValues,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InTagsAndValues_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InFilter,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Asset Registry" },
				{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
				{ "ToolTip", "Populates the FARFilters tags and values map with the passed in tags and values" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, "SetFilterTagsAndValues", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(AssetRegistryHelpers_eventSetFilterTagsAndValues_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath()
	{
		struct AssetRegistryHelpers_eventToSoftObjectPath_Parms
		{
			FAssetData InAssetData;
			FSoftObjectPath ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AssetRegistryHelpers_eventToSoftObjectPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAssetData = { UE4CodeGen_Private::EPropertyClass::Struct, "InAssetData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AssetRegistryHelpers_eventToSoftObjectPath_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(NewProp_InAssetData_MetaData, ARRAY_COUNT(NewProp_InAssetData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAssetData,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Asset Data" },
				{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
				{ "ToolTip", "Convert to a SoftObjectPath for loading" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistryHelpers, "ToSoftObjectPath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(AssetRegistryHelpers_eventToSoftObjectPath_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAssetRegistryHelpers_NoRegister()
	{
		return UAssetRegistryHelpers::StaticClass();
	}
	UClass* Z_Construct_UClass_UAssetRegistryHelpers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_AssetRegistry,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAssetRegistryHelpers_CreateAssetData, "CreateAssetData" }, // 3674006711
				{ &Z_Construct_UFunction_UAssetRegistryHelpers_GetAsset, "GetAsset" }, // 3677977362
				{ &Z_Construct_UFunction_UAssetRegistryHelpers_GetAssetRegistry, "GetAssetRegistry" }, // 3462661803
				{ &Z_Construct_UFunction_UAssetRegistryHelpers_GetClass, "GetClass" }, // 2460733866
				{ &Z_Construct_UFunction_UAssetRegistryHelpers_GetExportTextName, "GetExportTextName" }, // 2784212160
				{ &Z_Construct_UFunction_UAssetRegistryHelpers_GetFullName, "GetFullName" }, // 2112416900
				{ &Z_Construct_UFunction_UAssetRegistryHelpers_GetTagValue, "GetTagValue" }, // 3543231269
				{ &Z_Construct_UFunction_UAssetRegistryHelpers_IsAssetLoaded, "IsAssetLoaded" }, // 999403896
				{ &Z_Construct_UFunction_UAssetRegistryHelpers_IsRedirector, "IsRedirector" }, // 2652111193
				{ &Z_Construct_UFunction_UAssetRegistryHelpers_IsUAsset, "IsUAsset" }, // 438658422
				{ &Z_Construct_UFunction_UAssetRegistryHelpers_IsValid, "IsValid" }, // 1913306936
				{ &Z_Construct_UFunction_UAssetRegistryHelpers_SetFilterTagsAndValues, "SetFilterTagsAndValues" }, // 94900003
				{ &Z_Construct_UFunction_UAssetRegistryHelpers_ToSoftObjectPath, "ToSoftObjectPath" }, // 3673439415
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AssetRegistryHelpers.h" },
				{ "ModuleRelativePath", "Public/AssetRegistryHelpers.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAssetRegistryHelpers>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAssetRegistryHelpers::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000088u,
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
	IMPLEMENT_CLASS(UAssetRegistryHelpers, 3184646488);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetRegistryHelpers(Z_Construct_UClass_UAssetRegistryHelpers, &UAssetRegistryHelpers::StaticClass, TEXT("/Script/AssetRegistry"), TEXT("UAssetRegistryHelpers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetRegistryHelpers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
