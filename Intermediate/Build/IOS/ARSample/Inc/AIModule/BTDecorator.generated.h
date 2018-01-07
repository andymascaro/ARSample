// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTDecorator_generated_h
#error "BTDecorator.generated.h already included, missing '#pragma once' in BTDecorator.h"
#endif
#define AIMODULE_BTDecorator_generated_h

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_40_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_40_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTDecorator(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UBTDecorator(); \
public: \
	DECLARE_CLASS(UBTDecorator, UBTAuxiliaryNode, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTDecorator) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUBTDecorator(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UBTDecorator(); \
public: \
	DECLARE_CLASS(UBTDecorator, UBTAuxiliaryNode, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTDecorator) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTDecorator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTDecorator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTDecorator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTDecorator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTDecorator(UBTDecorator&&); \
	NO_API UBTDecorator(const UBTDecorator&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTDecorator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTDecorator(UBTDecorator&&); \
	NO_API UBTDecorator(const UBTDecorator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTDecorator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTDecorator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTDecorator)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_40_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FlowAbortMode() { return STRUCT_OFFSET(UBTDecorator, FlowAbortMode); }


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_37_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_40_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_40_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_40_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_40_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BTDecorator."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
