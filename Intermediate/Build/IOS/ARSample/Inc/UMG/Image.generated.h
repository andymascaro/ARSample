// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTexture2DDynamic;
class UTexture2D;
class USlateBrushAsset;
struct FSlateBrush;
struct FLinearColor;
#ifdef UMG_Image_generated_h
#error "Image.generated.h already included, missing '#pragma once' in Image.h"
#endif
#define UMG_Image_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_Image_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDynamicMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=this->GetDynamicMaterial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBrushFromMaterial(Z_Param_Material); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromTextureDynamic) \
	{ \
		P_GET_OBJECT(UTexture2DDynamic,Z_Param_Texture); \
		P_GET_UBOOL(Z_Param_bMatchSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBrushFromTextureDynamic(Z_Param_Texture,Z_Param_bMatchSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromTexture) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_GET_UBOOL(Z_Param_bMatchSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBrushFromTexture(Z_Param_Texture,Z_Param_bMatchSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromAsset) \
	{ \
		P_GET_OBJECT(USlateBrushAsset,Z_Param_Asset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBrushFromAsset(Z_Param_Asset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InBrush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBrush(Z_Param_Out_InBrush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOpacity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetOpacity(Z_Param_InOpacity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColorAndOpacity) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColorAndOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetColorAndOpacity(Z_Param_InColorAndOpacity); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_Image_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDynamicMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=this->GetDynamicMaterial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBrushFromMaterial(Z_Param_Material); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromTextureDynamic) \
	{ \
		P_GET_OBJECT(UTexture2DDynamic,Z_Param_Texture); \
		P_GET_UBOOL(Z_Param_bMatchSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBrushFromTextureDynamic(Z_Param_Texture,Z_Param_bMatchSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromTexture) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_GET_UBOOL(Z_Param_bMatchSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBrushFromTexture(Z_Param_Texture,Z_Param_bMatchSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromAsset) \
	{ \
		P_GET_OBJECT(USlateBrushAsset,Z_Param_Asset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBrushFromAsset(Z_Param_Asset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InBrush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBrush(Z_Param_Out_InBrush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOpacity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetOpacity(Z_Param_InOpacity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColorAndOpacity) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColorAndOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetColorAndOpacity(Z_Param_InColorAndOpacity); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_Image_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImage(); \
	friend UMG_API class UClass* Z_Construct_UClass_UImage(); \
public: \
	DECLARE_CLASS(UImage, UWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UImage) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_Image_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUImage(); \
	friend UMG_API class UClass* Z_Construct_UClass_UImage(); \
public: \
	DECLARE_CLASS(UImage, UWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UImage) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_Image_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImage(UImage&&); \
	NO_API UImage(const UImage&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_Image_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImage(UImage&&); \
	NO_API UImage(const UImage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImage)


#define Engine_Source_Runtime_UMG_Public_Components_Image_h_28_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_Image_h_25_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_Image_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_Image_h_28_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_Image_h_28_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_Image_h_28_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_Image_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_Image_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_Image_h_28_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_Image_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_Image_h_28_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_Image_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Image."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_Image_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
