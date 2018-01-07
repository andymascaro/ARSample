// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Evaluation/MovieSceneSectionParameters.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSectionParameters() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSectionParameters();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
class UScriptStruct* FMovieSceneSectionParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSectionParameters_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSectionParameters, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSectionParameters"), sizeof(FMovieSceneSectionParameters), Get_Z_Construct_UScriptStruct_FMovieSceneSectionParameters_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSectionParameters(FMovieSceneSectionParameters::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSectionParameters"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSectionParameters
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSectionParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSectionParameters")),new UScriptStruct::TCppStructOps<FMovieSceneSectionParameters>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSectionParameters;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSectionParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSectionParameters_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSectionParameters"), sizeof(FMovieSceneSectionParameters), Get_Z_Construct_UScriptStruct_FMovieSceneSectionParameters_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSectionParameters>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostrollTime_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PostrollTime = { UE4CodeGen_Private::EPropertyClass::Float, "PostrollTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSectionParameters, PostrollTime_DEPRECATED), METADATA_PARAMS(NewProp_PostrollTime_MetaData, ARRAY_COUNT(NewProp_PostrollTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrerollTime_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PrerollTime = { UE4CodeGen_Private::EPropertyClass::Float, "PrerollTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSectionParameters, PrerollTime_DEPRECATED), METADATA_PARAMS(NewProp_PrerollTime_MetaData, ARRAY_COUNT(NewProp_PrerollTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HierarchicalBias_MetaData[] = {
				{ "Category", "Sequence" },
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
				{ "ToolTip", "Hierachical bias. Higher bias will take precedence." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_HierarchicalBias = { UE4CodeGen_Private::EPropertyClass::Int, "HierarchicalBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneSectionParameters, HierarchicalBias), METADATA_PARAMS(NewProp_HierarchicalBias_MetaData, ARRAY_COUNT(NewProp_HierarchicalBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeScale_MetaData[] = {
				{ "Category", "Timing" },
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
				{ "ToolTip", "Playback time scaling factor." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale = { UE4CodeGen_Private::EPropertyClass::Float, "TimeScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneSectionParameters, TimeScale), METADATA_PARAMS(NewProp_TimeScale_MetaData, ARRAY_COUNT(NewProp_TimeScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[] = {
				{ "Category", "Clipping" },
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
				{ "ToolTip", "Number of seconds to skip at the beginning of the sub-sequence." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartOffset = { UE4CodeGen_Private::EPropertyClass::Float, "StartOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneSectionParameters, StartOffset), METADATA_PARAMS(NewProp_StartOffset_MetaData, ARRAY_COUNT(NewProp_StartOffset_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PostrollTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrerollTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HierarchicalBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartOffset,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneSectionParameters",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneSectionParameters),
				alignof(FMovieSceneSectionParameters),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSectionParameters_CRC() { return 3922325048U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
