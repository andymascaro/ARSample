// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_AnimNode_AnimDynamics_generated_h
#error "AnimNode_AnimDynamics.generated.h already included, missing '#pragma once' in AnimNode_AnimDynamics.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_AnimDynamics_generated_h

#define Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_210_GENERATED_BODY \
	friend ANIMGRAPHRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AnimDynamics(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_SkeletalControlBase Super;


#define Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_182_GENERATED_BODY \
	friend ANIMGRAPHRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysSphericalLimit(); \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_158_GENERATED_BODY \
	friend ANIMGRAPHRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysPlanarLimit(); \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_76_GENERATED_BODY \
	friend ANIMGRAPHRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysConstraintSetup(); \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h


#define FOREACH_ENUM_ESPHERICALLIMITTYPE(op) \
	op(ESphericalLimitType::Inner) 
#define FOREACH_ENUM_ANIMPHYSSIMSPACETYPE(op) \
	op(AnimPhysSimSpaceType::Component) \
	op(AnimPhysSimSpaceType::Actor) \
	op(AnimPhysSimSpaceType::World) \
	op(AnimPhysSimSpaceType::RootRelative) 
#define FOREACH_ENUM_ANIMPHYSLINEARCONSTRAINTTYPE(op) \
	op(AnimPhysLinearConstraintType::Free) 
#define FOREACH_ENUM_ANIMPHYSANGULARCONSTRAINTTYPE(op) \
	op(AnimPhysAngularConstraintType::Angular) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
