// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimCompositeBase_generated_h
#error "AnimCompositeBase.generated.h already included, missing '#pragma once' in AnimCompositeBase.h"
#endif
#define ENGINE_AnimCompositeBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_194_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimTrack(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_60_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimSegment(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_27_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRootMotionExtractionStep(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_275_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_275_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_275_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimCompositeBase(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UAnimCompositeBase(); \
public: \
	DECLARE_CLASS(UAnimCompositeBase, UAnimSequenceBase, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimCompositeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_275_INCLASS \
private: \
	static void StaticRegisterNativesUAnimCompositeBase(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UAnimCompositeBase(); \
public: \
	DECLARE_CLASS(UAnimCompositeBase, UAnimSequenceBase, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimCompositeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_275_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimCompositeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimCompositeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimCompositeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimCompositeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAnimCompositeBase(UAnimCompositeBase&&); \
	ENGINE_API UAnimCompositeBase(const UAnimCompositeBase&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_275_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimCompositeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAnimCompositeBase(UAnimCompositeBase&&); \
	ENGINE_API UAnimCompositeBase(const UAnimCompositeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimCompositeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimCompositeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimCompositeBase)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_275_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_272_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_275_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_275_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_275_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_275_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_275_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_275_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_275_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_275_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_275_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_275_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimCompositeBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
