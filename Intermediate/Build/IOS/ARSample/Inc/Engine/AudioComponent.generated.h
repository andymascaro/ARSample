// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundWave;
struct FSubtitleCue;
struct FSoundAttenuationSettings;
class USoundSubmix;
class USoundBase;
#ifdef ENGINE_AudioComponent_generated_h
#error "AudioComponent.generated.h already included, missing '#pragma once' in AudioComponent.h"
#endif
#define ENGINE_AudioComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_43_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FAudioComponentParam(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_31_DELEGATE \
struct _Script_Engine_eventOnAudioPlaybackPercent_Parms \
{ \
	const USoundWave* PlayingSoundWave; \
	float PlaybackPercent; \
}; \
static inline void FOnAudioPlaybackPercent_DelegateWrapper(const FMulticastScriptDelegate& OnAudioPlaybackPercent, const USoundWave* PlayingSoundWave, const float PlaybackPercent) \
{ \
	_Script_Engine_eventOnAudioPlaybackPercent_Parms Parms; \
	Parms.PlayingSoundWave=PlayingSoundWave; \
	Parms.PlaybackPercent=PlaybackPercent; \
	OnAudioPlaybackPercent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_25_DELEGATE \
struct _Script_Engine_eventOnQueueSubtitles_Parms \
{ \
	TArray<FSubtitleCue> Subtitles; \
	float CueDuration; \
}; \
static inline void FOnQueueSubtitles_DelegateWrapper(const FScriptDelegate& OnQueueSubtitles, TArray<FSubtitleCue> const& Subtitles, float CueDuration) \
{ \
	_Script_Engine_eventOnQueueSubtitles_Parms Parms; \
	Parms.Subtitles=Subtitles; \
	Parms.CueDuration=CueDuration; \
	OnQueueSubtitles.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_19_DELEGATE \
static inline void FOnAudioFinished_DelegateWrapper(const FMulticastScriptDelegate& OnAudioFinished) \
{ \
	OnAudioFinished.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_92_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_GetAttenuationSettingsToApply) \
	{ \
		P_GET_STRUCT_REF(FSoundAttenuationSettings,Z_Param_Out_OutAttenuationSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->BP_GetAttenuationSettingsToApply(Z_Param_Out_OutAttenuationSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLowPassFilterFrequency) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InLowPassFilterFrequency); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLowPassFilterFrequency(Z_Param_InLowPassFilterFrequency); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLowPassFilterEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_InLowPassFilterEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLowPassFilterEnabled(Z_Param_InLowPassFilterEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSubmixSend) \
	{ \
		P_GET_OBJECT(USoundSubmix,Z_Param_Submix); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SendLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSubmixSend(Z_Param_Submix,Z_Param_SendLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdjustAttenuation) \
	{ \
		P_GET_STRUCT_REF(FSoundAttenuationSettings,Z_Param_Out_InAttenuationSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AdjustAttenuation(Z_Param_Out_InAttenuationSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUISound) \
	{ \
		P_GET_UBOOL(Z_Param_bInUISound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetUISound(Z_Param_bInUISound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPitchMultiplier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPitchMultiplier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPitchMultiplier(Z_Param_NewPitchMultiplier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVolumeMultiplier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVolumeMultiplier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVolumeMultiplier(Z_Param_NewVolumeMultiplier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIntParameter) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InInt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetIntParameter(Z_Param_InName,Z_Param_InInt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoolParameter) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InName); \
		P_GET_UBOOL(Z_Param_InBool); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBoolParameter(Z_Param_InName,Z_Param_InBool); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWaveParameter) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InName); \
		P_GET_OBJECT(USoundWave,Z_Param_InWave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetWaveParameter(Z_Param_InName,Z_Param_InWave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloatParameter) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InFloat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFloatParameter(Z_Param_InName,Z_Param_InFloat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdjustVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AdjustVolumeDuration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AdjustVolumeLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AdjustVolume(Z_Param_AdjustVolumeDuration,Z_Param_AdjustVolumeLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPaused) \
	{ \
		P_GET_UBOOL(Z_Param_bPause); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPaused(Z_Param_bPause); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Play(Z_Param_StartTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFadeOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeOutDuration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeVolumeLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FadeOut(Z_Param_FadeOutDuration,Z_Param_FadeVolumeLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFadeIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeInDuration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeVolumeLevel); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FadeIn(Z_Param_FadeInDuration,Z_Param_FadeVolumeLevel,Z_Param_StartTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSound) \
	{ \
		P_GET_OBJECT(USoundBase,Z_Param_NewSound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSound(Z_Param_NewSound); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_GetAttenuationSettingsToApply) \
	{ \
		P_GET_STRUCT_REF(FSoundAttenuationSettings,Z_Param_Out_OutAttenuationSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->BP_GetAttenuationSettingsToApply(Z_Param_Out_OutAttenuationSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLowPassFilterFrequency) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InLowPassFilterFrequency); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLowPassFilterFrequency(Z_Param_InLowPassFilterFrequency); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLowPassFilterEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_InLowPassFilterEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLowPassFilterEnabled(Z_Param_InLowPassFilterEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSubmixSend) \
	{ \
		P_GET_OBJECT(USoundSubmix,Z_Param_Submix); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SendLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSubmixSend(Z_Param_Submix,Z_Param_SendLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdjustAttenuation) \
	{ \
		P_GET_STRUCT_REF(FSoundAttenuationSettings,Z_Param_Out_InAttenuationSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AdjustAttenuation(Z_Param_Out_InAttenuationSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUISound) \
	{ \
		P_GET_UBOOL(Z_Param_bInUISound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetUISound(Z_Param_bInUISound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPitchMultiplier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPitchMultiplier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPitchMultiplier(Z_Param_NewPitchMultiplier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVolumeMultiplier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVolumeMultiplier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVolumeMultiplier(Z_Param_NewVolumeMultiplier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIntParameter) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InInt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetIntParameter(Z_Param_InName,Z_Param_InInt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoolParameter) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InName); \
		P_GET_UBOOL(Z_Param_InBool); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBoolParameter(Z_Param_InName,Z_Param_InBool); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWaveParameter) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InName); \
		P_GET_OBJECT(USoundWave,Z_Param_InWave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetWaveParameter(Z_Param_InName,Z_Param_InWave); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloatParameter) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InFloat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFloatParameter(Z_Param_InName,Z_Param_InFloat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdjustVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AdjustVolumeDuration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AdjustVolumeLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AdjustVolume(Z_Param_AdjustVolumeDuration,Z_Param_AdjustVolumeLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPaused) \
	{ \
		P_GET_UBOOL(Z_Param_bPause); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPaused(Z_Param_bPause); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Play(Z_Param_StartTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFadeOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeOutDuration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeVolumeLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FadeOut(Z_Param_FadeOutDuration,Z_Param_FadeVolumeLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFadeIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeInDuration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeVolumeLevel); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FadeIn(Z_Param_FadeInDuration,Z_Param_FadeVolumeLevel,Z_Param_StartTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSound) \
	{ \
		P_GET_OBJECT(USoundBase,Z_Param_NewSound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSound(Z_Param_NewSound); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UAudioComponent(); \
public: \
	DECLARE_CLASS(UAudioComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAudioComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_92_INCLASS \
private: \
	static void StaticRegisterNativesUAudioComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UAudioComponent(); \
public: \
	DECLARE_CLASS(UAudioComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAudioComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_92_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioComponent(UAudioComponent&&); \
	NO_API UAudioComponent(const UAudioComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_92_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioComponent(UAudioComponent&&); \
	NO_API UAudioComponent(const UAudioComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_92_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_89_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_92_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_92_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_92_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_92_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_92_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_92_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_92_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_92_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AudioComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
