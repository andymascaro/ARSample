// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Sections/MovieSceneAudioSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAudioSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneAudioSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneAudioSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void UMovieSceneAudioSection::StaticRegisterNativesUMovieSceneAudioSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneAudioSection_NoRegister()
	{
		return UMovieSceneAudioSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneAudioSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Sections/MovieSceneAudioSection.h" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
				{ "ToolTip", "Audio section, for use in the master audio, or by attached audio objects" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAudioPlaybackPercent_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioPlaybackPercent = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnAudioPlaybackPercent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080000, 1, nullptr, STRUCT_OFFSET(UMovieSceneAudioSection, OnAudioPlaybackPercent), Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature, METADATA_PARAMS(NewProp_OnAudioPlaybackPercent_MetaData, ARRAY_COUNT(NewProp_OnAudioPlaybackPercent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAudioFinished_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
				{ "ToolTip", "called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioFinished = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnAudioFinished", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080000, 1, nullptr, STRUCT_OFFSET(UMovieSceneAudioSection, OnAudioFinished), Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature, METADATA_PARAMS(NewProp_OnAudioFinished_MetaData, ARRAY_COUNT(NewProp_OnAudioFinished_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQueueSubtitles_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
				{ "ToolTip", "Called when subtitles are sent to the SubtitleManager.  Set this delegate if you want to hijack the subtitles for other purposes" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnQueueSubtitles = { UE4CodeGen_Private::EPropertyClass::Delegate, "OnQueueSubtitles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080000, 1, nullptr, STRUCT_OFFSET(UMovieSceneAudioSection, OnQueueSubtitles), Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature, METADATA_PARAMS(NewProp_OnQueueSubtitles_MetaData, ARRAY_COUNT(NewProp_OnQueueSubtitles_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[] = {
				{ "Category", "Attenuation" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
				{ "ToolTip", "The attenuation settings to use." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings = { UE4CodeGen_Private::EPropertyClass::Object, "AttenuationSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneAudioSection, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(NewProp_AttenuationSettings_MetaData, ARRAY_COUNT(NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[] = {
				{ "Category", "Attenuation" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
				{ "ToolTip", "Should the attenuation settings on this section be used." },
			};
#endif
			auto NewProp_bOverrideAttenuation_SetBit = [](void* Obj){ ((UMovieSceneAudioSection*)Obj)->bOverrideAttenuation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideAttenuation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMovieSceneAudioSection), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideAttenuation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideAttenuation_MetaData, ARRAY_COUNT(NewProp_bOverrideAttenuation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuppressSubtitles_MetaData[] = {
				{ "Category", "Audio" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
			};
#endif
			auto NewProp_bSuppressSubtitles_SetBit = [](void* Obj){ ((UMovieSceneAudioSection*)Obj)->bSuppressSubtitles = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuppressSubtitles = { UE4CodeGen_Private::EPropertyClass::Bool, "bSuppressSubtitles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMovieSceneAudioSection), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSuppressSubtitles_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSuppressSubtitles_MetaData, ARRAY_COUNT(NewProp_bSuppressSubtitles_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[] = {
				{ "Category", "Audio" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
				{ "ToolTip", "The pitch multiplier the sound will be played with." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PitchMultiplier = { UE4CodeGen_Private::EPropertyClass::Struct, "PitchMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneAudioSection, PitchMultiplier), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_PitchMultiplier_MetaData, ARRAY_COUNT(NewProp_PitchMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundVolume_MetaData[] = {
				{ "Category", "Audio" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
				{ "ToolTip", "The volume the sound will be played with." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoundVolume = { UE4CodeGen_Private::EPropertyClass::Struct, "SoundVolume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneAudioSection, SoundVolume), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_SoundVolume_MetaData, ARRAY_COUNT(NewProp_SoundVolume_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioVolume_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
				{ "ToolTip", "The volume the sound will be played with." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AudioVolume = { UE4CodeGen_Private::EPropertyClass::Float, "AudioVolume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneAudioSection, AudioVolume_DEPRECATED), METADATA_PARAMS(NewProp_AudioVolume_MetaData, ARRAY_COUNT(NewProp_AudioVolume_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioDilationFactor_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
				{ "ToolTip", "The amount which this audio is time dilated by" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AudioDilationFactor = { UE4CodeGen_Private::EPropertyClass::Float, "AudioDilationFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneAudioSection, AudioDilationFactor_DEPRECATED), METADATA_PARAMS(NewProp_AudioDilationFactor_MetaData, ARRAY_COUNT(NewProp_AudioDilationFactor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioStartTime_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
				{ "ToolTip", "The absolute time that the sound starts playing at" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AudioStartTime = { UE4CodeGen_Private::EPropertyClass::Float, "AudioStartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneAudioSection, AudioStartTime_DEPRECATED), METADATA_PARAMS(NewProp_AudioStartTime_MetaData, ARRAY_COUNT(NewProp_AudioStartTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[] = {
				{ "Category", "Audio" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
				{ "ToolTip", "The offset into the beginning of the audio clip" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartOffset = { UE4CodeGen_Private::EPropertyClass::Float, "StartOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneAudioSection, StartOffset), METADATA_PARAMS(NewProp_StartOffset_MetaData, ARRAY_COUNT(NewProp_StartOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
				{ "Category", "Audio" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
				{ "ToolTip", "The sound cue or wave that this section plays" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound = { UE4CodeGen_Private::EPropertyClass::Object, "Sound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneAudioSection, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(NewProp_Sound_MetaData, ARRAY_COUNT(NewProp_Sound_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnAudioPlaybackPercent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnAudioFinished,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnQueueSubtitles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttenuationSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideAttenuation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSuppressSubtitles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PitchMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundVolume,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AudioVolume,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AudioDilationFactor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AudioStartTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sound,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneAudioSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneAudioSection::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneAudioSection, 1418033887);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneAudioSection(Z_Construct_UClass_UMovieSceneAudioSection, &UMovieSceneAudioSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneAudioSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAudioSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
