// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Skeleton_generated_h
#error "Skeleton.generated.h already included, missing '#pragma once' in Skeleton.h"
#endif
#define ENGINE_Skeleton_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_239_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FVirtualBone(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_205_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimSlotGroup(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_192_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRigConfiguration(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_162_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FNameMapping(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_132_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FBoneReductionSetting(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_105_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FReferencePose(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_73_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FBoneNode(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_32_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FSkeletonToMeshLinkup(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_274_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_274_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_274_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeleton(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USkeleton(); \
public: \
	DECLARE_CLASS(USkeleton, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USkeleton) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<USkeleton*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_274_INCLASS \
private: \
	static void StaticRegisterNativesUSkeleton(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USkeleton(); \
public: \
	DECLARE_CLASS(USkeleton, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USkeleton) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<USkeleton*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_274_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkeleton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeleton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkeleton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeleton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USkeleton(USkeleton&&); \
	ENGINE_API USkeleton(const USkeleton&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_274_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkeleton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USkeleton(USkeleton&&); \
	ENGINE_API USkeleton(const USkeleton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkeleton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeleton); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeleton)


#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_274_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoneTree() { return STRUCT_OFFSET(USkeleton, BoneTree); } \
	FORCEINLINE static uint32 __PPO__RefLocalPoses_DEPRECATED() { return STRUCT_OFFSET(USkeleton, RefLocalPoses_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__VirtualBoneGuid() { return STRUCT_OFFSET(USkeleton, VirtualBoneGuid); } \
	FORCEINLINE static uint32 __PPO__VirtualBones() { return STRUCT_OFFSET(USkeleton, VirtualBones); } \
	FORCEINLINE static uint32 __PPO__SmartNames() { return STRUCT_OFFSET(USkeleton, SmartNames); } \
	FORCEINLINE static uint32 __PPO__SlotGroups() { return STRUCT_OFFSET(USkeleton, SlotGroups); } \
	FORCEINLINE static uint32 __PPO__AssetUserData() { return STRUCT_OFFSET(USkeleton, AssetUserData); }


#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_269_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_274_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_274_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_274_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_274_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_274_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_274_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_274_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_274_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_274_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_274_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Skeleton."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h


#define FOREACH_ENUM_EBONETRANSLATIONRETARGETINGMODE(op) \
	op(EBoneTranslationRetargetingMode::Animation) \
	op(EBoneTranslationRetargetingMode::Skeleton) \
	op(EBoneTranslationRetargetingMode::AnimationScaled) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
