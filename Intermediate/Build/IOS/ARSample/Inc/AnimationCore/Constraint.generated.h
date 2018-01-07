// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMATIONCORE_Constraint_generated_h
#error "Constraint.generated.h already included, missing '#pragma once' in Constraint.h"
#endif
#define ANIMATIONCORE_Constraint_generated_h

#define Engine_Source_Runtime_AnimationCore_Public_Constraint_h_597_GENERATED_BODY \
	friend ANIMATIONCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FConstraintData(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_AnimationCore_Public_Constraint_h_420_GENERATED_BODY \
	friend ANIMATIONCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FConstraintDescriptor(); \
	ANIMATIONCORE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_AnimationCore_Public_Constraint_h_378_GENERATED_BODY \
	friend ANIMATIONCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FAimConstraintDescription(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FConstraintDescriptionEx Super;


#define Engine_Source_Runtime_AnimationCore_Public_Constraint_h_333_GENERATED_BODY \
	friend ANIMATIONCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FTransformConstraintDescription(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FConstraintDescriptionEx Super;


#define Engine_Source_Runtime_AnimationCore_Public_Constraint_h_267_GENERATED_BODY \
	friend ANIMATIONCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FConstraintDescriptionEx(); \
	ANIMATIONCORE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_AnimationCore_Public_Constraint_h_207_GENERATED_BODY \
	friend ANIMATIONCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FTransformConstraint(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_AnimationCore_Public_Constraint_h_159_GENERATED_BODY \
	friend ANIMATIONCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FConstraintOffset(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_AnimationCore_Public_Constraint_h_104_GENERATED_BODY \
	friend ANIMATIONCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FConstraintDescription(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_AnimationCore_Public_Constraint_h_28_GENERATED_BODY \
	friend ANIMATIONCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FFilterOptionPerAxis(); \
	static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AnimationCore_Public_Constraint_h


#define FOREACH_ENUM_ETRANSFORMCONSTRAINTTYPE(op) \
	op(ETransformConstraintType::Translation) \
	op(ETransformConstraintType::Rotation) \
	op(ETransformConstraintType::Scale) 
#define FOREACH_ENUM_ECONSTRAINTTYPE(op) \
	op(EConstraintType::Transform) \
	op(EConstraintType::Aim) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
