// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNodeDelay_generated_h
#error "SoundNodeDelay.generated.h already included, missing '#pragma once' in SoundNodeDelay.h"
#endif
#define ENGINE_SoundNodeDelay_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundNodeDelay(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USoundNodeDelay(); \
public: \
	DECLARE_CLASS(USoundNodeDelay, USoundNode, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeDelay) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeDelay(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USoundNodeDelay(); \
public: \
	DECLARE_CLASS(USoundNodeDelay, USoundNode, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeDelay) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeDelay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeDelay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeDelay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeDelay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundNodeDelay(USoundNodeDelay&&); \
	ENGINE_API USoundNodeDelay(const USoundNodeDelay&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeDelay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundNodeDelay(USoundNodeDelay&&); \
	ENGINE_API USoundNodeDelay(const USoundNodeDelay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeDelay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeDelay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeDelay)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_18_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundNodeDelay."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
