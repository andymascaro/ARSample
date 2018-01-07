// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Evaluation/MovieSceneSegment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSegment() {}
// Cross Module References
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSegment();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FSectionEvaluationData();
// End Cross Module References
	static UEnum* ESectionEvaluationFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags, Z_Construct_UPackage__Script_MovieScene(), TEXT("ESectionEvaluationFlags"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESectionEvaluationFlags(ESectionEvaluationFlags_StaticEnum, TEXT("/Script/MovieScene"), TEXT("ESectionEvaluationFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags_CRC() { return 3107605683U; }
	UEnum* Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESectionEvaluationFlags"), 0, Get_Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESectionEvaluationFlags::None", (int64)ESectionEvaluationFlags::None },
				{ "ESectionEvaluationFlags::PreRoll", (int64)ESectionEvaluationFlags::PreRoll },
				{ "ESectionEvaluationFlags::PostRoll", (int64)ESectionEvaluationFlags::PostRoll },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSegment.h" },
				{ "None.ToolTip", "No special flags - normal evaluation" },
				{ "PostRoll.ToolTip", "Segment resides inside the 'post-roll' time for the section" },
				{ "PreRoll.ToolTip", "Segment resides inside the 'pre-roll' time for the section" },
				{ "ToolTip", "Enumeration specifying how to evaluate a particular section when inside a segment" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESectionEvaluationFlags",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ESectionEvaluationFlags",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMovieSceneSegment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSegment_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSegment, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSegment"), sizeof(FMovieSceneSegment), Get_Z_Construct_UScriptStruct_FMovieSceneSegment_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSegment(FMovieSceneSegment::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSegment"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSegment
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSegment()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSegment")),new UScriptStruct::TCppStructOps<FMovieSceneSegment>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSegment;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSegment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSegment_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSegment"), sizeof(FMovieSceneSegment), Get_Z_Construct_UScriptStruct_FMovieSceneSegment_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSegment.h" },
				{ "ToolTip", "Information about a single segment of an evaluation track" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSegment>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneSegment",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneSegment),
				alignof(FMovieSceneSegment),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSegment_CRC() { return 50084101U; }
class UScriptStruct* FSectionEvaluationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FSectionEvaluationData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSectionEvaluationData, Z_Construct_UPackage__Script_MovieScene(), TEXT("SectionEvaluationData"), sizeof(FSectionEvaluationData), Get_Z_Construct_UScriptStruct_FSectionEvaluationData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSectionEvaluationData(FSectionEvaluationData::StaticStruct, TEXT("/Script/MovieScene"), TEXT("SectionEvaluationData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFSectionEvaluationData
{
	FScriptStruct_MovieScene_StaticRegisterNativesFSectionEvaluationData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SectionEvaluationData")),new UScriptStruct::TCppStructOps<FSectionEvaluationData>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFSectionEvaluationData;
	UScriptStruct* Z_Construct_UScriptStruct_FSectionEvaluationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSectionEvaluationData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SectionEvaluationData"), sizeof(FSectionEvaluationData), Get_Z_Construct_UScriptStruct_FSectionEvaluationData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSegment.h" },
				{ "ToolTip", "Evaluation data that specifies information about what to evaluate for a given template" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSectionEvaluationData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSegment.h" },
				{ "ToolTip", "Additional flags for evaluating this section" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Flags = { UE4CodeGen_Private::EPropertyClass::Enum, "Flags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSectionEvaluationData, Flags), Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags, METADATA_PARAMS(NewProp_Flags_MetaData, ARRAY_COUNT(NewProp_Flags_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flags_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcedTime_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSegment.h" },
				{ "ToolTip", "A forced time to evaluate this section at" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForcedTime = { UE4CodeGen_Private::EPropertyClass::Float, "ForcedTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSectionEvaluationData, ForcedTime), METADATA_PARAMS(NewProp_ForcedTime_MetaData, ARRAY_COUNT(NewProp_ForcedTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImplIndex_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSegment.h" },
				{ "ToolTip", "The implementation index we should evaluate (index into FMovieSceneEvaluationTrack::ChildTemplates)" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ImplIndex = { UE4CodeGen_Private::EPropertyClass::Int, "ImplIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSectionEvaluationData, ImplIndex), METADATA_PARAMS(NewProp_ImplIndex_MetaData, ARRAY_COUNT(NewProp_ImplIndex_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Flags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Flags_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForcedTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImplIndex,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SectionEvaluationData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSectionEvaluationData),
				alignof(FSectionEvaluationData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSectionEvaluationData_CRC() { return 2846539826U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
