// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimNodeBase_generated_h
#error "AnimNodeBase.generated.h already included, missing '#pragma once' in AnimNodeBase.h"
#endif
#define ENGINE_AnimNodeBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_571_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_531_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FExposedValueHandler(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_448_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FExposedValueCopyRecord(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_413_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FComponentSpacePoseLink(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FPoseLinkBase Super;


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_396_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FPoseLink(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FPoseLinkBase Super;


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_338_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FPoseLinkBase(); \
	static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h


#define FOREACH_ENUM_ECOPYTYPE(op) \
	op(ECopyType::MemCopy) \
	op(ECopyType::BoolProperty) \
	op(ECopyType::StructProperty) 
#define FOREACH_ENUM_EPOSTCOPYOPERATION(op) \
	op(EPostCopyOperation::None) 
#define FOREACH_ENUM_EPINHIDINGMODE(op) \
	op(EPinHidingMode::NeverAsPin) \
	op(EPinHidingMode::PinHiddenByDefault) \
	op(EPinHidingMode::PinShownByDefault) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
