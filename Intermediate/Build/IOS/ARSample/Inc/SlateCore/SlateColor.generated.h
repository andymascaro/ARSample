// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLATECORE_SlateColor_generated_h
#error "SlateColor.generated.h already included, missing '#pragma once' in SlateColor.h"
#endif
#define SLATECORE_SlateColor_generated_h

#define Engine_Source_Runtime_SlateCore_Public_Styling_SlateColor_h_42_GENERATED_BODY \
	friend SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FSlateColor(); \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__SpecifiedColor() { return STRUCT_OFFSET(FSlateColor, SpecifiedColor); } \
	FORCEINLINE static uint32 __PPO__ColorUseRule() { return STRUCT_OFFSET(FSlateColor, ColorUseRule); }


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_SlateCore_Public_Styling_SlateColor_h


#define FOREACH_ENUM_ESLATECOLORSTYLINGMODE(op) \
	op(ESlateColorStylingMode::UseColor_Specified) \
	op(ESlateColorStylingMode::UseColor_Specified_Link) \
	op(ESlateColorStylingMode::UseColor_Foreground) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
