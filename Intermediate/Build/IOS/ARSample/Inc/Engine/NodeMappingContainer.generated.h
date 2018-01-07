// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NodeMappingContainer_generated_h
#error "NodeMappingContainer.generated.h already included, missing '#pragma once' in NodeMappingContainer.h"
#endif
#define ENGINE_NodeMappingContainer_generated_h

#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_15_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FNodeMap(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_33_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_33_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNodeMappingContainer(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UNodeMappingContainer(); \
public: \
	DECLARE_CLASS(UNodeMappingContainer, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNodeMappingContainer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUNodeMappingContainer(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UNodeMappingContainer(); \
public: \
	DECLARE_CLASS(UNodeMappingContainer, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNodeMappingContainer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNodeMappingContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNodeMappingContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNodeMappingContainer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNodeMappingContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNodeMappingContainer(UNodeMappingContainer&&); \
	NO_API UNodeMappingContainer(const UNodeMappingContainer&); \
public:


#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNodeMappingContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNodeMappingContainer(UNodeMappingContainer&&); \
	NO_API UNodeMappingContainer(const UNodeMappingContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNodeMappingContainer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNodeMappingContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNodeMappingContainer)


#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NodeMapping() { return STRUCT_OFFSET(UNodeMappingContainer, NodeMapping); } \
	FORCEINLINE static uint32 __PPO__SourceAsset() { return STRUCT_OFFSET(UNodeMappingContainer, SourceAsset); }


#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_30_PROLOG
#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_33_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_33_INCLASS \
	Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_33_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_33_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NodeMappingContainer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
