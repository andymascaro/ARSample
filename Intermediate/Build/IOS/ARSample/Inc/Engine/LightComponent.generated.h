// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureLightProfile;
struct FColor;
struct FVector;
class UMaterialInterface;
struct FLinearColor;
#ifdef ENGINE_LightComponent_generated_h
#error "LightComponent.generated.h already included, missing '#pragma once' in LightComponent.h"
#endif
#define ENGINE_LightComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetShadowBias) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetShadowBias(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIESTexture) \
	{ \
		P_GET_OBJECT(UTextureLightProfile,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetIESTexture(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBloomTint) \
	{ \
		P_GET_STRUCT(FColor,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBloomTint(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBloomThreshold) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBloomThreshold(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBloomScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBloomScale(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnableLightShaftBloom) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEnableLightShaftBloom(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAffectTranslucentLighting) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAffectTranslucentLighting(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAffectDynamicIndirectLighting) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAffectDynamicIndirectLighting(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLightFunctionDisabledBrightness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLightFunctionDisabledBrightness(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLightFunctionFadeDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewLightFunctionFadeDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLightFunctionFadeDistance(Z_Param_NewLightFunctionFadeDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLightFunctionScale) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLightFunctionScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLightFunctionScale(Z_Param_NewLightFunctionScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLightFunctionMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewLightFunctionMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLightFunctionMaterial(Z_Param_NewLightFunctionMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTemperature) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewTemperature); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTemperature(Z_Param_NewTemperature); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLightColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_NewLightColor); \
		P_GET_UBOOL(Z_Param_bSRGB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLightColor(Z_Param_NewLightColor,Z_Param_bSRGB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVolumetricScatteringIntensity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewIntensity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVolumetricScatteringIntensity(Z_Param_NewIntensity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIndirectLightingIntensity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewIntensity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetIndirectLightingIntensity(Z_Param_NewIntensity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIntensity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewIntensity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetIntensity(Z_Param_NewIntensity); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetShadowBias) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetShadowBias(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIESTexture) \
	{ \
		P_GET_OBJECT(UTextureLightProfile,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetIESTexture(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBloomTint) \
	{ \
		P_GET_STRUCT(FColor,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBloomTint(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBloomThreshold) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBloomThreshold(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBloomScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBloomScale(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnableLightShaftBloom) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEnableLightShaftBloom(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAffectTranslucentLighting) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAffectTranslucentLighting(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAffectDynamicIndirectLighting) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAffectDynamicIndirectLighting(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLightFunctionDisabledBrightness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLightFunctionDisabledBrightness(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLightFunctionFadeDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewLightFunctionFadeDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLightFunctionFadeDistance(Z_Param_NewLightFunctionFadeDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLightFunctionScale) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLightFunctionScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLightFunctionScale(Z_Param_NewLightFunctionScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLightFunctionMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewLightFunctionMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLightFunctionMaterial(Z_Param_NewLightFunctionMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTemperature) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewTemperature); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTemperature(Z_Param_NewTemperature); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLightColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_NewLightColor); \
		P_GET_UBOOL(Z_Param_bSRGB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLightColor(Z_Param_NewLightColor,Z_Param_bSRGB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVolumetricScatteringIntensity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewIntensity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVolumetricScatteringIntensity(Z_Param_NewIntensity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIndirectLightingIntensity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewIntensity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetIndirectLightingIntensity(Z_Param_NewIntensity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIntensity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewIntensity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetIntensity(Z_Param_NewIntensity); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULightComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ULightComponent(); \
public: \
	DECLARE_CLASS(ULightComponent, ULightComponentBase, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULightComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_INCLASS \
private: \
	static void StaticRegisterNativesULightComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ULightComponent(); \
public: \
	DECLARE_CLASS(ULightComponent, ULightComponentBase, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULightComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULightComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULightComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULightComponent(ULightComponent&&); \
	NO_API ULightComponent(const ULightComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULightComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULightComponent(ULightComponent&&); \
	NO_API ULightComponent(const ULightComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULightComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_39_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LightComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
