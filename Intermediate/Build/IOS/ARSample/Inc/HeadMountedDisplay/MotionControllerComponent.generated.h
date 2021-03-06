// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HEADMOUNTEDDISPLAY_MotionControllerComponent_generated_h
#error "MotionControllerComponent.generated.h already included, missing '#pragma once' in MotionControllerComponent.h"
#endif
#define HEADMOUNTEDDISPLAY_MotionControllerComponent_generated_h

#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsTracked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsTracked(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsTracked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsTracked(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionControllerComponent(); \
	friend HEADMOUNTEDDISPLAY_API class UClass* Z_Construct_UClass_UMotionControllerComponent(); \
public: \
	DECLARE_CLASS(UMotionControllerComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HeadMountedDisplay"), NO_API) \
	DECLARE_SERIALIZER(UMotionControllerComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUMotionControllerComponent(); \
	friend HEADMOUNTEDDISPLAY_API class UClass* Z_Construct_UClass_UMotionControllerComponent(); \
public: \
	DECLARE_CLASS(UMotionControllerComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HeadMountedDisplay"), NO_API) \
	DECLARE_SERIALIZER(UMotionControllerComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionControllerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionControllerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionControllerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionControllerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionControllerComponent(UMotionControllerComponent&&); \
	NO_API UMotionControllerComponent(const UMotionControllerComponent&); \
public:


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionControllerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionControllerComponent(UMotionControllerComponent&&); \
	NO_API UMotionControllerComponent(const UMotionControllerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionControllerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionControllerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionControllerComponent)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_18_PROLOG
#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_INCLASS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MotionControllerComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
