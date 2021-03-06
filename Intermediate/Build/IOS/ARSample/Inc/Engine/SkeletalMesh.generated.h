// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshSocket;
class UBlueprint;
class UNodeMappingContainer;
struct FBoxSphereBounds;
#ifdef ENGINE_SkeletalMesh_generated_h
#error "SkeletalMesh.generated.h already included, missing '#pragma once' in SkeletalMesh.h"
#endif
#define ENGINE_SkeletalMesh_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_446_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMaterial(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_416_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FClothingAssetData_Legacy(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_366_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_297_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshLODInfo(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_255_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_147_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_121_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FTriangleSortSettings(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_98_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FBoneMirrorExport(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_76_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FBoneMirrorInfo(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_515_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsSectionUsingCloth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InSectionIndex); \
		P_GET_UBOOL(Z_Param_bCheckCorrespondingSections); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsSectionUsingCloth(Z_Param_InSectionIndex,Z_Param_bCheckCorrespondingSections); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSocketByIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshSocket**)Z_Param__Result=this->GetSocketByIndex(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNumSockets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->NumSockets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindSocketAndIndex) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshSocket**)Z_Param__Result=this->FindSocketAndIndex(Z_Param_InSocketName,Z_Param_Out_OutIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindSocket) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshSocket**)Z_Param__Result=this->FindSocket(Z_Param_InSocketName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNodeMappingContainer) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_SourceAsset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UNodeMappingContainer**)Z_Param__Result=this->GetNodeMappingContainer(Z_Param_SourceAsset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetImportedBounds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBoxSphereBounds*)Z_Param__Result=this->GetImportedBounds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBounds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBoxSphereBounds*)Z_Param__Result=this->GetBounds(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_515_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsSectionUsingCloth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InSectionIndex); \
		P_GET_UBOOL(Z_Param_bCheckCorrespondingSections); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsSectionUsingCloth(Z_Param_InSectionIndex,Z_Param_bCheckCorrespondingSections); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSocketByIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshSocket**)Z_Param__Result=this->GetSocketByIndex(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNumSockets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->NumSockets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindSocketAndIndex) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshSocket**)Z_Param__Result=this->FindSocketAndIndex(Z_Param_InSocketName,Z_Param_Out_OutIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindSocket) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshSocket**)Z_Param__Result=this->FindSocket(Z_Param_InSocketName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNodeMappingContainer) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_SourceAsset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UNodeMappingContainer**)Z_Param__Result=this->GetNodeMappingContainer(Z_Param_SourceAsset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetImportedBounds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBoxSphereBounds*)Z_Param__Result=this->GetImportedBounds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBounds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBoxSphereBounds*)Z_Param__Result=this->GetBounds(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_515_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalMesh(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USkeletalMesh(); \
public: \
	DECLARE_CLASS(USkeletalMesh, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USkeletalMesh) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<USkeletalMesh*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_515_INCLASS \
private: \
	static void StaticRegisterNativesUSkeletalMesh(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USkeletalMesh(); \
public: \
	DECLARE_CLASS(USkeletalMesh, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USkeletalMesh) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<USkeletalMesh*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_515_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkeletalMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkeletalMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkeletalMesh(USkeletalMesh&&); \
	NO_API USkeletalMesh(const USkeletalMesh&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_515_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkeletalMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkeletalMesh(USkeletalMesh&&); \
	NO_API USkeletalMesh(const USkeletalMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkeletalMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMesh); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMesh)


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_515_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ImportedBounds() { return STRUCT_OFFSET(USkeletalMesh, ImportedBounds); } \
	FORCEINLINE static uint32 __PPO__ExtendedBounds() { return STRUCT_OFFSET(USkeletalMesh, ExtendedBounds); } \
	FORCEINLINE static uint32 __PPO__PositiveBoundsExtension() { return STRUCT_OFFSET(USkeletalMesh, PositiveBoundsExtension); } \
	FORCEINLINE static uint32 __PPO__NegativeBoundsExtension() { return STRUCT_OFFSET(USkeletalMesh, NegativeBoundsExtension); } \
	FORCEINLINE static uint32 __PPO__AssetUserData() { return STRUCT_OFFSET(USkeletalMesh, AssetUserData); } \
	FORCEINLINE static uint32 __PPO__Sockets() { return STRUCT_OFFSET(USkeletalMesh, Sockets); }


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_512_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_515_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_515_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_515_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_515_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_515_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_515_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_515_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_515_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_515_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_515_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SkeletalMesh."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h


#define FOREACH_ENUM_SKELETALMESHOPTIMIZATIONTYPE(op) \
	op(SMOT_NumOfTriangles) \
	op(SMOT_MaxDeviation) 
#define FOREACH_ENUM_SKELETALMESHOPTIMIZATIONIMPORTANCE(op) \
	op(SMOI_Off) \
	op(SMOI_Lowest) \
	op(SMOI_Low) \
	op(SMOI_Normal) \
	op(SMOI_High) \
	op(SMOI_Highest) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
