// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_RichCurve_generated_h
#error "RichCurve.generated.h already included, missing '#pragma once' in RichCurve.h"
#endif
#define ENGINE_RichCurve_generated_h

#define Engine_Source_Runtime_Engine_Classes_Curves_RichCurve_h_178_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRichCurve(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FIndexedCurve Super;


#define Engine_Source_Runtime_Engine_Classes_Curves_RichCurve_h_62_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRichCurveKey(); \
	static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Curves_RichCurve_h


#define FOREACH_ENUM_ERICHCURVEEXTRAPOLATION(op) \
	op(RCCE_Cycle) \
	op(RCCE_CycleWithOffset) \
	op(RCCE_Oscillate) \
	op(RCCE_Linear) \
	op(RCCE_Constant) 
#define FOREACH_ENUM_ERICHCURVETANGENTWEIGHTMODE(op) \
	op(RCTWM_WeightedNone) \
	op(RCTWM_WeightedArrive) \
	op(RCTWM_WeightedLeave) 
#define FOREACH_ENUM_ERICHCURVETANGENTMODE(op) \
	op(RCTM_Auto) \
	op(RCTM_User) \
	op(RCTM_Break) 
#define FOREACH_ENUM_ERICHCURVEINTERPMODE(op) \
	op(RCIM_Linear) \
	op(RCIM_Constant) \
	op(RCIM_Cubic) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
