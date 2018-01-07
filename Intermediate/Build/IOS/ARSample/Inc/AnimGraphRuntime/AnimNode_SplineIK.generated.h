// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_AnimNode_SplineIK_generated_h
#error "AnimNode_SplineIK.generated.h already included, missing '#pragma once' in AnimNode_SplineIK.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_SplineIK_generated_h

#define Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_SplineIK_h_50_GENERATED_BODY \
	friend ANIMGRAPHRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SplineIK(); \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__BoneSpline() { return STRUCT_OFFSET(FAnimNode_SplineIK, BoneSpline); } \
	FORCEINLINE static uint32 __PPO__OriginalSplineLength() { return STRUCT_OFFSET(FAnimNode_SplineIK, OriginalSplineLength); } \
	FORCEINLINE static uint32 __PPO__CachedBoneReferences() { return STRUCT_OFFSET(FAnimNode_SplineIK, CachedBoneReferences); } \
	FORCEINLINE static uint32 __PPO__CachedBoneLengths() { return STRUCT_OFFSET(FAnimNode_SplineIK, CachedBoneLengths); } \
	FORCEINLINE static uint32 __PPO__CachedOffsetRotations() { return STRUCT_OFFSET(FAnimNode_SplineIK, CachedOffsetRotations); } \
	typedef FAnimNode_SkeletalControlBase Super;


#define Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_SplineIK_h_26_GENERATED_BODY \
	friend ANIMGRAPHRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FSplineIKCachedBoneData(); \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_SplineIK_h


#define FOREACH_ENUM_ESPLINEBONEAXIS(op) \
	op(ESplineBoneAxis::X) \
	op(ESplineBoneAxis::Y) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
