// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundBase;
class UWidgetAnimation;
struct FMargin;
struct FSlateColor;
struct FLinearColor;
class APawn;
class APlayerController;
class ULocalPlayer;
struct FVector2D;
struct FAnchors;
struct FFocusEvent;
struct FGeometry;
struct FAnalogInputEvent;
struct FEventReply;
struct FPointerEvent;
class UDragDropOperation;
struct FCharacterEvent;
struct FKeyEvent;
struct FMotionEvent;
struct FPaintContext;
#ifdef UMG_UserWidget_generated_h
#error "UserWidget.generated.h already included, missing '#pragma once' in UserWidget.h"
#endif
#define UMG_UserWidget_generated_h

#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_93_GENERATED_BODY \
	friend UMG_API class UScriptStruct* Z_Construct_UScriptStruct_FNamedSlotBinding(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_47_GENERATED_BODY \
	friend UMG_API class UScriptStruct* Z_Construct_UScriptStruct_FPaintContext(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_144_DELEGATE \
static inline void FOnInputAction_DelegateWrapper(const FScriptDelegate& OnInputAction) \
{ \
	OnInputAction.ProcessDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_142_DELEGATE \
static inline void FOnConstructEvent_DelegateWrapper(const FMulticastScriptDelegate& OnConstructEvent) \
{ \
	OnConstructEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_152_RPC_WRAPPERS \
	virtual void OnAnimationFinished_Implementation(const UWidgetAnimation* Animation); \
	virtual void OnAnimationStarted_Implementation(const UWidgetAnimation* Animation); \
 \
	DECLARE_FUNCTION(execSetInputActionBlocking) \
	{ \
		P_GET_UBOOL(Z_Param_bShouldBlock); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetInputActionBlocking(Z_Param_bShouldBlock); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputActionPriority) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewPriority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetInputActionPriority(Z_Param_NewPriority); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsListeningForInputAction) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ActionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsListeningForInputAction(Z_Param_ActionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnregisterInputComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UnregisterInputComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterInputComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RegisterInputComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopListeningForAllInputActions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopListeningForAllInputActions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopListeningForInputAction) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ActionName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EventType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopListeningForInputAction(Z_Param_ActionName,EInputEvent(Z_Param_EventType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execListenForInputAction) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ActionName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EventType); \
		P_GET_UBOOL(Z_Param_bConsume); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Callback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ListenForInputAction(Z_Param_ActionName,EInputEvent(Z_Param_EventType),Z_Param_bConsume,FOnInputAction(Z_Param_Callback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayingAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlayingAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaySound) \
	{ \
		P_GET_OBJECT(USoundBase,Z_Param_SoundToPlay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PlaySound(Z_Param_SoundToPlay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAnimationPlayingForward) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsAnimationPlayingForward(Z_Param_InAnimation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReverseAnimation) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ReverseAnimation(Z_Param_InAnimation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaybackSpeed) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlaybackSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPlaybackSpeed(Z_Param_InAnimation,Z_Param_PlaybackSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNumLoopsToPlay) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumLoopsToPlay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNumLoopsToPlay(Z_Param_InAnimation,Z_Param_NumLoopsToPlay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAnyAnimationPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsAnyAnimationPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAnimationPlaying) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsAnimationPlaying(Z_Param_InAnimation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationCurrentTime) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetAnimationCurrentTime(Z_Param_InAnimation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPauseAnimation) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->PauseAnimation(Z_Param_InAnimation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAnimation) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopAnimation(Z_Param_InAnimation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnimationTo) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartAtTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndAtTime); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumLoopsToPlay); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PlayMode); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlaybackSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PlayAnimationTo(Z_Param_InAnimation,Z_Param_StartAtTime,Z_Param_EndAtTime,Z_Param_NumLoopsToPlay,EUMGSequencePlayMode::Type(Z_Param_PlayMode),Z_Param_PlaybackSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnimation) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartAtTime); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumLoopsToPlay); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PlayMode); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlaybackSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PlayAnimation(Z_Param_InAnimation,Z_Param_StartAtTime,Z_Param_NumLoopsToPlay,EUMGSequencePlayMode::Type(Z_Param_PlayMode),Z_Param_PlaybackSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPadding) \
	{ \
		P_GET_STRUCT(FMargin,Z_Param_InPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPadding(Z_Param_InPadding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetForegroundColor) \
	{ \
		P_GET_STRUCT(FSlateColor,Z_Param_InForegroundColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetForegroundColor(Z_Param_InForegroundColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColorAndOpacity) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColorAndOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetColorAndOpacity(Z_Param_InColorAndOpacity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAnimationFinished) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnAnimationFinished_Implementation(Z_Param_Animation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAnimationStarted) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnAnimationStarted_Implementation(Z_Param_Animation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwningPlayerPawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APawn**)Z_Param__Result=this->GetOwningPlayerPawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOwningPlayer) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_LocalPlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetOwningPlayer(Z_Param_LocalPlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwningPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlayerController**)Z_Param__Result=this->GetOwningPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOwningLocalPlayer) \
	{ \
		P_GET_OBJECT(ULocalPlayer,Z_Param_LocalPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetOwningLocalPlayer(Z_Param_LocalPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwningLocalPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULocalPlayer**)Z_Param__Result=this->GetOwningLocalPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInViewport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsInViewport(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsVisible) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetIsVisible(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAlignmentInViewport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=this->GetAlignmentInViewport(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnchorsInViewport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAnchors*)Z_Param__Result=this->GetAnchorsInViewport(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAlignmentInViewport) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Alignment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAlignmentInViewport(Z_Param_Alignment); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnchorsInViewport) \
	{ \
		P_GET_STRUCT(FAnchors,Z_Param_Anchors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAnchorsInViewport(Z_Param_Anchors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDesiredSizeInViewport) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDesiredSizeInViewport(Z_Param_Size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPositionInViewport) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Position); \
		P_GET_UBOOL(Z_Param_bRemoveDPIScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPositionInViewport(Z_Param_Position,Z_Param_bRemoveDPIScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveFromViewport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RemoveFromViewport(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToPlayerScreen) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ZOrder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->AddToPlayerScreen(Z_Param_ZOrder); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToViewport) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ZOrder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddToViewport(Z_Param_ZOrder); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_152_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetInputActionBlocking) \
	{ \
		P_GET_UBOOL(Z_Param_bShouldBlock); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetInputActionBlocking(Z_Param_bShouldBlock); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputActionPriority) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewPriority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetInputActionPriority(Z_Param_NewPriority); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsListeningForInputAction) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ActionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsListeningForInputAction(Z_Param_ActionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnregisterInputComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UnregisterInputComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterInputComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RegisterInputComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopListeningForAllInputActions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopListeningForAllInputActions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopListeningForInputAction) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ActionName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EventType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopListeningForInputAction(Z_Param_ActionName,EInputEvent(Z_Param_EventType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execListenForInputAction) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ActionName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EventType); \
		P_GET_UBOOL(Z_Param_bConsume); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Callback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ListenForInputAction(Z_Param_ActionName,EInputEvent(Z_Param_EventType),Z_Param_bConsume,FOnInputAction(Z_Param_Callback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayingAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlayingAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaySound) \
	{ \
		P_GET_OBJECT(USoundBase,Z_Param_SoundToPlay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PlaySound(Z_Param_SoundToPlay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAnimationPlayingForward) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsAnimationPlayingForward(Z_Param_InAnimation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReverseAnimation) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ReverseAnimation(Z_Param_InAnimation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaybackSpeed) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlaybackSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPlaybackSpeed(Z_Param_InAnimation,Z_Param_PlaybackSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNumLoopsToPlay) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumLoopsToPlay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNumLoopsToPlay(Z_Param_InAnimation,Z_Param_NumLoopsToPlay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAnyAnimationPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsAnyAnimationPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAnimationPlaying) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsAnimationPlaying(Z_Param_InAnimation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationCurrentTime) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetAnimationCurrentTime(Z_Param_InAnimation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPauseAnimation) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->PauseAnimation(Z_Param_InAnimation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAnimation) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopAnimation(Z_Param_InAnimation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnimationTo) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartAtTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndAtTime); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumLoopsToPlay); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PlayMode); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlaybackSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PlayAnimationTo(Z_Param_InAnimation,Z_Param_StartAtTime,Z_Param_EndAtTime,Z_Param_NumLoopsToPlay,EUMGSequencePlayMode::Type(Z_Param_PlayMode),Z_Param_PlaybackSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnimation) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartAtTime); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumLoopsToPlay); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PlayMode); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlaybackSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PlayAnimation(Z_Param_InAnimation,Z_Param_StartAtTime,Z_Param_NumLoopsToPlay,EUMGSequencePlayMode::Type(Z_Param_PlayMode),Z_Param_PlaybackSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPadding) \
	{ \
		P_GET_STRUCT(FMargin,Z_Param_InPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPadding(Z_Param_InPadding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetForegroundColor) \
	{ \
		P_GET_STRUCT(FSlateColor,Z_Param_InForegroundColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetForegroundColor(Z_Param_InForegroundColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColorAndOpacity) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InColorAndOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetColorAndOpacity(Z_Param_InColorAndOpacity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAnimationFinished) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnAnimationFinished_Implementation(Z_Param_Animation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAnimationStarted) \
	{ \
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnAnimationStarted_Implementation(Z_Param_Animation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwningPlayerPawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APawn**)Z_Param__Result=this->GetOwningPlayerPawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOwningPlayer) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_LocalPlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetOwningPlayer(Z_Param_LocalPlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwningPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlayerController**)Z_Param__Result=this->GetOwningPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOwningLocalPlayer) \
	{ \
		P_GET_OBJECT(ULocalPlayer,Z_Param_LocalPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetOwningLocalPlayer(Z_Param_LocalPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwningLocalPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULocalPlayer**)Z_Param__Result=this->GetOwningLocalPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInViewport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsInViewport(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsVisible) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetIsVisible(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAlignmentInViewport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=this->GetAlignmentInViewport(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnchorsInViewport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAnchors*)Z_Param__Result=this->GetAnchorsInViewport(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAlignmentInViewport) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Alignment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAlignmentInViewport(Z_Param_Alignment); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnchorsInViewport) \
	{ \
		P_GET_STRUCT(FAnchors,Z_Param_Anchors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAnchorsInViewport(Z_Param_Anchors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDesiredSizeInViewport) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDesiredSizeInViewport(Z_Param_Size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPositionInViewport) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Position); \
		P_GET_UBOOL(Z_Param_bRemoveDPIScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPositionInViewport(Z_Param_Position,Z_Param_bRemoveDPIScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveFromViewport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RemoveFromViewport(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToPlayerScreen) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ZOrder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->AddToPlayerScreen(Z_Param_ZOrder); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToViewport) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ZOrder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddToViewport(Z_Param_ZOrder); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_152_EVENT_PARMS \
	struct UserWidget_eventIsInteractable_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UserWidget_eventIsInteractable_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct UserWidget_eventOnAddedToFocusPath_Parms \
	{ \
		FFocusEvent InFocusEvent; \
	}; \
	struct UserWidget_eventOnAnalogValueChanged_Parms \
	{ \
		FGeometry MyGeometry; \
		FAnalogInputEvent InAnalogInputEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnAnimationFinished_Parms \
	{ \
		const UWidgetAnimation* Animation; \
	}; \
	struct UserWidget_eventOnAnimationStarted_Parms \
	{ \
		const UWidgetAnimation* Animation; \
	}; \
	struct UserWidget_eventOnDragCancelled_Parms \
	{ \
		FPointerEvent PointerEvent; \
		UDragDropOperation* Operation; \
	}; \
	struct UserWidget_eventOnDragDetected_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent PointerEvent; \
		UDragDropOperation* Operation; \
	}; \
	struct UserWidget_eventOnDragEnter_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent PointerEvent; \
		UDragDropOperation* Operation; \
	}; \
	struct UserWidget_eventOnDragLeave_Parms \
	{ \
		FPointerEvent PointerEvent; \
		UDragDropOperation* Operation; \
	}; \
	struct UserWidget_eventOnDragOver_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent PointerEvent; \
		UDragDropOperation* Operation; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UserWidget_eventOnDragOver_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct UserWidget_eventOnDrop_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent PointerEvent; \
		UDragDropOperation* Operation; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UserWidget_eventOnDrop_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct UserWidget_eventOnFocusLost_Parms \
	{ \
		FFocusEvent InFocusEvent; \
	}; \
	struct UserWidget_eventOnFocusReceived_Parms \
	{ \
		FGeometry MyGeometry; \
		FFocusEvent InFocusEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnKeyChar_Parms \
	{ \
		FGeometry MyGeometry; \
		FCharacterEvent InCharacterEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnKeyDown_Parms \
	{ \
		FGeometry MyGeometry; \
		FKeyEvent InKeyEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnKeyUp_Parms \
	{ \
		FGeometry MyGeometry; \
		FKeyEvent InKeyEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnMotionDetected_Parms \
	{ \
		FGeometry MyGeometry; \
		FMotionEvent InMotionEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnMouseButtonDoubleClick_Parms \
	{ \
		FGeometry InMyGeometry; \
		FPointerEvent InMouseEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnMouseButtonDown_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent MouseEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnMouseButtonUp_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent MouseEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnMouseEnter_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent MouseEvent; \
	}; \
	struct UserWidget_eventOnMouseLeave_Parms \
	{ \
		FPointerEvent MouseEvent; \
	}; \
	struct UserWidget_eventOnMouseMove_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent MouseEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnMouseWheel_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent MouseEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnPaint_Parms \
	{ \
		FPaintContext Context; \
	}; \
	struct UserWidget_eventOnPreviewKeyDown_Parms \
	{ \
		FGeometry MyGeometry; \
		FKeyEvent InKeyEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnPreviewMouseButtonDown_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent MouseEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnRemovedFromFocusPath_Parms \
	{ \
		FFocusEvent InFocusEvent; \
	}; \
	struct UserWidget_eventOnTouchEnded_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent InTouchEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnTouchGesture_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent GestureEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnTouchMoved_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent InTouchEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventOnTouchStarted_Parms \
	{ \
		FGeometry MyGeometry; \
		FPointerEvent InTouchEvent; \
		FEventReply ReturnValue; \
	}; \
	struct UserWidget_eventPreConstruct_Parms \
	{ \
		bool IsDesignTime; \
	}; \
	struct UserWidget_eventTick_Parms \
	{ \
		FGeometry MyGeometry; \
		float InDeltaTime; \
	};


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_152_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_152_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserWidget(); \
	friend UMG_API class UClass* Z_Construct_UClass_UUserWidget(); \
public: \
	DECLARE_CLASS(UUserWidget, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUserWidget) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UUserWidget*>(this); }


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_152_INCLASS \
private: \
	static void StaticRegisterNativesUUserWidget(); \
	friend UMG_API class UClass* Z_Construct_UClass_UUserWidget(); \
public: \
	DECLARE_CLASS(UUserWidget, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUserWidget) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UUserWidget*>(this); }


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_152_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserWidget(UUserWidget&&); \
	NO_API UUserWidget(const UUserWidget&); \
public:


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_152_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserWidget(UUserWidget&&); \
	NO_API UUserWidget(const UUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserWidget)


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_152_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NamedSlotBindings() { return STRUCT_OFFSET(UUserWidget, NamedSlotBindings); } \
	FORCEINLINE static uint32 __PPO__InputComponent() { return STRUCT_OFFSET(UUserWidget, InputComponent); }


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_149_PROLOG \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_152_EVENT_PARMS


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_152_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_152_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_152_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_152_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_152_INCLASS \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_152_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_152_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_152_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_152_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_152_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_152_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_152_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h


#define FOREACH_ENUM_EDESIGNPREVIEWSIZEMODE(op) \
	op(EDesignPreviewSizeMode::FillScreen) \
	op(EDesignPreviewSizeMode::Custom) \
	op(EDesignPreviewSizeMode::CustomOnScreen) \
	op(EDesignPreviewSizeMode::Desired) 
#define FOREACH_ENUM_EUMGSEQUENCEPLAYMODE(op) \
	op(EUMGSequencePlayMode::Forward) \
	op(EUMGSequencePlayMode::Reverse) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
