// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavigationGraphNode_generated_h
#error "NavigationGraphNode.generated.h already included, missing '#pragma once' in NavigationGraphNode.h"
#endif
#define ENGINE_NavigationGraphNode_generated_h

#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraphNode_h_14_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraphNode_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraphNode_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANavigationGraphNode(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ANavigationGraphNode(); \
public: \
	DECLARE_CLASS(ANavigationGraphNode, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ANavigationGraphNode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraphNode_h_14_INCLASS \
private: \
	static void StaticRegisterNativesANavigationGraphNode(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ANavigationGraphNode(); \
public: \
	DECLARE_CLASS(ANavigationGraphNode, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ANavigationGraphNode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraphNode_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ANavigationGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavigationGraphNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ANavigationGraphNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavigationGraphNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ANavigationGraphNode(ANavigationGraphNode&&); \
	ENGINE_API ANavigationGraphNode(const ANavigationGraphNode&); \
public:


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraphNode_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ANavigationGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ANavigationGraphNode(ANavigationGraphNode&&); \
	ENGINE_API ANavigationGraphNode(const ANavigationGraphNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ANavigationGraphNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavigationGraphNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavigationGraphNode)


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraphNode_h_14_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraphNode_h_11_PROLOG
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraphNode_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraphNode_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraphNode_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraphNode_h_14_INCLASS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraphNode_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraphNode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraphNode_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraphNode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraphNode_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraphNode_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NavigationGraphNode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraphNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
