// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Kismet/GameplayStaticsTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayStaticsTypes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPredictProjectilePathResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPredictProjectilePathPointData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPredictProjectilePathParams();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
	static UEnum* ESuggestProjVelocityTraceOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption, Z_Construct_UPackage__Script_Engine(), TEXT("ESuggestProjVelocityTraceOption"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESuggestProjVelocityTraceOption(ESuggestProjVelocityTraceOption_StaticEnum, TEXT("/Script/Engine"), TEXT("ESuggestProjVelocityTraceOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption_CRC() { return 3576593579U; }
	UEnum* Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESuggestProjVelocityTraceOption"), 0, Get_Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESuggestProjVelocityTraceOption::DoNotTrace", (int64)ESuggestProjVelocityTraceOption::DoNotTrace },
				{ "ESuggestProjVelocityTraceOption::TraceFullPath", (int64)ESuggestProjVelocityTraceOption::TraceFullPath },
				{ "ESuggestProjVelocityTraceOption::OnlyTraceWhileAscending", (int64)ESuggestProjVelocityTraceOption::OnlyTraceWhileAscending },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
				{ "ToolTip", "Trace option to SuggestProjectileVelocity functions." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESuggestProjVelocityTraceOption",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ESuggestProjVelocityTraceOption::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPredictProjectilePathResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPredictProjectilePathResult_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPredictProjectilePathResult, Z_Construct_UPackage__Script_Engine(), TEXT("PredictProjectilePathResult"), sizeof(FPredictProjectilePathResult), Get_Z_Construct_UScriptStruct_FPredictProjectilePathResult_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPredictProjectilePathResult(FPredictProjectilePathResult::StaticStruct, TEXT("/Script/Engine"), TEXT("PredictProjectilePathResult"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPredictProjectilePathResult
{
	FScriptStruct_Engine_StaticRegisterNativesFPredictProjectilePathResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PredictProjectilePathResult")),new UScriptStruct::TCppStructOps<FPredictProjectilePathResult>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPredictProjectilePathResult;
	UScriptStruct* Z_Construct_UScriptStruct_FPredictProjectilePathResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPredictProjectilePathResult_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PredictProjectilePathResult"), sizeof(FPredictProjectilePathResult), Get_Z_Construct_UScriptStruct_FPredictProjectilePathResult_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
				{ "ToolTip", "Container for the result of a projectile path trace (using PredictProjectilePath)." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPredictProjectilePathResult>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
				{ "Category", "PredictProjectilePathResult" },
				{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
				{ "ToolTip", "Hit along the trace, if tracing with collision was enabled." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult = { UE4CodeGen_Private::EPropertyClass::Struct, "HitResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000020015, 1, nullptr, STRUCT_OFFSET(FPredictProjectilePathResult, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_HitResult_MetaData, ARRAY_COUNT(NewProp_HitResult_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastTraceDestination_MetaData[] = {
				{ "Category", "PredictProjectilePathResult" },
				{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
				{ "ToolTip", "Info on the last point we tried to trace to, which may have been beyond the final hit." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastTraceDestination = { UE4CodeGen_Private::EPropertyClass::Struct, "LastTraceDestination", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FPredictProjectilePathResult, LastTraceDestination), Z_Construct_UScriptStruct_FPredictProjectilePathPointData, METADATA_PARAMS(NewProp_LastTraceDestination_MetaData, ARRAY_COUNT(NewProp_LastTraceDestination_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathData_MetaData[] = {
				{ "Category", "PredictProjectilePathResult" },
				{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
				{ "ToolTip", "Info for each point on the path." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PathData = { UE4CodeGen_Private::EPropertyClass::Array, "PathData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FPredictProjectilePathResult, PathData), METADATA_PARAMS(NewProp_PathData_MetaData, ARRAY_COUNT(NewProp_PathData_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PathData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPredictProjectilePathPointData, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitResult,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastTraceDestination,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathData_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PredictProjectilePathResult",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FPredictProjectilePathResult),
				alignof(FPredictProjectilePathResult),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPredictProjectilePathResult_CRC() { return 3395641289U; }
class UScriptStruct* FPredictProjectilePathPointData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPredictProjectilePathPointData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPredictProjectilePathPointData, Z_Construct_UPackage__Script_Engine(), TEXT("PredictProjectilePathPointData"), sizeof(FPredictProjectilePathPointData), Get_Z_Construct_UScriptStruct_FPredictProjectilePathPointData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPredictProjectilePathPointData(FPredictProjectilePathPointData::StaticStruct, TEXT("/Script/Engine"), TEXT("PredictProjectilePathPointData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPredictProjectilePathPointData
{
	FScriptStruct_Engine_StaticRegisterNativesFPredictProjectilePathPointData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PredictProjectilePathPointData")),new UScriptStruct::TCppStructOps<FPredictProjectilePathPointData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPredictProjectilePathPointData;
	UScriptStruct* Z_Construct_UScriptStruct_FPredictProjectilePathPointData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPredictProjectilePathPointData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PredictProjectilePathPointData"), sizeof(FPredictProjectilePathPointData), Get_Z_Construct_UScriptStruct_FPredictProjectilePathPointData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
				{ "ToolTip", "Data about a single point in a projectile path trace." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPredictProjectilePathPointData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "Category", "PredictProjectilePathPointData" },
				{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
				{ "ToolTip", "Elapsed time at this point from the start of the trace." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FPredictProjectilePathPointData, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
				{ "Category", "PredictProjectilePathPointData" },
				{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
				{ "ToolTip", "Velocity at this point" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity = { UE4CodeGen_Private::EPropertyClass::Struct, "Velocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FPredictProjectilePathPointData, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Velocity_MetaData, ARRAY_COUNT(NewProp_Velocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
				{ "Category", "PredictProjectilePathPointData" },
				{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
				{ "ToolTip", "Location of this point" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FPredictProjectilePathPointData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Location_MetaData, ARRAY_COUNT(NewProp_Location_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Velocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PredictProjectilePathPointData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FPredictProjectilePathPointData),
				alignof(FPredictProjectilePathPointData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPredictProjectilePathPointData_CRC() { return 3702248549U; }
class UScriptStruct* FPredictProjectilePathParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPredictProjectilePathParams_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPredictProjectilePathParams, Z_Construct_UPackage__Script_Engine(), TEXT("PredictProjectilePathParams"), sizeof(FPredictProjectilePathParams), Get_Z_Construct_UScriptStruct_FPredictProjectilePathParams_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPredictProjectilePathParams(FPredictProjectilePathParams::StaticStruct, TEXT("/Script/Engine"), TEXT("PredictProjectilePathParams"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPredictProjectilePathParams
{
	FScriptStruct_Engine_StaticRegisterNativesFPredictProjectilePathParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PredictProjectilePathParams")),new UScriptStruct::TCppStructOps<FPredictProjectilePathParams>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPredictProjectilePathParams;
	UScriptStruct* Z_Construct_UScriptStruct_FPredictProjectilePathParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPredictProjectilePathParams_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PredictProjectilePathParams"), sizeof(FPredictProjectilePathParams), Get_Z_Construct_UScriptStruct_FPredictProjectilePathParams_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
				{ "ToolTip", "Input parameters to PredictProjectilePath functions." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPredictProjectilePathParams>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTraceComplex_MetaData[] = {
				{ "Category", "PredictProjectilePathParams" },
				{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
				{ "ToolTip", "Trace against complex collision (triangles rather than simple primitives) if tracing with collision." },
			};
#endif
			auto NewProp_bTraceComplex_SetBit = [](void* Obj){ ((FPredictProjectilePathParams*)Obj)->bTraceComplex = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex = { UE4CodeGen_Private::EPropertyClass::Bool, "bTraceComplex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FPredictProjectilePathParams), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTraceComplex_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTraceComplex_MetaData, ARRAY_COUNT(NewProp_bTraceComplex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawDebugTime_MetaData[] = {
				{ "Category", "PredictProjectilePathParams" },
				{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
				{ "ToolTip", "Duration of debug lines (only relevant for DrawDebugType::Duration)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DrawDebugTime = { UE4CodeGen_Private::EPropertyClass::Float, "DrawDebugTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FPredictProjectilePathParams, DrawDebugTime), METADATA_PARAMS(NewProp_DrawDebugTime_MetaData, ARRAY_COUNT(NewProp_DrawDebugTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawDebugType_MetaData[] = {
				{ "Category", "PredictProjectilePathParams" },
				{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
				{ "ToolTip", "Debug drawing duration option." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawDebugType = { UE4CodeGen_Private::EPropertyClass::Byte, "DrawDebugType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FPredictProjectilePathParams, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(NewProp_DrawDebugType_MetaData, ARRAY_COUNT(NewProp_DrawDebugType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideGravityZ_MetaData[] = {
				{ "Category", "PredictProjectilePathParams" },
				{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
				{ "ToolTip", "Optional override of Gravity (if 0, uses WorldGravityZ)." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverrideGravityZ = { UE4CodeGen_Private::EPropertyClass::Float, "OverrideGravityZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FPredictProjectilePathParams, OverrideGravityZ), METADATA_PARAMS(NewProp_OverrideGravityZ_MetaData, ARRAY_COUNT(NewProp_OverrideGravityZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimFrequency_MetaData[] = {
				{ "Category", "PredictProjectilePathParams" },
				{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
				{ "ToolTip", "Determines size of each sub-step in the simulation (chopping up MaxSimTime). Recommended between 10 to 30 depending on desired quality versus performance." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SimFrequency = { UE4CodeGen_Private::EPropertyClass::Float, "SimFrequency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FPredictProjectilePathParams, SimFrequency), METADATA_PARAMS(NewProp_SimFrequency_MetaData, ARRAY_COUNT(NewProp_SimFrequency_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[] = {
				{ "Category", "PredictProjectilePathParams" },
				{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
				{ "ToolTip", "Actors to ignore when tracing with collision." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore = { UE4CodeGen_Private::EPropertyClass::Array, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FPredictProjectilePathParams, ActorsToIgnore), METADATA_PARAMS(NewProp_ActorsToIgnore_MetaData, ARRAY_COUNT(NewProp_ActorsToIgnore_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[] = {
				{ "Category", "PredictProjectilePathParams" },
				{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
				{ "ToolTip", "Object type to use, if tracing with collision." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes = { UE4CodeGen_Private::EPropertyClass::Array, "ObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FPredictProjectilePathParams, ObjectTypes), METADATA_PARAMS(NewProp_ObjectTypes_MetaData, ARRAY_COUNT(NewProp_ObjectTypes_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "ObjectTypes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
				{ "Category", "PredictProjectilePathParams" },
				{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
				{ "ToolTip", "Trace channel to use, if tracing with collision." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel = { UE4CodeGen_Private::EPropertyClass::Byte, "TraceChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPredictProjectilePathParams, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(NewProp_TraceChannel_MetaData, ARRAY_COUNT(NewProp_TraceChannel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTraceWithChannel_MetaData[] = {
				{ "Category", "PredictProjectilePathParams" },
				{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
				{ "ToolTip", "Whether or not to use TraceChannel, if tracing with collision." },
			};
#endif
			auto NewProp_bTraceWithChannel_SetBit = [](void* Obj){ ((FPredictProjectilePathParams*)Obj)->bTraceWithChannel = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceWithChannel = { UE4CodeGen_Private::EPropertyClass::Bool, "bTraceWithChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FPredictProjectilePathParams), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTraceWithChannel_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTraceWithChannel_MetaData, ARRAY_COUNT(NewProp_bTraceWithChannel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSimTime_MetaData[] = {
				{ "Category", "PredictProjectilePathParams" },
				{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
				{ "ToolTip", "Maximum simulation time for the virtual projectile." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSimTime = { UE4CodeGen_Private::EPropertyClass::Float, "MaxSimTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPredictProjectilePathParams, MaxSimTime), METADATA_PARAMS(NewProp_MaxSimTime_MetaData, ARRAY_COUNT(NewProp_MaxSimTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileRadius_MetaData[] = {
				{ "Category", "PredictProjectilePathParams" },
				{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
				{ "ToolTip", "Projectile radius, used when tracing for collision. If <= 0, a line trace is used instead." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileRadius = { UE4CodeGen_Private::EPropertyClass::Float, "ProjectileRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPredictProjectilePathParams, ProjectileRadius), METADATA_PARAMS(NewProp_ProjectileRadius_MetaData, ARRAY_COUNT(NewProp_ProjectileRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTraceWithCollision_MetaData[] = {
				{ "Category", "PredictProjectilePathParams" },
				{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
				{ "ToolTip", "Whether to trace along the path looking for blocking collision and stopping at the first hit." },
			};
#endif
			auto NewProp_bTraceWithCollision_SetBit = [](void* Obj){ ((FPredictProjectilePathParams*)Obj)->bTraceWithCollision = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceWithCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bTraceWithCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FPredictProjectilePathParams), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTraceWithCollision_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTraceWithCollision_MetaData, ARRAY_COUNT(NewProp_bTraceWithCollision_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchVelocity_MetaData[] = {
				{ "Category", "PredictProjectilePathParams" },
				{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
				{ "ToolTip", "Initial launch velocity at the start of the trace." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LaunchVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "LaunchVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPredictProjectilePathParams, LaunchVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LaunchVelocity_MetaData, ARRAY_COUNT(NewProp_LaunchVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
				{ "Category", "PredictProjectilePathParams" },
				{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
				{ "ToolTip", "Location of the start of the trace." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "StartLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPredictProjectilePathParams, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_StartLocation_MetaData, ARRAY_COUNT(NewProp_StartLocation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTraceComplex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawDebugTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawDebugType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverrideGravityZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SimFrequency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorsToIgnore,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorsToIgnore_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectTypes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectTypes_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TraceChannel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTraceWithChannel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSimTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectileRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTraceWithCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LaunchVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartLocation,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PredictProjectilePathParams",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FPredictProjectilePathParams),
				alignof(FPredictProjectilePathParams),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPredictProjectilePathParams_CRC() { return 1666100345U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
