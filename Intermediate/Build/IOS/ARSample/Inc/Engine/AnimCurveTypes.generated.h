// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimCurveTypes_generated_h
#error "AnimCurveTypes.generated.h already included, missing '#pragma once' in AnimCurveTypes.h"
#endif
#define ENGINE_AnimCurveTypes_generated_h

#define Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h_575_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRawCurveTracks(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h_193_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FTransformCurve(); \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimCurveBase Super;


#define Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h_159_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FVectorCurve(); \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimCurveBase Super;


#define Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h_135_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FFloatCurve(); \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimCurveBase Super;


#define Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h_74_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveBase(); \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__CurveTypeFlags() { return STRUCT_OFFSET(FAnimCurveBase, CurveTypeFlags); }


#define Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h_41_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveParam(); \
	static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h


#define FOREACH_ENUM_ERAWCURVETRACKTYPES(op) \
	op(ERawCurveTrackTypes::RCT_Float) \
	op(ERawCurveTrackTypes::RCT_Vector) \
	op(ERawCurveTrackTypes::RCT_Transform) 
#define FOREACH_ENUM_EANIMASSETCURVEFLAGS(op) \
	op(AACF_DriveMorphTarget_DEPRECATED) \
	op(AACF_DriveAttribute_DEPRECATED) \
	op(AACF_Editable) \
	op(AACF_DriveMaterial_DEPRECATED) \
	op(AACF_Metadata) \
	op(AACF_DriveTrack) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
