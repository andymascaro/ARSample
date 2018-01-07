// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundSubmix;
#ifdef AUDIOMIXER_SynthComponent_generated_h
#error "SynthComponent.generated.h already included, missing '#pragma once' in SynthComponent.h"
#endif
#define AUDIOMIXER_SynthComponent_generated_h

#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_25_RPC_WRAPPERS
#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSynthSound(); \
	friend AUDIOMIXER_API class UClass* Z_Construct_UClass_USynthSound(); \
public: \
	DECLARE_CLASS(USynthSound, USoundWaveProcedural, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(USynthSound) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUSynthSound(); \
	friend AUDIOMIXER_API class UClass* Z_Construct_UClass_USynthSound(); \
public: \
	DECLARE_CLASS(USynthSound, USoundWaveProcedural, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(USynthSound) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USynthSound(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthSound) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USynthSound); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthSound); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USynthSound(USynthSound&&); \
	NO_API USynthSound(const USynthSound&); \
public:


#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USynthSound(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USynthSound(USynthSound&&); \
	NO_API USynthSound(const USynthSound&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USynthSound); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthSound); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthSound)


#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_25_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_22_PROLOG
#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_25_RPC_WRAPPERS \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_25_INCLASS \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_25_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SynthSound."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_43_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlaying(); \
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
	DECLARE_FUNCTION(execStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Start(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlaying(); \
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
	DECLARE_FUNCTION(execStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Start(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSynthComponent(); \
	friend AUDIOMIXER_API class UClass* Z_Construct_UClass_USynthComponent(); \
public: \
	DECLARE_CLASS(USynthComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(USynthComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUSynthComponent(); \
	friend AUDIOMIXER_API class UClass* Z_Construct_UClass_USynthComponent(); \
public: \
	DECLARE_CLASS(USynthComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(USynthComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USynthComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USynthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USynthComponent(USynthComponent&&); \
	NO_API USynthComponent(const USynthComponent&); \
public:


#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USynthComponent(USynthComponent&&); \
	NO_API USynthComponent(const USynthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USynthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthComponent)


#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_43_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Synth() { return STRUCT_OFFSET(USynthComponent, Synth); } \
	FORCEINLINE static uint32 __PPO__AudioComponent() { return STRUCT_OFFSET(USynthComponent, AudioComponent); }


#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_40_PROLOG
#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_43_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_43_RPC_WRAPPERS \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_43_INCLASS \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_43_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_43_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
