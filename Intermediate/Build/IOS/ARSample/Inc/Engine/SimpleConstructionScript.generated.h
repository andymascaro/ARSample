// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SimpleConstructionScript_generated_h
#error "SimpleConstructionScript.generated.h already included, missing '#pragma once' in SimpleConstructionScript.h"
#endif
#define ENGINE_SimpleConstructionScript_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_18_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleConstructionScript(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USimpleConstructionScript(); \
public: \
	DECLARE_CLASS(USimpleConstructionScript, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USimpleConstructionScript) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSimpleConstructionScript(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USimpleConstructionScript(); \
public: \
	DECLARE_CLASS(USimpleConstructionScript, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USimpleConstructionScript) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USimpleConstructionScript(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleConstructionScript) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USimpleConstructionScript); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleConstructionScript); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USimpleConstructionScript(USimpleConstructionScript&&); \
	ENGINE_API USimpleConstructionScript(const USimpleConstructionScript&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USimpleConstructionScript(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USimpleConstructionScript(USimpleConstructionScript&&); \
	ENGINE_API USimpleConstructionScript(const USimpleConstructionScript&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USimpleConstructionScript); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleConstructionScript); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleConstructionScript)


#define Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RootNodes() { return STRUCT_OFFSET(USimpleConstructionScript, RootNodes); } \
	FORCEINLINE static uint32 __PPO__AllNodes() { return STRUCT_OFFSET(USimpleConstructionScript, AllNodes); } \
	FORCEINLINE static uint32 __PPO__DefaultSceneRootNode() { return STRUCT_OFFSET(USimpleConstructionScript, DefaultSceneRootNode); } \
	FORCEINLINE static uint32 __PPO__RootNode_DEPRECATED() { return STRUCT_OFFSET(USimpleConstructionScript, RootNode_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__ActorComponentNodes_DEPRECATED() { return STRUCT_OFFSET(USimpleConstructionScript, ActorComponentNodes_DEPRECATED); }


#define Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_15_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_18_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SimpleConstructionScript."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
