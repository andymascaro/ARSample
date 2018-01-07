// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
class USkinnedMeshComponent;
struct FSkelMeshSkinWeightInfo;
struct FLinearColor;
class USkeletalMesh;
class UPhysicsAsset;
#ifdef ENGINE_SkinnedMeshComponent_generated_h
#error "SkinnedMeshComponent.generated.h already included, missing '#pragma once' in SkinnedMeshComponent.h"
#endif
#define ENGINE_SkinnedMeshComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_141_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_127_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_185_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsBoneHiddenByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsBoneHiddenByName(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnHideBoneByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UnHideBoneByName(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideBoneByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PhysBodyOption); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->HideBoneByName(Z_Param_BoneName,EPhysBodyOp(Z_Param_PhysBodyOption)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindClosestBone_K2) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_TestLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoneLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_IgnoreScale); \
		P_GET_UBOOL(Z_Param_bRequirePhysicsAsset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->FindClosestBone_K2(Z_Param_TestLocation,Z_Param_Out_BoneLocation,Z_Param_IgnoreScale,Z_Param_bRequirePhysicsAsset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformFromBoneSpace) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_STRUCT(FVector,Z_Param_InPosition); \
		P_GET_STRUCT(FRotator,Z_Param_InRotation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TransformFromBoneSpace(Z_Param_BoneName,Z_Param_InPosition,Z_Param_InRotation,Z_Param_Out_OutPosition,Z_Param_Out_OutRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformToBoneSpace) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_STRUCT(FVector,Z_Param_InPosition); \
		P_GET_STRUCT(FRotator,Z_Param_InRotation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TransformToBoneSpace(Z_Param_BoneName,Z_Param_InPosition,Z_Param_InRotation,Z_Param_Out_OutPosition,Z_Param_Out_OutRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoneIsChildOf) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParentBoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->BoneIsChildOf(Z_Param_BoneName,Z_Param_ParentBoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMasterPoseComponent) \
	{ \
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_NewMasterBoneComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMasterPoseComponent(Z_Param_NewMasterBoneComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearSkinWeightOverride) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearSkinWeightOverride(Z_Param_LODIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSkinWeightOverride) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_TARRAY_REF(FSkelMeshSkinWeightInfo,Z_Param_Out_SkinWeights); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSkinWeightOverride(Z_Param_LODIndex,Z_Param_Out_SkinWeights); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearVertexColorOverride) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearVertexColorOverride(Z_Param_LODIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVertexColorOverride_LinearColor) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_VertexColors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVertexColorOverride_LinearColor(Z_Param_LODIndex,Z_Param_Out_VertexColors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParentBone) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->GetParentBone(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSkeletalMesh) \
	{ \
		P_GET_OBJECT(USkeletalMesh,Z_Param_NewMesh); \
		P_GET_UBOOL(Z_Param_bReinitPose); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSkeletalMesh(Z_Param_NewMesh,Z_Param_bReinitPose); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSocketBoneName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->GetSocketBoneName(Z_Param_InSocketName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneName) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_BoneIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->GetBoneName(Z_Param_BoneIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneIndex) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetBoneIndex(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumBones) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumBones(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCapsuleIndirectShadowMinVisibility) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCapsuleIndirectShadowMinVisibility(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCastCapsuleIndirectShadow) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCastCapsuleIndirectShadow(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCastCapsuleDirectShadow) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCastCapsuleDirectShadow(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetForcedLOD) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InNewForcedLOD); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetForcedLOD(Z_Param_InNewForcedLOD); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinLOD) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InNewMinLOD); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMinLOD(Z_Param_InNewMinLOD); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsAsset) \
	{ \
		P_GET_OBJECT(UPhysicsAsset,Z_Param_NewPhysicsAsset); \
		P_GET_UBOOL(Z_Param_bForceReInit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPhysicsAsset(Z_Param_NewPhysicsAsset,Z_Param_bForceReInit); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_185_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsBoneHiddenByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsBoneHiddenByName(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnHideBoneByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UnHideBoneByName(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideBoneByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PhysBodyOption); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->HideBoneByName(Z_Param_BoneName,EPhysBodyOp(Z_Param_PhysBodyOption)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindClosestBone_K2) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_TestLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoneLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_IgnoreScale); \
		P_GET_UBOOL(Z_Param_bRequirePhysicsAsset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->FindClosestBone_K2(Z_Param_TestLocation,Z_Param_Out_BoneLocation,Z_Param_IgnoreScale,Z_Param_bRequirePhysicsAsset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformFromBoneSpace) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_STRUCT(FVector,Z_Param_InPosition); \
		P_GET_STRUCT(FRotator,Z_Param_InRotation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TransformFromBoneSpace(Z_Param_BoneName,Z_Param_InPosition,Z_Param_InRotation,Z_Param_Out_OutPosition,Z_Param_Out_OutRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformToBoneSpace) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_STRUCT(FVector,Z_Param_InPosition); \
		P_GET_STRUCT(FRotator,Z_Param_InRotation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TransformToBoneSpace(Z_Param_BoneName,Z_Param_InPosition,Z_Param_InRotation,Z_Param_Out_OutPosition,Z_Param_Out_OutRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoneIsChildOf) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParentBoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->BoneIsChildOf(Z_Param_BoneName,Z_Param_ParentBoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMasterPoseComponent) \
	{ \
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_NewMasterBoneComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMasterPoseComponent(Z_Param_NewMasterBoneComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearSkinWeightOverride) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearSkinWeightOverride(Z_Param_LODIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSkinWeightOverride) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_TARRAY_REF(FSkelMeshSkinWeightInfo,Z_Param_Out_SkinWeights); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSkinWeightOverride(Z_Param_LODIndex,Z_Param_Out_SkinWeights); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearVertexColorOverride) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearVertexColorOverride(Z_Param_LODIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVertexColorOverride_LinearColor) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_VertexColors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVertexColorOverride_LinearColor(Z_Param_LODIndex,Z_Param_Out_VertexColors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParentBone) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->GetParentBone(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSkeletalMesh) \
	{ \
		P_GET_OBJECT(USkeletalMesh,Z_Param_NewMesh); \
		P_GET_UBOOL(Z_Param_bReinitPose); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSkeletalMesh(Z_Param_NewMesh,Z_Param_bReinitPose); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSocketBoneName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->GetSocketBoneName(Z_Param_InSocketName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneName) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_BoneIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->GetBoneName(Z_Param_BoneIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneIndex) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetBoneIndex(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumBones) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumBones(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCapsuleIndirectShadowMinVisibility) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCapsuleIndirectShadowMinVisibility(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCastCapsuleIndirectShadow) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCastCapsuleIndirectShadow(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCastCapsuleDirectShadow) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCastCapsuleDirectShadow(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetForcedLOD) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InNewForcedLOD); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetForcedLOD(Z_Param_InNewForcedLOD); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinLOD) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InNewMinLOD); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMinLOD(Z_Param_InNewMinLOD); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsAsset) \
	{ \
		P_GET_OBJECT(UPhysicsAsset,Z_Param_NewPhysicsAsset); \
		P_GET_UBOOL(Z_Param_bForceReInit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPhysicsAsset(Z_Param_NewPhysicsAsset,Z_Param_bForceReInit); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_185_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkinnedMeshComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USkinnedMeshComponent(); \
public: \
	DECLARE_CLASS(USkinnedMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_USkinnedMeshComponent, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USkinnedMeshComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_185_INCLASS \
private: \
	static void StaticRegisterNativesUSkinnedMeshComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USkinnedMeshComponent(); \
public: \
	DECLARE_CLASS(USkinnedMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_USkinnedMeshComponent, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USkinnedMeshComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_185_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkinnedMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkinnedMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkinnedMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkinnedMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkinnedMeshComponent(USkinnedMeshComponent&&); \
	NO_API USkinnedMeshComponent(const USkinnedMeshComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_185_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkinnedMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkinnedMeshComponent(USkinnedMeshComponent&&); \
	NO_API USkinnedMeshComponent(const USkinnedMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkinnedMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkinnedMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkinnedMeshComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_185_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CachedLocalBounds() { return STRUCT_OFFSET(USkinnedMeshComponent, CachedLocalBounds); } \
	FORCEINLINE static uint32 __PPO__bCachedLocalBoundsUpToDate() { return STRUCT_OFFSET(USkinnedMeshComponent, bCachedLocalBoundsUpToDate); }


#define Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_182_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_185_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_185_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_185_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_185_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_185_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_185_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_185_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_185_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_185_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_185_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SkinnedMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h


#define FOREACH_ENUM_EBONESPACES(op) \
	op(EBoneSpaces::WorldSpace) 
#define FOREACH_ENUM_EMESHCOMPONENTUPDATEFLAG(op) \
	op(EMeshComponentUpdateFlag::AlwaysTickPoseAndRefreshBones) \
	op(EMeshComponentUpdateFlag::AlwaysTickPose) \
	op(EMeshComponentUpdateFlag::OnlyTickMontagesWhenNotRendered) 
#define FOREACH_ENUM_EPHYSBODYOP(op) \
	op(PBO_None) \
	op(PBO_Term) 
#define FOREACH_ENUM_EBONEVISIBILITYSTATUS(op) \
	op(BVS_HiddenByParent) \
	op(BVS_Visible) \
	op(BVS_ExplicitlyHidden) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
