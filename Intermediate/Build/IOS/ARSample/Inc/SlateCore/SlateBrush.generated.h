// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLATECORE_SlateBrush_generated_h
#error "SlateBrush.generated.h already included, missing '#pragma once' in SlateBrush.h"
#endif
#define SLATECORE_SlateBrush_generated_h

#define Engine_Source_Runtime_SlateCore_Public_Styling_SlateBrush_h_111_GENERATED_BODY \
	friend SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush(); \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__ResourceObject() { return STRUCT_OFFSET(FSlateBrush, ResourceObject); } \
	FORCEINLINE static uint32 __PPO__ResourceName() { return STRUCT_OFFSET(FSlateBrush, ResourceName); } \
	FORCEINLINE static uint32 __PPO__UVRegion() { return STRUCT_OFFSET(FSlateBrush, UVRegion); }


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_SlateCore_Public_Styling_SlateBrush_h


#define FOREACH_ENUM_ESLATEBRUSHIMAGETYPE(op) \
	op(ESlateBrushImageType::NoImage) \
	op(ESlateBrushImageType::FullColor) 
#define FOREACH_ENUM_ESLATEBRUSHMIRRORTYPE(op) \
	op(ESlateBrushMirrorType::NoMirror) \
	op(ESlateBrushMirrorType::Horizontal) \
	op(ESlateBrushMirrorType::Vertical) 
#define FOREACH_ENUM_ESLATEBRUSHTILETYPE(op) \
	op(ESlateBrushTileType::NoTile) \
	op(ESlateBrushTileType::Horizontal) \
	op(ESlateBrushTileType::Vertical) 
#define FOREACH_ENUM_ESLATEBRUSHDRAWTYPE(op) \
	op(ESlateBrushDrawType::NoDrawType) \
	op(ESlateBrushDrawType::Box) \
	op(ESlateBrushDrawType::Border) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
