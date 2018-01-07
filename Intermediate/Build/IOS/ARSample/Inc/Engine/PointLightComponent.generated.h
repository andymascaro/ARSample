// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PointLightComponent_generated_h
#error "PointLightComponent.generated.h already included, missing '#pragma once' in PointLightComponent.h"
#endif
#define ENGINE_PointLightComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSourceLength) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSourceLength(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSoftSourceRadius) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSoftSourceRadius(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSourceRadius) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSourceRadius(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLightFalloffExponent) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewLightFalloffExponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLightFalloffExponent(Z_Param_NewLightFalloffExponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAttenuationRadius) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAttenuationRadius(Z_Param_NewRadius); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSourceLength) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSourceLength(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSoftSourceRadius) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSoftSourceRadius(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSourceRadius) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSourceRadius(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLightFalloffExponent) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewLightFalloffExponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLightFalloffExponent(Z_Param_NewLightFalloffExponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAttenuationRadius) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAttenuationRadius(Z_Param_NewRadius); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPointLightComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UPointLightComponent(); \
public: \
	DECLARE_CLASS(UPointLightComponent, ULightComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPointLightComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUPointLightComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UPointLightComponent(); \
public: \
	DECLARE_CLASS(UPointLightComponent, ULightComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPointLightComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPointLightComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointLightComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPointLightComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointLightComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPointLightComponent(UPointLightComponent&&); \
	NO_API UPointLightComponent(const UPointLightComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPointLightComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPointLightComponent(UPointLightComponent&&); \
	NO_API UPointLightComponent(const UPointLightComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPointLightComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointLightComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointLightComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_17_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PointLightComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
