// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USoundEffectSourcePresetChain;
struct FSourceEffectChainEntry;
class USoundEffectSubmixPreset;
#ifdef AUDIOMIXER_AudioMixerBlueprintLibrary_generated_h
#error "AudioMixerBlueprintLibrary.generated.h already included, missing '#pragma once' in AudioMixerBlueprintLibrary.h"
#endif
#define AUDIOMIXER_AudioMixerBlueprintLibrary_generated_h

#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNumberOfEntriesInSourceEffectChain) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundEffectSourcePresetChain,Z_Param_PresetChain); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAudioMixerBlueprintLibrary::GetNumberOfEntriesInSourceEffectChain(Z_Param_WorldContextObject,Z_Param_PresetChain); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBypassSourceEffectChainEntry) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundEffectSourcePresetChain,Z_Param_PresetChain); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryIndex); \
		P_GET_UBOOL(Z_Param_bBypassed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::SetBypassSourceEffectChainEntry(Z_Param_WorldContextObject,Z_Param_PresetChain,Z_Param_EntryIndex,Z_Param_bBypassed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveSourceEffectFromPresetChain) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundEffectSourcePresetChain,Z_Param_PresetChain); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::RemoveSourceEffectFromPresetChain(Z_Param_WorldContextObject,Z_Param_PresetChain,Z_Param_EntryIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSourceEffectToPresetChain) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundEffectSourcePresetChain,Z_Param_PresetChain); \
		P_GET_STRUCT(FSourceEffectChainEntry,Z_Param_Entry); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::AddSourceEffectToPresetChain(Z_Param_WorldContextObject,Z_Param_PresetChain,Z_Param_Entry); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMasterSubmixEffects) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::ClearMasterSubmixEffects(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveMasterSubmixEffect) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundEffectSubmixPreset,Z_Param_SubmixEffectPreset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::RemoveMasterSubmixEffect(Z_Param_WorldContextObject,Z_Param_SubmixEffectPreset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddMasterSubmixEffect) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundEffectSubmixPreset,Z_Param_SubmixEffectPreset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::AddMasterSubmixEffect(Z_Param_WorldContextObject,Z_Param_SubmixEffectPreset); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNumberOfEntriesInSourceEffectChain) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundEffectSourcePresetChain,Z_Param_PresetChain); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAudioMixerBlueprintLibrary::GetNumberOfEntriesInSourceEffectChain(Z_Param_WorldContextObject,Z_Param_PresetChain); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBypassSourceEffectChainEntry) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundEffectSourcePresetChain,Z_Param_PresetChain); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryIndex); \
		P_GET_UBOOL(Z_Param_bBypassed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::SetBypassSourceEffectChainEntry(Z_Param_WorldContextObject,Z_Param_PresetChain,Z_Param_EntryIndex,Z_Param_bBypassed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveSourceEffectFromPresetChain) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundEffectSourcePresetChain,Z_Param_PresetChain); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::RemoveSourceEffectFromPresetChain(Z_Param_WorldContextObject,Z_Param_PresetChain,Z_Param_EntryIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSourceEffectToPresetChain) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundEffectSourcePresetChain,Z_Param_PresetChain); \
		P_GET_STRUCT(FSourceEffectChainEntry,Z_Param_Entry); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::AddSourceEffectToPresetChain(Z_Param_WorldContextObject,Z_Param_PresetChain,Z_Param_Entry); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMasterSubmixEffects) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::ClearMasterSubmixEffects(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveMasterSubmixEffect) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundEffectSubmixPreset,Z_Param_SubmixEffectPreset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::RemoveMasterSubmixEffect(Z_Param_WorldContextObject,Z_Param_SubmixEffectPreset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddMasterSubmixEffect) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundEffectSubmixPreset,Z_Param_SubmixEffectPreset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::AddMasterSubmixEffect(Z_Param_WorldContextObject,Z_Param_SubmixEffectPreset); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioMixerBlueprintLibrary(); \
	friend AUDIOMIXER_API class UClass* Z_Construct_UClass_UAudioMixerBlueprintLibrary(); \
public: \
	DECLARE_CLASS(UAudioMixerBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(UAudioMixerBlueprintLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAudioMixerBlueprintLibrary(); \
	friend AUDIOMIXER_API class UClass* Z_Construct_UClass_UAudioMixerBlueprintLibrary(); \
public: \
	DECLARE_CLASS(UAudioMixerBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(UAudioMixerBlueprintLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioMixerBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioMixerBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioMixerBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioMixerBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioMixerBlueprintLibrary(UAudioMixerBlueprintLibrary&&); \
	NO_API UAudioMixerBlueprintLibrary(const UAudioMixerBlueprintLibrary&); \
public:


#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioMixerBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioMixerBlueprintLibrary(UAudioMixerBlueprintLibrary&&); \
	NO_API UAudioMixerBlueprintLibrary(const UAudioMixerBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioMixerBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioMixerBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioMixerBlueprintLibrary)


#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_14_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_11_PROLOG
#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_14_INCLASS \
	Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
