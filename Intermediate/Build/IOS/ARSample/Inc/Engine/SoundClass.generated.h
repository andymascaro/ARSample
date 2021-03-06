// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundClass_generated_h
#error "SoundClass.generated.h already included, missing '#pragma once' in SoundClass.h"
#endif
#define ENGINE_SoundClass_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_146_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FPassiveSoundMixModifier(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_52_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FSoundClassProperties(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_26_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FSoundClassEditorData(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_186_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_186_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_186_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundClass(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USoundClass(); \
public: \
	DECLARE_CLASS(USoundClass, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundClass) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_186_INCLASS \
private: \
	static void StaticRegisterNativesUSoundClass(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USoundClass(); \
public: \
	DECLARE_CLASS(USoundClass, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundClass) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_186_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundClass(USoundClass&&); \
	ENGINE_API USoundClass(const USoundClass&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_186_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundClass(USoundClass&&); \
	ENGINE_API USoundClass(const USoundClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundClass)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_186_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_183_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_186_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_186_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_186_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_186_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_186_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_186_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_186_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_186_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_186_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_186_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundClass."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h


#define FOREACH_ENUM_EAUDIOOUTPUTTARGET(op) \
	op(EAudioOutputTarget::Speaker) \
	op(EAudioOutputTarget::Controller) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
