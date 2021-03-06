// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialFunction_generated_h
#error "MaterialFunction.generated.h already included, missing '#pragma once' in MaterialFunction.h"
#endif
#define ENGINE_MaterialFunction_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_23_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialFunction(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UMaterialFunction(); \
public: \
	DECLARE_CLASS(UMaterialFunction, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialFunction) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialFunction(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UMaterialFunction(); \
public: \
	DECLARE_CLASS(UMaterialFunction, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialFunction) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialFunction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialFunction(UMaterialFunction&&); \
	ENGINE_API UMaterialFunction(const UMaterialFunction&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialFunction(UMaterialFunction&&); \
	ENGINE_API UMaterialFunction(const UMaterialFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialFunction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialFunction)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_20_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_23_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialFunction."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
