// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLATECORE_CompositeFont_generated_h
#error "CompositeFont.generated.h already included, missing '#pragma once' in CompositeFont.h"
#endif
#define SLATECORE_CompositeFont_generated_h

#define Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_369_GENERATED_BODY \
	friend SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FCompositeFont(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_337_GENERATED_BODY \
	friend SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FCompositeSubFont(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_309_GENERATED_BODY \
	friend SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FTypeface(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_276_GENERATED_BODY \
	friend SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FTypefaceEntry(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_138_GENERATED_BODY \
	friend SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FFontData(); \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__FontFilename() { return STRUCT_OFFSET(FFontData, FontFilename); } \
	FORCEINLINE static uint32 __PPO__Hinting() { return STRUCT_OFFSET(FFontData, Hinting); } \
	FORCEINLINE static uint32 __PPO__LoadingPolicy() { return STRUCT_OFFSET(FFontData, LoadingPolicy); } \
	FORCEINLINE static uint32 __PPO__FontFaceAsset() { return STRUCT_OFFSET(FFontData, FontFaceAsset); }


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h


#define FOREACH_ENUM_EFONTLAYOUTMETHOD(op) \
	op(EFontLayoutMethod::Metrics) 
#define FOREACH_ENUM_EFONTLOADINGPOLICY(op) \
	op(EFontLoadingPolicy::LazyLoad) \
	op(EFontLoadingPolicy::Stream) 
#define FOREACH_ENUM_EFONTHINTING(op) \
	op(EFontHinting::Default) \
	op(EFontHinting::Auto) \
	op(EFontHinting::AutoLight) \
	op(EFontHinting::Monochrome) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
