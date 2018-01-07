// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BehaviorTreeTypes_generated_h
#error "BehaviorTreeTypes.generated.h already included, missing '#pragma once' in BehaviorTreeTypes.h"
#endif
#define AIMODULE_BehaviorTreeTypes_generated_h

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_453_GENERATED_BODY \
	friend AIMODULE_API class UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector(); \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__SelectedKeyID() { return STRUCT_OFFSET(FBlackboardKeySelector, SelectedKeyID); }


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_517_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_517_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_517_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBehaviorTreeTypes(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UBehaviorTreeTypes(); \
public: \
	DECLARE_CLASS(UBehaviorTreeTypes, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBehaviorTreeTypes) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_517_INCLASS \
private: \
	static void StaticRegisterNativesUBehaviorTreeTypes(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UBehaviorTreeTypes(); \
public: \
	DECLARE_CLASS(UBehaviorTreeTypes, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBehaviorTreeTypes) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_517_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviorTreeTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeTypes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviorTreeTypes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeTypes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBehaviorTreeTypes(UBehaviorTreeTypes&&); \
	NO_API UBehaviorTreeTypes(const UBehaviorTreeTypes&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_517_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviorTreeTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBehaviorTreeTypes(UBehaviorTreeTypes&&); \
	NO_API UBehaviorTreeTypes(const UBehaviorTreeTypes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviorTreeTypes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeTypes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeTypes)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_517_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_514_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_517_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_517_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_517_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_517_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_517_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_517_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_517_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_517_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_517_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_517_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BehaviorTreeTypes."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h


#define FOREACH_ENUM_EBTFLOWABORTMODE(op) \
	op(EBTFlowAbortMode::None) \
	op(EBTFlowAbortMode::LowerPriority) \
	op(EBTFlowAbortMode::Self) 
#define FOREACH_ENUM_EBTNODERESULT(op) \
	op(EBTNodeResult::Succeeded) \
	op(EBTNodeResult::Failed) \
	op(EBTNodeResult::Aborted) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
