// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
struct FVector;
#ifdef ANIMGRAPHRUNTIME_KismetAnimationLibrary_generated_h
#error "KismetAnimationLibrary.generated.h already included, missing '#pragma once' in KismetAnimationLibrary.h"
#endif
#define ANIMGRAPHRUNTIME_KismetAnimationLibrary_generated_h

#define Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execK2_LookAt) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_CurrentTransform); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetPosition); \
		P_GET_STRUCT(FVector,Z_Param_LookAtVector); \
		P_GET_UBOOL(Z_Param_bUseUpVector); \
		P_GET_STRUCT(FVector,Z_Param_UpVector); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ClampConeInDegree); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKismetAnimationLibrary::K2_LookAt(Z_Param_Out_CurrentTransform,Z_Param_Out_TargetPosition,Z_Param_LookAtVector,Z_Param_bUseUpVector,Z_Param_UpVector,Z_Param_ClampConeInDegree); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_TwoBoneIK) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RootPos); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_JointPos); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EndPos); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_JointTarget); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Effector); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutJointPos); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutEndPos); \
		P_GET_UBOOL(Z_Param_bAllowStretching); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartStretchRatio); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxStretchScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetAnimationLibrary::K2_TwoBoneIK(Z_Param_Out_RootPos,Z_Param_Out_JointPos,Z_Param_Out_EndPos,Z_Param_Out_JointTarget,Z_Param_Out_Effector,Z_Param_Out_OutJointPos,Z_Param_Out_OutEndPos,Z_Param_bAllowStretching,Z_Param_StartStretchRatio,Z_Param_MaxStretchScale); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execK2_LookAt) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_CurrentTransform); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetPosition); \
		P_GET_STRUCT(FVector,Z_Param_LookAtVector); \
		P_GET_UBOOL(Z_Param_bUseUpVector); \
		P_GET_STRUCT(FVector,Z_Param_UpVector); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ClampConeInDegree); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UKismetAnimationLibrary::K2_LookAt(Z_Param_Out_CurrentTransform,Z_Param_Out_TargetPosition,Z_Param_LookAtVector,Z_Param_bUseUpVector,Z_Param_UpVector,Z_Param_ClampConeInDegree); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_TwoBoneIK) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RootPos); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_JointPos); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EndPos); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_JointTarget); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Effector); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutJointPos); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutEndPos); \
		P_GET_UBOOL(Z_Param_bAllowStretching); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartStretchRatio); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxStretchScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetAnimationLibrary::K2_TwoBoneIK(Z_Param_Out_RootPos,Z_Param_Out_JointPos,Z_Param_Out_EndPos,Z_Param_Out_JointTarget,Z_Param_Out_Effector,Z_Param_Out_OutJointPos,Z_Param_Out_OutEndPos,Z_Param_bAllowStretching,Z_Param_StartStretchRatio,Z_Param_MaxStretchScale); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKismetAnimationLibrary(); \
	friend ANIMGRAPHRUNTIME_API class UClass* Z_Construct_UClass_UKismetAnimationLibrary(); \
public: \
	DECLARE_CLASS(UKismetAnimationLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AnimGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(UKismetAnimationLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUKismetAnimationLibrary(); \
	friend ANIMGRAPHRUNTIME_API class UClass* Z_Construct_UClass_UKismetAnimationLibrary(); \
public: \
	DECLARE_CLASS(UKismetAnimationLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AnimGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(UKismetAnimationLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetAnimationLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetAnimationLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetAnimationLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetAnimationLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetAnimationLibrary(UKismetAnimationLibrary&&); \
	NO_API UKismetAnimationLibrary(const UKismetAnimationLibrary&); \
public:


#define Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetAnimationLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetAnimationLibrary(UKismetAnimationLibrary&&); \
	NO_API UKismetAnimationLibrary(const UKismetAnimationLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetAnimationLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetAnimationLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetAnimationLibrary)


#define Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_14_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_11_PROLOG
#define Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_14_INCLASS \
	Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KismetAnimationLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
