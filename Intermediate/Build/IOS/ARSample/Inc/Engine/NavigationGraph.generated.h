// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavigationGraph_generated_h
#error "NavigationGraph.generated.h already included, missing '#pragma once' in NavigationGraph.h"
#endif
#define ENGINE_NavigationGraph_generated_h

#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraph_h_41_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FNavGraphNode(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraph_h_15_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FNavGraphEdge(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraph_h_62_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraph_h_62_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraph_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANavigationGraph(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ANavigationGraph(); \
public: \
	DECLARE_CLASS(ANavigationGraph, ANavigationData, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ANavigationGraph) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraph_h_62_INCLASS \
private: \
	static void StaticRegisterNativesANavigationGraph(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ANavigationGraph(); \
public: \
	DECLARE_CLASS(ANavigationGraph, ANavigationData, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ANavigationGraph) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraph_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ANavigationGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavigationGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ANavigationGraph); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavigationGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ANavigationGraph(ANavigationGraph&&); \
	ENGINE_API ANavigationGraph(const ANavigationGraph&); \
public:


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraph_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ANavigationGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ANavigationGraph(ANavigationGraph&&); \
	ENGINE_API ANavigationGraph(const ANavigationGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ANavigationGraph); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavigationGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavigationGraph)


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraph_h_62_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraph_h_59_PROLOG
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraph_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraph_h_62_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraph_h_62_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraph_h_62_INCLASS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraph_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraph_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraph_h_62_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraph_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraph_h_62_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraph_h_62_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NavigationGraph."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
