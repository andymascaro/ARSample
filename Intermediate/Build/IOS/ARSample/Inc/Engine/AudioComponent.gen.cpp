// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/AudioComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioComponent() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSubtitleCue();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioComponentParam();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_AdjustAttenuation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_AdjustVolume();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_FadeIn();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_FadeOut();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_IsPlaying();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_Play();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_SetBoolParameter();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_SetFloatParameter();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_SetIntParameter();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_SetPaused();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_SetSound();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_SetSubmixSend();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_SetUISound();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_SetWaveParameter();
	ENGINE_API UFunction* Z_Construct_UFunction_UAudioComponent_Stop();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature()
	{
		struct _Script_Engine_eventOnAudioPlaybackPercent_Parms
		{
			const USoundWave* PlayingSoundWave;
			float PlaybackPercent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaybackPercent_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlaybackPercent = { UE4CodeGen_Private::EPropertyClass::Float, "PlaybackPercent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnAudioPlaybackPercent_Parms, PlaybackPercent), METADATA_PARAMS(NewProp_PlaybackPercent_MetaData, ARRAY_COUNT(NewProp_PlaybackPercent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayingSoundWave_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayingSoundWave = { UE4CodeGen_Private::EPropertyClass::Object, "PlayingSoundWave", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnAudioPlaybackPercent_Parms, PlayingSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(NewProp_PlayingSoundWave_MetaData, ARRAY_COUNT(NewProp_PlayingSoundWave_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlaybackPercent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayingSoundWave,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Called as a sound plays on the audio component to allow BP to perform actions based on playback percentage.\nComputed as samples played divided by total samples, taking into account pitch.\nNot currently implemented on all platforms." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "OnAudioPlaybackPercent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Engine_eventOnAudioPlaybackPercent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature()
	{
		struct _Script_Engine_eventOnQueueSubtitles_Parms
		{
			TArray<FSubtitleCue> Subtitles;
			float CueDuration;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CueDuration = { UE4CodeGen_Private::EPropertyClass::Float, "CueDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnQueueSubtitles_Parms, CueDuration), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtitles_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Subtitles = { UE4CodeGen_Private::EPropertyClass::Array, "Subtitles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnQueueSubtitles_Parms, Subtitles), METADATA_PARAMS(NewProp_Subtitles_MetaData, ARRAY_COUNT(NewProp_Subtitles_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Subtitles_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Subtitles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSubtitleCue, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CueDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Subtitles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Subtitles_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Called when subtitles are sent to the SubtitleManager.  Set this delegate if you want to hijack the subtitles for other purposes" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "OnQueueSubtitles__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, sizeof(_Script_Engine_eventOnQueueSubtitles_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "OnAudioFinished__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FAudioComponentParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAudioComponentParam_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioComponentParam, Z_Construct_UPackage__Script_Engine(), TEXT("AudioComponentParam"), sizeof(FAudioComponentParam), Get_Z_Construct_UScriptStruct_FAudioComponentParam_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAudioComponentParam(FAudioComponentParam::StaticStruct, TEXT("/Script/Engine"), TEXT("AudioComponentParam"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAudioComponentParam
{
	FScriptStruct_Engine_StaticRegisterNativesFAudioComponentParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AudioComponentParam")),new UScriptStruct::TCppStructOps<FAudioComponentParam>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAudioComponentParam;
	UScriptStruct* Z_Construct_UScriptStruct_FAudioComponentParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAudioComponentParam_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AudioComponentParam"), sizeof(FAudioComponentParam), Get_Z_Construct_UScriptStruct_FAudioComponentParam_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Struct used for storing one per-instance named parameter for this AudioComponent.\nCertain nodes in the SoundCue may reference parameters by name so they can be adjusted per-instance." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioComponentParam>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundWaveParam_MetaData[] = {
				{ "Category", "AudioComponentParam" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Value of the parameter when used as a sound wave" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundWaveParam = { UE4CodeGen_Private::EPropertyClass::Object, "SoundWaveParam", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAudioComponentParam, SoundWaveParam), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(NewProp_SoundWaveParam_MetaData, ARRAY_COUNT(NewProp_SoundWaveParam_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntParam_MetaData[] = {
				{ "Category", "AudioComponentParam" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Value of the parameter when used as an integer" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntParam = { UE4CodeGen_Private::EPropertyClass::Int, "IntParam", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAudioComponentParam, IntParam), METADATA_PARAMS(NewProp_IntParam_MetaData, ARRAY_COUNT(NewProp_IntParam_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolParam_MetaData[] = {
				{ "Category", "AudioComponentParam" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Value of the parameter when used as a boolean" },
			};
#endif
			auto NewProp_BoolParam_SetBit = [](void* Obj){ ((FAudioComponentParam*)Obj)->BoolParam = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoolParam = { UE4CodeGen_Private::EPropertyClass::Bool, "BoolParam", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAudioComponentParam), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_BoolParam_SetBit)>::SetBit, METADATA_PARAMS(NewProp_BoolParam_MetaData, ARRAY_COUNT(NewProp_BoolParam_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatParam_MetaData[] = {
				{ "Category", "AudioComponentParam" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Value of the parameter when used as a float" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatParam = { UE4CodeGen_Private::EPropertyClass::Float, "FloatParam", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAudioComponentParam, FloatParam), METADATA_PARAMS(NewProp_FloatParam_MetaData, ARRAY_COUNT(NewProp_FloatParam_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[] = {
				{ "Category", "AudioComponentParam" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Name of the parameter" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParamName = { UE4CodeGen_Private::EPropertyClass::Name, "ParamName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAudioComponentParam, ParamName), METADATA_PARAMS(NewProp_ParamName_MetaData, ARRAY_COUNT(NewProp_ParamName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundWaveParam,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IntParam,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoolParam,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloatParam,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParamName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AudioComponentParam",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAudioComponentParam),
				alignof(FAudioComponentParam),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAudioComponentParam_CRC() { return 2258192198U; }
	void UAudioComponent::StaticRegisterNativesUAudioComponent()
	{
		UClass* Class = UAudioComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustAttenuation", (Native)&UAudioComponent::execAdjustAttenuation },
			{ "AdjustVolume", (Native)&UAudioComponent::execAdjustVolume },
			{ "BP_GetAttenuationSettingsToApply", (Native)&UAudioComponent::execBP_GetAttenuationSettingsToApply },
			{ "FadeIn", (Native)&UAudioComponent::execFadeIn },
			{ "FadeOut", (Native)&UAudioComponent::execFadeOut },
			{ "IsPlaying", (Native)&UAudioComponent::execIsPlaying },
			{ "Play", (Native)&UAudioComponent::execPlay },
			{ "SetBoolParameter", (Native)&UAudioComponent::execSetBoolParameter },
			{ "SetFloatParameter", (Native)&UAudioComponent::execSetFloatParameter },
			{ "SetIntParameter", (Native)&UAudioComponent::execSetIntParameter },
			{ "SetLowPassFilterEnabled", (Native)&UAudioComponent::execSetLowPassFilterEnabled },
			{ "SetLowPassFilterFrequency", (Native)&UAudioComponent::execSetLowPassFilterFrequency },
			{ "SetPaused", (Native)&UAudioComponent::execSetPaused },
			{ "SetPitchMultiplier", (Native)&UAudioComponent::execSetPitchMultiplier },
			{ "SetSound", (Native)&UAudioComponent::execSetSound },
			{ "SetSubmixSend", (Native)&UAudioComponent::execSetSubmixSend },
			{ "SetUISound", (Native)&UAudioComponent::execSetUISound },
			{ "SetVolumeMultiplier", (Native)&UAudioComponent::execSetVolumeMultiplier },
			{ "SetWaveParameter", (Native)&UAudioComponent::execSetWaveParameter },
			{ "Stop", (Native)&UAudioComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAudioComponent_AdjustAttenuation()
	{
		struct AudioComponent_eventAdjustAttenuation_Parms
		{
			FSoundAttenuationSettings InAttenuationSettings;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAttenuationSettings_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAttenuationSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "InAttenuationSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AudioComponent_eventAdjustAttenuation_Parms, InAttenuationSettings), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(NewProp_InAttenuationSettings_MetaData, ARRAY_COUNT(NewProp_InAttenuationSettings_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAttenuationSettings,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Components|Audio" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Modify the attenuation settings of the audio component" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, "AdjustAttenuation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(AudioComponent_eventAdjustAttenuation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioComponent_AdjustVolume()
	{
		struct AudioComponent_eventAdjustVolume_Parms
		{
			float AdjustVolumeDuration;
			float AdjustVolumeLevel;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustVolumeLevel = { UE4CodeGen_Private::EPropertyClass::Float, "AdjustVolumeLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioComponent_eventAdjustVolume_Parms, AdjustVolumeLevel), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustVolumeDuration = { UE4CodeGen_Private::EPropertyClass::Float, "AdjustVolumeDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioComponent_eventAdjustVolume_Parms, AdjustVolumeDuration), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdjustVolumeLevel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdjustVolumeDuration,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Components|Audio" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "This will allow one to adjust the volume of an AudioComponent on the fly" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, "AdjustVolume", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AudioComponent_eventAdjustVolume_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply()
	{
		struct AudioComponent_eventBP_GetAttenuationSettingsToApply_Parms
		{
			FSoundAttenuationSettings OutAttenuationSettings;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AudioComponent_eventBP_GetAttenuationSettingsToApply_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AudioComponent_eventBP_GetAttenuationSettingsToApply_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAttenuationSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "OutAttenuationSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AudioComponent_eventBP_GetAttenuationSettingsToApply_Parms, OutAttenuationSettings), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutAttenuationSettings,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Components|Audio" },
				{ "DisplayName", "Get Attenuation Settings To Apply" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, "BP_GetAttenuationSettingsToApply", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(AudioComponent_eventBP_GetAttenuationSettingsToApply_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioComponent_FadeIn()
	{
		struct AudioComponent_eventFadeIn_Parms
		{
			float FadeInDuration;
			float FadeVolumeLevel;
			float StartTime;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime = { UE4CodeGen_Private::EPropertyClass::Float, "StartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioComponent_eventFadeIn_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeVolumeLevel = { UE4CodeGen_Private::EPropertyClass::Float, "FadeVolumeLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioComponent_eventFadeIn_Parms, FadeVolumeLevel), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInDuration = { UE4CodeGen_Private::EPropertyClass::Float, "FadeInDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioComponent_eventFadeIn_Parms, FadeInDuration), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FadeVolumeLevel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FadeInDuration,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Components|Audio" },
				{ "CPP_Default_FadeVolumeLevel", "1.000000" },
				{ "CPP_Default_StartTime", "0.000000" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "This can be used in place of \"play\" when it is desired to fade in the sound over time.\n\nIf FadeTime is 0.0, the change in volume is instant.\nIf FadeTime is > 0.0, the multiplier will be increased from 0 to FadeVolumeLevel over FadeIn seconds.\n\n@param FadeInDuration how long it should take to reach the FadeVolumeLevel\n@param FadeVolumeLevel the percentage of the AudioComponents's calculated volume to fade to" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, "FadeIn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(AudioComponent_eventFadeIn_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioComponent_FadeOut()
	{
		struct AudioComponent_eventFadeOut_Parms
		{
			float FadeOutDuration;
			float FadeVolumeLevel;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeVolumeLevel = { UE4CodeGen_Private::EPropertyClass::Float, "FadeVolumeLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioComponent_eventFadeOut_Parms, FadeVolumeLevel), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutDuration = { UE4CodeGen_Private::EPropertyClass::Float, "FadeOutDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioComponent_eventFadeOut_Parms, FadeOutDuration), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FadeVolumeLevel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FadeOutDuration,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Components|Audio" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "This is used in place of \"stop\" when it is desired to fade the volume of the sound before stopping.\n\nIf FadeTime is 0.0, this is the same as calling Stop().\nIf FadeTime is > 0.0, this will adjust the volume multiplier to FadeVolumeLevel over FadeInTime seconds\nand then stop the sound.\n\n@param FadeOutDuration how long it should take to reach the FadeVolumeLevel\n@param FadeVolumeLevel the percentage of the AudioComponents's calculated volume in which to fade to" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, "FadeOut", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(AudioComponent_eventFadeOut_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioComponent_IsPlaying()
	{
		struct AudioComponent_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AudioComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AudioComponent_eventIsPlaying_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Components|Audio" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "@return true if this component is currently playing a SoundCue." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, "IsPlaying", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(AudioComponent_eventIsPlaying_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioComponent_Play()
	{
		struct AudioComponent_eventPlay_Parms
		{
			float StartTime;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime = { UE4CodeGen_Private::EPropertyClass::Float, "StartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioComponent_eventPlay_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartTime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Components|Audio" },
				{ "CPP_Default_StartTime", "0.000000" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Start a sound playing on an audio component" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, "Play", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(AudioComponent_eventPlay_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioComponent_SetBoolParameter()
	{
		struct AudioComponent_eventSetBoolParameter_Parms
		{
			FName InName;
			bool InBool;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_InBool_SetBit = [](void* Obj){ ((AudioComponent_eventSetBoolParameter_Parms*)Obj)->InBool = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InBool = { UE4CodeGen_Private::EPropertyClass::Bool, "InBool", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AudioComponent_eventSetBoolParameter_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_InBool_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_InName = { UE4CodeGen_Private::EPropertyClass::Name, "InName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioComponent_eventSetBoolParameter_Parms, InName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InBool,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Components|Audio" },
				{ "DisplayName", "Set Boolean Parameter" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Set a boolean instance parameter for use in sound cues played by this audio component" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, "SetBoolParameter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AudioComponent_eventSetBoolParameter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioComponent_SetFloatParameter()
	{
		struct AudioComponent_eventSetFloatParameter_Parms
		{
			FName InName;
			float InFloat;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InFloat = { UE4CodeGen_Private::EPropertyClass::Float, "InFloat", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioComponent_eventSetFloatParameter_Parms, InFloat), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_InName = { UE4CodeGen_Private::EPropertyClass::Name, "InName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioComponent_eventSetFloatParameter_Parms, InName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InFloat,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Components|Audio" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Set a float instance parameter for use in sound cues played by this audio component" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, "SetFloatParameter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AudioComponent_eventSetFloatParameter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioComponent_SetIntParameter()
	{
		struct AudioComponent_eventSetIntParameter_Parms
		{
			FName InName;
			int32 InInt;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InInt = { UE4CodeGen_Private::EPropertyClass::Int, "InInt", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioComponent_eventSetIntParameter_Parms, InInt), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_InName = { UE4CodeGen_Private::EPropertyClass::Name, "InName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioComponent_eventSetIntParameter_Parms, InName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InInt,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Components|Audio" },
				{ "DisplayName", "Set Integer Parameter" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Set an integer instance parameter for use in sound cues played by this audio component" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, "SetIntParameter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AudioComponent_eventSetIntParameter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled()
	{
		struct AudioComponent_eventSetLowPassFilterEnabled_Parms
		{
			bool InLowPassFilterEnabled;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_InLowPassFilterEnabled_SetBit = [](void* Obj){ ((AudioComponent_eventSetLowPassFilterEnabled_Parms*)Obj)->InLowPassFilterEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InLowPassFilterEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "InLowPassFilterEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AudioComponent_eventSetLowPassFilterEnabled_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_InLowPassFilterEnabled_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InLowPassFilterEnabled,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Components|Audio" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Sets whether or not the low pass filter is enabled on the audio component." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, "SetLowPassFilterEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AudioComponent_eventSetLowPassFilterEnabled_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency()
	{
		struct AudioComponent_eventSetLowPassFilterFrequency_Parms
		{
			float InLowPassFilterFrequency;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InLowPassFilterFrequency = { UE4CodeGen_Private::EPropertyClass::Float, "InLowPassFilterFrequency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioComponent_eventSetLowPassFilterFrequency_Parms, InLowPassFilterFrequency), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InLowPassFilterFrequency,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Components|Audio" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Sets lowpass filter frequency of the audio component." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, "SetLowPassFilterFrequency", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AudioComponent_eventSetLowPassFilterFrequency_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioComponent_SetPaused()
	{
		struct AudioComponent_eventSetPaused_Parms
		{
			bool bPause;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bPause_SetBit = [](void* Obj){ ((AudioComponent_eventSetPaused_Parms*)Obj)->bPause = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPause = { UE4CodeGen_Private::EPropertyClass::Bool, "bPause", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AudioComponent_eventSetPaused_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPause_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPause,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Components|Audio" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Pause an audio component playing its sound cue, issue any delegates if needed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, "SetPaused", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AudioComponent_eventSetPaused_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier()
	{
		struct AudioComponent_eventSetPitchMultiplier_Parms
		{
			float NewPitchMultiplier;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPitchMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "NewPitchMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioComponent_eventSetPitchMultiplier_Parms, NewPitchMultiplier), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewPitchMultiplier,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Components|Audio" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Set a new pitch multiplier" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, "SetPitchMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AudioComponent_eventSetPitchMultiplier_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioComponent_SetSound()
	{
		struct AudioComponent_eventSetSound_Parms
		{
			USoundBase* NewSound;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewSound = { UE4CodeGen_Private::EPropertyClass::Object, "NewSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioComponent_eventSetSound_Parms, NewSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewSound,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Components|Audio" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Set what sound is played by this component" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, "SetSound", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AudioComponent_eventSetSound_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioComponent_SetSubmixSend()
	{
		struct AudioComponent_eventSetSubmixSend_Parms
		{
			USoundSubmix* Submix;
			float SendLevel;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SendLevel = { UE4CodeGen_Private::EPropertyClass::Float, "SendLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioComponent_eventSetSubmixSend_Parms, SendLevel), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Submix = { UE4CodeGen_Private::EPropertyClass::Object, "Submix", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioComponent_eventSetSubmixSend_Parms, Submix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SendLevel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Submix,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Components|Audio" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Sets how much audio the sound should send to the given submix." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, "SetSubmixSend", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AudioComponent_eventSetSubmixSend_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioComponent_SetUISound()
	{
		struct AudioComponent_eventSetUISound_Parms
		{
			bool bInUISound;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bInUISound_SetBit = [](void* Obj){ ((AudioComponent_eventSetUISound_Parms*)Obj)->bInUISound = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInUISound = { UE4CodeGen_Private::EPropertyClass::Bool, "bInUISound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AudioComponent_eventSetUISound_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInUISound_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInUISound,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Components|Audio" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Set whether sounds generated by this audio component should be considered UI sounds" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, "SetUISound", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AudioComponent_eventSetUISound_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier()
	{
		struct AudioComponent_eventSetVolumeMultiplier_Parms
		{
			float NewVolumeMultiplier;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewVolumeMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "NewVolumeMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioComponent_eventSetVolumeMultiplier_Parms, NewVolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewVolumeMultiplier,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Components|Audio" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Set a new volume multiplier" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, "SetVolumeMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AudioComponent_eventSetVolumeMultiplier_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioComponent_SetWaveParameter()
	{
		struct AudioComponent_eventSetWaveParameter_Parms
		{
			FName InName;
			USoundWave* InWave;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InWave = { UE4CodeGen_Private::EPropertyClass::Object, "InWave", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioComponent_eventSetWaveParameter_Parms, InWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_InName = { UE4CodeGen_Private::EPropertyClass::Name, "InName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioComponent_eventSetWaveParameter_Parms, InName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InWave,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Components|Audio" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Set a sound wave instance parameter for use in sound cues played by this audio component" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, "SetWaveParameter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AudioComponent_eventSetWaveParameter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Components|Audio" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Stop an audio component playing its sound cue, issue any delegates if needed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, "Stop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAudioComponent_NoRegister()
	{
		return UAudioComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UAudioComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAudioComponent_AdjustAttenuation, "AdjustAttenuation" }, // 392450713
				{ &Z_Construct_UFunction_UAudioComponent_AdjustVolume, "AdjustVolume" }, // 1598370134
				{ &Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply, "BP_GetAttenuationSettingsToApply" }, // 1618135576
				{ &Z_Construct_UFunction_UAudioComponent_FadeIn, "FadeIn" }, // 3240962107
				{ &Z_Construct_UFunction_UAudioComponent_FadeOut, "FadeOut" }, // 2534000205
				{ &Z_Construct_UFunction_UAudioComponent_IsPlaying, "IsPlaying" }, // 3931718402
				{ &Z_Construct_UFunction_UAudioComponent_Play, "Play" }, // 1651669730
				{ &Z_Construct_UFunction_UAudioComponent_SetBoolParameter, "SetBoolParameter" }, // 776831222
				{ &Z_Construct_UFunction_UAudioComponent_SetFloatParameter, "SetFloatParameter" }, // 1083885930
				{ &Z_Construct_UFunction_UAudioComponent_SetIntParameter, "SetIntParameter" }, // 460946704
				{ &Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled, "SetLowPassFilterEnabled" }, // 734564340
				{ &Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency, "SetLowPassFilterFrequency" }, // 1538125067
				{ &Z_Construct_UFunction_UAudioComponent_SetPaused, "SetPaused" }, // 2209184193
				{ &Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier, "SetPitchMultiplier" }, // 1323871964
				{ &Z_Construct_UFunction_UAudioComponent_SetSound, "SetSound" }, // 1319315572
				{ &Z_Construct_UFunction_UAudioComponent_SetSubmixSend, "SetSubmixSend" }, // 3717481905
				{ &Z_Construct_UFunction_UAudioComponent_SetUISound, "SetUISound" }, // 3131087470
				{ &Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier, "SetVolumeMultiplier" }, // 2080855752
				{ &Z_Construct_UFunction_UAudioComponent_SetWaveParameter, "SetWaveParameter" }, // 3709073043
				{ &Z_Construct_UFunction_UAudioComponent_Stop, "Stop" }, // 2410039406
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Audio Common" },
				{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
				{ "IncludePath", "Components/AudioComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "AudioComponent is used to play a Sound\n\n@see https://docs.unrealengine.com/latest/INT/Audio/Overview/index.html\n@see USoundBase" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQueueSubtitles_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Called when subtitles are sent to the SubtitleManager.  Set this delegate if you want to hijack the subtitles for other purposes" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnQueueSubtitles = { UE4CodeGen_Private::EPropertyClass::Delegate, "OnQueueSubtitles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080000, 1, nullptr, STRUCT_OFFSET(UAudioComponent, OnQueueSubtitles), Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature, METADATA_PARAMS(NewProp_OnQueueSubtitles_MetaData, ARRAY_COUNT(NewProp_OnQueueSubtitles_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAudioPlaybackPercent_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Called as a sound plays on the audio component to allow BP to perform actions based on playback percentage.\nComputed as samples played divided by total samples, taking into account pitch.\nNot currently implemented on all platforms." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioPlaybackPercent = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnAudioPlaybackPercent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UAudioComponent, OnAudioPlaybackPercent), Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature, METADATA_PARAMS(NewProp_OnAudioPlaybackPercent_MetaData, ARRAY_COUNT(NewProp_OnAudioPlaybackPercent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAudioFinished_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioFinished = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnAudioFinished", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UAudioComponent, OnAudioFinished), Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature, METADATA_PARAMS(NewProp_OnAudioFinished_MetaData, ARRAY_COUNT(NewProp_OnAudioFinished_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConcurrencySettings_MetaData[] = {
				{ "Category", "Concurrency" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "What sound concurrency to use for sounds generated by this audio component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings = { UE4CodeGen_Private::EPropertyClass::Object, "ConcurrencySettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAudioComponent, ConcurrencySettings), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(NewProp_ConcurrencySettings_MetaData, ARRAY_COUNT(NewProp_ConcurrencySettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationOverrides_MetaData[] = {
				{ "Category", "AttenuationSettings" },
				{ "EditCondition", "bOverrideAttenuation" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "If bOverrideSettings is true, the attenuation properties to use for sounds generated by this component" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttenuationOverrides = { UE4CodeGen_Private::EPropertyClass::Struct, "AttenuationOverrides", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAudioComponent, AttenuationOverrides), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(NewProp_AttenuationOverrides_MetaData, ARRAY_COUNT(NewProp_AttenuationOverrides_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[] = {
				{ "Category", "Attenuation" },
				{ "EditCondition", "!bOverrideAttenuation" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "If bOverrideSettings is false, the asset to use to determine attenuation properties for sounds generated by this component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings = { UE4CodeGen_Private::EPropertyClass::Object, "AttenuationSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAudioComponent, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(NewProp_AttenuationSettings_MetaData, ARRAY_COUNT(NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowPassFilterFrequency_MetaData[] = {
				{ "Category", "Filter" },
				{ "ClampMin", "0.0" },
				{ "EditCondition", "bEnableLowPassFilter" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "The frequency of the lowpass filter (in hertz) to apply to this voice. A frequency of 0.0 is the device sample rate and will bypass the filter." },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowPassFilterFrequency = { UE4CodeGen_Private::EPropertyClass::Float, "LowPassFilterFrequency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAudioComponent, LowPassFilterFrequency), METADATA_PARAMS(NewProp_LowPassFilterFrequency_MetaData, ARRAY_COUNT(NewProp_LowPassFilterFrequency_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighFrequencyGainMultiplier_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HighFrequencyGainMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "HighFrequencyGainMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UAudioComponent, HighFrequencyGainMultiplier_DEPRECATED), METADATA_PARAMS(NewProp_HighFrequencyGainMultiplier_MetaData, ARRAY_COUNT(NewProp_HighFrequencyGainMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[] = {
				{ "Category", "Sound" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "A pitch multiplier to apply to sounds generated by this component" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "PitchMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAudioComponent, PitchMultiplier), METADATA_PARAMS(NewProp_PitchMultiplier_MetaData, ARRAY_COUNT(NewProp_PitchMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeWeightedPriorityScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeWeightedPriorityScale = { UE4CodeGen_Private::EPropertyClass::Float, "VolumeWeightedPriorityScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UAudioComponent, VolumeWeightedPriorityScale_DEPRECATED), METADATA_PARAMS(NewProp_VolumeWeightedPriorityScale_MetaData, ARRAY_COUNT(NewProp_VolumeWeightedPriorityScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitlePriority_MetaData[] = {
				{ "Category", "Sound" },
				{ "ClampMin", "0.0" },
				{ "EditCondition", "bOverrideSubtitlePriority" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Used by the subtitle manager to prioritize subtitles wave instances spawned by this component." },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SubtitlePriority = { UE4CodeGen_Private::EPropertyClass::Float, "SubtitlePriority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAudioComponent, SubtitlePriority), METADATA_PARAMS(NewProp_SubtitlePriority_MetaData, ARRAY_COUNT(NewProp_SubtitlePriority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
				{ "Category", "Sound" },
				{ "ClampMin", "0.0" },
				{ "EditCondition", "bOverridePriority" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "A priority value that is used for sounds that play on this component that scales against final output volume." },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Priority = { UE4CodeGen_Private::EPropertyClass::Float, "Priority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAudioComponent, Priority), METADATA_PARAMS(NewProp_Priority_MetaData, ARRAY_COUNT(NewProp_Priority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeMultiplier_MetaData[] = {
				{ "Category", "Sound" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "A volume multiplier to apply to sounds generated by this component" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "VolumeMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAudioComponent, VolumeMultiplier), METADATA_PARAMS(NewProp_VolumeMultiplier_MetaData, ARRAY_COUNT(NewProp_VolumeMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeModulationMax_MetaData[] = {
				{ "Category", "Modulation" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "The upper bound to use when randomly determining a volume multiplier" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeModulationMax = { UE4CodeGen_Private::EPropertyClass::Float, "VolumeModulationMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAudioComponent, VolumeModulationMax), METADATA_PARAMS(NewProp_VolumeModulationMax_MetaData, ARRAY_COUNT(NewProp_VolumeModulationMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeModulationMin_MetaData[] = {
				{ "Category", "Modulation" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "The lower bound to use when randomly determining a volume multiplier" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeModulationMin = { UE4CodeGen_Private::EPropertyClass::Float, "VolumeModulationMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAudioComponent, VolumeModulationMin), METADATA_PARAMS(NewProp_VolumeModulationMin_MetaData, ARRAY_COUNT(NewProp_VolumeModulationMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchModulationMax_MetaData[] = {
				{ "Category", "Modulation" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "The upper bound to use when randomly determining a pitch multiplier" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchModulationMax = { UE4CodeGen_Private::EPropertyClass::Float, "PitchModulationMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAudioComponent, PitchModulationMax), METADATA_PARAMS(NewProp_PitchModulationMax_MetaData, ARRAY_COUNT(NewProp_PitchModulationMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchModulationMin_MetaData[] = {
				{ "Category", "Modulation" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "The lower bound to use when randomly determining a pitch multiplier" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchModulationMin = { UE4CodeGen_Private::EPropertyClass::Float, "PitchModulationMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAudioComponent, PitchModulationMin), METADATA_PARAMS(NewProp_PitchModulationMin_MetaData, ARRAY_COUNT(NewProp_PitchModulationMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponentUserID_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Configurable, serialized ID for audio plugins" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AudioComponentUserID = { UE4CodeGen_Private::EPropertyClass::Name, "AudioComponentUserID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAudioComponent, AudioComponentUserID), METADATA_PARAMS(NewProp_AudioComponentUserID_MetaData, ARRAY_COUNT(NewProp_AudioComponentUserID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuppressSubtitles_MetaData[] = {
				{ "Category", "Sound" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "If true, subtitles in the sound data will be ignored." },
			};
#endif
			auto NewProp_bSuppressSubtitles_SetBit = [](void* Obj){ ((UAudioComponent*)Obj)->bSuppressSubtitles = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuppressSubtitles = { UE4CodeGen_Private::EPropertyClass::Bool, "bSuppressSubtitles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAudioComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSuppressSubtitles_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSuppressSubtitles_MetaData, ARRAY_COUNT(NewProp_bSuppressSubtitles_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverridePriority_MetaData[] = {
				{ "Category", "Sound" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
			};
#endif
			auto NewProp_bOverridePriority_SetBit = [](void* Obj){ ((UAudioComponent*)Obj)->bOverridePriority = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverridePriority = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverridePriority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAudioComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverridePriority_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverridePriority_MetaData, ARRAY_COUNT(NewProp_bOverridePriority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLowPassFilter_MetaData[] = {
				{ "Category", "Filter" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Whether or not to apply a low-pass filter to the sound that plays in this audio component." },
			};
#endif
			auto NewProp_bEnableLowPassFilter_SetBit = [](void* Obj){ ((UAudioComponent*)Obj)->bEnableLowPassFilter = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLowPassFilter = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableLowPassFilter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAudioComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableLowPassFilter_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableLowPassFilter_MetaData, ARRAY_COUNT(NewProp_bEnableLowPassFilter_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUISound_MetaData[] = {
				{ "Category", "Sound" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Whether or not this sound plays when the game is paused in the UI" },
			};
#endif
			auto NewProp_bIsUISound_SetBit = [](void* Obj){ ((UAudioComponent*)Obj)->bIsUISound = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUISound = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsUISound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAudioComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsUISound_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsUISound_MetaData, ARRAY_COUNT(NewProp_bIsUISound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideSubtitlePriority_MetaData[] = {
				{ "Category", "Sound" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Whether or not to override the sound's subtitle priority." },
			};
#endif
			auto NewProp_bOverrideSubtitlePriority_SetBit = [](void* Obj){ ((UAudioComponent*)Obj)->bOverrideSubtitlePriority = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideSubtitlePriority = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideSubtitlePriority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAudioComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideSubtitlePriority_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideSubtitlePriority_MetaData, ARRAY_COUNT(NewProp_bOverrideSubtitlePriority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[] = {
				{ "Category", "Attenuation" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Allows defining attenuation settings directly on this audio component without using an attenuation settings asset." },
			};
#endif
			auto NewProp_bOverrideAttenuation_SetBit = [](void* Obj){ ((UAudioComponent*)Obj)->bOverrideAttenuation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideAttenuation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAudioComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideAttenuation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideAttenuation_MetaData, ARRAY_COUNT(NewProp_bOverrideAttenuation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowSpatialization_MetaData[] = {
				{ "Category", "Attenuation" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Overrides spatialization enablement in either the attenuation asset or on this audio component's attenuation settings override." },
			};
#endif
			auto NewProp_bAllowSpatialization_SetBit = [](void* Obj){ ((UAudioComponent*)Obj)->bAllowSpatialization = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowSpatialization = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowSpatialization", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAudioComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowSpatialization_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowSpatialization_MetaData, ARRAY_COUNT(NewProp_bAllowSpatialization_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldRemainActiveIfDropped_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Whether the wave instances should remain active if they're dropped by the prioritization code. Useful for e.g. vehicle sounds that shouldn't cut out." },
			};
#endif
			auto NewProp_bShouldRemainActiveIfDropped_SetBit = [](void* Obj){ ((UAudioComponent*)Obj)->bShouldRemainActiveIfDropped = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldRemainActiveIfDropped = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldRemainActiveIfDropped", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAudioComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShouldRemainActiveIfDropped_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShouldRemainActiveIfDropped_MetaData, ARRAY_COUNT(NewProp_bShouldRemainActiveIfDropped_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopWhenOwnerDestroyed_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Stop sound when owner is destroyed" },
			};
#endif
			auto NewProp_bStopWhenOwnerDestroyed_SetBit = [](void* Obj){ ((UAudioComponent*)Obj)->bStopWhenOwnerDestroyed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenOwnerDestroyed = { UE4CodeGen_Private::EPropertyClass::Bool, "bStopWhenOwnerDestroyed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAudioComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStopWhenOwnerDestroyed_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bStopWhenOwnerDestroyed_MetaData, ARRAY_COUNT(NewProp_bStopWhenOwnerDestroyed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroy_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Auto destroy this component on completion" },
			};
#endif
			auto NewProp_bAutoDestroy_SetBit = [](void* Obj){ ((UAudioComponent*)Obj)->bAutoDestroy = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoDestroy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAudioComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoDestroy_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutoDestroy_MetaData, ARRAY_COUNT(NewProp_bAutoDestroy_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundClassOverride_MetaData[] = {
				{ "Category", "Sound" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Optional sound group this AudioComponent belongs to" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundClassOverride = { UE4CodeGen_Private::EPropertyClass::Object, "SoundClassOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(UAudioComponent, SoundClassOverride), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(NewProp_SoundClassOverride_MetaData, ARRAY_COUNT(NewProp_SoundClassOverride_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceParameters_MetaData[] = {
				{ "Category", "Sound" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "Array of per-instance parameters for this AudioComponent." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstanceParameters = { UE4CodeGen_Private::EPropertyClass::Array, "InstanceParameters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UAudioComponent, InstanceParameters), METADATA_PARAMS(NewProp_InstanceParameters_MetaData, ARRAY_COUNT(NewProp_InstanceParameters_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceParameters_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "InstanceParameters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAudioComponentParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
				{ "Category", "Sound" },
				{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
				{ "ToolTip", "The sound to be played" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound = { UE4CodeGen_Private::EPropertyClass::Object, "Sound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAudioComponent, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(NewProp_Sound_MetaData, ARRAY_COUNT(NewProp_Sound_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnQueueSubtitles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnAudioPlaybackPercent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnAudioFinished,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConcurrencySettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttenuationOverrides,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttenuationSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LowPassFilterFrequency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HighFrequencyGainMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PitchMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumeWeightedPriorityScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubtitlePriority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Priority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumeMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumeModulationMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumeModulationMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PitchModulationMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PitchModulationMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AudioComponentUserID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSuppressSubtitles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverridePriority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableLowPassFilter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsUISound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideSubtitlePriority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideAttenuation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowSpatialization,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShouldRemainActiveIfDropped,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStopWhenOwnerDestroyed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoDestroy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundClassOverride,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceParameters,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceParameters_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sound,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAudioComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAudioComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UAudioComponent, 617586041);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAudioComponent(Z_Construct_UClass_UAudioComponent, &UAudioComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UAudioComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
