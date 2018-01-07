// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Curves/NameCurve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNameCurve() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNameCurve();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNameCurveKey();
// End Cross Module References
class UScriptStruct* FNameCurve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNameCurve_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNameCurve, Z_Construct_UPackage__Script_Engine(), TEXT("NameCurve"), sizeof(FNameCurve), Get_Z_Construct_UScriptStruct_FNameCurve_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNameCurve(FNameCurve::StaticStruct, TEXT("/Script/Engine"), TEXT("NameCurve"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNameCurve
{
	FScriptStruct_Engine_StaticRegisterNativesFNameCurve()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NameCurve")),new UScriptStruct::TCppStructOps<FNameCurve>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNameCurve;
	UScriptStruct* Z_Construct_UScriptStruct_FNameCurve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNameCurve_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NameCurve"), sizeof(FNameCurve), Get_Z_Construct_UScriptStruct_FNameCurve_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Curves/NameCurve.h" },
				{ "ToolTip", "Implements a curve of FNames." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNameCurve>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[] = {
				{ "Category", "Curve" },
				{ "ModuleRelativePath", "Classes/Curves/NameCurve.h" },
				{ "ToolTip", "Sorted array of keys" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keys = { UE4CodeGen_Private::EPropertyClass::Array, "Keys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000041, 1, nullptr, STRUCT_OFFSET(FNameCurve, Keys), METADATA_PARAMS(NewProp_Keys_MetaData, ARRAY_COUNT(NewProp_Keys_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Keys_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Keys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNameCurveKey, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Keys,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Keys_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FIndexedCurve,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NameCurve",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FNameCurve),
				alignof(FNameCurve),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNameCurve_CRC() { return 1497969916U; }
class UScriptStruct* FNameCurveKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNameCurveKey_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNameCurveKey, Z_Construct_UPackage__Script_Engine(), TEXT("NameCurveKey"), sizeof(FNameCurveKey), Get_Z_Construct_UScriptStruct_FNameCurveKey_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNameCurveKey(FNameCurveKey::StaticStruct, TEXT("/Script/Engine"), TEXT("NameCurveKey"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNameCurveKey
{
	FScriptStruct_Engine_StaticRegisterNativesFNameCurveKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NameCurveKey")),new UScriptStruct::TCppStructOps<FNameCurveKey>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNameCurveKey;
	UScriptStruct* Z_Construct_UScriptStruct_FNameCurveKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNameCurveKey_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NameCurveKey"), sizeof(FNameCurveKey), Get_Z_Construct_UScriptStruct_FNameCurveKey_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Curves/NameCurve.h" },
				{ "ToolTip", "One key in a curve of FNames." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNameCurveKey>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "Category", "Key" },
				{ "ModuleRelativePath", "Classes/Curves/NameCurve.h" },
				{ "ToolTip", "Value at this key" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Name, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FNameCurveKey, Value), METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "Category", "Key" },
				{ "ModuleRelativePath", "Classes/Curves/NameCurve.h" },
				{ "ToolTip", "Time at this key" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FNameCurveKey, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NameCurveKey",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FNameCurveKey),
				alignof(FNameCurveKey),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNameCurveKey_CRC() { return 2359403444U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
