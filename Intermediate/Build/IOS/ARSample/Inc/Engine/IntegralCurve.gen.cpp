// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Curves/IntegralCurve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntegralCurve() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIntegralCurve();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIntegralKey();
// End Cross Module References
class UScriptStruct* FIntegralCurve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FIntegralCurve_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIntegralCurve, Z_Construct_UPackage__Script_Engine(), TEXT("IntegralCurve"), sizeof(FIntegralCurve), Get_Z_Construct_UScriptStruct_FIntegralCurve_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIntegralCurve(FIntegralCurve::StaticStruct, TEXT("/Script/Engine"), TEXT("IntegralCurve"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFIntegralCurve
{
	FScriptStruct_Engine_StaticRegisterNativesFIntegralCurve()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("IntegralCurve")),new UScriptStruct::TCppStructOps<FIntegralCurve>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFIntegralCurve;
	UScriptStruct* Z_Construct_UScriptStruct_FIntegralCurve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIntegralCurve_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IntegralCurve"), sizeof(FIntegralCurve), Get_Z_Construct_UScriptStruct_FIntegralCurve_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Curves/IntegralCurve.h" },
				{ "ToolTip", "An integral curve, which holds the key time and the key value" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIntegralCurve>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultValueBeforeFirstKey_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Curves/IntegralCurve.h" },
			};
#endif
			auto NewProp_bUseDefaultValueBeforeFirstKey_SetBit = [](void* Obj){ ((FIntegralCurve*)Obj)->bUseDefaultValueBeforeFirstKey = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultValueBeforeFirstKey = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseDefaultValueBeforeFirstKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FIntegralCurve), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseDefaultValueBeforeFirstKey_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseDefaultValueBeforeFirstKey_MetaData, ARRAY_COUNT(NewProp_bUseDefaultValueBeforeFirstKey_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
				{ "Category", "Curve" },
				{ "ModuleRelativePath", "Classes/Curves/IntegralCurve.h" },
				{ "ToolTip", "Default value" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultValue = { UE4CodeGen_Private::EPropertyClass::Int, "DefaultValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(FIntegralCurve, DefaultValue), METADATA_PARAMS(NewProp_DefaultValue_MetaData, ARRAY_COUNT(NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[] = {
				{ "Category", "Curve" },
				{ "ModuleRelativePath", "Classes/Curves/IntegralCurve.h" },
				{ "ToolTip", "The keys, ordered by time" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keys = { UE4CodeGen_Private::EPropertyClass::Array, "Keys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(FIntegralCurve, Keys), METADATA_PARAMS(NewProp_Keys_MetaData, ARRAY_COUNT(NewProp_Keys_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Keys_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Keys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FIntegralKey, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseDefaultValueBeforeFirstKey,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Keys,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Keys_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FIndexedCurve,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"IntegralCurve",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FIntegralCurve),
				alignof(FIntegralCurve),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIntegralCurve_CRC() { return 247404039U; }
class UScriptStruct* FIntegralKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FIntegralKey_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIntegralKey, Z_Construct_UPackage__Script_Engine(), TEXT("IntegralKey"), sizeof(FIntegralKey), Get_Z_Construct_UScriptStruct_FIntegralKey_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIntegralKey(FIntegralKey::StaticStruct, TEXT("/Script/Engine"), TEXT("IntegralKey"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFIntegralKey
{
	FScriptStruct_Engine_StaticRegisterNativesFIntegralKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("IntegralKey")),new UScriptStruct::TCppStructOps<FIntegralKey>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFIntegralKey;
	UScriptStruct* Z_Construct_UScriptStruct_FIntegralKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIntegralKey_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IntegralKey"), sizeof(FIntegralKey), Get_Z_Construct_UScriptStruct_FIntegralKey_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Curves/IntegralCurve.h" },
				{ "ToolTip", "An integral key, which holds the key time and the key value" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIntegralKey>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "Category", "Key" },
				{ "ModuleRelativePath", "Classes/Curves/IntegralCurve.h" },
				{ "ToolTip", "The keyed integral value" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Int, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FIntegralKey, Value), METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "Category", "Key" },
				{ "ModuleRelativePath", "Classes/Curves/IntegralCurve.h" },
				{ "ToolTip", "The keyed time" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FIntegralKey, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"IntegralKey",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FIntegralKey),
				alignof(FIntegralKey),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIntegralKey_CRC() { return 931290942U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
