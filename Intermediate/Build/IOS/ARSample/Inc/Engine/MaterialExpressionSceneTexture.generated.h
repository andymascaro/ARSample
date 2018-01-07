// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionSceneTexture_generated_h
#error "MaterialExpressionSceneTexture.generated.h already included, missing '#pragma once' in MaterialExpressionSceneTexture.h"
#endif
#define ENGINE_MaterialExpressionSceneTexture_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexture_h_75_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexture_h_75_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexture_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSceneTexture(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UMaterialExpressionSceneTexture(); \
public: \
	DECLARE_CLASS(UMaterialExpressionSceneTexture, UMaterialExpression, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionSceneTexture) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexture_h_75_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSceneTexture(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UMaterialExpressionSceneTexture(); \
public: \
	DECLARE_CLASS(UMaterialExpressionSceneTexture, UMaterialExpression, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionSceneTexture) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexture_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionSceneTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSceneTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionSceneTexture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSceneTexture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialExpressionSceneTexture(UMaterialExpressionSceneTexture&&); \
	NO_API UMaterialExpressionSceneTexture(const UMaterialExpressionSceneTexture&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexture_h_75_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionSceneTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialExpressionSceneTexture(UMaterialExpressionSceneTexture&&); \
	NO_API UMaterialExpressionSceneTexture(const UMaterialExpressionSceneTexture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionSceneTexture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSceneTexture); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSceneTexture)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexture_h_75_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexture_h_72_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexture_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexture_h_75_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexture_h_75_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexture_h_75_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexture_h_75_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexture_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexture_h_75_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexture_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexture_h_75_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexture_h_75_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionSceneTexture."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexture_h


#define FOREACH_ENUM_ESCENETEXTUREID(op) \
	op(PPI_SceneColor) \
	op(PPI_SceneDepth) \
	op(PPI_DiffuseColor) \
	op(PPI_SpecularColor) \
	op(PPI_SubsurfaceColor) \
	op(PPI_BaseColor) \
	op(PPI_Specular) \
	op(PPI_Metallic) \
	op(PPI_WorldNormal) \
	op(PPI_SeparateTranslucency) \
	op(PPI_Opacity) \
	op(PPI_Roughness) \
	op(PPI_MaterialAO) \
	op(PPI_CustomDepth) \
	op(PPI_PostProcessInput0) \
	op(PPI_PostProcessInput1) \
	op(PPI_PostProcessInput2) \
	op(PPI_PostProcessInput3) \
	op(PPI_PostProcessInput4) \
	op(PPI_PostProcessInput5) \
	op(PPI_PostProcessInput6) \
	op(PPI_DecalMask) \
	op(PPI_ShadingModel) \
	op(PPI_AmbientOcclusion) \
	op(PPI_CustomStencil) \
	op(PPI_StoredBaseColor) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
