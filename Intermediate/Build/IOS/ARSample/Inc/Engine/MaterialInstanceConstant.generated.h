// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialInstanceConstant_generated_h
#error "MaterialInstanceConstant.generated.h already included, missing '#pragma once' in MaterialInstanceConstant.h"
#endif
#define ENGINE_MaterialInstanceConstant_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialInstanceConstant(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UMaterialInstanceConstant(); \
public: \
	DECLARE_CLASS(UMaterialInstanceConstant, UMaterialInstance, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialInstanceConstant) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialInstanceConstant(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UMaterialInstanceConstant(); \
public: \
	DECLARE_CLASS(UMaterialInstanceConstant, UMaterialInstance, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialInstanceConstant) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialInstanceConstant(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialInstanceConstant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialInstanceConstant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInstanceConstant); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialInstanceConstant(UMaterialInstanceConstant&&); \
	ENGINE_API UMaterialInstanceConstant(const UMaterialInstanceConstant&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialInstanceConstant(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialInstanceConstant(UMaterialInstanceConstant&&); \
	ENGINE_API UMaterialInstanceConstant(const UMaterialInstanceConstant&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialInstanceConstant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInstanceConstant); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialInstanceConstant)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_17_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialInstanceConstant."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
