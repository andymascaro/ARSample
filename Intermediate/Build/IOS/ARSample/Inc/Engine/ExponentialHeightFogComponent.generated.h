// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FColor;
class UTextureCube;
#ifdef ENGINE_ExponentialHeightFogComponent_generated_h
#error "ExponentialHeightFogComponent.generated.h already included, missing '#pragma once' in ExponentialHeightFogComponent.h"
#endif
#define ENGINE_ExponentialHeightFogComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetVolumetricFogDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVolumetricFogDistance(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVolumetricFogEmissive) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVolumetricFogEmissive(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVolumetricFogAlbedo) \
	{ \
		P_GET_STRUCT(FColor,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVolumetricFogAlbedo(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVolumetricFogExtinctionScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVolumetricFogExtinctionScale(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVolumetricFogScatteringDistribution) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVolumetricFogScatteringDistribution(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVolumetricFog) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVolumetricFog(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFogCutoffDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFogCutoffDistance(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetStartDistance(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFogMaxOpacity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFogMaxOpacity(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFogHeightFalloff) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFogHeightFalloff(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDirectionalInscatteringColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDirectionalInscatteringColor(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDirectionalInscatteringStartDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDirectionalInscatteringStartDistance(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDirectionalInscatteringExponent) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDirectionalInscatteringExponent(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInscatteringTextureTint) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetInscatteringTextureTint(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNonDirectionalInscatteringColorDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNonDirectionalInscatteringColorDistance(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFullyDirectionalInscatteringColorDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFullyDirectionalInscatteringColorDistance(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInscatteringColorCubemapAngle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetInscatteringColorCubemapAngle(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInscatteringColorCubemap) \
	{ \
		P_GET_OBJECT(UTextureCube,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetInscatteringColorCubemap(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFogInscatteringColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFogInscatteringColor(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFogDensity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFogDensity(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetVolumetricFogDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVolumetricFogDistance(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVolumetricFogEmissive) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVolumetricFogEmissive(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVolumetricFogAlbedo) \
	{ \
		P_GET_STRUCT(FColor,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVolumetricFogAlbedo(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVolumetricFogExtinctionScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVolumetricFogExtinctionScale(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVolumetricFogScatteringDistribution) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVolumetricFogScatteringDistribution(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVolumetricFog) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVolumetricFog(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFogCutoffDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFogCutoffDistance(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetStartDistance(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFogMaxOpacity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFogMaxOpacity(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFogHeightFalloff) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFogHeightFalloff(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDirectionalInscatteringColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDirectionalInscatteringColor(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDirectionalInscatteringStartDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDirectionalInscatteringStartDistance(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDirectionalInscatteringExponent) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDirectionalInscatteringExponent(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInscatteringTextureTint) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetInscatteringTextureTint(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNonDirectionalInscatteringColorDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNonDirectionalInscatteringColorDistance(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFullyDirectionalInscatteringColorDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFullyDirectionalInscatteringColorDistance(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInscatteringColorCubemapAngle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetInscatteringColorCubemapAngle(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInscatteringColorCubemap) \
	{ \
		P_GET_OBJECT(UTextureCube,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetInscatteringColorCubemap(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFogInscatteringColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFogInscatteringColor(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFogDensity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFogDensity(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExponentialHeightFogComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UExponentialHeightFogComponent(); \
public: \
	DECLARE_CLASS(UExponentialHeightFogComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UExponentialHeightFogComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUExponentialHeightFogComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UExponentialHeightFogComponent(); \
public: \
	DECLARE_CLASS(UExponentialHeightFogComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UExponentialHeightFogComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExponentialHeightFogComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExponentialHeightFogComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExponentialHeightFogComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExponentialHeightFogComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExponentialHeightFogComponent(UExponentialHeightFogComponent&&); \
	NO_API UExponentialHeightFogComponent(const UExponentialHeightFogComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExponentialHeightFogComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExponentialHeightFogComponent(UExponentialHeightFogComponent&&); \
	NO_API UExponentialHeightFogComponent(const UExponentialHeightFogComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExponentialHeightFogComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExponentialHeightFogComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExponentialHeightFogComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_14_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_17_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ExponentialHeightFogComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
