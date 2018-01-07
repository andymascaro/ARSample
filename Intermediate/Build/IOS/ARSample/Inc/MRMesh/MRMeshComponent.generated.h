// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMeshReconstructorBase;
#ifdef MRMESH_MRMeshComponent_generated_h
#error "MRMeshComponent.generated.h already included, missing '#pragma once' in MRMeshComponent.h"
#endif
#define MRMESH_MRMeshComponent_generated_h

#define Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_50_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetReconstructor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMeshReconstructorBase**)Z_Param__Result=this->GetReconstructor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnectReconstructor) \
	{ \
		P_GET_OBJECT(UMeshReconstructorBase,Z_Param_Reconstructor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ConnectReconstructor(Z_Param_Reconstructor); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetReconstructor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMeshReconstructorBase**)Z_Param__Result=this->GetReconstructor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnectReconstructor) \
	{ \
		P_GET_OBJECT(UMeshReconstructorBase,Z_Param_Reconstructor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ConnectReconstructor(Z_Param_Reconstructor); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMRMeshComponent(); \
	friend MRMESH_API class UClass* Z_Construct_UClass_UMRMeshComponent(); \
public: \
	DECLARE_CLASS(UMRMeshComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MRMesh"), NO_API) \
	DECLARE_SERIALIZER(UMRMeshComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUMRMeshComponent(); \
	friend MRMESH_API class UClass* Z_Construct_UClass_UMRMeshComponent(); \
public: \
	DECLARE_CLASS(UMRMeshComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MRMesh"), NO_API) \
	DECLARE_SERIALIZER(UMRMeshComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMRMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMRMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMRMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMRMeshComponent(UMRMeshComponent&&); \
	NO_API UMRMeshComponent(const UMRMeshComponent&); \
public:


#define Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMRMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMRMeshComponent(UMRMeshComponent&&); \
	NO_API UMRMeshComponent(const UMRMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMRMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMRMeshComponent)


#define Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_50_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Material() { return STRUCT_OFFSET(UMRMeshComponent, Material); } \
	FORCEINLINE static uint32 __PPO__MeshReconstructor() { return STRUCT_OFFSET(UMRMeshComponent, MeshReconstructor); } \
	FORCEINLINE static uint32 __PPO__bEnableCollision() { return STRUCT_OFFSET(UMRMeshComponent, bEnableCollision); } \
	FORCEINLINE static uint32 __PPO__BodySetups() { return STRUCT_OFFSET(UMRMeshComponent, BodySetups); }


#define Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_44_PROLOG
#define Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_50_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_50_RPC_WRAPPERS \
	Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_50_INCLASS \
	Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_50_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_50_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_50_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MRMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
