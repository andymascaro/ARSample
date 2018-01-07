// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Evaluation/MovieSceneEvaluationKey.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationKey() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationKey();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceID();
// End Cross Module References
class UScriptStruct* FMovieSceneEvaluationKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationKey, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationKey"), sizeof(FMovieSceneEvaluationKey), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationKey(FMovieSceneEvaluationKey::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationKey"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationKey
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationKey")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationKey>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationKey;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationKey"), sizeof(FMovieSceneEvaluationKey), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationKey.h" },
				{ "ToolTip", "Keyable struct that represents a particular entity within an evaluation template (either a section/template or a track)" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationKey>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionIdentifier_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationKey.h" },
				{ "ToolTip", "ID of the section this key relates to (or -1 where this key relates to a track)" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SectionIdentifier = { UE4CodeGen_Private::EPropertyClass::UInt32, "SectionIdentifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationKey, SectionIdentifier), METADATA_PARAMS(NewProp_SectionIdentifier_MetaData, ARRAY_COUNT(NewProp_SectionIdentifier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackIdentifier_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationKey.h" },
				{ "ToolTip", "ID of the track this key relates to" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackIdentifier = { UE4CodeGen_Private::EPropertyClass::Struct, "TrackIdentifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationKey, TrackIdentifier), Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier, METADATA_PARAMS(NewProp_TrackIdentifier_MetaData, ARRAY_COUNT(NewProp_TrackIdentifier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceID_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationKey.h" },
				{ "ToolTip", "ID of the sequence that the entity is contained within" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SequenceID = { UE4CodeGen_Private::EPropertyClass::Struct, "SequenceID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationKey, SequenceID), Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(NewProp_SequenceID_MetaData, ARRAY_COUNT(NewProp_SequenceID_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionIdentifier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackIdentifier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SequenceID,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneEvaluationKey",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneEvaluationKey),
				alignof(FMovieSceneEvaluationKey),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_CRC() { return 3017536237U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
