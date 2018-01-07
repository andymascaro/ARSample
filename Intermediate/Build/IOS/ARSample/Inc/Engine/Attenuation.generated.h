// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Attenuation_generated_h
#error "Attenuation.generated.h already included, missing '#pragma once' in Attenuation.h"
#endif
#define ENGINE_Attenuation_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_Attenuation_h_44_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FBaseAttenuationSettings(); \
	static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_Attenuation_h


#define FOREACH_ENUM_EATTENUATIONSHAPE(op) \
	op(EAttenuationShape::Sphere) \
	op(EAttenuationShape::Capsule) \
	op(EAttenuationShape::Box) 
#define FOREACH_ENUM_EATTENUATIONDISTANCEMODEL(op) \
	op(EAttenuationDistanceModel::Linear) \
	op(EAttenuationDistanceModel::Logarithmic) \
	op(EAttenuationDistanceModel::Inverse) \
	op(EAttenuationDistanceModel::LogReverse) \
	op(EAttenuationDistanceModel::NaturalSound) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
