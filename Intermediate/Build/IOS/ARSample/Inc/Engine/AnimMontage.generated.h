// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimMontage_generated_h
#error "AnimMontage.generated.h already included, missing '#pragma once' in AnimMontage.h"
#endif
#define ENGINE_AnimMontage_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_284_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimMontageInstance(); \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__NextSections() { return STRUCT_OFFSET(FAnimMontageInstance, NextSections); } \
	FORCEINLINE static uint32 __PPO__PrevSections() { return STRUCT_OFFSET(FAnimMontageInstance, PrevSections); } \
	FORCEINLINE static uint32 __PPO__ActiveStateBranchingPoints() { return STRUCT_OFFSET(FAnimMontageInstance, ActiveStateBranchingPoints); } \
	FORCEINLINE static uint32 __PPO__Position() { return STRUCT_OFFSET(FAnimMontageInstance, Position); } \
	FORCEINLINE static uint32 __PPO__PlayRate() { return STRUCT_OFFSET(FAnimMontageInstance, PlayRate); } \
	FORCEINLINE static uint32 __PPO__Blend() { return STRUCT_OFFSET(FAnimMontageInstance, Blend); } \
	FORCEINLINE static uint32 __PPO__DisableRootMotionCount() { return STRUCT_OFFSET(FAnimMontageInstance, DisableRootMotionCount); }


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_129_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointMarker(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_95_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FBranchingPoint(); \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimLinkableElement Super;


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_76_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FSlotAnimationTrack(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_35_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FCompositeSection(); \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimLinkableElement Super;


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_536_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_536_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_536_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimMontage(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UAnimMontage(); \
public: \
	DECLARE_CLASS(UAnimMontage, UAnimCompositeBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimMontage) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_536_INCLASS \
private: \
	static void StaticRegisterNativesUAnimMontage(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UAnimMontage(); \
public: \
	DECLARE_CLASS(UAnimMontage, UAnimCompositeBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimMontage) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_536_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimMontage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimMontage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimMontage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimMontage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAnimMontage(UAnimMontage&&); \
	ENGINE_API UAnimMontage(const UAnimMontage&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_536_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimMontage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAnimMontage(UAnimMontage&&); \
	ENGINE_API UAnimMontage(const UAnimMontage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimMontage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimMontage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimMontage)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_536_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BranchingPointMarkers() { return STRUCT_OFFSET(UAnimMontage, BranchingPointMarkers); }


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_533_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_536_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_536_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_536_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_536_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_536_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_536_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_536_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_536_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_536_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_536_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimMontage."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h


#define FOREACH_ENUM_EMONTAGESUBSTEPRESULT(op) \
	op(EMontageSubStepResult::Moved) \
	op(EMontageSubStepResult::NotMoved) \
	op(EMontageSubStepResult::InvalidSection) 
#define FOREACH_ENUM_EANIMNOTIFYEVENTTYPE(op) \
	op(EAnimNotifyEventType::Begin) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
