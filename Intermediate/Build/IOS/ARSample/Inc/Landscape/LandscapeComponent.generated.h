// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeComponent_generated_h
#error "LandscapeComponent.generated.h already included, missing '#pragma once' in LandscapeComponent.h"
#endif
#define LANDSCAPE_LandscapeComponent_generated_h

#define Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_167_GENERATED_BODY \
	friend LANDSCAPE_API class UScriptStruct* Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo(); \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_45_GENERATED_BODY \
	friend LANDSCAPE_API class UScriptStruct* Z_Construct_UScriptStruct_FLandscapeEditToolRenderData(); \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_238_RPC_WRAPPERS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_238_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_238_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeComponent(); \
	friend LANDSCAPE_API class UClass* Z_Construct_UClass_ULandscapeComponent(); \
public: \
	DECLARE_CLASS(ULandscapeComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	DECLARE_WITHIN(ALandscapeProxy)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_238_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeComponent(); \
	friend LANDSCAPE_API class UClass* Z_Construct_UClass_ULandscapeComponent(); \
public: \
	DECLARE_CLASS(ULandscapeComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	DECLARE_WITHIN(ALandscapeProxy)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_238_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ULandscapeComponent(ULandscapeComponent&&); \
	LANDSCAPE_API ULandscapeComponent(const ULandscapeComponent&); \
public:


#define Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_238_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ULandscapeComponent(ULandscapeComponent&&); \
	LANDSCAPE_API ULandscapeComponent(const ULandscapeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeComponent)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_238_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_235_PROLOG
#define Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_238_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_238_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_238_RPC_WRAPPERS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_238_INCLASS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_238_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_238_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_238_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_238_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_238_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_238_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LandscapeComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
