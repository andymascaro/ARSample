// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialMerging_generated_h
#error "MaterialMerging.generated.h already included, missing '#pragma once' in MaterialMerging.h"
#endif
#define ENGINE_MaterialMerging_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_MaterialMerging_h_30_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FMaterialProxySettings(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_MaterialMerging_h


#define FOREACH_ENUM_EMATERIALMERGETYPE(op) \
	op(MaterialMergeType_Default) 
#define FOREACH_ENUM_ETEXTURESIZINGTYPE(op) \
	op(TextureSizingType_UseSingleTextureSize) \
	op(TextureSizingType_UseAutomaticBiasedSizes) \
	op(TextureSizingType_UseManualOverrideTextureSize) \
	op(TextureSizingType_UseSimplygonAutomaticSizing) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
