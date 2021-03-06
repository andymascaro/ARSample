// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UReverbEffect;
struct FSubmixEffectReverbSettings;
#ifdef AUDIOMIXER_AudioMixerSubmixEffectReverb_generated_h
#error "AudioMixerSubmixEffectReverb.generated.h already included, missing '#pragma once' in AudioMixerSubmixEffectReverb.h"
#endif
#define AUDIOMIXER_AudioMixerSubmixEffectReverb_generated_h

#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_13_GENERATED_BODY \
	friend AUDIOMIXER_API class UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectReverbSettings(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_117_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSettingsWithReverbEffect) \
	{ \
		P_GET_OBJECT(UReverbEffect,Z_Param_InReverbEffect); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_WetLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSettingsWithReverbEffect(Z_Param_InReverbEffect,Z_Param_WetLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSettings) \
	{ \
		P_GET_STRUCT_REF(FSubmixEffectReverbSettings,Z_Param_Out_InSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSettings(Z_Param_Out_InSettings); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSettingsWithReverbEffect) \
	{ \
		P_GET_OBJECT(UReverbEffect,Z_Param_InReverbEffect); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_WetLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSettingsWithReverbEffect(Z_Param_InReverbEffect,Z_Param_WetLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSettings) \
	{ \
		P_GET_STRUCT_REF(FSubmixEffectReverbSettings,Z_Param_Out_InSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSettings(Z_Param_Out_InSettings); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_117_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubmixEffectReverbPreset(); \
	friend AUDIOMIXER_API class UClass* Z_Construct_UClass_USubmixEffectReverbPreset(); \
public: \
	DECLARE_CLASS(USubmixEffectReverbPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(USubmixEffectReverbPreset) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_117_INCLASS \
private: \
	static void StaticRegisterNativesUSubmixEffectReverbPreset(); \
	friend AUDIOMIXER_API class UClass* Z_Construct_UClass_USubmixEffectReverbPreset(); \
public: \
	DECLARE_CLASS(USubmixEffectReverbPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(USubmixEffectReverbPreset) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_117_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubmixEffectReverbPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectReverbPreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubmixEffectReverbPreset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectReverbPreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubmixEffectReverbPreset(USubmixEffectReverbPreset&&); \
	NO_API USubmixEffectReverbPreset(const USubmixEffectReverbPreset&); \
public:


#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_117_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubmixEffectReverbPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubmixEffectReverbPreset(USubmixEffectReverbPreset&&); \
	NO_API USubmixEffectReverbPreset(const USubmixEffectReverbPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubmixEffectReverbPreset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectReverbPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectReverbPreset)


#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_117_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_114_PROLOG
#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_117_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_117_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_117_RPC_WRAPPERS \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_117_INCLASS \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_117_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_117_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_117_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_117_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
