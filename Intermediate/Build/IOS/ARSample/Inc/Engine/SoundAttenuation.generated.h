// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundAttenuation_generated_h
#error "SoundAttenuation.generated.h already included, missing '#pragma once' in SoundAttenuation.h"
#endif
#define ENGINE_SoundAttenuation_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_61_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FBaseAttenuationSettings Super;


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_333_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_333_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_333_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundAttenuation(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USoundAttenuation(); \
public: \
	DECLARE_CLASS(USoundAttenuation, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundAttenuation) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_333_INCLASS \
private: \
	static void StaticRegisterNativesUSoundAttenuation(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USoundAttenuation(); \
public: \
	DECLARE_CLASS(USoundAttenuation, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundAttenuation) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_333_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundAttenuation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundAttenuation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundAttenuation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundAttenuation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundAttenuation(USoundAttenuation&&); \
	ENGINE_API USoundAttenuation(const USoundAttenuation&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_333_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundAttenuation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundAttenuation(USoundAttenuation&&); \
	ENGINE_API USoundAttenuation(const USoundAttenuation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundAttenuation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundAttenuation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundAttenuation)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_333_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_330_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_333_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_333_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_333_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_333_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_333_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_333_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_333_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_333_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_333_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_333_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundAttenuation."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h


#define FOREACH_ENUM_EREVERBSENDMETHOD(op) \
	op(EReverbSendMethod::Linear) \
	op(EReverbSendMethod::CustomCurve) 
#define FOREACH_ENUM_EAIRABSORPTIONMETHOD(op) \
	op(EAirAbsorptionMethod::Linear) 
#define FOREACH_ENUM_ESOUNDSPATIALIZATIONALGORITHM(op) \
	op(SPATIALIZATION_Default) 
#define FOREACH_ENUM_ESOUNDDISTANCECALC(op) \
	op(SOUNDDISTANCE_Normal) \
	op(SOUNDDISTANCE_InfiniteXYPlane) \
	op(SOUNDDISTANCE_InfiniteXZPlane) \
	op(SOUNDDISTANCE_InfiniteYZPlane) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
