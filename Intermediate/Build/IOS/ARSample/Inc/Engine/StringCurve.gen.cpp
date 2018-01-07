// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Curves/StringCurve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStringCurve() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStringCurve();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStringCurveKey();
// End Cross Module References
class UScriptStruct* FStringCurve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStringCurve_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStringCurve, Z_Construct_UPackage__Script_Engine(), TEXT("StringCurve"), sizeof(FStringCurve), Get_Z_Construct_UScriptStruct_FStringCurve_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStringCurve(FStringCurve::StaticStruct, TEXT("/Script/Engine"), TEXT("StringCurve"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStringCurve
{
	FScriptStruct_Engine_StaticRegisterNativesFStringCurve()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StringCurve")),new UScriptStruct::TCppStructOps<FStringCurve>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStringCurve;
	UScriptStruct* Z_Construct_UScriptStruct_FStringCurve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStringCurve_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StringCurve"), sizeof(FStringCurve), Get_Z_Construct_UScriptStruct_FStringCurve_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Curves/StringCurve.h" },
				{ "ToolTip", "Implements a curve of FStrings." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStringCurve>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[] = {
				{ "Category", "Curve" },
				{ "ModuleRelativePath", "Classes/Curves/StringCurve.h" },
				{ "ToolTip", "Sorted array of keys" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keys = { UE4CodeGen_Private::EPropertyClass::Array, "Keys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000041, 1, nullptr, STRUCT_OFFSET(FStringCurve, Keys), METADATA_PARAMS(NewProp_Keys_MetaData, ARRAY_COUNT(NewProp_Keys_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Keys_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Keys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStringCurveKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
				{ "Category", "Curve" },
				{ "ModuleRelativePath", "Classes/Curves/StringCurve.h" },
				{ "ToolTip", "Default value" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultValue = { UE4CodeGen_Private::EPropertyClass::Str, "DefaultValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FStringCurve, DefaultValue), METADATA_PARAMS(NewProp_DefaultValue_MetaData, ARRAY_COUNT(NewProp_DefaultValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Keys,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Keys_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultValue,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FIndexedCurve,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"StringCurve",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FStringCurve),
				alignof(FStringCurve),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStringCurve_CRC() { return 2631087465U; }
class UScriptStruct* FStringCurveKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStringCurveKey_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStringCurveKey, Z_Construct_UPackage__Script_Engine(), TEXT("StringCurveKey"), sizeof(FStringCurveKey), Get_Z_Construct_UScriptStruct_FStringCurveKey_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStringCurveKey(FStringCurveKey::StaticStruct, TEXT("/Script/Engine"), TEXT("StringCurveKey"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStringCurveKey
{
	FScriptStruct_Engine_StaticRegisterNativesFStringCurveKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StringCurveKey")),new UScriptStruct::TCppStructOps<FStringCurveKey>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStringCurveKey;
	UScriptStruct* Z_Construct_UScriptStruct_FStringCurveKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStringCurveKey_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StringCurveKey"), sizeof(FStringCurveKey), Get_Z_Construct_UScriptStruct_FStringCurveKey_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Curves/StringCurve.h" },
				{ "ToolTip", "One key in a curve of FStrings." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStringCurveKey>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "Category", "Key" },
				{ "ModuleRelativePath", "Classes/Curves/StringCurve.h" },
				{ "ToolTip", "Value at this key" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Str, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FStringCurveKey, Value), METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "Category", "Key" },
				{ "ModuleRelativePath", "Classes/Curves/StringCurve.h" },
				{ "ToolTip", "Time at this key" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FStringCurveKey, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"StringCurveKey",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FStringCurveKey),
				alignof(FStringCurveKey),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStringCurveKey_CRC() { return 1996772814U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
