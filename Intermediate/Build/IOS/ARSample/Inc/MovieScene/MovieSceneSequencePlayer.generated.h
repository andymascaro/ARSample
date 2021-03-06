// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMovieSceneObjectBindingID;
class UObject;
#ifdef MOVIESCENE_MovieSceneSequencePlayer_generated_h
#error "MovieSceneSequencePlayer.generated.h already included, missing '#pragma once' in MovieSceneSequencePlayer.h"
#endif
#define MOVIESCENE_MovieSceneSequencePlayer_generated_h

#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_34_GENERATED_BODY \
	friend MOVIESCENE_API class UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings(); \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_14_DELEGATE \
static inline void FOnMovieSceneSequencePlayerEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMovieSceneSequencePlayerEvent) \
{ \
	OnMovieSceneSequencePlayerEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_93_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBoundObjects) \
	{ \
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_ObjectBinding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UObject*>*)Z_Param__Result=this->GetBoundObjects(Z_Param_ObjectBinding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaybackEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPlaybackEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaybackStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPlaybackStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaybackRange) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewStartTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewEndTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPlaybackRange(Z_Param_NewStartTime,Z_Param_NewEndTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlayRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlayRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPlayRate(Z_Param_PlayRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPlayRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetLength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPaused) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPaused(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJumpToPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPlaybackPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->JumpToPosition(Z_Param_NewPlaybackPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaybackPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPlaybackPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPlaybackPosition(Z_Param_NewPlaybackPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaybackPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPlaybackPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGoToEndAndStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GoToEndAndStop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScrub) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Scrub(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPause) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Pause(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartPlayingNextTick) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartPlayingNextTick(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayLooping) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumLoops); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PlayLooping(Z_Param_NumLoops); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangePlaybackDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ChangePlaybackDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayReverse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PlayReverse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Play(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBoundObjects) \
	{ \
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_ObjectBinding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UObject*>*)Z_Param__Result=this->GetBoundObjects(Z_Param_ObjectBinding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaybackEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPlaybackEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaybackStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPlaybackStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaybackRange) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewStartTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewEndTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPlaybackRange(Z_Param_NewStartTime,Z_Param_NewEndTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlayRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlayRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPlayRate(Z_Param_PlayRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPlayRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetLength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPaused) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPaused(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJumpToPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPlaybackPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->JumpToPosition(Z_Param_NewPlaybackPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaybackPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPlaybackPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPlaybackPosition(Z_Param_NewPlaybackPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaybackPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPlaybackPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGoToEndAndStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GoToEndAndStop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScrub) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Scrub(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPause) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Pause(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartPlayingNextTick) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartPlayingNextTick(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayLooping) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumLoops); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PlayLooping(Z_Param_NumLoops); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangePlaybackDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ChangePlaybackDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayReverse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PlayReverse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Play(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSequencePlayer(); \
	friend MOVIESCENE_API class UClass* Z_Construct_UClass_UMovieSceneSequencePlayer(); \
public: \
	DECLARE_CLASS(UMovieSceneSequencePlayer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneSequencePlayer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_93_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneSequencePlayer(); \
	friend MOVIESCENE_API class UClass* Z_Construct_UClass_UMovieSceneSequencePlayer(); \
public: \
	DECLARE_CLASS(UMovieSceneSequencePlayer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneSequencePlayer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_93_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneSequencePlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSequencePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneSequencePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSequencePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneSequencePlayer(UMovieSceneSequencePlayer&&); \
	NO_API UMovieSceneSequencePlayer(const UMovieSceneSequencePlayer&); \
public:


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_93_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneSequencePlayer(UMovieSceneSequencePlayer&&); \
	NO_API UMovieSceneSequencePlayer(const UMovieSceneSequencePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneSequencePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSequencePlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSequencePlayer)


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_93_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Status() { return STRUCT_OFFSET(UMovieSceneSequencePlayer, Status); } \
	FORCEINLINE static uint32 __PPO__Sequence() { return STRUCT_OFFSET(UMovieSceneSequencePlayer, Sequence); } \
	FORCEINLINE static uint32 __PPO__TimeCursorPosition() { return STRUCT_OFFSET(UMovieSceneSequencePlayer, TimeCursorPosition); } \
	FORCEINLINE static uint32 __PPO__StartTime() { return STRUCT_OFFSET(UMovieSceneSequencePlayer, StartTime); } \
	FORCEINLINE static uint32 __PPO__EndTime() { return STRUCT_OFFSET(UMovieSceneSequencePlayer, EndTime); } \
	FORCEINLINE static uint32 __PPO__CurrentNumLoops() { return STRUCT_OFFSET(UMovieSceneSequencePlayer, CurrentNumLoops); } \
	FORCEINLINE static uint32 __PPO__PlaybackSettings() { return STRUCT_OFFSET(UMovieSceneSequencePlayer, PlaybackSettings); }


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_87_PROLOG
#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_93_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_93_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_93_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_93_INCLASS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_93_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_93_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_93_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_93_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
