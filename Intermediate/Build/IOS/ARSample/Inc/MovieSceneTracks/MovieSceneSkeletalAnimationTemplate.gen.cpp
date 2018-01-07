// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/Evaluation/MovieSceneSkeletalAnimationTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSkeletalAnimationTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationSectionTemplateParameters();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams();
// End Cross Module References
class UScriptStruct* FMovieSceneSkeletalAnimationSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationSectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationSectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneSkeletalAnimationSectionTemplate"), sizeof(FMovieSceneSkeletalAnimationSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationSectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSkeletalAnimationSectionTemplate(FMovieSceneSkeletalAnimationSectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneSkeletalAnimationSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneSkeletalAnimationSectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneSkeletalAnimationSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSkeletalAnimationSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneSkeletalAnimationSectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneSkeletalAnimationSectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationSectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSkeletalAnimationSectionTemplate"), sizeof(FMovieSceneSkeletalAnimationSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationSectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneSkeletalAnimationTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSkeletalAnimationSectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneSkeletalAnimationTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params = { UE4CodeGen_Private::EPropertyClass::Struct, "Params", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSkeletalAnimationSectionTemplate, Params), Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationSectionTemplateParameters, METADATA_PARAMS(NewProp_Params_MetaData, ARRAY_COUNT(NewProp_Params_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Params,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneSkeletalAnimationSectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneSkeletalAnimationSectionTemplate),
				alignof(FMovieSceneSkeletalAnimationSectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationSectionTemplate_CRC() { return 690120878U; }
class UScriptStruct* FMovieSceneSkeletalAnimationSectionTemplateParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationSectionTemplateParameters_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationSectionTemplateParameters, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneSkeletalAnimationSectionTemplateParameters"), sizeof(FMovieSceneSkeletalAnimationSectionTemplateParameters), Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationSectionTemplateParameters_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSkeletalAnimationSectionTemplateParameters(FMovieSceneSkeletalAnimationSectionTemplateParameters::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneSkeletalAnimationSectionTemplateParameters"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneSkeletalAnimationSectionTemplateParameters
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneSkeletalAnimationSectionTemplateParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSkeletalAnimationSectionTemplateParameters")),new UScriptStruct::TCppStructOps<FMovieSceneSkeletalAnimationSectionTemplateParameters>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneSkeletalAnimationSectionTemplateParameters;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationSectionTemplateParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationSectionTemplateParameters_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSkeletalAnimationSectionTemplateParameters"), sizeof(FMovieSceneSkeletalAnimationSectionTemplateParameters), Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationSectionTemplateParameters_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneSkeletalAnimationTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSkeletalAnimationSectionTemplateParameters>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionEndTime_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneSkeletalAnimationTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SectionEndTime = { UE4CodeGen_Private::EPropertyClass::Float, "SectionEndTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSkeletalAnimationSectionTemplateParameters, SectionEndTime), METADATA_PARAMS(NewProp_SectionEndTime_MetaData, ARRAY_COUNT(NewProp_SectionEndTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionStartTime_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneSkeletalAnimationTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SectionStartTime = { UE4CodeGen_Private::EPropertyClass::Float, "SectionStartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSkeletalAnimationSectionTemplateParameters, SectionStartTime), METADATA_PARAMS(NewProp_SectionStartTime_MetaData, ARRAY_COUNT(NewProp_SectionStartTime_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionEndTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionStartTime,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneSkeletalAnimationSectionTemplateParameters",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneSkeletalAnimationSectionTemplateParameters),
				alignof(FMovieSceneSkeletalAnimationSectionTemplateParameters),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationSectionTemplateParameters_CRC() { return 19894326U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
