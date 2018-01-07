// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Evaluation/MovieSceneLegacyTrackInstanceTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLegacyTrackInstanceTemplate() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneLegacyTrackInstanceTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
// End Cross Module References
class UScriptStruct* FMovieSceneLegacyTrackInstanceTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneLegacyTrackInstanceTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneLegacyTrackInstanceTemplate, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneLegacyTrackInstanceTemplate"), sizeof(FMovieSceneLegacyTrackInstanceTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneLegacyTrackInstanceTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneLegacyTrackInstanceTemplate(FMovieSceneLegacyTrackInstanceTemplate::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneLegacyTrackInstanceTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneLegacyTrackInstanceTemplate
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneLegacyTrackInstanceTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneLegacyTrackInstanceTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneLegacyTrackInstanceTemplate>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneLegacyTrackInstanceTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneLegacyTrackInstanceTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneLegacyTrackInstanceTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneLegacyTrackInstanceTemplate"), sizeof(FMovieSceneLegacyTrackInstanceTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneLegacyTrackInstanceTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneLegacyTrackInstanceTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneLegacyTrackInstanceTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneLegacyTrackInstanceTemplate.h" },
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Track = { UE4CodeGen_Private::EPropertyClass::Object, "Track", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(FMovieSceneLegacyTrackInstanceTemplate, Track), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(NewProp_Track_MetaData, ARRAY_COUNT(NewProp_Track_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Track,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneLegacyTrackInstanceTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000205),
				sizeof(FMovieSceneLegacyTrackInstanceTemplate),
				alignof(FMovieSceneLegacyTrackInstanceTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneLegacyTrackInstanceTemplate_CRC() { return 4046496823U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
