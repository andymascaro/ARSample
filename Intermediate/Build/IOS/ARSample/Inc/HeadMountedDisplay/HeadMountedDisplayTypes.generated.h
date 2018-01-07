// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HEADMOUNTEDDISPLAY_HeadMountedDisplayTypes_generated_h
#error "HeadMountedDisplayTypes.generated.h already included, missing '#pragma once' in HeadMountedDisplayTypes.h"
#endif
#define HEADMOUNTEDDISPLAY_HeadMountedDisplayTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h


#define FOREACH_ENUM_ESPECTATORSCREENMODE(op) \
	op(ESpectatorScreenMode::Disabled) \
	op(ESpectatorScreenMode::SingleEyeLetterboxed) \
	op(ESpectatorScreenMode::Undistorted) \
	op(ESpectatorScreenMode::Distorted) \
	op(ESpectatorScreenMode::SingleEye) \
	op(ESpectatorScreenMode::SingleEyeCroppedToFill) \
	op(ESpectatorScreenMode::Texture) 
#define FOREACH_ENUM_EHMDWORNSTATE(op) \
	op(EHMDWornState::Unknown) \
	op(EHMDWornState::Worn) 
#define FOREACH_ENUM_EHMDTRACKINGORIGIN(op) \
	op(EHMDTrackingOrigin::Floor) 
#define FOREACH_ENUM_EORIENTPOSITIONSELECTOR(op) \
	op(EOrientPositionSelector::Orientation) \
	op(EOrientPositionSelector::Position) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
