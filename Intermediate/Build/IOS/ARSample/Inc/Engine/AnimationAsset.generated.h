// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimationAsset_generated_h
#error "AnimationAsset.generated.h already included, missing '#pragma once' in AnimationAsset.h"
#endif
#define ENGINE_AnimationAsset_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_724_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimationGroupReference(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_442_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRootMotionMovementParams(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_382_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimGroupInstance(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_230_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimTickRecord(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_181_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FMarkerSyncAnimPosition(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_119_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FBlendFilter(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_59_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FBlendSampleData(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_743_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_743_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_743_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationAsset(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UAnimationAsset(); \
public: \
	DECLARE_CLASS(UAnimationAsset, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimationAsset) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UAnimationAsset*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_743_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationAsset(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UAnimationAsset(); \
public: \
	DECLARE_CLASS(UAnimationAsset, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimationAsset) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UAnimationAsset*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_743_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimationAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimationAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAnimationAsset(UAnimationAsset&&); \
	ENGINE_API UAnimationAsset(const UAnimationAsset&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_743_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimationAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAnimationAsset(UAnimationAsset&&); \
	ENGINE_API UAnimationAsset(const UAnimationAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimationAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationAsset)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_743_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Skeleton() { return STRUCT_OFFSET(UAnimationAsset, Skeleton); } \
	FORCEINLINE static uint32 __PPO__MetaData() { return STRUCT_OFFSET(UAnimationAsset, MetaData); } \
	FORCEINLINE static uint32 __PPO__AssetUserData() { return STRUCT_OFFSET(UAnimationAsset, AssetUserData); }


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_740_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_743_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_743_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_743_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_743_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_743_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_743_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_743_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_743_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_743_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_743_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimationAsset."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h


#define FOREACH_ENUM_EANIMGROUPROLE(op) \
	op(EAnimGroupRole::CanBeLeader) \
	op(EAnimGroupRole::AlwaysFollower) \
	op(EAnimGroupRole::AlwaysLeader) \
	op(EAnimGroupRole::TransitionLeader) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
