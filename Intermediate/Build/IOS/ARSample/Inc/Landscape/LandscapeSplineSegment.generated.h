// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeSplineSegment_generated_h
#error "LandscapeSplineSegment.generated.h already included, missing '#pragma once' in LandscapeSplineSegment.h"
#endif
#define LANDSCAPE_LandscapeSplineSegment_generated_h

#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_100_GENERATED_BODY \
	friend LANDSCAPE_API class UScriptStruct* Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry(); \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_66_GENERATED_BODY \
	friend LANDSCAPE_API class UScriptStruct* Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection(); \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_22_GENERATED_BODY \
	friend LANDSCAPE_API class UScriptStruct* Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint(); \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_158_RPC_WRAPPERS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_158_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_158_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeSplineSegment(); \
	friend LANDSCAPE_API class UClass* Z_Construct_UClass_ULandscapeSplineSegment(); \
public: \
	DECLARE_CLASS(ULandscapeSplineSegment, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeSplineSegment) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	DECLARE_WITHIN(ULandscapeSplinesComponent)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_158_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeSplineSegment(); \
	friend LANDSCAPE_API class UClass* Z_Construct_UClass_ULandscapeSplineSegment(); \
public: \
	DECLARE_CLASS(ULandscapeSplineSegment, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeSplineSegment) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	DECLARE_WITHIN(ULandscapeSplinesComponent)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_158_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeSplineSegment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeSplineSegment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeSplineSegment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeSplineSegment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ULandscapeSplineSegment(ULandscapeSplineSegment&&); \
	LANDSCAPE_API ULandscapeSplineSegment(const ULandscapeSplineSegment&); \
public:


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_158_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeSplineSegment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ULandscapeSplineSegment(ULandscapeSplineSegment&&); \
	LANDSCAPE_API ULandscapeSplineSegment(const ULandscapeSplineSegment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeSplineSegment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeSplineSegment); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeSplineSegment)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_158_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SplineInfo() { return STRUCT_OFFSET(ULandscapeSplineSegment, SplineInfo); } \
	FORCEINLINE static uint32 __PPO__Points() { return STRUCT_OFFSET(ULandscapeSplineSegment, Points); } \
	FORCEINLINE static uint32 __PPO__Bounds() { return STRUCT_OFFSET(ULandscapeSplineSegment, Bounds); } \
	FORCEINLINE static uint32 __PPO__LocalMeshComponents() { return STRUCT_OFFSET(ULandscapeSplineSegment, LocalMeshComponents); }


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_155_PROLOG
#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_158_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_158_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_158_RPC_WRAPPERS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_158_INCLASS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_158_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_158_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_158_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_158_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_158_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_158_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LandscapeSplineSegment."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h


#define FOREACH_ENUM_LANDSCAPESPLINEMESHORIENTATION(op) \
	op(LSMO_XUp) \
	op(LSMO_YUp) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
