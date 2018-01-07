// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_AnimNode_PoseDriver_generated_h
#error "AnimNode_PoseDriver.generated.h already included, missing '#pragma once' in AnimNode_PoseDriver.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_PoseDriver_generated_h

#define Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseDriver_h_113_GENERATED_BODY \
	friend ANIMGRAPHRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseDriver(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_PoseHandler Super;


#define Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseDriver_h_68_GENERATED_BODY \
	friend ANIMGRAPHRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FPoseDriverTarget(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseDriver_h_48_GENERATED_BODY \
	friend ANIMGRAPHRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FPoseDriverTransform(); \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseDriver_h


#define FOREACH_ENUM_EPOSEDRIVEROUTPUT(op) \
	op(EPoseDriverOutput::DrivePoses) 
#define FOREACH_ENUM_EPOSEDRIVERSOURCE(op) \
	op(EPoseDriverSource::Rotation) 
#define FOREACH_ENUM_EPOSEDRIVERTYPE(op) \
	op(EPoseDriverType::SwingAndTwist) \
	op(EPoseDriverType::SwingOnly) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
