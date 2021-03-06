// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class UMaterialInstanceDynamic;
#ifdef UMG_RetainerBox_generated_h
#error "RetainerBox.generated.h already included, missing '#pragma once' in RetainerBox.h"
#endif
#define UMG_RetainerBox_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetTextureParameter) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TextureParameter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTextureParameter(Z_Param_TextureParameter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEffectMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_EffectMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEffectMaterial(Z_Param_EffectMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEffectMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=this->GetEffectMaterial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestRender) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RequestRender(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTextureParameter) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TextureParameter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTextureParameter(Z_Param_TextureParameter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEffectMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_EffectMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEffectMaterial(Z_Param_EffectMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEffectMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=this->GetEffectMaterial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestRender) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RequestRender(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURetainerBox(); \
	friend UMG_API class UClass* Z_Construct_UClass_URetainerBox(); \
public: \
	DECLARE_CLASS(URetainerBox, UContentWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(URetainerBox) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_INCLASS \
private: \
	static void StaticRegisterNativesURetainerBox(); \
	friend UMG_API class UClass* Z_Construct_UClass_URetainerBox(); \
public: \
	DECLARE_CLASS(URetainerBox, UContentWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(URetainerBox) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URetainerBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URetainerBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URetainerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URetainerBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URetainerBox(URetainerBox&&); \
	NO_API URetainerBox(const URetainerBox&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URetainerBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URetainerBox(URetainerBox&&); \
	NO_API URetainerBox(const URetainerBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URetainerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URetainerBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URetainerBox)


#define Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EffectMaterial() { return STRUCT_OFFSET(URetainerBox, EffectMaterial); } \
	FORCEINLINE static uint32 __PPO__TextureParameter() { return STRUCT_OFFSET(URetainerBox, TextureParameter); }


#define Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_25_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RetainerBox."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
