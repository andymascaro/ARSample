// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLATECORE_Events_generated_h
#error "Events.generated.h already included, missing '#pragma once' in Events.h"
#endif
#define SLATECORE_Events_generated_h

#define Engine_Source_Runtime_SlateCore_Public_Input_Events_h_929_GENERATED_BODY \
	friend SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FNavigationEvent(); \
	SLATECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FInputEvent Super;


#define Engine_Source_Runtime_SlateCore_Public_Input_Events_h_852_GENERATED_BODY \
	friend SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FMotionEvent(); \
	SLATECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FInputEvent Super;


#define Engine_Source_Runtime_SlateCore_Public_Input_Events_h_606_GENERATED_BODY \
	friend SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent(); \
	SLATECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FInputEvent Super;


#define Engine_Source_Runtime_SlateCore_Public_Input_Events_h_524_GENERATED_BODY \
	friend SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FCharacterEvent(); \
	SLATECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FInputEvent Super;


#define Engine_Source_Runtime_SlateCore_Public_Input_Events_h_461_GENERATED_BODY \
	friend SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FAnalogInputEvent(); \
	SLATECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FKeyEvent Super;


#define Engine_Source_Runtime_SlateCore_Public_Input_Events_h_366_GENERATED_BODY \
	friend SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FKeyEvent(); \
	SLATECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FInputEvent Super;


#define Engine_Source_Runtime_SlateCore_Public_Input_Events_h_130_GENERATED_BODY \
	friend SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FInputEvent(); \
	SLATECORE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_SlateCore_Public_Input_Events_h_53_GENERATED_BODY \
	friend SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FFocusEvent(); \
	SLATECORE_API static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_SlateCore_Public_Input_Events_h


#define FOREACH_ENUM_EFOCUSCAUSE(op) \
	op(EFocusCause::Mouse) \
	op(EFocusCause::Navigation) \
	op(EFocusCause::SetDirectly) \
	op(EFocusCause::Cleared) \
	op(EFocusCause::OtherWidgetLostFocus) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
