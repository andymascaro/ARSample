// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/Evaluation/MovieSceneFadeTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFadeTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFadeSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
// End Cross Module References
class UScriptStruct* FMovieSceneFadeSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFadeSectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFadeSectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneFadeSectionTemplate"), sizeof(FMovieSceneFadeSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneFadeSectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneFadeSectionTemplate(FMovieSceneFadeSectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneFadeSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneFadeSectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneFadeSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneFadeSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneFadeSectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneFadeSectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFadeSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFadeSectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneFadeSectionTemplate"), sizeof(FMovieSceneFadeSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneFadeSectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneFadeTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneFadeSectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFadeAudio_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneFadeTemplate.h" },
			};
#endif
			auto NewProp_bFadeAudio_SetBit = [](void* Obj){ ((FMovieSceneFadeSectionTemplate*)Obj)->bFadeAudio = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFadeAudio = { UE4CodeGen_Private::EPropertyClass::Bool, "bFadeAudio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FMovieSceneFadeSectionTemplate), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFadeAudio_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFadeAudio_MetaData, ARRAY_COUNT(NewProp_bFadeAudio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeColor_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneFadeTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FadeColor = { UE4CodeGen_Private::EPropertyClass::Struct, "FadeColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneFadeSectionTemplate, FadeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_FadeColor_MetaData, ARRAY_COUNT(NewProp_FadeColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeCurve_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneFadeTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FadeCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "FadeCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneFadeSectionTemplate, FadeCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_FadeCurve_MetaData, ARRAY_COUNT(NewProp_FadeCurve_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFadeAudio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FadeColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FadeCurve,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneFadeSectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneFadeSectionTemplate),
				alignof(FMovieSceneFadeSectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFadeSectionTemplate_CRC() { return 3712554948U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
