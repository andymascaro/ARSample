// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneSpawnable_generated_h
#error "MovieSceneSpawnable.generated.h already included, missing '#pragma once' in MovieSceneSpawnable.h"
#endif
#define MOVIESCENE_MovieSceneSpawnable_generated_h

#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSpawnable_h_31_GENERATED_BODY \
	friend MOVIESCENE_API class UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSpawnable(); \
	MOVIESCENE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Guid() { return STRUCT_OFFSET(FMovieSceneSpawnable, Guid); } \
	FORCEINLINE static uint32 __PPO__Name() { return STRUCT_OFFSET(FMovieSceneSpawnable, Name); } \
	FORCEINLINE static uint32 __PPO__ObjectTemplate() { return STRUCT_OFFSET(FMovieSceneSpawnable, ObjectTemplate); } \
	FORCEINLINE static uint32 __PPO__ChildPossessables() { return STRUCT_OFFSET(FMovieSceneSpawnable, ChildPossessables); } \
	FORCEINLINE static uint32 __PPO__Ownership() { return STRUCT_OFFSET(FMovieSceneSpawnable, Ownership); }


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_MovieSceneSpawnable_h


#define FOREACH_ENUM_ESPAWNOWNERSHIP(op) \
	op(ESpawnOwnership::InnerSequence) \
	op(ESpawnOwnership::MasterSequence) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
