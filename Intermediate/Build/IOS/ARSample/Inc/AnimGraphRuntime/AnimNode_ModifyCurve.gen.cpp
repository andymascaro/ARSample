// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimNodes/AnimNode_ModifyCurve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ModifyCurve() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
	static UEnum* EModifyCurveApplyMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EModifyCurveApplyMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EModifyCurveApplyMode(EModifyCurveApplyMode_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("EModifyCurveApplyMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode_CRC() { return 1605321161U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EModifyCurveApplyMode"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EModifyCurveApplyMode::Add", (int64)EModifyCurveApplyMode::Add },
				{ "EModifyCurveApplyMode::Scale", (int64)EModifyCurveApplyMode::Scale },
				{ "EModifyCurveApplyMode::Blend", (int64)EModifyCurveApplyMode::Blend },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Add.ToolTip", "Add new value to input curve value" },
				{ "Blend.ToolTip", "Blend input with new curve value, using Alpha setting on the node" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
				{ "Scale.ToolTip", "Scale input value by new value" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EModifyCurveApplyMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EModifyCurveApplyMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAnimNode_ModifyCurve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_ModifyCurve"), sizeof(FAnimNode_ModifyCurve), Get_Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_ModifyCurve(FAnimNode_ModifyCurve::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_ModifyCurve"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_ModifyCurve
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_ModifyCurve()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_ModifyCurve")),new UScriptStruct::TCppStructOps<FAnimNode_ModifyCurve>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_ModifyCurve;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyCurve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_ModifyCurve"), sizeof(FAnimNode_ModifyCurve), Get_Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
				{ "ToolTip", "Easy way to modify curve values on a pose" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ModifyCurve>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
				{ "Category", "ModifyCurve" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
				{ "PinShownByDefault", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha = { UE4CodeGen_Private::EPropertyClass::Float, "Alpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_ModifyCurve, Alpha), METADATA_PARAMS(NewProp_Alpha_MetaData, ARRAY_COUNT(NewProp_Alpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveNames_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurveNames = { UE4CodeGen_Private::EPropertyClass::Array, "CurveNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_ModifyCurve, CurveNames), METADATA_PARAMS(NewProp_CurveNames_MetaData, ARRAY_COUNT(NewProp_CurveNames_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurveNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "CurveNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveValues_MetaData[] = {
				{ "Category", "ModifyCurve" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
				{ "PinShownByDefault", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurveValues = { UE4CodeGen_Private::EPropertyClass::Array, "CurveValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000045, 1, nullptr, STRUCT_OFFSET(FAnimNode_ModifyCurve, CurveValues), METADATA_PARAMS(NewProp_CurveValues_MetaData, ARRAY_COUNT(NewProp_CurveValues_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurveValues_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "CurveValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplyMode_MetaData[] = {
				{ "Category", "ModifyCurve" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ApplyMode = { UE4CodeGen_Private::EPropertyClass::Enum, "ApplyMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_ModifyCurve, ApplyMode), Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode, METADATA_PARAMS(NewProp_ApplyMode_MetaData, ARRAY_COUNT(NewProp_ApplyMode_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ApplyMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[] = {
				{ "Category", "Links" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourcePose = { UE4CodeGen_Private::EPropertyClass::Struct, "SourcePose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000045, 1, nullptr, STRUCT_OFFSET(FAnimNode_ModifyCurve, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(NewProp_SourcePose_MetaData, ARRAY_COUNT(NewProp_SourcePose_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Alpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurveNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurveNames_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurveValues,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurveValues_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ApplyMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ApplyMode_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourcePose,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_Base,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_ModifyCurve",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_ModifyCurve),
				alignof(FAnimNode_ModifyCurve),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_CRC() { return 2737762567U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
