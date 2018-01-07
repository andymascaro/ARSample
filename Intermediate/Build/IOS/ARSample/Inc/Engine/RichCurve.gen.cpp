// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Curves/RichCurve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRichCurve() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveExtrapolation();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurveKey();
// End Cross Module References
	static UEnum* ERichCurveExtrapolation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERichCurveExtrapolation, Z_Construct_UPackage__Script_Engine(), TEXT("ERichCurveExtrapolation"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERichCurveExtrapolation(ERichCurveExtrapolation_StaticEnum, TEXT("/Script/Engine"), TEXT("ERichCurveExtrapolation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERichCurveExtrapolation_CRC() { return 2481918208U; }
	UEnum* Z_Construct_UEnum_Engine_ERichCurveExtrapolation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERichCurveExtrapolation"), 0, Get_Z_Construct_UEnum_Engine_ERichCurveExtrapolation_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "RCCE_Cycle", (int64)RCCE_Cycle },
				{ "RCCE_CycleWithOffset", (int64)RCCE_CycleWithOffset },
				{ "RCCE_Oscillate", (int64)RCCE_Oscillate },
				{ "RCCE_Linear", (int64)RCCE_Linear },
				{ "RCCE_Constant", (int64)RCCE_Constant },
				{ "RCCE_None", (int64)RCCE_None },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
				{ "RCCE_Constant.DisplayName", "Constant" },
				{ "RCCE_Cycle.DisplayName", "Cycle" },
				{ "RCCE_CycleWithOffset.DisplayName", "CycleWithOffset" },
				{ "RCCE_Linear.DisplayName", "Linear" },
				{ "RCCE_None.DisplayName", "None" },
				{ "RCCE_Oscillate.DisplayName", "Oscillate" },
				{ "ToolTip", "Enumerates extrapolation options." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ERichCurveExtrapolation",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ERichCurveExtrapolation",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERichCurveTangentWeightMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode, Z_Construct_UPackage__Script_Engine(), TEXT("ERichCurveTangentWeightMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERichCurveTangentWeightMode(ERichCurveTangentWeightMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ERichCurveTangentWeightMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode_CRC() { return 4014903357U; }
	UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERichCurveTangentWeightMode"), 0, Get_Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "RCTWM_WeightedNone", (int64)RCTWM_WeightedNone },
				{ "RCTWM_WeightedArrive", (int64)RCTWM_WeightedArrive },
				{ "RCTWM_WeightedLeave", (int64)RCTWM_WeightedLeave },
				{ "RCTWM_WeightedBoth", (int64)RCTWM_WeightedBoth },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
				{ "RCTWM_WeightedArrive.DisplayName", "Arrive" },
				{ "RCTWM_WeightedBoth.DisplayName", "Both" },
				{ "RCTWM_WeightedLeave.DisplayName", "Leave" },
				{ "RCTWM_WeightedNone.DisplayName", "None" },
				{ "ToolTip", "Enumerates tangent weight modes." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ERichCurveTangentWeightMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ERichCurveTangentWeightMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERichCurveTangentMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERichCurveTangentMode, Z_Construct_UPackage__Script_Engine(), TEXT("ERichCurveTangentMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERichCurveTangentMode(ERichCurveTangentMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ERichCurveTangentMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERichCurveTangentMode_CRC() { return 424827137U; }
	UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERichCurveTangentMode"), 0, Get_Z_Construct_UEnum_Engine_ERichCurveTangentMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "RCTM_Auto", (int64)RCTM_Auto },
				{ "RCTM_User", (int64)RCTM_User },
				{ "RCTM_Break", (int64)RCTM_Break },
				{ "RCTM_None", (int64)RCTM_None },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
				{ "RCTM_Auto.DisplayName", "Auto" },
				{ "RCTM_Break.DisplayName", "Break" },
				{ "RCTM_None.DisplayName", "None" },
				{ "RCTM_User.DisplayName", "User" },
				{ "ToolTip", "If using RCIM_Cubic, this enum describes how the tangents should be controlled in editor." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ERichCurveTangentMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ERichCurveTangentMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERichCurveInterpMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERichCurveInterpMode, Z_Construct_UPackage__Script_Engine(), TEXT("ERichCurveInterpMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERichCurveInterpMode(ERichCurveInterpMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ERichCurveInterpMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERichCurveInterpMode_CRC() { return 3242724132U; }
	UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERichCurveInterpMode"), 0, Get_Z_Construct_UEnum_Engine_ERichCurveInterpMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "RCIM_Linear", (int64)RCIM_Linear },
				{ "RCIM_Constant", (int64)RCIM_Constant },
				{ "RCIM_Cubic", (int64)RCIM_Cubic },
				{ "RCIM_None", (int64)RCIM_None },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
				{ "RCIM_Constant.DisplayName", "Constant" },
				{ "RCIM_Cubic.DisplayName", "Cubic" },
				{ "RCIM_Linear.DisplayName", "Linear" },
				{ "RCIM_None.DisplayName", "None" },
				{ "ToolTip", "Method of interpolation between this key and the next." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ERichCurveInterpMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ERichCurveInterpMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FRichCurve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRichCurve_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRichCurve, Z_Construct_UPackage__Script_Engine(), TEXT("RichCurve"), sizeof(FRichCurve), Get_Z_Construct_UScriptStruct_FRichCurve_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRichCurve(FRichCurve::StaticStruct, TEXT("/Script/Engine"), TEXT("RichCurve"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRichCurve
{
	FScriptStruct_Engine_StaticRegisterNativesFRichCurve()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RichCurve")),new UScriptStruct::TCppStructOps<FRichCurve>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRichCurve;
	UScriptStruct* Z_Construct_UScriptStruct_FRichCurve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRichCurve_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RichCurve"), sizeof(FRichCurve), Get_Z_Construct_UScriptStruct_FRichCurve_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
				{ "ToolTip", "A rich, editable float curve" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRichCurve>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[] = {
				{ "Category", "Curve" },
				{ "EditFixedOrder", "" },
				{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
				{ "ToolTip", "Sorted array of keys" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keys = { UE4CodeGen_Private::EPropertyClass::Array, "Keys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000041, 1, nullptr, STRUCT_OFFSET(FRichCurve, Keys), METADATA_PARAMS(NewProp_Keys_MetaData, ARRAY_COUNT(NewProp_Keys_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Keys_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Keys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FRichCurveKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
				{ "Category", "Curve" },
				{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
				{ "ToolTip", "Default value" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultValue = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FRichCurve, DefaultValue), METADATA_PARAMS(NewProp_DefaultValue_MetaData, ARRAY_COUNT(NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostInfinityExtrap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
				{ "ToolTip", "Post-infinity extrapolation state" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PostInfinityExtrap = { UE4CodeGen_Private::EPropertyClass::Byte, "PostInfinityExtrap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRichCurve, PostInfinityExtrap), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(NewProp_PostInfinityExtrap_MetaData, ARRAY_COUNT(NewProp_PostInfinityExtrap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreInfinityExtrap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
				{ "ToolTip", "Pre-infinity extrapolation state" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreInfinityExtrap = { UE4CodeGen_Private::EPropertyClass::Byte, "PreInfinityExtrap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRichCurve, PreInfinityExtrap), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(NewProp_PreInfinityExtrap_MetaData, ARRAY_COUNT(NewProp_PreInfinityExtrap_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Keys,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Keys_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PostInfinityExtrap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreInfinityExtrap,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FIndexedCurve,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RichCurve",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FRichCurve),
				alignof(FRichCurve),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRichCurve_CRC() { return 3813211194U; }
class UScriptStruct* FRichCurveKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRichCurveKey_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRichCurveKey, Z_Construct_UPackage__Script_Engine(), TEXT("RichCurveKey"), sizeof(FRichCurveKey), Get_Z_Construct_UScriptStruct_FRichCurveKey_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRichCurveKey(FRichCurveKey::StaticStruct, TEXT("/Script/Engine"), TEXT("RichCurveKey"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRichCurveKey
{
	FScriptStruct_Engine_StaticRegisterNativesFRichCurveKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RichCurveKey")),new UScriptStruct::TCppStructOps<FRichCurveKey>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRichCurveKey;
	UScriptStruct* Z_Construct_UScriptStruct_FRichCurveKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRichCurveKey_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RichCurveKey"), sizeof(FRichCurveKey), Get_Z_Construct_UScriptStruct_FRichCurveKey_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
				{ "ToolTip", "One key in a rich, editable float curve" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRichCurveKey>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaveTangentWeight_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
				{ "ToolTip", "If RCTWM_WeightedLeave or RCTWM_WeightedBoth, the weight of the right tangent" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeaveTangentWeight = { UE4CodeGen_Private::EPropertyClass::Float, "LeaveTangentWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRichCurveKey, LeaveTangentWeight), METADATA_PARAMS(NewProp_LeaveTangentWeight_MetaData, ARRAY_COUNT(NewProp_LeaveTangentWeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaveTangent_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
				{ "ToolTip", "If RCIM_Cubic, the leaving tangent at this key" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeaveTangent = { UE4CodeGen_Private::EPropertyClass::Float, "LeaveTangent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRichCurveKey, LeaveTangent), METADATA_PARAMS(NewProp_LeaveTangent_MetaData, ARRAY_COUNT(NewProp_LeaveTangent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArriveTangentWeight_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
				{ "ToolTip", "If RCTWM_WeightedArrive or RCTWM_WeightedBoth, the weight of the left tangent" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArriveTangentWeight = { UE4CodeGen_Private::EPropertyClass::Float, "ArriveTangentWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRichCurveKey, ArriveTangentWeight), METADATA_PARAMS(NewProp_ArriveTangentWeight_MetaData, ARRAY_COUNT(NewProp_ArriveTangentWeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArriveTangent_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
				{ "ToolTip", "If RCIM_Cubic, the arriving tangent at this key" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArriveTangent = { UE4CodeGen_Private::EPropertyClass::Float, "ArriveTangent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRichCurveKey, ArriveTangent), METADATA_PARAMS(NewProp_ArriveTangent_MetaData, ARRAY_COUNT(NewProp_ArriveTangent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "Category", "Key" },
				{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
				{ "ToolTip", "Value at this key" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FRichCurveKey, Value), METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "Category", "Key" },
				{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
				{ "ToolTip", "Time at this key" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FRichCurveKey, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentWeightMode_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
				{ "ToolTip", "If either tangent at this key is 'weighted'" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TangentWeightMode = { UE4CodeGen_Private::EPropertyClass::Byte, "TangentWeightMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRichCurveKey, TangentWeightMode), Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode, METADATA_PARAMS(NewProp_TangentWeightMode_MetaData, ARRAY_COUNT(NewProp_TangentWeightMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentMode_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
				{ "ToolTip", "Mode for tangents at this key" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TangentMode = { UE4CodeGen_Private::EPropertyClass::Byte, "TangentMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRichCurveKey, TangentMode), Z_Construct_UEnum_Engine_ERichCurveTangentMode, METADATA_PARAMS(NewProp_TangentMode_MetaData, ARRAY_COUNT(NewProp_TangentMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpMode_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
				{ "ToolTip", "Interpolation mode between this key and the next" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InterpMode = { UE4CodeGen_Private::EPropertyClass::Byte, "InterpMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRichCurveKey, InterpMode), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(NewProp_InterpMode_MetaData, ARRAY_COUNT(NewProp_InterpMode_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeaveTangentWeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeaveTangent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArriveTangentWeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArriveTangent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TangentWeightMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TangentMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterpMode,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RichCurveKey",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FRichCurveKey),
				alignof(FRichCurveKey),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRichCurveKey_CRC() { return 1918323879U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
