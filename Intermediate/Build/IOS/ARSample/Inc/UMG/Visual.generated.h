// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_Visual_generated_h
#error "Visual.generated.h already included, missing '#pragma once' in Visual.h"
#endif
#define UMG_Visual_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_Visual_h_14_RPC_WRAPPERS
#define Engine_Source_Runtime_UMG_Public_Components_Visual_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_UMG_Public_Components_Visual_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVisual(); \
	friend UMG_API class UClass* Z_Construct_UClass_UVisual(); \
public: \
	DECLARE_CLASS(UVisual, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UVisual) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_Visual_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUVisual(); \
	friend UMG_API class UClass* Z_Construct_UClass_UVisual(); \
public: \
	DECLARE_CLASS(UVisual, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UVisual) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_Visual_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVisual(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVisual) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVisual); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVisual); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVisual(UVisual&&); \
	NO_API UVisual(const UVisual&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_Visual_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVisual(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVisual(UVisual&&); \
	NO_API UVisual(const UVisual&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVisual); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVisual); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVisual)


#define Engine_Source_Runtime_UMG_Public_Components_Visual_h_14_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_Visual_h_11_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_Visual_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_Visual_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_Visual_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_Visual_h_14_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_Visual_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_Visual_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_Visual_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_Visual_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_Visual_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_Visual_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Visual."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_Visual_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS