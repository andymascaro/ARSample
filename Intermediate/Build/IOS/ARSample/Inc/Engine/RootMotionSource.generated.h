// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_RootMotionSource_generated_h
#error "RootMotionSource.generated.h already included, missing '#pragma once' in RootMotionSource.h"
#endif
#define ENGINE_RootMotionSource_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_729_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceGroup(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_656_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_JumpForce(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FRootMotionSource Super;


#define Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_587_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FRootMotionSource Super;


#define Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_523_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FRootMotionSource Super;


#define Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_448_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_RadialForce(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FRootMotionSource Super;


#define Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_397_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FRootMotionSource Super;


#define Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_213_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_150_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_116_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceSettings(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_95_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceStatus(); \
	static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h


#define FOREACH_ENUM_EROOTMOTIONFINISHVELOCITYMODE(op) \
	op(ERootMotionFinishVelocityMode::MaintainLastRootMotionVelocity) \
	op(ERootMotionFinishVelocityMode::SetVelocity) 
#define FOREACH_ENUM_EROOTMOTIONSOURCESETTINGSFLAGS(op) \
	op(ERootMotionSourceSettingsFlags::UseSensitiveLiftoffCheck) 
#define FOREACH_ENUM_EROOTMOTIONSOURCESTATUSFLAGS(op) \
	op(ERootMotionSourceStatusFlags::Prepared) \
	op(ERootMotionSourceStatusFlags::Finished) 
#define FOREACH_ENUM_EROOTMOTIONACCUMULATEMODE(op) \
	op(ERootMotionAccumulateMode::Override) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
