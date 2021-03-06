// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ConstraintTypes_generated_h
#error "ConstraintTypes.generated.h already included, missing '#pragma once' in ConstraintTypes.h"
#endif
#define ENGINE_ConstraintTypes_generated_h

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintTypes_h_124_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FTwistConstraint(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FConstraintBaseParams Super;


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintTypes_h_94_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FConeConstraint(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FConstraintBaseParams Super;


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintTypes_h_63_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FLinearConstraint(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FConstraintBaseParams Super;


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintTypes_h_34_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FConstraintBaseParams(); \
	static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintTypes_h


#define FOREACH_ENUM_ELINEARCONSTRAINTMOTION(op) \
	op(LCM_Free) \
	op(LCM_Limited) \
	op(LCM_Locked) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
