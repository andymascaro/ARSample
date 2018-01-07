// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavigationTypes_generated_h
#error "NavigationTypes.generated.h already included, missing '#pragma once' in NavigationTypes.h"
#endif
#define ENGINE_NavigationTypes_generated_h

#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_528_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FNavDataConfig(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FNavAgentProperties Super;


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_463_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FNavAgentProperties(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FMovementProperties Super;


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_427_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FMovementProperties(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_109_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FNavAgentSelector(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_678_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_678_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_678_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationTypes(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UNavigationTypes(); \
public: \
	DECLARE_CLASS(UNavigationTypes, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNavigationTypes) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_678_INCLASS \
private: \
	static void StaticRegisterNativesUNavigationTypes(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UNavigationTypes(); \
public: \
	DECLARE_CLASS(UNavigationTypes, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNavigationTypes) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_678_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationTypes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationTypes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationTypes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationTypes(UNavigationTypes&&); \
	NO_API UNavigationTypes(const UNavigationTypes&); \
public:


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_678_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationTypes(UNavigationTypes&&); \
	NO_API UNavigationTypes(const UNavigationTypes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationTypes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationTypes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationTypes)


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_678_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_675_PROLOG
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_678_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_678_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_678_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_678_INCLASS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_678_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_678_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_678_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_678_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_678_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_678_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NavigationTypes."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h


#define FOREACH_ENUM_ENAVIGATIONQUERYRESULT(op) \
	op(ENavigationQueryResult::Invalid) \
	op(ENavigationQueryResult::Error) \
	op(ENavigationQueryResult::Fail) 
#define FOREACH_ENUM_ENAVPATHEVENT(op) \
	op(ENavPathEvent::Cleared) \
	op(ENavPathEvent::NewPath) \
	op(ENavPathEvent::UpdatedDueToGoalMoved) \
	op(ENavPathEvent::UpdatedDueToNavigationChanged) \
	op(ENavPathEvent::Invalidated) \
	op(ENavPathEvent::RePathFailed) \
	op(ENavPathEvent::MetaPathUpdate) 
#define FOREACH_ENUM_ENAVDATAGATHERINGMODECONFIG(op) \
	op(ENavDataGatheringModeConfig::Invalid) \
	op(ENavDataGatheringModeConfig::Instant) 
#define FOREACH_ENUM_ENAVDATAGATHERINGMODE(op) \
	op(ENavDataGatheringMode::Default) \
	op(ENavDataGatheringMode::Instant) 
#define FOREACH_ENUM_ENAVIGATIONOPTIONFLAG(op) \
	op(ENavigationOptionFlag::Default) \
	op(ENavigationOptionFlag::Enable) \
	op(ENavigationOptionFlag::Disable) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
