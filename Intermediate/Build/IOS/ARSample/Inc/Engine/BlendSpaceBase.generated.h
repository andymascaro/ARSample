// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BlendSpaceBase_generated_h
#error "BlendSpaceBase.generated.h already included, missing '#pragma once' in BlendSpaceBase.h"
#endif
#define ENGINE_BlendSpaceBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_182_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FPerBoneInterpolation(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_164_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FGridBlendSample(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_135_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FEditorElement(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_85_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FBlendSample(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_44_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FBlendParameter(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_30_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FInterpolationParameter(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_217_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_217_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_217_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlendSpaceBase(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UBlendSpaceBase(); \
public: \
	DECLARE_CLASS(UBlendSpaceBase, UAnimationAsset, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBlendSpaceBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_217_INCLASS \
private: \
	static void StaticRegisterNativesUBlendSpaceBase(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UBlendSpaceBase(); \
public: \
	DECLARE_CLASS(UBlendSpaceBase, UAnimationAsset, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBlendSpaceBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_217_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBlendSpaceBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendSpaceBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlendSpaceBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendSpaceBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UBlendSpaceBase(UBlendSpaceBase&&); \
	ENGINE_API UBlendSpaceBase(const UBlendSpaceBase&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_217_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBlendSpaceBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UBlendSpaceBase(UBlendSpaceBase&&); \
	ENGINE_API UBlendSpaceBase(const UBlendSpaceBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlendSpaceBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendSpaceBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendSpaceBase)


#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_217_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PerBoneBlend() { return STRUCT_OFFSET(UBlendSpaceBase, PerBoneBlend); } \
	FORCEINLINE static uint32 __PPO__SampleIndexWithMarkers() { return STRUCT_OFFSET(UBlendSpaceBase, SampleIndexWithMarkers); } \
	FORCEINLINE static uint32 __PPO__SampleData() { return STRUCT_OFFSET(UBlendSpaceBase, SampleData); } \
	FORCEINLINE static uint32 __PPO__GridSamples() { return STRUCT_OFFSET(UBlendSpaceBase, GridSamples); } \
	FORCEINLINE static uint32 __PPO__BlendParameters() { return STRUCT_OFFSET(UBlendSpaceBase, BlendParameters); }


#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_214_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_217_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_217_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_217_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_217_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_217_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_217_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_217_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_217_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_217_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h_217_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlendSpaceBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_BlendSpaceBase_h


#define FOREACH_ENUM_ENOTIFYTRIGGERMODE(op) \
	op(ENotifyTriggerMode::AllAnimations) \
	op(ENotifyTriggerMode::HighestWeightedAnimation) 
#define FOREACH_ENUM_EBLENDSPACEAXIS(op) \
	op(BSA_None) \
	op(BSA_X) \
	op(BSA_Y) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
