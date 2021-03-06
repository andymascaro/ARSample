// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeInfo_generated_h
#error "LandscapeInfo.generated.h already included, missing '#pragma once' in LandscapeInfo.h"
#endif
#define LANDSCAPE_LandscapeInfo_generated_h

#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_37_GENERATED_BODY \
	friend LANDSCAPE_API class UScriptStruct* Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings(); \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_95_RPC_WRAPPERS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_95_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_95_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeInfo(); \
	friend LANDSCAPE_API class UClass* Z_Construct_UClass_ULandscapeInfo(); \
public: \
	DECLARE_CLASS(ULandscapeInfo, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Landscape"), NO_API) \
	DECLARE_SERIALIZER(ULandscapeInfo) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_95_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeInfo(); \
	friend LANDSCAPE_API class UClass* Z_Construct_UClass_ULandscapeInfo(); \
public: \
	DECLARE_CLASS(ULandscapeInfo, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Landscape"), NO_API) \
	DECLARE_SERIALIZER(ULandscapeInfo) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_95_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandscapeInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapeInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULandscapeInfo(ULandscapeInfo&&); \
	NO_API ULandscapeInfo(const ULandscapeInfo&); \
public:


#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_95_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandscapeInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULandscapeInfo(ULandscapeInfo&&); \
	NO_API ULandscapeInfo(const ULandscapeInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapeInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeInfo)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_95_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_92_PROLOG
#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_95_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_95_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_95_RPC_WRAPPERS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_95_INCLASS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_95_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_95_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_95_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_95_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_95_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LandscapeInfo."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
