// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeSplinesComponent_generated_h
#error "LandscapeSplinesComponent.generated.h already included, missing '#pragma once' in LandscapeSplinesComponent.h"
#endif
#define LANDSCAPE_LandscapeSplinesComponent_generated_h

#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_71_GENERATED_BODY \
	friend LANDSCAPE_API class UScriptStruct* Z_Construct_UScriptStruct_FForeignWorldSplineData(); \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_49_GENERATED_BODY \
	friend LANDSCAPE_API class UScriptStruct* Z_Construct_UScriptStruct_FForeignSplineSegmentData(); \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_27_GENERATED_BODY \
	friend LANDSCAPE_API class UScriptStruct* Z_Construct_UScriptStruct_FForeignControlPointData(); \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_102_RPC_WRAPPERS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_102_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeSplinesComponent(); \
	friend LANDSCAPE_API class UClass* Z_Construct_UClass_ULandscapeSplinesComponent(); \
public: \
	DECLARE_CLASS(ULandscapeSplinesComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeSplinesComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_102_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeSplinesComponent(); \
	friend LANDSCAPE_API class UClass* Z_Construct_UClass_ULandscapeSplinesComponent(); \
public: \
	DECLARE_CLASS(ULandscapeSplinesComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeSplinesComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_102_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeSplinesComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeSplinesComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeSplinesComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeSplinesComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ULandscapeSplinesComponent(ULandscapeSplinesComponent&&); \
	LANDSCAPE_API ULandscapeSplinesComponent(const ULandscapeSplinesComponent&); \
public:


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_102_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeSplinesComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ULandscapeSplinesComponent(ULandscapeSplinesComponent&&); \
	LANDSCAPE_API ULandscapeSplinesComponent(const ULandscapeSplinesComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeSplinesComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeSplinesComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeSplinesComponent)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_102_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ControlPoints() { return STRUCT_OFFSET(ULandscapeSplinesComponent, ControlPoints); } \
	FORCEINLINE static uint32 __PPO__Segments() { return STRUCT_OFFSET(ULandscapeSplinesComponent, Segments); } \
	FORCEINLINE static uint32 __PPO__CookedForeignMeshComponents() { return STRUCT_OFFSET(ULandscapeSplinesComponent, CookedForeignMeshComponents); }


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_99_PROLOG
#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_102_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_102_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_102_RPC_WRAPPERS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_102_INCLASS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_102_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_102_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_102_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_102_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LandscapeSplinesComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
