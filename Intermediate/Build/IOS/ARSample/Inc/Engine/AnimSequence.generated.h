// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimSequence_generated_h
#error "AnimSequence.generated.h already included, missing '#pragma once' in AnimSequence.h"
#endif
#define ENGINE_AnimSequence_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_217_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FCompressedTrack(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_197_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FCurveTrack(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_179_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FScaleTrack(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_164_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRotationTrack(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_149_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FTranslationTrack(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_120_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FTrackToSkeletonMap(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_84_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimSequenceTrackContainer(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_49_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRawAnimSequenceTrack(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_308_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_308_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_308_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimSequence(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UAnimSequence(); \
public: \
	DECLARE_CLASS(UAnimSequence, UAnimSequenceBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimSequence) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_308_INCLASS \
private: \
	static void StaticRegisterNativesUAnimSequence(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UAnimSequence(); \
public: \
	DECLARE_CLASS(UAnimSequence, UAnimSequenceBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimSequence) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_308_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSequence) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimSequence); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSequence); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimSequence(UAnimSequence&&); \
	NO_API UAnimSequence(const UAnimSequence&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_308_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimSequence(UAnimSequence&&); \
	NO_API UAnimSequence(const UAnimSequence&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimSequence); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSequence); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSequence)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_308_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TrackToSkeletonMapTable() { return STRUCT_OFFSET(UAnimSequence, TrackToSkeletonMapTable); }


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_303_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_308_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_308_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_308_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_308_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_308_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_308_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_308_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_308_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_308_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_308_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimSequence."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h


#define FOREACH_ENUM_ANIMATIONKEYFORMAT(op) \
	op(AKF_ConstantKeyLerp) \
	op(AKF_VariableKeyLerp) \
	op(AKF_PerTrackCompression) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
