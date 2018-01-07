// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavAreaMeta_generated_h
#error "NavAreaMeta.generated.h already included, missing '#pragma once' in NavAreaMeta.h"
#endif
#define ENGINE_NavAreaMeta_generated_h

#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavAreaMeta_h_17_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavAreaMeta_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavAreaMeta_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavAreaMeta(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UNavAreaMeta(); \
public: \
	DECLARE_CLASS(UNavAreaMeta, UNavArea, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNavAreaMeta) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavAreaMeta_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUNavAreaMeta(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UNavAreaMeta(); \
public: \
	DECLARE_CLASS(UNavAreaMeta, UNavArea, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNavAreaMeta) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavAreaMeta_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavAreaMeta(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavAreaMeta) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavAreaMeta); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavAreaMeta); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavAreaMeta(UNavAreaMeta&&); \
	NO_API UNavAreaMeta(const UNavAreaMeta&); \
public:


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavAreaMeta_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavAreaMeta(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavAreaMeta(UNavAreaMeta&&); \
	NO_API UNavAreaMeta(const UNavAreaMeta&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavAreaMeta); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavAreaMeta); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavAreaMeta)


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavAreaMeta_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavAreaMeta_h_14_PROLOG
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavAreaMeta_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavAreaMeta_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavAreaMeta_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavAreaMeta_h_17_INCLASS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavAreaMeta_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavAreaMeta_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavAreaMeta_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavAreaMeta_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavAreaMeta_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavAreaMeta_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NavAreaMeta."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAreas_NavAreaMeta_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
