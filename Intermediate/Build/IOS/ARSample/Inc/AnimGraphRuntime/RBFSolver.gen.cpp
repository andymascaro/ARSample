// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/RBF/RBFSolver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRBFSolver() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRBFParams();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneAxis();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRBFTarget();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRBFEntry();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
// End Cross Module References
	static UEnum* ERBFDistanceMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ERBFDistanceMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERBFDistanceMethod(ERBFDistanceMethod_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("ERBFDistanceMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod_CRC() { return 3179751237U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERBFDistanceMethod"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERBFDistanceMethod::Euclidean", (int64)ERBFDistanceMethod::Euclidean },
				{ "ERBFDistanceMethod::Quaternion", (int64)ERBFDistanceMethod::Quaternion },
				{ "ERBFDistanceMethod::SwingAngle", (int64)ERBFDistanceMethod::SwingAngle },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Euclidean.ToolTip", "Standard n-dimensional distance measure" },
				{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
				{ "Quaternion.ToolTip", "Treat inputs as quaternion" },
				{ "SwingAngle.ToolTip", "Treat inputs as quaternion, and find distance between rotated TwistAxis direction" },
				{ "ToolTip", "Method for determining distance from input to targets" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ERBFDistanceMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ERBFDistanceMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERBFFunctionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ERBFFunctionType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERBFFunctionType(ERBFFunctionType_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("ERBFFunctionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType_CRC() { return 2144593002U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERBFFunctionType"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERBFFunctionType::Gaussian", (int64)ERBFFunctionType::Gaussian },
				{ "ERBFFunctionType::Exponential", (int64)ERBFFunctionType::Exponential },
				{ "ERBFFunctionType::Linear", (int64)ERBFFunctionType::Linear },
				{ "ERBFFunctionType::Cubic", (int64)ERBFFunctionType::Cubic },
				{ "ERBFFunctionType::Quintic", (int64)ERBFFunctionType::Quintic },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
				{ "ToolTip", "Function to use for each target falloff" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ERBFFunctionType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ERBFFunctionType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FRBFParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FRBFParams_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRBFParams, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("RBFParams"), sizeof(FRBFParams), Get_Z_Construct_UScriptStruct_FRBFParams_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRBFParams(FRBFParams::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("RBFParams"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRBFParams
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRBFParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RBFParams")),new UScriptStruct::TCppStructOps<FRBFParams>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRBFParams;
	UScriptStruct* Z_Construct_UScriptStruct_FRBFParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRBFParams_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RBFParams"), sizeof(FRBFParams), Get_Z_Construct_UScriptStruct_FRBFParams_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
				{ "ToolTip", "Parameters used by RBF solver" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRBFParams>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightThreshold_MetaData[] = {
				{ "Category", "RBFData" },
				{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
				{ "ToolTip", "Weight below which we shouldn't bother returning a contribution from a target" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeightThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "WeightThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FRBFParams, WeightThreshold), METADATA_PARAMS(NewProp_WeightThreshold_MetaData, ARRAY_COUNT(NewProp_WeightThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistAxis_MetaData[] = {
				{ "Category", "RBFData" },
				{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
				{ "ToolTip", "Axis to use when DistanceMethod is SwingAngle" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TwistAxis = { UE4CodeGen_Private::EPropertyClass::Byte, "TwistAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FRBFParams, TwistAxis), Z_Construct_UEnum_Engine_EBoneAxis, METADATA_PARAMS(NewProp_TwistAxis_MetaData, ARRAY_COUNT(NewProp_TwistAxis_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceMethod_MetaData[] = {
				{ "Category", "RBFData" },
				{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DistanceMethod = { UE4CodeGen_Private::EPropertyClass::Enum, "DistanceMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FRBFParams, DistanceMethod), Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod, METADATA_PARAMS(NewProp_DistanceMethod_MetaData, ARRAY_COUNT(NewProp_DistanceMethod_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DistanceMethod_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[] = {
				{ "Category", "RBFData" },
				{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Function = { UE4CodeGen_Private::EPropertyClass::Enum, "Function", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FRBFParams, Function), Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType, METADATA_PARAMS(NewProp_Function_MetaData, ARRAY_COUNT(NewProp_Function_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Function_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
				{ "Category", "RBFData" },
				{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
				{ "ToolTip", "Default radius for each target, scaled by per-Target ScaleFactor" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FRBFParams, Radius), METADATA_PARAMS(NewProp_Radius_MetaData, ARRAY_COUNT(NewProp_Radius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetDimensions_MetaData[] = {
				{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
				{ "ToolTip", "How many dimensions input data has" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetDimensions = { UE4CodeGen_Private::EPropertyClass::Int, "TargetDimensions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRBFParams, TargetDimensions), METADATA_PARAMS(NewProp_TargetDimensions_MetaData, ARRAY_COUNT(NewProp_TargetDimensions_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WeightThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TwistAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistanceMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistanceMethod_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Function,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Function_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetDimensions,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RBFParams",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FRBFParams),
				alignof(FRBFParams),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRBFParams_CRC() { return 1231263294U; }
class UScriptStruct* FRBFTarget::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FRBFTarget_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRBFTarget, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("RBFTarget"), sizeof(FRBFTarget), Get_Z_Construct_UScriptStruct_FRBFTarget_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRBFTarget(FRBFTarget::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("RBFTarget"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRBFTarget
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRBFTarget()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RBFTarget")),new UScriptStruct::TCppStructOps<FRBFTarget>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRBFTarget;
	UScriptStruct* Z_Construct_UScriptStruct_FRBFTarget()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRBFTarget_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RBFTarget"), sizeof(FRBFTarget), Get_Z_Construct_UScriptStruct_FRBFTarget_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
				{ "ToolTip", "Data about a particular target in the RBF, including scaling factor" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRBFTarget>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomCurve_MetaData[] = {
				{ "Category", "RBFData" },
				{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
				{ "ToolTip", "Custom curve to apply to activation of this target, if bApplyCustomCurve is true" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "CustomCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FRBFTarget, CustomCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_CustomCurve_MetaData, ARRAY_COUNT(NewProp_CustomCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyCustomCurve_MetaData[] = {
				{ "Category", "RBFData" },
				{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
				{ "ToolTip", "Whether we want to apply an additional custom curve when activating this target" },
			};
#endif
			auto NewProp_bApplyCustomCurve_SetBit = [](void* Obj){ ((FRBFTarget*)Obj)->bApplyCustomCurve = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyCustomCurve = { UE4CodeGen_Private::EPropertyClass::Bool, "bApplyCustomCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FRBFTarget), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bApplyCustomCurve_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bApplyCustomCurve_MetaData, ARRAY_COUNT(NewProp_bApplyCustomCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleFactor_MetaData[] = {
				{ "Category", "RBFData" },
				{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
				{ "ToolTip", "How large to scale" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleFactor = { UE4CodeGen_Private::EPropertyClass::Float, "ScaleFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FRBFTarget, ScaleFactor), METADATA_PARAMS(NewProp_ScaleFactor_MetaData, ARRAY_COUNT(NewProp_ScaleFactor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bApplyCustomCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleFactor,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FRBFEntry,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RBFTarget",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FRBFTarget),
				alignof(FRBFTarget),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRBFTarget_CRC() { return 1124465474U; }
class UScriptStruct* FRBFEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FRBFEntry_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRBFEntry, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("RBFEntry"), sizeof(FRBFEntry), Get_Z_Construct_UScriptStruct_FRBFEntry_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRBFEntry(FRBFEntry::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("RBFEntry"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRBFEntry
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRBFEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RBFEntry")),new UScriptStruct::TCppStructOps<FRBFEntry>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRBFEntry;
	UScriptStruct* Z_Construct_UScriptStruct_FRBFEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRBFEntry_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RBFEntry"), sizeof(FRBFEntry), Get_Z_Construct_UScriptStruct_FRBFEntry_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
				{ "ToolTip", "Struct storing a particular entry within the RBF" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRBFEntry>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
				{ "Category", "RBFData" },
				{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
				{ "ToolTip", "Set of values for this target, size must be TargetDimensions" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values = { UE4CodeGen_Private::EPropertyClass::Array, "Values", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FRBFEntry, Values), METADATA_PARAMS(NewProp_Values_MetaData, ARRAY_COUNT(NewProp_Values_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Values_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "Values", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Values,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Values_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RBFEntry",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FRBFEntry),
				alignof(FRBFEntry),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRBFEntry_CRC() { return 3050643992U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
