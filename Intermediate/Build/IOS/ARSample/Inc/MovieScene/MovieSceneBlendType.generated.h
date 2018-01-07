// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneBlendType_generated_h
#error "MovieSceneBlendType.generated.h already included, missing '#pragma once' in MovieSceneBlendType.h"
#endif
#define MOVIESCENE_MovieSceneBlendType_generated_h

#define Engine_Source_Runtime_MovieScene_Public_Evaluation_Blending_MovieSceneBlendType_h_25_GENERATED_BODY \
	friend MOVIESCENE_API class UScriptStruct* Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType(); \
	MOVIESCENE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__BlendType() { return STRUCT_OFFSET(FOptionalMovieSceneBlendType, BlendType); } \
	FORCEINLINE static uint32 __PPO__bIsValid() { return STRUCT_OFFSET(FOptionalMovieSceneBlendType, bIsValid); }


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_Evaluation_Blending_MovieSceneBlendType_h


#define FOREACH_ENUM_EMOVIESCENEBLENDTYPE(op) \
	op(EMovieSceneBlendType::Absolute) \
	op(EMovieSceneBlendType::Additive) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
