// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
enum class EMediaPlayerTrack : uint8;
struct FTimespan;
class UMediaSource;
class UMediaPlaylist;
struct FFloatRange;
struct FIntPoint;
#ifdef MEDIAASSETS_MediaPlayer_generated_h
#error "MediaPlayer.generated.h already included, missing '#pragma once' in MediaPlayer.h"
#endif
#define MEDIAASSETS_MediaPlayer_generated_h

#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_33_DELEGATE \
struct _Script_MediaAssets_eventOnMediaPlayerMediaOpenFailed_Parms \
{ \
	FString FailedUrl; \
}; \
static inline void FOnMediaPlayerMediaOpenFailed_DelegateWrapper(const FMulticastScriptDelegate& OnMediaPlayerMediaOpenFailed, const FString& FailedUrl) \
{ \
	_Script_MediaAssets_eventOnMediaPlayerMediaOpenFailed_Parms Parms; \
	Parms.FailedUrl=FailedUrl; \
	OnMediaPlayerMediaOpenFailed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_30_DELEGATE \
struct _Script_MediaAssets_eventOnMediaPlayerMediaOpened_Parms \
{ \
	FString OpenedUrl; \
}; \
static inline void FOnMediaPlayerMediaOpened_DelegateWrapper(const FMulticastScriptDelegate& OnMediaPlayerMediaOpened, const FString& OpenedUrl) \
{ \
	_Script_MediaAssets_eventOnMediaPlayerMediaOpened_Parms Parms; \
	Parms.OpenedUrl=OpenedUrl; \
	OnMediaPlayerMediaOpened.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_27_DELEGATE \
static inline void FOnMediaPlayerMediaEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMediaPlayerMediaEvent) \
{ \
	OnMediaPlayerMediaEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_74_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSupportsSeeking) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SupportsSeeking(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSupportsScrubbing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SupportsScrubbing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSupportsRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_GET_UBOOL(Z_Param_Unthinned); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SupportsRate(Z_Param_Rate,Z_Param_Unthinned); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetViewRotation) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_UBOOL(Z_Param_Absolute); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetViewRotation(Z_Param_Out_Rotation,Z_Param_Absolute); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetViewField) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Horizontal); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Vertical); \
		P_GET_UBOOL(Z_Param_Absolute); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetViewField(Z_Param_Horizontal,Z_Param_Vertical,Z_Param_Absolute); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVideoTrackFrameRate) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FrameRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetVideoTrackFrameRate(Z_Param_TrackIndex,Z_Param_FormatIndex,Z_Param_FrameRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTrackFormat) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetTrackFormat(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetRate(Z_Param_Rate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLooping) \
	{ \
		P_GET_UBOOL(Z_Param_Looping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetLooping(Z_Param_Looping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDesiredPlayerName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PlayerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDesiredPlayerName(Z_Param_PlayerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectTrack) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SelectTrack(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSeek) \
	{ \
		P_GET_STRUCT_REF(FTimespan,Z_Param_Out_Time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Seek(Z_Param_Out_Time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRewind) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Rewind(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReopen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Reopen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrevious) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Previous(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Play(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPause) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Pause(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenUrl) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Url); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->OpenUrl(Z_Param_Url); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenSource) \
	{ \
		P_GET_OBJECT(UMediaSource,Z_Param_MediaSource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->OpenSource(Z_Param_MediaSource); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenPlaylistIndex) \
	{ \
		P_GET_OBJECT(UMediaPlaylist,Z_Param_InPlaylist); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->OpenPlaylistIndex(Z_Param_InPlaylist,Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenPlaylist) \
	{ \
		P_GET_OBJECT(UMediaPlaylist,Z_Param_InPlaylist); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->OpenPlaylist(Z_Param_InPlaylist); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->OpenFile(Z_Param_FilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNext) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Next(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsReady) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsReady(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPreparing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPreparing(); \
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
	DECLARE_FUNCTION(execIsPaused) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPaused(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLooping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsLooping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsConnecting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsConnecting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBuffering) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsBuffering(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasError) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasError(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=this->GetViewRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVideoTrackType) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetVideoTrackType(Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVideoTrackFrameRates) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFloatRange*)Z_Param__Result=this->GetVideoTrackFrameRates(Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVideoTrackFrameRate) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetVideoTrackFrameRate(Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVideoTrackDimensions) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntPoint*)Z_Param__Result=this->GetVideoTrackDimensions(Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVideoTrackAspectRatio) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetVideoTrackAspectRatio(Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVerticalFieldOfView) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetVerticalFieldOfView(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUrl) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetUrl(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackLanguage) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetTrackLanguage(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackFormat) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetTrackFormat(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackDisplayName) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=this->GetTrackDisplayName(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=this->GetTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSupportedRates) \
	{ \
		P_GET_TARRAY_REF(FFloatRange,Z_Param_Out_OutRates); \
		P_GET_UBOOL(Z_Param_Unthinned); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetSupportedRates(Z_Param_Out_OutRates,Z_Param_Unthinned); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedTrack) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetSelectedTrack(EMediaPlayerTrack(Z_Param_TrackType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaylistIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetPlaylistIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaylist) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMediaPlaylist**)Z_Param__Result=this->GetPlaylist(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->GetPlayerName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumTrackFormats) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumTrackFormats(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumTracks) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumTracks(EMediaPlayerTrack(Z_Param_TrackType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMediaName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=this->GetMediaName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHorizontalFieldOfView) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetHorizontalFieldOfView(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDuration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=this->GetDuration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredPlayerName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->GetDesiredPlayerName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAudioTrackType) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetAudioTrackType(Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAudioTrackSampleRate) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetAudioTrackSampleRate(Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAudioTrackChannels) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetAudioTrackChannels(Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Close(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanPlayUrl) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Url); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanPlayUrl(Z_Param_Url); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanPlaySource) \
	{ \
		P_GET_OBJECT(UMediaSource,Z_Param_MediaSource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanPlaySource(Z_Param_MediaSource); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanPause) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanPause(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSupportsSeeking) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SupportsSeeking(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSupportsScrubbing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SupportsScrubbing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSupportsRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_GET_UBOOL(Z_Param_Unthinned); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SupportsRate(Z_Param_Rate,Z_Param_Unthinned); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetViewRotation) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_UBOOL(Z_Param_Absolute); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetViewRotation(Z_Param_Out_Rotation,Z_Param_Absolute); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetViewField) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Horizontal); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Vertical); \
		P_GET_UBOOL(Z_Param_Absolute); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetViewField(Z_Param_Horizontal,Z_Param_Vertical,Z_Param_Absolute); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVideoTrackFrameRate) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FrameRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetVideoTrackFrameRate(Z_Param_TrackIndex,Z_Param_FormatIndex,Z_Param_FrameRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTrackFormat) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetTrackFormat(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetRate(Z_Param_Rate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLooping) \
	{ \
		P_GET_UBOOL(Z_Param_Looping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetLooping(Z_Param_Looping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDesiredPlayerName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PlayerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDesiredPlayerName(Z_Param_PlayerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectTrack) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SelectTrack(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSeek) \
	{ \
		P_GET_STRUCT_REF(FTimespan,Z_Param_Out_Time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Seek(Z_Param_Out_Time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRewind) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Rewind(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReopen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Reopen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrevious) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Previous(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Play(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPause) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Pause(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenUrl) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Url); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->OpenUrl(Z_Param_Url); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenSource) \
	{ \
		P_GET_OBJECT(UMediaSource,Z_Param_MediaSource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->OpenSource(Z_Param_MediaSource); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenPlaylistIndex) \
	{ \
		P_GET_OBJECT(UMediaPlaylist,Z_Param_InPlaylist); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->OpenPlaylistIndex(Z_Param_InPlaylist,Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenPlaylist) \
	{ \
		P_GET_OBJECT(UMediaPlaylist,Z_Param_InPlaylist); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->OpenPlaylist(Z_Param_InPlaylist); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->OpenFile(Z_Param_FilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNext) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Next(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsReady) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsReady(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPreparing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPreparing(); \
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
	DECLARE_FUNCTION(execIsPaused) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPaused(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLooping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsLooping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsConnecting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsConnecting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBuffering) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsBuffering(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasError) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasError(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=this->GetViewRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVideoTrackType) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetVideoTrackType(Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVideoTrackFrameRates) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFloatRange*)Z_Param__Result=this->GetVideoTrackFrameRates(Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVideoTrackFrameRate) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetVideoTrackFrameRate(Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVideoTrackDimensions) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntPoint*)Z_Param__Result=this->GetVideoTrackDimensions(Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVideoTrackAspectRatio) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetVideoTrackAspectRatio(Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVerticalFieldOfView) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetVerticalFieldOfView(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUrl) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetUrl(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackLanguage) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetTrackLanguage(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackFormat) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetTrackFormat(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackDisplayName) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=this->GetTrackDisplayName(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=this->GetTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSupportedRates) \
	{ \
		P_GET_TARRAY_REF(FFloatRange,Z_Param_Out_OutRates); \
		P_GET_UBOOL(Z_Param_Unthinned); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetSupportedRates(Z_Param_Out_OutRates,Z_Param_Unthinned); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedTrack) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetSelectedTrack(EMediaPlayerTrack(Z_Param_TrackType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaylistIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetPlaylistIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaylist) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMediaPlaylist**)Z_Param__Result=this->GetPlaylist(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->GetPlayerName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumTrackFormats) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumTrackFormats(EMediaPlayerTrack(Z_Param_TrackType),Z_Param_TrackIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumTracks) \
	{ \
		P_GET_ENUM(EMediaPlayerTrack,Z_Param_TrackType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumTracks(EMediaPlayerTrack(Z_Param_TrackType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMediaName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=this->GetMediaName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHorizontalFieldOfView) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetHorizontalFieldOfView(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDuration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTimespan*)Z_Param__Result=this->GetDuration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredPlayerName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->GetDesiredPlayerName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAudioTrackType) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetAudioTrackType(Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAudioTrackSampleRate) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetAudioTrackSampleRate(Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAudioTrackChannels) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TrackIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FormatIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetAudioTrackChannels(Z_Param_TrackIndex,Z_Param_FormatIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Close(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanPlayUrl) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Url); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanPlayUrl(Z_Param_Url); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanPlaySource) \
	{ \
		P_GET_OBJECT(UMediaSource,Z_Param_MediaSource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanPlaySource(Z_Param_MediaSource); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanPause) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanPause(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaPlayer(); \
	friend MEDIAASSETS_API class UClass* Z_Construct_UClass_UMediaPlayer(); \
public: \
	DECLARE_CLASS(UMediaPlayer, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaPlayer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_74_INCLASS \
private: \
	static void StaticRegisterNativesUMediaPlayer(); \
	friend MEDIAASSETS_API class UClass* Z_Construct_UClass_UMediaPlayer(); \
public: \
	DECLARE_CLASS(UMediaPlayer, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaPlayer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_74_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaPlayer(UMediaPlayer&&); \
	NO_API UMediaPlayer(const UMediaPlayer&); \
public:


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_74_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaPlayer(UMediaPlayer&&); \
	NO_API UMediaPlayer(const UMediaPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaPlayer)


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_74_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Playlist() { return STRUCT_OFFSET(UMediaPlayer, Playlist); } \
	FORCEINLINE static uint32 __PPO__PlaylistIndex() { return STRUCT_OFFSET(UMediaPlayer, PlaylistIndex); } \
	FORCEINLINE static uint32 __PPO__HorizontalFieldOfView() { return STRUCT_OFFSET(UMediaPlayer, HorizontalFieldOfView); } \
	FORCEINLINE static uint32 __PPO__VerticalFieldOfView() { return STRUCT_OFFSET(UMediaPlayer, VerticalFieldOfView); } \
	FORCEINLINE static uint32 __PPO__ViewRotation() { return STRUCT_OFFSET(UMediaPlayer, ViewRotation); } \
	FORCEINLINE static uint32 __PPO__PlayerGuid() { return STRUCT_OFFSET(UMediaPlayer, PlayerGuid); }


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_70_PROLOG
#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_74_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_74_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_74_RPC_WRAPPERS \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_74_INCLASS \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_74_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_74_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_74_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_74_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MediaPlayer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h


#define FOREACH_ENUM_EMEDIAPLAYERTRACK(op) \
	op(EMediaPlayerTrack::Audio) \
	op(EMediaPlayerTrack::Caption) \
	op(EMediaPlayerTrack::Metadata) \
	op(EMediaPlayerTrack::Script) \
	op(EMediaPlayerTrack::Subtitle) \
	op(EMediaPlayerTrack::Text) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
