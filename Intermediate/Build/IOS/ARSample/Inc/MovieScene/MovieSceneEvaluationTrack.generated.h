// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneEvaluationTrack_generated_h
#error "MovieSceneEvaluationTrack.generated.h already included, missing '#pragma once' in MovieSceneEvaluationTrack.h"
#endif
#define MOVIESCENE_MovieSceneEvaluationTrack_generated_h

#define Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTrack_h_36_GENERATED_BODY \
	friend MOVIESCENE_API class UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack(); \
	MOVIESCENE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__ObjectBindingID() { return STRUCT_OFFSET(FMovieSceneEvaluationTrack, ObjectBindingID); } \
	FORCEINLINE static uint32 __PPO__EvaluationPriority() { return STRUCT_OFFSET(FMovieSceneEvaluationTrack, EvaluationPriority); } \
	FORCEINLINE static uint32 __PPO__EvaluationMethod() { return STRUCT_OFFSET(FMovieSceneEvaluationTrack, EvaluationMethod); } \
	FORCEINLINE static uint32 __PPO__Segments() { return STRUCT_OFFSET(FMovieSceneEvaluationTrack, Segments); } \
	FORCEINLINE static uint32 __PPO__ChildTemplates() { return STRUCT_OFFSET(FMovieSceneEvaluationTrack, ChildTemplates); } \
	FORCEINLINE static uint32 __PPO__TrackTemplate() { return STRUCT_OFFSET(FMovieSceneEvaluationTrack, TrackTemplate); } \
	FORCEINLINE static uint32 __PPO__EvaluationGroup() { return STRUCT_OFFSET(FMovieSceneEvaluationTrack, EvaluationGroup); }


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTrack_h


#define FOREACH_ENUM_EEVALUATIONMETHOD(op) \
	op(EEvaluationMethod::Static) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
