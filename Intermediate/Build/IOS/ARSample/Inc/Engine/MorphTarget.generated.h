// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MorphTarget_generated_h
#error "MorphTarget.generated.h already included, missing '#pragma once' in MorphTarget.h"
#endif
#define ENGINE_MorphTarget_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_128_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_128_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_128_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMorphTarget(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UMorphTarget(); \
public: \
	DECLARE_CLASS(UMorphTarget, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMorphTarget) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_128_INCLASS \
private: \
	static void StaticRegisterNativesUMorphTarget(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UMorphTarget(); \
public: \
	DECLARE_CLASS(UMorphTarget, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMorphTarget) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_128_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMorphTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMorphTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMorphTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMorphTarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMorphTarget(UMorphTarget&&); \
	ENGINE_API UMorphTarget(const UMorphTarget&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_128_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMorphTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMorphTarget(UMorphTarget&&); \
	ENGINE_API UMorphTarget(const UMorphTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMorphTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMorphTarget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMorphTarget)


#define Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_128_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_124_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_128_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_128_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_128_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_128_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_128_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_128_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_128_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_128_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_128_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h_128_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MorphTarget."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
