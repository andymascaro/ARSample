// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IBlendableInterface;
struct FMinimalViewInfo;
#ifdef ENGINE_CameraComponent_generated_h
#error "CameraComponent.generated.h already included, missing '#pragma once' in CameraComponent.h"
#endif
#define ENGINE_CameraComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveBlendable) \
	{ \
		P_GET_TINTERFACE(IBlendableInterface,Z_Param_InBlendableObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RemoveBlendable(Z_Param_InBlendableObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddOrUpdateBlendable) \
	{ \
		P_GET_TINTERFACE(IBlendableInterface,Z_Param_InBlendableObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InWeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddOrUpdateBlendable(Z_Param_InBlendableObject,Z_Param_InWeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraView) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_STRUCT_REF(FMinimalViewInfo,Z_Param_Out_DesiredView); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetCameraView(Z_Param_DeltaTime,Z_Param_Out_DesiredView); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPostProcessBlendWeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPostProcessBlendWeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPostProcessBlendWeight(Z_Param_InPostProcessBlendWeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetProjectionMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InProjectionMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetProjectionMode(ECameraProjectionMode::Type(Z_Param_InProjectionMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUseFieldOfViewForLOD) \
	{ \
		P_GET_UBOOL(Z_Param_bInUseFieldOfViewForLOD); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetUseFieldOfViewForLOD(Z_Param_bInUseFieldOfViewForLOD); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConstraintAspectRatio) \
	{ \
		P_GET_UBOOL(Z_Param_bInConstrainAspectRatio); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetConstraintAspectRatio(Z_Param_bInConstrainAspectRatio); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAspectRatio) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InAspectRatio); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAspectRatio(Z_Param_InAspectRatio); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOrthoFarClipPlane) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOrthoFarClipPlane); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetOrthoFarClipPlane(Z_Param_InOrthoFarClipPlane); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOrthoNearClipPlane) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOrthoNearClipPlane); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetOrthoNearClipPlane(Z_Param_InOrthoNearClipPlane); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOrthoWidth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOrthoWidth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetOrthoWidth(Z_Param_InOrthoWidth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFieldOfView) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InFieldOfView); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFieldOfView(Z_Param_InFieldOfView); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveBlendable) \
	{ \
		P_GET_TINTERFACE(IBlendableInterface,Z_Param_InBlendableObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RemoveBlendable(Z_Param_InBlendableObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddOrUpdateBlendable) \
	{ \
		P_GET_TINTERFACE(IBlendableInterface,Z_Param_InBlendableObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InWeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddOrUpdateBlendable(Z_Param_InBlendableObject,Z_Param_InWeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraView) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_STRUCT_REF(FMinimalViewInfo,Z_Param_Out_DesiredView); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetCameraView(Z_Param_DeltaTime,Z_Param_Out_DesiredView); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPostProcessBlendWeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPostProcessBlendWeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPostProcessBlendWeight(Z_Param_InPostProcessBlendWeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetProjectionMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InProjectionMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetProjectionMode(ECameraProjectionMode::Type(Z_Param_InProjectionMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUseFieldOfViewForLOD) \
	{ \
		P_GET_UBOOL(Z_Param_bInUseFieldOfViewForLOD); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetUseFieldOfViewForLOD(Z_Param_bInUseFieldOfViewForLOD); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConstraintAspectRatio) \
	{ \
		P_GET_UBOOL(Z_Param_bInConstrainAspectRatio); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetConstraintAspectRatio(Z_Param_bInConstrainAspectRatio); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAspectRatio) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InAspectRatio); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAspectRatio(Z_Param_InAspectRatio); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOrthoFarClipPlane) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOrthoFarClipPlane); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetOrthoFarClipPlane(Z_Param_InOrthoFarClipPlane); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOrthoNearClipPlane) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOrthoNearClipPlane); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetOrthoNearClipPlane(Z_Param_InOrthoNearClipPlane); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOrthoWidth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOrthoWidth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetOrthoWidth(Z_Param_InOrthoWidth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFieldOfView) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InFieldOfView); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFieldOfView(Z_Param_InFieldOfView); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent(); \
public: \
	DECLARE_CLASS(UCameraComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCameraComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUCameraComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent(); \
public: \
	DECLARE_CLASS(UCameraComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCameraComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraComponent(UCameraComponent&&); \
	NO_API UCameraComponent(const UCameraComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraComponent(UCameraComponent&&); \
	NO_API UCameraComponent(const UCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraComponent)


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_20_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CameraComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
