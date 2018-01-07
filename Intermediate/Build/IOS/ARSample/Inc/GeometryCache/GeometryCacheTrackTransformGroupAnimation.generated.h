// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGeometryCacheMeshData;
#ifdef GEOMETRYCACHE_GeometryCacheTrackTransformGroupAnimation_generated_h
#error "GeometryCacheTrackTransformGroupAnimation.generated.h already included, missing '#pragma once' in GeometryCacheTrackTransformGroupAnimation.h"
#endif
#define GEOMETRYCACHE_GeometryCacheTrackTransformGroupAnimation_generated_h

#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformGroupAnimation_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMesh) \
	{ \
		P_GET_STRUCT_REF(FGeometryCacheMeshData,Z_Param_Out_NewMeshData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMesh(Z_Param_Out_NewMeshData); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformGroupAnimation_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMesh) \
	{ \
		P_GET_STRUCT_REF(FGeometryCacheMeshData,Z_Param_Out_NewMeshData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMesh(Z_Param_Out_NewMeshData); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformGroupAnimation_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryCacheTrack_TransformGroupAnimation(); \
	friend GEOMETRYCACHE_API class UClass* Z_Construct_UClass_UGeometryCacheTrack_TransformGroupAnimation(); \
public: \
	DECLARE_CLASS(UGeometryCacheTrack_TransformGroupAnimation, UGeometryCacheTrack, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GeometryCache"), NO_API) \
	DECLARE_SERIALIZER(UGeometryCacheTrack_TransformGroupAnimation) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformGroupAnimation_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryCacheTrack_TransformGroupAnimation(); \
	friend GEOMETRYCACHE_API class UClass* Z_Construct_UClass_UGeometryCacheTrack_TransformGroupAnimation(); \
public: \
	DECLARE_CLASS(UGeometryCacheTrack_TransformGroupAnimation, UGeometryCacheTrack, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GeometryCache"), NO_API) \
	DECLARE_SERIALIZER(UGeometryCacheTrack_TransformGroupAnimation) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformGroupAnimation_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryCacheTrack_TransformGroupAnimation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCacheTrack_TransformGroupAnimation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryCacheTrack_TransformGroupAnimation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCacheTrack_TransformGroupAnimation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryCacheTrack_TransformGroupAnimation(UGeometryCacheTrack_TransformGroupAnimation&&); \
	NO_API UGeometryCacheTrack_TransformGroupAnimation(const UGeometryCacheTrack_TransformGroupAnimation&); \
public:


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformGroupAnimation_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryCacheTrack_TransformGroupAnimation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryCacheTrack_TransformGroupAnimation(UGeometryCacheTrack_TransformGroupAnimation&&); \
	NO_API UGeometryCacheTrack_TransformGroupAnimation(const UGeometryCacheTrack_TransformGroupAnimation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryCacheTrack_TransformGroupAnimation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCacheTrack_TransformGroupAnimation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCacheTrack_TransformGroupAnimation)


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformGroupAnimation_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformGroupAnimation_h_13_PROLOG
#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformGroupAnimation_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformGroupAnimation_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformGroupAnimation_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformGroupAnimation_h_16_INCLASS \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformGroupAnimation_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformGroupAnimation_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformGroupAnimation_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformGroupAnimation_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformGroupAnimation_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformGroupAnimation_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GeometryCacheTrack_TransformGroupAnimation."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheTrackTransformGroupAnimation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
