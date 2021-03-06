// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeGrassType_generated_h
#error "LandscapeGrassType.generated.h already included, missing '#pragma once' in LandscapeGrassType.h"
#endif
#define LANDSCAPE_LandscapeGrassType_generated_h

#define Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_28_GENERATED_BODY \
	friend LANDSCAPE_API class UScriptStruct* Z_Construct_UScriptStruct_FGrassVariety(); \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_124_RPC_WRAPPERS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_124_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_124_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeGrassType(); \
	friend LANDSCAPE_API class UClass* Z_Construct_UClass_ULandscapeGrassType(); \
public: \
	DECLARE_CLASS(ULandscapeGrassType, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeGrassType) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_124_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeGrassType(); \
	friend LANDSCAPE_API class UClass* Z_Construct_UClass_ULandscapeGrassType(); \
public: \
	DECLARE_CLASS(ULandscapeGrassType, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeGrassType) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_124_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeGrassType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeGrassType) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeGrassType); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeGrassType); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ULandscapeGrassType(ULandscapeGrassType&&); \
	LANDSCAPE_API ULandscapeGrassType(const ULandscapeGrassType&); \
public:


#define Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_124_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeGrassType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ULandscapeGrassType(ULandscapeGrassType&&); \
	LANDSCAPE_API ULandscapeGrassType(const ULandscapeGrassType&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeGrassType); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeGrassType); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeGrassType)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_124_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_121_PROLOG
#define Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_124_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_124_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_124_RPC_WRAPPERS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_124_INCLASS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_124_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_124_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_124_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_124_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_124_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_124_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LandscapeGrassType."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h


#define FOREACH_ENUM_EGRASSSCALING(op) \
	op(EGrassScaling::Uniform) \
	op(EGrassScaling::Free) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
