// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/Evaluation/MovieSceneAudioTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAudioTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
class UScriptStruct* FMovieSceneAudioSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneAudioSectionTemplate"), sizeof(FMovieSceneAudioSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneAudioSectionTemplate(FMovieSceneAudioSectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneAudioSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneAudioSectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneAudioSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneAudioSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneAudioSectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneAudioSectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneAudioSectionTemplate"), sizeof(FMovieSceneAudioSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneAudioTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneAudioSectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioData_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneAudioTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AudioData = { UE4CodeGen_Private::EPropertyClass::Struct, "AudioData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneAudioSectionTemplate, AudioData), Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData, METADATA_PARAMS(NewProp_AudioData_MetaData, ARRAY_COUNT(NewProp_AudioData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AudioData,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneAudioSectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneAudioSectionTemplate),
				alignof(FMovieSceneAudioSectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplate_CRC() { return 3759163445U; }
class UScriptStruct* FMovieSceneAudioSectionTemplateData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneAudioSectionTemplateData"), sizeof(FMovieSceneAudioSectionTemplateData), Get_Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneAudioSectionTemplateData(FMovieSceneAudioSectionTemplateData::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneAudioSectionTemplateData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneAudioSectionTemplateData
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneAudioSectionTemplateData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneAudioSectionTemplateData")),new UScriptStruct::TCppStructOps<FMovieSceneAudioSectionTemplateData>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneAudioSectionTemplateData;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneAudioSectionTemplateData"), sizeof(FMovieSceneAudioSectionTemplateData), Get_Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneAudioTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneAudioSectionTemplateData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAudioPlaybackPercent_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneAudioTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioPlaybackPercent = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnAudioPlaybackPercent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080000, 1, nullptr, STRUCT_OFFSET(FMovieSceneAudioSectionTemplateData, OnAudioPlaybackPercent), Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature, METADATA_PARAMS(NewProp_OnAudioPlaybackPercent_MetaData, ARRAY_COUNT(NewProp_OnAudioPlaybackPercent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAudioFinished_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneAudioTemplate.h" },
				{ "ToolTip", "called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioFinished = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnAudioFinished", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080000, 1, nullptr, STRUCT_OFFSET(FMovieSceneAudioSectionTemplateData, OnAudioFinished), Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature, METADATA_PARAMS(NewProp_OnAudioFinished_MetaData, ARRAY_COUNT(NewProp_OnAudioFinished_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQueueSubtitles_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneAudioTemplate.h" },
				{ "ToolTip", "Called when subtitles are sent to the SubtitleManager.  Set this delegate if you want to hijack the subtitles for other purposes" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnQueueSubtitles = { UE4CodeGen_Private::EPropertyClass::Delegate, "OnQueueSubtitles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080000, 1, nullptr, STRUCT_OFFSET(FMovieSceneAudioSectionTemplateData, OnQueueSubtitles), Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature, METADATA_PARAMS(NewProp_OnQueueSubtitles_MetaData, ARRAY_COUNT(NewProp_OnQueueSubtitles_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneAudioTemplate.h" },
				{ "ToolTip", "The attenuation settings" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings = { UE4CodeGen_Private::EPropertyClass::Object, "AttenuationSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneAudioSectionTemplateData, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(NewProp_AttenuationSettings_MetaData, ARRAY_COUNT(NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneAudioTemplate.h" },
				{ "ToolTip", "Should the attenuation settings on this section be used." },
			};
#endif
			auto NewProp_bOverrideAttenuation_SetBit = [](void* Obj){ ((FMovieSceneAudioSectionTemplateData*)Obj)->bOverrideAttenuation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideAttenuation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMovieSceneAudioSectionTemplateData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideAttenuation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideAttenuation_MetaData, ARRAY_COUNT(NewProp_bOverrideAttenuation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowIndex_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneAudioTemplate.h" },
				{ "ToolTip", "The row index of the section" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RowIndex = { UE4CodeGen_Private::EPropertyClass::Int, "RowIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneAudioSectionTemplateData, RowIndex), METADATA_PARAMS(NewProp_RowIndex_MetaData, ARRAY_COUNT(NewProp_RowIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioVolumeCurve_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneAudioTemplate.h" },
				{ "ToolTip", "The volume the sound will be played with." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AudioVolumeCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "AudioVolumeCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneAudioSectionTemplateData, AudioVolumeCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_AudioVolumeCurve_MetaData, ARRAY_COUNT(NewProp_AudioVolumeCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioPitchMultiplierCurve_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneAudioTemplate.h" },
				{ "ToolTip", "The amount which this audio is time dilated by" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AudioPitchMultiplierCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "AudioPitchMultiplierCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneAudioSectionTemplateData, AudioPitchMultiplierCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_AudioPitchMultiplierCurve_MetaData, ARRAY_COUNT(NewProp_AudioPitchMultiplierCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioRange_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneAudioTemplate.h" },
				{ "ToolTip", "The time range this audio plays" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AudioRange = { UE4CodeGen_Private::EPropertyClass::Struct, "AudioRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneAudioSectionTemplateData, AudioRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(NewProp_AudioRange_MetaData, ARRAY_COUNT(NewProp_AudioRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioStartOffset_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneAudioTemplate.h" },
				{ "ToolTip", "The offset into the beginning of the audio clip" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AudioStartOffset = { UE4CodeGen_Private::EPropertyClass::Float, "AudioStartOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneAudioSectionTemplateData, AudioStartOffset), METADATA_PARAMS(NewProp_AudioStartOffset_MetaData, ARRAY_COUNT(NewProp_AudioStartOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneAudioTemplate.h" },
				{ "ToolTip", "The sound cue or wave that this template plays. Not to be dereferenced on a background thread" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound = { UE4CodeGen_Private::EPropertyClass::Object, "Sound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneAudioSectionTemplateData, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(NewProp_Sound_MetaData, ARRAY_COUNT(NewProp_Sound_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnAudioPlaybackPercent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnAudioFinished,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnQueueSubtitles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttenuationSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideAttenuation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RowIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AudioVolumeCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AudioPitchMultiplierCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AudioRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AudioStartOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sound,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneAudioSectionTemplateData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneAudioSectionTemplateData),
				alignof(FMovieSceneAudioSectionTemplateData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAudioSectionTemplateData_CRC() { return 2112482550U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
