// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class ASpectatorPawn;
class USceneComponent;
struct FRotator;
class AActor;
class UTouchInterface;
struct FKey;
class APlayerState;
struct FViewTargetTransitionParams;
struct FVector_NetQuantize;
class APawn;
class ULocalMessage;
class UObject;
struct FGuid;
struct FColor;
enum class EControllerHand : uint8;
class UHapticFeedbackEffect_Base;
struct FLatentActionInfo;
class UForceFeedbackEffect;
class UCameraShake;
class UCameraAnim;
class AEmitterCameraLensEffectBase;
class UUserWidget;
class AHUD;
class UMaterialInterface;
struct FVector2D;
class USoundBase;
struct FUniqueNetIdRepl;
struct FHitResult;
#ifdef ENGINE_PlayerController_generated_h
#error "PlayerController.generated.h already included, missing '#pragma once' in PlayerController.h"
#endif
#define ENGINE_PlayerController_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_199_RPC_WRAPPERS \
	virtual void OnServerStartedVisualLogger_Implementation(bool bIsLogging); \
	virtual bool ServerToggleAILogging_Validate(); \
	virtual void ServerToggleAILogging_Implementation(); \
	virtual void ClientTeamMessage_Implementation(APlayerState* SenderPlayerState, const FString& S, FName Type, float MsgLifeTime); \
	virtual bool ServerViewSelf_Validate(FViewTargetTransitionParams ); \
	virtual void ServerViewSelf_Implementation(FViewTargetTransitionParams TransitionParams); \
	virtual bool ServerViewPrevPlayer_Validate(); \
	virtual void ServerViewPrevPlayer_Implementation(); \
	virtual bool ServerViewNextPlayer_Validate(); \
	virtual void ServerViewNextPlayer_Implementation(); \
	virtual bool ServerVerifyViewTarget_Validate(); \
	virtual void ServerVerifyViewTarget_Implementation(); \
	 bool ServerUpdateLevelVisibility_Validate(FName , bool ); \
	void ServerUpdateLevelVisibility_Implementation(FName PackageName, bool bIsVisible); \
	virtual bool ServerUpdateCamera_Validate(FVector_NetQuantize , int32 ); \
	virtual void ServerUpdateCamera_Implementation(FVector_NetQuantize CamLoc, int32 CamPitchAndYaw); \
	virtual bool ServerShortTimeout_Validate(); \
	virtual void ServerShortTimeout_Implementation(); \
	virtual bool ServerCheckClientPossessionReliable_Validate(); \
	virtual void ServerCheckClientPossessionReliable_Implementation(); \
	virtual bool ServerCheckClientPossession_Validate(); \
	virtual void ServerCheckClientPossession_Implementation(); \
	virtual bool ServerSetSpectatorLocation_Validate(FVector , FRotator ); \
	virtual void ServerSetSpectatorLocation_Implementation(FVector NewLoc, FRotator NewRot); \
	virtual bool ServerRestartPlayer_Validate(); \
	virtual void ServerRestartPlayer_Implementation(); \
	virtual bool ServerPause_Validate(); \
	virtual void ServerPause_Implementation(); \
	 bool ServerNotifyLoadedWorld_Validate(FName ); \
	void ServerNotifyLoadedWorld_Implementation(FName WorldPackageName); \
	virtual bool ServerChangeName_Validate(const FString& ); \
	virtual void ServerChangeName_Implementation(const FString& S); \
	virtual bool ServerCamera_Validate(FName ); \
	virtual void ServerCamera_Implementation(FName NewMode); \
	virtual bool ServerAcknowledgePossession_Validate(APawn* ); \
	virtual void ServerAcknowledgePossession_Implementation(APawn* P); \
	virtual void ClientReceiveLocalizedMessage_Implementation(TSubclassOf<ULocalMessage>  Message, int32 Switch, APlayerState* RelatedPlayerState_1, APlayerState* RelatedPlayerState_2, UObject* OptionalObject); \
	virtual void ClientRetryClientRestart_Implementation(APawn* NewPawn); \
	virtual void ClientEndOnlineSession_Implementation(); \
	virtual void ClientStartOnlineSession_Implementation(); \
	virtual void ClientWasKicked_Implementation(FText const& KickReason); \
	virtual void ClientUpdateLevelStreamingStatus_Implementation(FName PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int32 LODIndex); \
	virtual void ClientTravelInternal_Implementation(const FString& URL, ETravelType TravelType, bool bSeamless, FGuid MapPackageGuid); \
	virtual void ClientStopForceFeedback_Implementation(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag); \
	virtual void ClientPlayForceFeedback_Implementation(UForceFeedbackEffect* ForceFeedbackEffect, bool bLooping, bool bIgnoreTimeDilation, FName Tag); \
	virtual void ClientStopCameraShake_Implementation(TSubclassOf<UCameraShake>  Shake, bool bImmediately); \
	virtual void ClientStopCameraAnim_Implementation(UCameraAnim* AnimToStop); \
	virtual void ClientClearCameraLensEffects_Implementation(); \
	virtual void ClientSpawnCameraLensEffect_Implementation(TSubclassOf<AEmitterCameraLensEffectBase>  LensEffectEmitterClass); \
	virtual void ClientSetViewTarget_Implementation(AActor* A, FViewTargetTransitionParams TransitionParams); \
	virtual void ClientSetHUD_Implementation(TSubclassOf<AHUD>  NewHUDClass); \
	virtual void ClientSetForceMipLevelsToBeResident_Implementation(UMaterialInterface* Material, float ForceDuration, int32 CinematicTextureGroups); \
	virtual void ClientSetCinematicMode_Implementation(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD); \
	virtual void ClientSetCameraMode_Implementation(FName NewCamMode); \
	virtual void ClientSetCameraFade_Implementation(bool bEnableFading, FColor FadeColor, FVector2D FadeAlpha, float FadeTime, bool bFadeAudio); \
	virtual void ClientSetBlockOnAsyncLoading_Implementation(); \
	virtual void ClientRestart_Implementation(APawn* NewPawn); \
	virtual void ClientReset_Implementation(); \
	virtual void ClientPrestreamTextures_Implementation(AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int32 CinematicTextureGroups); \
	virtual void ClientPrepareMapChange_Implementation(FName LevelName, bool bFirst, bool bLast); \
	virtual void ClientPlaySoundAtLocation_Implementation(USoundBase* Sound, FVector Location, float VolumeMultiplier, float PitchMultiplier); \
	virtual void ClientPlaySound_Implementation(USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier); \
	virtual void ClientPlayCameraShake_Implementation(TSubclassOf<UCameraShake>  Shake, float Scale, ECameraAnimPlaySpace::Type PlaySpace, FRotator UserPlaySpaceRot); \
	virtual void ClientPlayCameraAnim_Implementation(UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, ECameraAnimPlaySpace::Type Space, FRotator CustomPlaySpace); \
	virtual void ClientMessage_Implementation(const FString& S, FName Type, float MsgLifeTime); \
	virtual void ClientIgnoreMoveInput_Implementation(bool bIgnore); \
	virtual void ClientIgnoreLookInput_Implementation(bool bIgnore); \
	virtual void ClientGotoState_Implementation(FName NewState); \
	virtual void ClientGameEnded_Implementation(AActor* EndGameFocus, bool bIsWinner); \
	virtual void ClientForceGarbageCollection_Implementation(); \
	void ClientFlushLevelStreaming_Implementation(); \
	virtual void ClientCommitMapChange_Implementation(); \
	virtual void ClientCapBandwidth_Implementation(int32 Cap); \
	virtual void ClientCancelPendingMapChange_Implementation(); \
	void ClientAddTextureStreamingLoc_Implementation(FVector InLoc, float Duration, bool bOverrideLocation); \
	virtual void ClientUnmutePlayer_Implementation(FUniqueNetIdRepl PlayerId); \
	virtual void ClientMutePlayer_Implementation(FUniqueNetIdRepl PlayerId); \
	virtual bool ServerUnmutePlayer_Validate(FUniqueNetIdRepl ); \
	virtual void ServerUnmutePlayer_Implementation(FUniqueNetIdRepl PlayerId); \
	virtual bool ServerMutePlayer_Validate(FUniqueNetIdRepl ); \
	virtual void ServerMutePlayer_Implementation(FUniqueNetIdRepl PlayerId); \
	virtual void ClientVoiceHandshakeComplete_Implementation(); \
	virtual void ClientEnableNetworkVoice_Implementation(bool bEnable); \
	virtual void ClientRepObjRef_Implementation(UObject* Object); \
	virtual void ClientReturnToMainMenu_Implementation(const FString& ReturnReason); \
	virtual void ClientSetSpectatorWaiting_Implementation(bool bWaiting); \
	virtual bool ServerSetSpectatorWaiting_Validate(bool ); \
	virtual void ServerSetSpectatorWaiting_Implementation(bool bWaiting); \
 \
	DECLARE_FUNCTION(execGetFocalLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetFocalLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpectatorPawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ASpectatorPawn**)Z_Param__Result=this->GetSpectatorPawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnServerStartedVisualLogger) \
	{ \
		P_GET_UBOOL(Z_Param_bIsLogging); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnServerStartedVisualLogger_Implementation(Z_Param_bIsLogging); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCinematicMode) \
	{ \
		P_GET_UBOOL(Z_Param_bInCinematicMode); \
		P_GET_UBOOL(Z_Param_bHidePlayer); \
		P_GET_UBOOL(Z_Param_bAffectsHUD); \
		P_GET_UBOOL(Z_Param_bAffectsMovement); \
		P_GET_UBOOL(Z_Param_bAffectsTurning); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCinematicMode(Z_Param_bInCinematicMode,Z_Param_bHidePlayer,Z_Param_bAffectsHUD,Z_Param_bAffectsMovement,Z_Param_bAffectsTurning); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAudioListenerOverride) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearAudioListenerOverride(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAudioListenerOverride) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAudioListenerOverride(Z_Param_AttachToComponent,Z_Param_Location,Z_Param_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetViewTargetWithBlend) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_NewViewTarget); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendTime); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BlendFunc); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendExp); \
		P_GET_UBOOL(Z_Param_bLockOutgoing); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetViewTargetWithBlend(Z_Param_NewViewTarget,Z_Param_BlendTime,EViewTargetBlendFunction(Z_Param_BlendFunc),Z_Param_BlendExp,Z_Param_bLockOutgoing); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCamera) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Camera(Z_Param_NewMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVirtualJoystickVisibility) \
	{ \
		P_GET_UBOOL(Z_Param_bVisible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVirtualJoystickVisibility(Z_Param_bVisible); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateTouchInterface) \
	{ \
		P_GET_OBJECT(UTouchInterface,Z_Param_NewTouchInterface); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ActivateTouchInterface(Z_Param_NewTouchInterface); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputAnalogStickState) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_WhichStick); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_StickX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_StickY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetInputAnalogStickState(EControllerAnalogStick::Type(Z_Param_WhichStick),Z_Param_Out_StickX,Z_Param_Out_StickY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputMouseDelta) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_DeltaX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_DeltaY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetInputMouseDelta(Z_Param_Out_DeltaX,Z_Param_Out_DeltaY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputKeyTimeDown) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetInputKeyTimeDown(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMousePosition) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_LocationX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_LocationY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetMousePosition(Z_Param_Out_LocationX,Z_Param_Out_LocationY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputMotionState) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Tilt); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RotationRate); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Gravity); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Acceleration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetInputMotionState(Z_Param_Out_Tilt,Z_Param_Out_RotationRate,Z_Param_Out_Gravity,Z_Param_Out_Acceleration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputTouchState) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FingerIndex); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_LocationX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_LocationY); \
		P_GET_UBOOL_REF(Z_Param_Out_bIsCurrentlyPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetInputTouchState(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_Out_LocationX,Z_Param_Out_LocationY,Z_Param_Out_bIsCurrentlyPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputVectorKeyState) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetInputVectorKeyState(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputAnalogKeyState) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetInputAnalogKeyState(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasInputKeyJustReleased) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->WasInputKeyJustReleased(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasInputKeyJustPressed) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->WasInputKeyJustPressed(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInputKeyDown) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsInputKeyDown(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddRollInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddRollInput(Z_Param_Val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddYawInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddYawInput(Z_Param_Val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddPitchInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddPitchInput(Z_Param_Val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerToggleAILogging) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerToggleAILogging_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerToggleAILogging_Validate")); \
			return; \
		} \
		this->ServerToggleAILogging_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientTeamMessage) \
	{ \
		P_GET_OBJECT(APlayerState,Z_Param_SenderPlayerState); \
		P_GET_PROPERTY(UStrProperty,Z_Param_S); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Type); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MsgLifeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientTeamMessage_Implementation(Z_Param_SenderPlayerState,Z_Param_S,Z_Param_Type,Z_Param_MsgLifeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerViewSelf) \
	{ \
		P_GET_STRUCT(FViewTargetTransitionParams,Z_Param_TransitionParams); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerViewSelf_Validate(Z_Param_TransitionParams)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerViewSelf_Validate")); \
			return; \
		} \
		this->ServerViewSelf_Implementation(Z_Param_TransitionParams); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerViewPrevPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerViewPrevPlayer_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerViewPrevPlayer_Validate")); \
			return; \
		} \
		this->ServerViewPrevPlayer_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerViewNextPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerViewNextPlayer_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerViewNextPlayer_Validate")); \
			return; \
		} \
		this->ServerViewNextPlayer_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerVerifyViewTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerVerifyViewTarget_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerVerifyViewTarget_Validate")); \
			return; \
		} \
		this->ServerVerifyViewTarget_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerUpdateLevelVisibility) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackageName); \
		P_GET_UBOOL(Z_Param_bIsVisible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerUpdateLevelVisibility_Validate(Z_Param_PackageName,Z_Param_bIsVisible)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerUpdateLevelVisibility_Validate")); \
			return; \
		} \
		this->ServerUpdateLevelVisibility_Implementation(Z_Param_PackageName,Z_Param_bIsVisible); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerUpdateCamera) \
	{ \
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_CamLoc); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CamPitchAndYaw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerUpdateCamera_Validate(Z_Param_CamLoc,Z_Param_CamPitchAndYaw)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerUpdateCamera_Validate")); \
			return; \
		} \
		this->ServerUpdateCamera_Implementation(Z_Param_CamLoc,Z_Param_CamPitchAndYaw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerShortTimeout) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerShortTimeout_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerShortTimeout_Validate")); \
			return; \
		} \
		this->ServerShortTimeout_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerCheckClientPossessionReliable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerCheckClientPossessionReliable_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerCheckClientPossessionReliable_Validate")); \
			return; \
		} \
		this->ServerCheckClientPossessionReliable_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerCheckClientPossession) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerCheckClientPossession_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerCheckClientPossession_Validate")); \
			return; \
		} \
		this->ServerCheckClientPossession_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetSpectatorLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLoc); \
		P_GET_STRUCT(FRotator,Z_Param_NewRot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerSetSpectatorLocation_Validate(Z_Param_NewLoc,Z_Param_NewRot)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetSpectatorLocation_Validate")); \
			return; \
		} \
		this->ServerSetSpectatorLocation_Implementation(Z_Param_NewLoc,Z_Param_NewRot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerRestartPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerRestartPlayer_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerRestartPlayer_Validate")); \
			return; \
		} \
		this->ServerRestartPlayer_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerPause) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerPause_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerPause_Validate")); \
			return; \
		} \
		this->ServerPause_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerNotifyLoadedWorld) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_WorldPackageName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerNotifyLoadedWorld_Validate(Z_Param_WorldPackageName)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerNotifyLoadedWorld_Validate")); \
			return; \
		} \
		this->ServerNotifyLoadedWorld_Implementation(Z_Param_WorldPackageName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerChangeName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_S); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerChangeName_Validate(Z_Param_S)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerChangeName_Validate")); \
			return; \
		} \
		this->ServerChangeName_Implementation(Z_Param_S); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerCamera) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerCamera_Validate(Z_Param_NewMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerCamera_Validate")); \
			return; \
		} \
		this->ServerCamera_Implementation(Z_Param_NewMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerAcknowledgePossession) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_P); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerAcknowledgePossession_Validate(Z_Param_P)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerAcknowledgePossession_Validate")); \
			return; \
		} \
		this->ServerAcknowledgePossession_Implementation(Z_Param_P); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientReceiveLocalizedMessage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Message); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Switch); \
		P_GET_OBJECT(APlayerState,Z_Param_RelatedPlayerState_1); \
		P_GET_OBJECT(APlayerState,Z_Param_RelatedPlayerState_2); \
		P_GET_OBJECT(UObject,Z_Param_OptionalObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientReceiveLocalizedMessage_Implementation(Z_Param_Message,Z_Param_Switch,Z_Param_RelatedPlayerState_1,Z_Param_RelatedPlayerState_2,Z_Param_OptionalObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientRetryClientRestart) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_NewPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientRetryClientRestart_Implementation(Z_Param_NewPawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientEndOnlineSession) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientEndOnlineSession_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientStartOnlineSession) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientStartOnlineSession_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientWasKicked) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_KickReason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientWasKicked_Implementation(Z_Param_KickReason); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientUpdateLevelStreamingStatus) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackageName); \
		P_GET_UBOOL(Z_Param_bNewShouldBeLoaded); \
		P_GET_UBOOL(Z_Param_bNewShouldBeVisible); \
		P_GET_UBOOL(Z_Param_bNewShouldBlockOnLoad); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientUpdateLevelStreamingStatus_Implementation(Z_Param_PackageName,Z_Param_bNewShouldBeLoaded,Z_Param_bNewShouldBeVisible,Z_Param_bNewShouldBlockOnLoad,Z_Param_LODIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientTravelInternal) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TravelType); \
		P_GET_UBOOL(Z_Param_bSeamless); \
		P_GET_STRUCT(FGuid,Z_Param_MapPackageGuid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientTravelInternal_Implementation(Z_Param_URL,ETravelType(Z_Param_TravelType),Z_Param_bSeamless,Z_Param_MapPackageGuid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientTravel) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TravelType); \
		P_GET_UBOOL(Z_Param_bSeamless); \
		P_GET_STRUCT(FGuid,Z_Param_MapPackageGuid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientTravel(Z_Param_URL,ETravelType(Z_Param_TravelType),Z_Param_bSeamless,Z_Param_MapPackageGuid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetControllerLightColor) \
	{ \
		P_GET_STRUCT(FColor,Z_Param_Color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetControllerLightColor(Z_Param_Color); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHapticsByValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Frequency); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amplitude); \
		P_GET_ENUM(EControllerHand,Z_Param_Hand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetHapticsByValue(Z_Param_Frequency,Z_Param_Amplitude,EControllerHand(Z_Param_Hand)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopHapticEffect) \
	{ \
		P_GET_ENUM(EControllerHand,Z_Param_Hand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopHapticEffect(EControllerHand(Z_Param_Hand)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayHapticEffect) \
	{ \
		P_GET_OBJECT(UHapticFeedbackEffect_Base,Z_Param_HapticEffect); \
		P_GET_ENUM(EControllerHand,Z_Param_Hand); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_GET_UBOOL(Z_Param_bLoop); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PlayHapticEffect(Z_Param_HapticEffect,EControllerHand(Z_Param_Hand),Z_Param_Scale,Z_Param_bLoop); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayDynamicForceFeedback) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Intensity); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_UBOOL(Z_Param_bAffectsLeftLarge); \
		P_GET_UBOOL(Z_Param_bAffectsLeftSmall); \
		P_GET_UBOOL(Z_Param_bAffectsRightLarge); \
		P_GET_UBOOL(Z_Param_bAffectsRightSmall); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Action); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PlayDynamicForceFeedback(Z_Param_Intensity,Z_Param_Duration,Z_Param_bAffectsLeftLarge,Z_Param_bAffectsLeftSmall,Z_Param_bAffectsRightLarge,Z_Param_bAffectsRightSmall,EDynamicForceFeedbackAction::Type(Z_Param_Action),Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientStopForceFeedback) \
	{ \
		P_GET_OBJECT(UForceFeedbackEffect,Z_Param_ForceFeedbackEffect); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientStopForceFeedback_Implementation(Z_Param_ForceFeedbackEffect,Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientPlayForceFeedback) \
	{ \
		P_GET_OBJECT(UForceFeedbackEffect,Z_Param_ForceFeedbackEffect); \
		P_GET_UBOOL(Z_Param_bLooping); \
		P_GET_UBOOL(Z_Param_bIgnoreTimeDilation); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientPlayForceFeedback_Implementation(Z_Param_ForceFeedbackEffect,Z_Param_bLooping,Z_Param_bIgnoreTimeDilation,Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientStopCameraShake) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Shake); \
		P_GET_UBOOL(Z_Param_bImmediately); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientStopCameraShake_Implementation(Z_Param_Shake,Z_Param_bImmediately); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientStopCameraAnim) \
	{ \
		P_GET_OBJECT(UCameraAnim,Z_Param_AnimToStop); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientStopCameraAnim_Implementation(Z_Param_AnimToStop); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientClearCameraLensEffects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientClearCameraLensEffects_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientSpawnCameraLensEffect) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_LensEffectEmitterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientSpawnCameraLensEffect_Implementation(Z_Param_LensEffectEmitterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientSetViewTarget) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_A); \
		P_GET_STRUCT(FViewTargetTransitionParams,Z_Param_TransitionParams); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientSetViewTarget_Implementation(Z_Param_A,Z_Param_TransitionParams); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseCursorWidget) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Cursor); \
		P_GET_OBJECT(UUserWidget,Z_Param_CursorWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMouseCursorWidget(EMouseCursor::Type(Z_Param_Cursor),Z_Param_CursorWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHUD) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AHUD**)Z_Param__Result=this->GetHUD(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewportSize) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_SizeX); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_SizeY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetViewportSize(Z_Param_Out_SizeX,Z_Param_Out_SizeY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientSetHUD) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewHUDClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientSetHUD_Implementation(Z_Param_NewHUDClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientSetForceMipLevelsToBeResident) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ForceDuration); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CinematicTextureGroups); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientSetForceMipLevelsToBeResident_Implementation(Z_Param_Material,Z_Param_ForceDuration,Z_Param_CinematicTextureGroups); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientSetCinematicMode) \
	{ \
		P_GET_UBOOL(Z_Param_bInCinematicMode); \
		P_GET_UBOOL(Z_Param_bAffectsMovement); \
		P_GET_UBOOL(Z_Param_bAffectsTurning); \
		P_GET_UBOOL(Z_Param_bAffectsHUD); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientSetCinematicMode_Implementation(Z_Param_bInCinematicMode,Z_Param_bAffectsMovement,Z_Param_bAffectsTurning,Z_Param_bAffectsHUD); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientSetCameraMode) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewCamMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientSetCameraMode_Implementation(Z_Param_NewCamMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientSetCameraFade) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableFading); \
		P_GET_STRUCT(FColor,Z_Param_FadeColor); \
		P_GET_STRUCT(FVector2D,Z_Param_FadeAlpha); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_GET_UBOOL(Z_Param_bFadeAudio); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientSetCameraFade_Implementation(Z_Param_bEnableFading,Z_Param_FadeColor,Z_Param_FadeAlpha,Z_Param_FadeTime,Z_Param_bFadeAudio); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientSetBlockOnAsyncLoading) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientSetBlockOnAsyncLoading_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientRestart) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_NewPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientRestart_Implementation(Z_Param_NewPawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientReset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientReset_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientPrestreamTextures) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ForcedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ForceDuration); \
		P_GET_UBOOL(Z_Param_bEnableStreaming); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CinematicTextureGroups); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientPrestreamTextures_Implementation(Z_Param_ForcedActor,Z_Param_ForceDuration,Z_Param_bEnableStreaming,Z_Param_CinematicTextureGroups); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientPrepareMapChange) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_LevelName); \
		P_GET_UBOOL(Z_Param_bFirst); \
		P_GET_UBOOL(Z_Param_bLast); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientPrepareMapChange_Implementation(Z_Param_LevelName,Z_Param_bFirst,Z_Param_bLast); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientPlaySoundAtLocation) \
	{ \
		P_GET_OBJECT(USoundBase,Z_Param_Sound); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientPlaySoundAtLocation_Implementation(Z_Param_Sound,Z_Param_Location,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientPlaySound) \
	{ \
		P_GET_OBJECT(USoundBase,Z_Param_Sound); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientPlaySound_Implementation(Z_Param_Sound,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientPlayCameraShake) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Shake); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PlaySpace); \
		P_GET_STRUCT(FRotator,Z_Param_UserPlaySpaceRot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientPlayCameraShake_Implementation(Z_Param_Shake,Z_Param_Scale,ECameraAnimPlaySpace::Type(Z_Param_PlaySpace),Z_Param_UserPlaySpaceRot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientPlayCameraAnim) \
	{ \
		P_GET_OBJECT(UCameraAnim,Z_Param_AnimToPlay); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendInTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendOutTime); \
		P_GET_UBOOL(Z_Param_bLoop); \
		P_GET_UBOOL(Z_Param_bRandomStartTime); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Space); \
		P_GET_STRUCT(FRotator,Z_Param_CustomPlaySpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientPlayCameraAnim_Implementation(Z_Param_AnimToPlay,Z_Param_Scale,Z_Param_Rate,Z_Param_BlendInTime,Z_Param_BlendOutTime,Z_Param_bLoop,Z_Param_bRandomStartTime,ECameraAnimPlaySpace::Type(Z_Param_Space),Z_Param_CustomPlaySpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientMessage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_S); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Type); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MsgLifeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientMessage_Implementation(Z_Param_S,Z_Param_Type,Z_Param_MsgLifeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientIgnoreMoveInput) \
	{ \
		P_GET_UBOOL(Z_Param_bIgnore); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientIgnoreMoveInput_Implementation(Z_Param_bIgnore); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientIgnoreLookInput) \
	{ \
		P_GET_UBOOL(Z_Param_bIgnore); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientIgnoreLookInput_Implementation(Z_Param_bIgnore); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientGotoState) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientGotoState_Implementation(Z_Param_NewState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientGameEnded) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_EndGameFocus); \
		P_GET_UBOOL(Z_Param_bIsWinner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientGameEnded_Implementation(Z_Param_EndGameFocus,Z_Param_bIsWinner); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientForceGarbageCollection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientForceGarbageCollection_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientFlushLevelStreaming) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientFlushLevelStreaming_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientCommitMapChange) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientCommitMapChange_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientCapBandwidth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Cap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientCapBandwidth_Implementation(Z_Param_Cap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientCancelPendingMapChange) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientCancelPendingMapChange_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientAddTextureStreamingLoc) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InLoc); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_UBOOL(Z_Param_bOverrideLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientAddTextureStreamingLoc_Implementation(Z_Param_InLoc,Z_Param_Duration,Z_Param_bOverrideLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendToConsole) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Command); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SendToConsole(Z_Param_Command); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConsoleKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ConsoleKey(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientUnmutePlayer) \
	{ \
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientUnmutePlayer_Implementation(Z_Param_PlayerId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientMutePlayer) \
	{ \
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientMutePlayer_Implementation(Z_Param_PlayerId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerUnmutePlayer) \
	{ \
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerUnmutePlayer_Validate(Z_Param_PlayerId)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerUnmutePlayer_Validate")); \
			return; \
		} \
		this->ServerUnmutePlayer_Implementation(Z_Param_PlayerId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMutePlayer) \
	{ \
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMutePlayer_Validate(Z_Param_PlayerId)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMutePlayer_Validate")); \
			return; \
		} \
		this->ServerMutePlayer_Implementation(Z_Param_PlayerId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientVoiceHandshakeComplete) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientVoiceHandshakeComplete_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleSpeaking) \
	{ \
		P_GET_UBOOL(Z_Param_bInSpeaking); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ToggleSpeaking(Z_Param_bInSpeaking); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientEnableNetworkVoice) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientEnableNetworkVoice_Implementation(Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFire) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FireModeNum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartFire(Z_Param_FireModeNum); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseLocation) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMouseLocation(Z_Param_X,Z_Param_Y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectWorldLocationToScreen) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ScreenLocation); \
		P_GET_UBOOL(Z_Param_bPlayerViewportRelative); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->ProjectWorldLocationToScreen(Z_Param_WorldLocation,Z_Param_Out_ScreenLocation,Z_Param_bPlayerViewportRelative); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeprojectScreenPositionToWorld) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenX); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenY); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DeprojectScreenPositionToWorld(Z_Param_ScreenX,Z_Param_ScreenY,Z_Param_Out_WorldLocation,Z_Param_Out_WorldDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeprojectMousePositionToWorld) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DeprojectMousePositionToWorld(Z_Param_Out_WorldLocation,Z_Param_Out_WorldDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitResultUnderFingerForObjects) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FingerIndex); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetHitResultUnderFingerForObjects(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_HitResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitResultUnderFingerByChannel) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FingerIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetHitResultUnderFingerByChannel(ETouchIndex::Type(Z_Param_FingerIndex),ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_HitResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitResultUnderFinger) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FingerIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetHitResultUnderFinger(ETouchIndex::Type(Z_Param_FingerIndex),ECollisionChannel(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_HitResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitResultUnderCursorForObjects) \
	{ \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetHitResultUnderCursorForObjects(Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_HitResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitResultUnderCursorByChannel) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetHitResultUnderCursorByChannel(ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_HitResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitResultUnderCursor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetHitResultUnderCursor(ECollisionChannel(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_HitResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwitchLevel) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SwitchLevel(Z_Param_URL); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_S); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetName(Z_Param_S); \
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
	DECLARE_FUNCTION(execClientRepObjRef) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientRepObjRef_Implementation(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientReturnToMainMenu) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReturnReason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientReturnToMainMenu_Implementation(Z_Param_ReturnReason); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLocalTravel) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->LocalTravel(Z_Param_URL); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestartLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RestartLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOV) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewFOV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FOV(Z_Param_NewFOV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableCheats) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->EnableCheats(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientSetSpectatorWaiting) \
	{ \
		P_GET_UBOOL(Z_Param_bWaiting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientSetSpectatorWaiting_Implementation(Z_Param_bWaiting); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetSpectatorWaiting) \
	{ \
		P_GET_UBOOL(Z_Param_bWaiting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerSetSpectatorWaiting_Validate(Z_Param_bWaiting)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetSpectatorWaiting_Validate")); \
			return; \
		} \
		this->ServerSetSpectatorWaiting_Implementation(Z_Param_bWaiting); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_199_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnServerStartedVisualLogger_Implementation(bool bIsLogging); \
	virtual bool ServerToggleAILogging_Validate(); \
	virtual void ServerToggleAILogging_Implementation(); \
	virtual void ClientTeamMessage_Implementation(APlayerState* SenderPlayerState, const FString& S, FName Type, float MsgLifeTime); \
	virtual bool ServerViewSelf_Validate(FViewTargetTransitionParams ); \
	virtual void ServerViewSelf_Implementation(FViewTargetTransitionParams TransitionParams); \
	virtual bool ServerViewPrevPlayer_Validate(); \
	virtual void ServerViewPrevPlayer_Implementation(); \
	virtual bool ServerViewNextPlayer_Validate(); \
	virtual void ServerViewNextPlayer_Implementation(); \
	virtual bool ServerVerifyViewTarget_Validate(); \
	virtual void ServerVerifyViewTarget_Implementation(); \
	 bool ServerUpdateLevelVisibility_Validate(FName , bool ); \
	void ServerUpdateLevelVisibility_Implementation(FName PackageName, bool bIsVisible); \
	virtual bool ServerUpdateCamera_Validate(FVector_NetQuantize , int32 ); \
	virtual void ServerUpdateCamera_Implementation(FVector_NetQuantize CamLoc, int32 CamPitchAndYaw); \
	virtual bool ServerShortTimeout_Validate(); \
	virtual void ServerShortTimeout_Implementation(); \
	virtual bool ServerCheckClientPossessionReliable_Validate(); \
	virtual void ServerCheckClientPossessionReliable_Implementation(); \
	virtual bool ServerCheckClientPossession_Validate(); \
	virtual void ServerCheckClientPossession_Implementation(); \
	virtual bool ServerSetSpectatorLocation_Validate(FVector , FRotator ); \
	virtual void ServerSetSpectatorLocation_Implementation(FVector NewLoc, FRotator NewRot); \
	virtual bool ServerRestartPlayer_Validate(); \
	virtual void ServerRestartPlayer_Implementation(); \
	virtual bool ServerPause_Validate(); \
	virtual void ServerPause_Implementation(); \
	 bool ServerNotifyLoadedWorld_Validate(FName ); \
	void ServerNotifyLoadedWorld_Implementation(FName WorldPackageName); \
	virtual bool ServerChangeName_Validate(const FString& ); \
	virtual void ServerChangeName_Implementation(const FString& S); \
	virtual bool ServerCamera_Validate(FName ); \
	virtual void ServerCamera_Implementation(FName NewMode); \
	virtual bool ServerAcknowledgePossession_Validate(APawn* ); \
	virtual void ServerAcknowledgePossession_Implementation(APawn* P); \
	virtual void ClientReceiveLocalizedMessage_Implementation(TSubclassOf<ULocalMessage>  Message, int32 Switch, APlayerState* RelatedPlayerState_1, APlayerState* RelatedPlayerState_2, UObject* OptionalObject); \
	virtual void ClientRetryClientRestart_Implementation(APawn* NewPawn); \
	virtual void ClientEndOnlineSession_Implementation(); \
	virtual void ClientStartOnlineSession_Implementation(); \
	virtual void ClientWasKicked_Implementation(FText const& KickReason); \
	virtual void ClientUpdateLevelStreamingStatus_Implementation(FName PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int32 LODIndex); \
	virtual void ClientTravelInternal_Implementation(const FString& URL, ETravelType TravelType, bool bSeamless, FGuid MapPackageGuid); \
	virtual void ClientStopForceFeedback_Implementation(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag); \
	virtual void ClientPlayForceFeedback_Implementation(UForceFeedbackEffect* ForceFeedbackEffect, bool bLooping, bool bIgnoreTimeDilation, FName Tag); \
	virtual void ClientStopCameraShake_Implementation(TSubclassOf<UCameraShake>  Shake, bool bImmediately); \
	virtual void ClientStopCameraAnim_Implementation(UCameraAnim* AnimToStop); \
	virtual void ClientClearCameraLensEffects_Implementation(); \
	virtual void ClientSpawnCameraLensEffect_Implementation(TSubclassOf<AEmitterCameraLensEffectBase>  LensEffectEmitterClass); \
	virtual void ClientSetViewTarget_Implementation(AActor* A, FViewTargetTransitionParams TransitionParams); \
	virtual void ClientSetHUD_Implementation(TSubclassOf<AHUD>  NewHUDClass); \
	virtual void ClientSetForceMipLevelsToBeResident_Implementation(UMaterialInterface* Material, float ForceDuration, int32 CinematicTextureGroups); \
	virtual void ClientSetCinematicMode_Implementation(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD); \
	virtual void ClientSetCameraMode_Implementation(FName NewCamMode); \
	virtual void ClientSetCameraFade_Implementation(bool bEnableFading, FColor FadeColor, FVector2D FadeAlpha, float FadeTime, bool bFadeAudio); \
	virtual void ClientSetBlockOnAsyncLoading_Implementation(); \
	virtual void ClientRestart_Implementation(APawn* NewPawn); \
	virtual void ClientReset_Implementation(); \
	virtual void ClientPrestreamTextures_Implementation(AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int32 CinematicTextureGroups); \
	virtual void ClientPrepareMapChange_Implementation(FName LevelName, bool bFirst, bool bLast); \
	virtual void ClientPlaySoundAtLocation_Implementation(USoundBase* Sound, FVector Location, float VolumeMultiplier, float PitchMultiplier); \
	virtual void ClientPlaySound_Implementation(USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier); \
	virtual void ClientPlayCameraShake_Implementation(TSubclassOf<UCameraShake>  Shake, float Scale, ECameraAnimPlaySpace::Type PlaySpace, FRotator UserPlaySpaceRot); \
	virtual void ClientPlayCameraAnim_Implementation(UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, ECameraAnimPlaySpace::Type Space, FRotator CustomPlaySpace); \
	virtual void ClientMessage_Implementation(const FString& S, FName Type, float MsgLifeTime); \
	virtual void ClientIgnoreMoveInput_Implementation(bool bIgnore); \
	virtual void ClientIgnoreLookInput_Implementation(bool bIgnore); \
	virtual void ClientGotoState_Implementation(FName NewState); \
	virtual void ClientGameEnded_Implementation(AActor* EndGameFocus, bool bIsWinner); \
	virtual void ClientForceGarbageCollection_Implementation(); \
	void ClientFlushLevelStreaming_Implementation(); \
	virtual void ClientCommitMapChange_Implementation(); \
	virtual void ClientCapBandwidth_Implementation(int32 Cap); \
	virtual void ClientCancelPendingMapChange_Implementation(); \
	void ClientAddTextureStreamingLoc_Implementation(FVector InLoc, float Duration, bool bOverrideLocation); \
	virtual void ClientUnmutePlayer_Implementation(FUniqueNetIdRepl PlayerId); \
	virtual void ClientMutePlayer_Implementation(FUniqueNetIdRepl PlayerId); \
	virtual bool ServerUnmutePlayer_Validate(FUniqueNetIdRepl ); \
	virtual void ServerUnmutePlayer_Implementation(FUniqueNetIdRepl PlayerId); \
	virtual bool ServerMutePlayer_Validate(FUniqueNetIdRepl ); \
	virtual void ServerMutePlayer_Implementation(FUniqueNetIdRepl PlayerId); \
	virtual void ClientVoiceHandshakeComplete_Implementation(); \
	virtual void ClientEnableNetworkVoice_Implementation(bool bEnable); \
	virtual void ClientRepObjRef_Implementation(UObject* Object); \
	virtual void ClientReturnToMainMenu_Implementation(const FString& ReturnReason); \
	virtual void ClientSetSpectatorWaiting_Implementation(bool bWaiting); \
	virtual bool ServerSetSpectatorWaiting_Validate(bool ); \
	virtual void ServerSetSpectatorWaiting_Implementation(bool bWaiting); \
 \
	DECLARE_FUNCTION(execGetFocalLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetFocalLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpectatorPawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ASpectatorPawn**)Z_Param__Result=this->GetSpectatorPawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnServerStartedVisualLogger) \
	{ \
		P_GET_UBOOL(Z_Param_bIsLogging); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnServerStartedVisualLogger_Implementation(Z_Param_bIsLogging); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCinematicMode) \
	{ \
		P_GET_UBOOL(Z_Param_bInCinematicMode); \
		P_GET_UBOOL(Z_Param_bHidePlayer); \
		P_GET_UBOOL(Z_Param_bAffectsHUD); \
		P_GET_UBOOL(Z_Param_bAffectsMovement); \
		P_GET_UBOOL(Z_Param_bAffectsTurning); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCinematicMode(Z_Param_bInCinematicMode,Z_Param_bHidePlayer,Z_Param_bAffectsHUD,Z_Param_bAffectsMovement,Z_Param_bAffectsTurning); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAudioListenerOverride) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearAudioListenerOverride(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAudioListenerOverride) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAudioListenerOverride(Z_Param_AttachToComponent,Z_Param_Location,Z_Param_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetViewTargetWithBlend) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_NewViewTarget); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendTime); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BlendFunc); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendExp); \
		P_GET_UBOOL(Z_Param_bLockOutgoing); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetViewTargetWithBlend(Z_Param_NewViewTarget,Z_Param_BlendTime,EViewTargetBlendFunction(Z_Param_BlendFunc),Z_Param_BlendExp,Z_Param_bLockOutgoing); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCamera) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Camera(Z_Param_NewMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVirtualJoystickVisibility) \
	{ \
		P_GET_UBOOL(Z_Param_bVisible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVirtualJoystickVisibility(Z_Param_bVisible); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateTouchInterface) \
	{ \
		P_GET_OBJECT(UTouchInterface,Z_Param_NewTouchInterface); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ActivateTouchInterface(Z_Param_NewTouchInterface); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputAnalogStickState) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_WhichStick); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_StickX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_StickY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetInputAnalogStickState(EControllerAnalogStick::Type(Z_Param_WhichStick),Z_Param_Out_StickX,Z_Param_Out_StickY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputMouseDelta) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_DeltaX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_DeltaY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetInputMouseDelta(Z_Param_Out_DeltaX,Z_Param_Out_DeltaY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputKeyTimeDown) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetInputKeyTimeDown(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMousePosition) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_LocationX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_LocationY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetMousePosition(Z_Param_Out_LocationX,Z_Param_Out_LocationY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputMotionState) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Tilt); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RotationRate); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Gravity); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Acceleration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetInputMotionState(Z_Param_Out_Tilt,Z_Param_Out_RotationRate,Z_Param_Out_Gravity,Z_Param_Out_Acceleration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputTouchState) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FingerIndex); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_LocationX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_LocationY); \
		P_GET_UBOOL_REF(Z_Param_Out_bIsCurrentlyPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetInputTouchState(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_Out_LocationX,Z_Param_Out_LocationY,Z_Param_Out_bIsCurrentlyPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputVectorKeyState) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetInputVectorKeyState(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputAnalogKeyState) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetInputAnalogKeyState(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasInputKeyJustReleased) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->WasInputKeyJustReleased(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasInputKeyJustPressed) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->WasInputKeyJustPressed(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInputKeyDown) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsInputKeyDown(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddRollInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddRollInput(Z_Param_Val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddYawInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddYawInput(Z_Param_Val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddPitchInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddPitchInput(Z_Param_Val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerToggleAILogging) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerToggleAILogging_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerToggleAILogging_Validate")); \
			return; \
		} \
		this->ServerToggleAILogging_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientTeamMessage) \
	{ \
		P_GET_OBJECT(APlayerState,Z_Param_SenderPlayerState); \
		P_GET_PROPERTY(UStrProperty,Z_Param_S); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Type); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MsgLifeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientTeamMessage_Implementation(Z_Param_SenderPlayerState,Z_Param_S,Z_Param_Type,Z_Param_MsgLifeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerViewSelf) \
	{ \
		P_GET_STRUCT(FViewTargetTransitionParams,Z_Param_TransitionParams); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerViewSelf_Validate(Z_Param_TransitionParams)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerViewSelf_Validate")); \
			return; \
		} \
		this->ServerViewSelf_Implementation(Z_Param_TransitionParams); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerViewPrevPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerViewPrevPlayer_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerViewPrevPlayer_Validate")); \
			return; \
		} \
		this->ServerViewPrevPlayer_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerViewNextPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerViewNextPlayer_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerViewNextPlayer_Validate")); \
			return; \
		} \
		this->ServerViewNextPlayer_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerVerifyViewTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerVerifyViewTarget_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerVerifyViewTarget_Validate")); \
			return; \
		} \
		this->ServerVerifyViewTarget_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerUpdateLevelVisibility) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackageName); \
		P_GET_UBOOL(Z_Param_bIsVisible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerUpdateLevelVisibility_Validate(Z_Param_PackageName,Z_Param_bIsVisible)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerUpdateLevelVisibility_Validate")); \
			return; \
		} \
		this->ServerUpdateLevelVisibility_Implementation(Z_Param_PackageName,Z_Param_bIsVisible); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerUpdateCamera) \
	{ \
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_CamLoc); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CamPitchAndYaw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerUpdateCamera_Validate(Z_Param_CamLoc,Z_Param_CamPitchAndYaw)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerUpdateCamera_Validate")); \
			return; \
		} \
		this->ServerUpdateCamera_Implementation(Z_Param_CamLoc,Z_Param_CamPitchAndYaw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerShortTimeout) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerShortTimeout_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerShortTimeout_Validate")); \
			return; \
		} \
		this->ServerShortTimeout_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerCheckClientPossessionReliable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerCheckClientPossessionReliable_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerCheckClientPossessionReliable_Validate")); \
			return; \
		} \
		this->ServerCheckClientPossessionReliable_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerCheckClientPossession) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerCheckClientPossession_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerCheckClientPossession_Validate")); \
			return; \
		} \
		this->ServerCheckClientPossession_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetSpectatorLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLoc); \
		P_GET_STRUCT(FRotator,Z_Param_NewRot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerSetSpectatorLocation_Validate(Z_Param_NewLoc,Z_Param_NewRot)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetSpectatorLocation_Validate")); \
			return; \
		} \
		this->ServerSetSpectatorLocation_Implementation(Z_Param_NewLoc,Z_Param_NewRot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerRestartPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerRestartPlayer_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerRestartPlayer_Validate")); \
			return; \
		} \
		this->ServerRestartPlayer_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerPause) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerPause_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerPause_Validate")); \
			return; \
		} \
		this->ServerPause_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerNotifyLoadedWorld) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_WorldPackageName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerNotifyLoadedWorld_Validate(Z_Param_WorldPackageName)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerNotifyLoadedWorld_Validate")); \
			return; \
		} \
		this->ServerNotifyLoadedWorld_Implementation(Z_Param_WorldPackageName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerChangeName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_S); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerChangeName_Validate(Z_Param_S)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerChangeName_Validate")); \
			return; \
		} \
		this->ServerChangeName_Implementation(Z_Param_S); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerCamera) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerCamera_Validate(Z_Param_NewMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerCamera_Validate")); \
			return; \
		} \
		this->ServerCamera_Implementation(Z_Param_NewMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerAcknowledgePossession) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_P); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerAcknowledgePossession_Validate(Z_Param_P)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerAcknowledgePossession_Validate")); \
			return; \
		} \
		this->ServerAcknowledgePossession_Implementation(Z_Param_P); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientReceiveLocalizedMessage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Message); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Switch); \
		P_GET_OBJECT(APlayerState,Z_Param_RelatedPlayerState_1); \
		P_GET_OBJECT(APlayerState,Z_Param_RelatedPlayerState_2); \
		P_GET_OBJECT(UObject,Z_Param_OptionalObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientReceiveLocalizedMessage_Implementation(Z_Param_Message,Z_Param_Switch,Z_Param_RelatedPlayerState_1,Z_Param_RelatedPlayerState_2,Z_Param_OptionalObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientRetryClientRestart) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_NewPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientRetryClientRestart_Implementation(Z_Param_NewPawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientEndOnlineSession) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientEndOnlineSession_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientStartOnlineSession) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientStartOnlineSession_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientWasKicked) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_KickReason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientWasKicked_Implementation(Z_Param_KickReason); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientUpdateLevelStreamingStatus) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackageName); \
		P_GET_UBOOL(Z_Param_bNewShouldBeLoaded); \
		P_GET_UBOOL(Z_Param_bNewShouldBeVisible); \
		P_GET_UBOOL(Z_Param_bNewShouldBlockOnLoad); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientUpdateLevelStreamingStatus_Implementation(Z_Param_PackageName,Z_Param_bNewShouldBeLoaded,Z_Param_bNewShouldBeVisible,Z_Param_bNewShouldBlockOnLoad,Z_Param_LODIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientTravelInternal) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TravelType); \
		P_GET_UBOOL(Z_Param_bSeamless); \
		P_GET_STRUCT(FGuid,Z_Param_MapPackageGuid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientTravelInternal_Implementation(Z_Param_URL,ETravelType(Z_Param_TravelType),Z_Param_bSeamless,Z_Param_MapPackageGuid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientTravel) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TravelType); \
		P_GET_UBOOL(Z_Param_bSeamless); \
		P_GET_STRUCT(FGuid,Z_Param_MapPackageGuid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientTravel(Z_Param_URL,ETravelType(Z_Param_TravelType),Z_Param_bSeamless,Z_Param_MapPackageGuid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetControllerLightColor) \
	{ \
		P_GET_STRUCT(FColor,Z_Param_Color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetControllerLightColor(Z_Param_Color); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHapticsByValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Frequency); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amplitude); \
		P_GET_ENUM(EControllerHand,Z_Param_Hand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetHapticsByValue(Z_Param_Frequency,Z_Param_Amplitude,EControllerHand(Z_Param_Hand)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopHapticEffect) \
	{ \
		P_GET_ENUM(EControllerHand,Z_Param_Hand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopHapticEffect(EControllerHand(Z_Param_Hand)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayHapticEffect) \
	{ \
		P_GET_OBJECT(UHapticFeedbackEffect_Base,Z_Param_HapticEffect); \
		P_GET_ENUM(EControllerHand,Z_Param_Hand); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_GET_UBOOL(Z_Param_bLoop); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PlayHapticEffect(Z_Param_HapticEffect,EControllerHand(Z_Param_Hand),Z_Param_Scale,Z_Param_bLoop); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayDynamicForceFeedback) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Intensity); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_UBOOL(Z_Param_bAffectsLeftLarge); \
		P_GET_UBOOL(Z_Param_bAffectsLeftSmall); \
		P_GET_UBOOL(Z_Param_bAffectsRightLarge); \
		P_GET_UBOOL(Z_Param_bAffectsRightSmall); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Action); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PlayDynamicForceFeedback(Z_Param_Intensity,Z_Param_Duration,Z_Param_bAffectsLeftLarge,Z_Param_bAffectsLeftSmall,Z_Param_bAffectsRightLarge,Z_Param_bAffectsRightSmall,EDynamicForceFeedbackAction::Type(Z_Param_Action),Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientStopForceFeedback) \
	{ \
		P_GET_OBJECT(UForceFeedbackEffect,Z_Param_ForceFeedbackEffect); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientStopForceFeedback_Implementation(Z_Param_ForceFeedbackEffect,Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientPlayForceFeedback) \
	{ \
		P_GET_OBJECT(UForceFeedbackEffect,Z_Param_ForceFeedbackEffect); \
		P_GET_UBOOL(Z_Param_bLooping); \
		P_GET_UBOOL(Z_Param_bIgnoreTimeDilation); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientPlayForceFeedback_Implementation(Z_Param_ForceFeedbackEffect,Z_Param_bLooping,Z_Param_bIgnoreTimeDilation,Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientStopCameraShake) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Shake); \
		P_GET_UBOOL(Z_Param_bImmediately); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientStopCameraShake_Implementation(Z_Param_Shake,Z_Param_bImmediately); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientStopCameraAnim) \
	{ \
		P_GET_OBJECT(UCameraAnim,Z_Param_AnimToStop); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientStopCameraAnim_Implementation(Z_Param_AnimToStop); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientClearCameraLensEffects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientClearCameraLensEffects_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientSpawnCameraLensEffect) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_LensEffectEmitterClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientSpawnCameraLensEffect_Implementation(Z_Param_LensEffectEmitterClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientSetViewTarget) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_A); \
		P_GET_STRUCT(FViewTargetTransitionParams,Z_Param_TransitionParams); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientSetViewTarget_Implementation(Z_Param_A,Z_Param_TransitionParams); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseCursorWidget) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Cursor); \
		P_GET_OBJECT(UUserWidget,Z_Param_CursorWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMouseCursorWidget(EMouseCursor::Type(Z_Param_Cursor),Z_Param_CursorWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHUD) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AHUD**)Z_Param__Result=this->GetHUD(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewportSize) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_SizeX); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_SizeY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetViewportSize(Z_Param_Out_SizeX,Z_Param_Out_SizeY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientSetHUD) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewHUDClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientSetHUD_Implementation(Z_Param_NewHUDClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientSetForceMipLevelsToBeResident) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ForceDuration); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CinematicTextureGroups); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientSetForceMipLevelsToBeResident_Implementation(Z_Param_Material,Z_Param_ForceDuration,Z_Param_CinematicTextureGroups); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientSetCinematicMode) \
	{ \
		P_GET_UBOOL(Z_Param_bInCinematicMode); \
		P_GET_UBOOL(Z_Param_bAffectsMovement); \
		P_GET_UBOOL(Z_Param_bAffectsTurning); \
		P_GET_UBOOL(Z_Param_bAffectsHUD); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientSetCinematicMode_Implementation(Z_Param_bInCinematicMode,Z_Param_bAffectsMovement,Z_Param_bAffectsTurning,Z_Param_bAffectsHUD); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientSetCameraMode) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewCamMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientSetCameraMode_Implementation(Z_Param_NewCamMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientSetCameraFade) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableFading); \
		P_GET_STRUCT(FColor,Z_Param_FadeColor); \
		P_GET_STRUCT(FVector2D,Z_Param_FadeAlpha); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_GET_UBOOL(Z_Param_bFadeAudio); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientSetCameraFade_Implementation(Z_Param_bEnableFading,Z_Param_FadeColor,Z_Param_FadeAlpha,Z_Param_FadeTime,Z_Param_bFadeAudio); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientSetBlockOnAsyncLoading) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientSetBlockOnAsyncLoading_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientRestart) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_NewPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientRestart_Implementation(Z_Param_NewPawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientReset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientReset_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientPrestreamTextures) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ForcedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ForceDuration); \
		P_GET_UBOOL(Z_Param_bEnableStreaming); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CinematicTextureGroups); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientPrestreamTextures_Implementation(Z_Param_ForcedActor,Z_Param_ForceDuration,Z_Param_bEnableStreaming,Z_Param_CinematicTextureGroups); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientPrepareMapChange) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_LevelName); \
		P_GET_UBOOL(Z_Param_bFirst); \
		P_GET_UBOOL(Z_Param_bLast); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientPrepareMapChange_Implementation(Z_Param_LevelName,Z_Param_bFirst,Z_Param_bLast); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientPlaySoundAtLocation) \
	{ \
		P_GET_OBJECT(USoundBase,Z_Param_Sound); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientPlaySoundAtLocation_Implementation(Z_Param_Sound,Z_Param_Location,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientPlaySound) \
	{ \
		P_GET_OBJECT(USoundBase,Z_Param_Sound); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientPlaySound_Implementation(Z_Param_Sound,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientPlayCameraShake) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Shake); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PlaySpace); \
		P_GET_STRUCT(FRotator,Z_Param_UserPlaySpaceRot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientPlayCameraShake_Implementation(Z_Param_Shake,Z_Param_Scale,ECameraAnimPlaySpace::Type(Z_Param_PlaySpace),Z_Param_UserPlaySpaceRot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientPlayCameraAnim) \
	{ \
		P_GET_OBJECT(UCameraAnim,Z_Param_AnimToPlay); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendInTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendOutTime); \
		P_GET_UBOOL(Z_Param_bLoop); \
		P_GET_UBOOL(Z_Param_bRandomStartTime); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Space); \
		P_GET_STRUCT(FRotator,Z_Param_CustomPlaySpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientPlayCameraAnim_Implementation(Z_Param_AnimToPlay,Z_Param_Scale,Z_Param_Rate,Z_Param_BlendInTime,Z_Param_BlendOutTime,Z_Param_bLoop,Z_Param_bRandomStartTime,ECameraAnimPlaySpace::Type(Z_Param_Space),Z_Param_CustomPlaySpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientMessage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_S); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Type); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MsgLifeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientMessage_Implementation(Z_Param_S,Z_Param_Type,Z_Param_MsgLifeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientIgnoreMoveInput) \
	{ \
		P_GET_UBOOL(Z_Param_bIgnore); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientIgnoreMoveInput_Implementation(Z_Param_bIgnore); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientIgnoreLookInput) \
	{ \
		P_GET_UBOOL(Z_Param_bIgnore); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientIgnoreLookInput_Implementation(Z_Param_bIgnore); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientGotoState) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientGotoState_Implementation(Z_Param_NewState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientGameEnded) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_EndGameFocus); \
		P_GET_UBOOL(Z_Param_bIsWinner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientGameEnded_Implementation(Z_Param_EndGameFocus,Z_Param_bIsWinner); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientForceGarbageCollection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientForceGarbageCollection_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientFlushLevelStreaming) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientFlushLevelStreaming_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientCommitMapChange) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientCommitMapChange_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientCapBandwidth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Cap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientCapBandwidth_Implementation(Z_Param_Cap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientCancelPendingMapChange) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientCancelPendingMapChange_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientAddTextureStreamingLoc) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InLoc); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_UBOOL(Z_Param_bOverrideLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientAddTextureStreamingLoc_Implementation(Z_Param_InLoc,Z_Param_Duration,Z_Param_bOverrideLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendToConsole) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Command); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SendToConsole(Z_Param_Command); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConsoleKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ConsoleKey(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientUnmutePlayer) \
	{ \
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientUnmutePlayer_Implementation(Z_Param_PlayerId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientMutePlayer) \
	{ \
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientMutePlayer_Implementation(Z_Param_PlayerId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerUnmutePlayer) \
	{ \
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerUnmutePlayer_Validate(Z_Param_PlayerId)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerUnmutePlayer_Validate")); \
			return; \
		} \
		this->ServerUnmutePlayer_Implementation(Z_Param_PlayerId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMutePlayer) \
	{ \
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMutePlayer_Validate(Z_Param_PlayerId)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMutePlayer_Validate")); \
			return; \
		} \
		this->ServerMutePlayer_Implementation(Z_Param_PlayerId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientVoiceHandshakeComplete) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientVoiceHandshakeComplete_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleSpeaking) \
	{ \
		P_GET_UBOOL(Z_Param_bInSpeaking); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ToggleSpeaking(Z_Param_bInSpeaking); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientEnableNetworkVoice) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientEnableNetworkVoice_Implementation(Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFire) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FireModeNum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartFire(Z_Param_FireModeNum); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseLocation) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMouseLocation(Z_Param_X,Z_Param_Y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectWorldLocationToScreen) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ScreenLocation); \
		P_GET_UBOOL(Z_Param_bPlayerViewportRelative); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->ProjectWorldLocationToScreen(Z_Param_WorldLocation,Z_Param_Out_ScreenLocation,Z_Param_bPlayerViewportRelative); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeprojectScreenPositionToWorld) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenX); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScreenY); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DeprojectScreenPositionToWorld(Z_Param_ScreenX,Z_Param_ScreenY,Z_Param_Out_WorldLocation,Z_Param_Out_WorldDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeprojectMousePositionToWorld) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DeprojectMousePositionToWorld(Z_Param_Out_WorldLocation,Z_Param_Out_WorldDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitResultUnderFingerForObjects) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FingerIndex); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetHitResultUnderFingerForObjects(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_HitResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitResultUnderFingerByChannel) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FingerIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetHitResultUnderFingerByChannel(ETouchIndex::Type(Z_Param_FingerIndex),ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_HitResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitResultUnderFinger) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FingerIndex); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetHitResultUnderFinger(ETouchIndex::Type(Z_Param_FingerIndex),ECollisionChannel(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_HitResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitResultUnderCursorForObjects) \
	{ \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetHitResultUnderCursorForObjects(Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_HitResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitResultUnderCursorByChannel) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetHitResultUnderCursorByChannel(ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_HitResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitResultUnderCursor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetHitResultUnderCursor(ECollisionChannel(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_HitResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwitchLevel) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SwitchLevel(Z_Param_URL); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_S); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetName(Z_Param_S); \
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
	DECLARE_FUNCTION(execClientRepObjRef) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientRepObjRef_Implementation(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientReturnToMainMenu) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReturnReason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientReturnToMainMenu_Implementation(Z_Param_ReturnReason); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLocalTravel) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->LocalTravel(Z_Param_URL); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestartLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RestartLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFOV) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewFOV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FOV(Z_Param_NewFOV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableCheats) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->EnableCheats(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientSetSpectatorWaiting) \
	{ \
		P_GET_UBOOL(Z_Param_bWaiting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientSetSpectatorWaiting_Implementation(Z_Param_bWaiting); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetSpectatorWaiting) \
	{ \
		P_GET_UBOOL(Z_Param_bWaiting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerSetSpectatorWaiting_Validate(Z_Param_bWaiting)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetSpectatorWaiting_Validate")); \
			return; \
		} \
		this->ServerSetSpectatorWaiting_Implementation(Z_Param_bWaiting); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_199_EVENT_PARMS \
	struct PlayerController_eventClientAddTextureStreamingLoc_Parms \
	{ \
		FVector InLoc; \
		float Duration; \
		bool bOverrideLocation; \
	}; \
	struct PlayerController_eventClientCapBandwidth_Parms \
	{ \
		int32 Cap; \
	}; \
	struct PlayerController_eventClientEnableNetworkVoice_Parms \
	{ \
		bool bEnable; \
	}; \
	struct PlayerController_eventClientGameEnded_Parms \
	{ \
		AActor* EndGameFocus; \
		bool bIsWinner; \
	}; \
	struct PlayerController_eventClientGotoState_Parms \
	{ \
		FName NewState; \
	}; \
	struct PlayerController_eventClientIgnoreLookInput_Parms \
	{ \
		bool bIgnore; \
	}; \
	struct PlayerController_eventClientIgnoreMoveInput_Parms \
	{ \
		bool bIgnore; \
	}; \
	struct PlayerController_eventClientMessage_Parms \
	{ \
		FString S; \
		FName Type; \
		float MsgLifeTime; \
	}; \
	struct PlayerController_eventClientMutePlayer_Parms \
	{ \
		FUniqueNetIdRepl PlayerId; \
	}; \
	struct PlayerController_eventClientPlayCameraAnim_Parms \
	{ \
		UCameraAnim* AnimToPlay; \
		float Scale; \
		float Rate; \
		float BlendInTime; \
		float BlendOutTime; \
		bool bLoop; \
		bool bRandomStartTime; \
		TEnumAsByte<ECameraAnimPlaySpace::Type> Space; \
		FRotator CustomPlaySpace; \
	}; \
	struct PlayerController_eventClientPlayCameraShake_Parms \
	{ \
		TSubclassOf<UCameraShake>  Shake; \
		float Scale; \
		TEnumAsByte<ECameraAnimPlaySpace::Type> PlaySpace; \
		FRotator UserPlaySpaceRot; \
	}; \
	struct PlayerController_eventClientPlayForceFeedback_Parms \
	{ \
		UForceFeedbackEffect* ForceFeedbackEffect; \
		bool bLooping; \
		bool bIgnoreTimeDilation; \
		FName Tag; \
	}; \
	struct PlayerController_eventClientPlaySound_Parms \
	{ \
		USoundBase* Sound; \
		float VolumeMultiplier; \
		float PitchMultiplier; \
	}; \
	struct PlayerController_eventClientPlaySoundAtLocation_Parms \
	{ \
		USoundBase* Sound; \
		FVector Location; \
		float VolumeMultiplier; \
		float PitchMultiplier; \
	}; \
	struct PlayerController_eventClientPrepareMapChange_Parms \
	{ \
		FName LevelName; \
		bool bFirst; \
		bool bLast; \
	}; \
	struct PlayerController_eventClientPrestreamTextures_Parms \
	{ \
		AActor* ForcedActor; \
		float ForceDuration; \
		bool bEnableStreaming; \
		int32 CinematicTextureGroups; \
	}; \
	struct PlayerController_eventClientReceiveLocalizedMessage_Parms \
	{ \
		TSubclassOf<ULocalMessage>  Message; \
		int32 Switch; \
		APlayerState* RelatedPlayerState_1; \
		APlayerState* RelatedPlayerState_2; \
		UObject* OptionalObject; \
	}; \
	struct PlayerController_eventClientRepObjRef_Parms \
	{ \
		UObject* Object; \
	}; \
	struct PlayerController_eventClientRestart_Parms \
	{ \
		APawn* NewPawn; \
	}; \
	struct PlayerController_eventClientRetryClientRestart_Parms \
	{ \
		APawn* NewPawn; \
	}; \
	struct PlayerController_eventClientReturnToMainMenu_Parms \
	{ \
		FString ReturnReason; \
	}; \
	struct PlayerController_eventClientSetCameraFade_Parms \
	{ \
		bool bEnableFading; \
		FColor FadeColor; \
		FVector2D FadeAlpha; \
		float FadeTime; \
		bool bFadeAudio; \
	}; \
	struct PlayerController_eventClientSetCameraMode_Parms \
	{ \
		FName NewCamMode; \
	}; \
	struct PlayerController_eventClientSetCinematicMode_Parms \
	{ \
		bool bInCinematicMode; \
		bool bAffectsMovement; \
		bool bAffectsTurning; \
		bool bAffectsHUD; \
	}; \
	struct PlayerController_eventClientSetForceMipLevelsToBeResident_Parms \
	{ \
		UMaterialInterface* Material; \
		float ForceDuration; \
		int32 CinematicTextureGroups; \
	}; \
	struct PlayerController_eventClientSetHUD_Parms \
	{ \
		TSubclassOf<AHUD>  NewHUDClass; \
	}; \
	struct PlayerController_eventClientSetSpectatorWaiting_Parms \
	{ \
		bool bWaiting; \
	}; \
	struct PlayerController_eventClientSetViewTarget_Parms \
	{ \
		AActor* A; \
		FViewTargetTransitionParams TransitionParams; \
	}; \
	struct PlayerController_eventClientSpawnCameraLensEffect_Parms \
	{ \
		TSubclassOf<AEmitterCameraLensEffectBase>  LensEffectEmitterClass; \
	}; \
	struct PlayerController_eventClientStopCameraAnim_Parms \
	{ \
		UCameraAnim* AnimToStop; \
	}; \
	struct PlayerController_eventClientStopCameraShake_Parms \
	{ \
		TSubclassOf<UCameraShake>  Shake; \
		bool bImmediately; \
	}; \
	struct PlayerController_eventClientStopForceFeedback_Parms \
	{ \
		UForceFeedbackEffect* ForceFeedbackEffect; \
		FName Tag; \
	}; \
	struct PlayerController_eventClientTeamMessage_Parms \
	{ \
		APlayerState* SenderPlayerState; \
		FString S; \
		FName Type; \
		float MsgLifeTime; \
	}; \
	struct PlayerController_eventClientTravelInternal_Parms \
	{ \
		FString URL; \
		TEnumAsByte<ETravelType> TravelType; \
		bool bSeamless; \
		FGuid MapPackageGuid; \
	}; \
	struct PlayerController_eventClientUnmutePlayer_Parms \
	{ \
		FUniqueNetIdRepl PlayerId; \
	}; \
	struct PlayerController_eventClientUpdateLevelStreamingStatus_Parms \
	{ \
		FName PackageName; \
		bool bNewShouldBeLoaded; \
		bool bNewShouldBeVisible; \
		bool bNewShouldBlockOnLoad; \
		int32 LODIndex; \
	}; \
	struct PlayerController_eventClientWasKicked_Parms \
	{ \
		FText KickReason; \
	}; \
	struct PlayerController_eventOnServerStartedVisualLogger_Parms \
	{ \
		bool bIsLogging; \
	}; \
	struct PlayerController_eventServerAcknowledgePossession_Parms \
	{ \
		APawn* P; \
	}; \
	struct PlayerController_eventServerCamera_Parms \
	{ \
		FName NewMode; \
	}; \
	struct PlayerController_eventServerChangeName_Parms \
	{ \
		FString S; \
	}; \
	struct PlayerController_eventServerMutePlayer_Parms \
	{ \
		FUniqueNetIdRepl PlayerId; \
	}; \
	struct PlayerController_eventServerNotifyLoadedWorld_Parms \
	{ \
		FName WorldPackageName; \
	}; \
	struct PlayerController_eventServerSetSpectatorLocation_Parms \
	{ \
		FVector NewLoc; \
		FRotator NewRot; \
	}; \
	struct PlayerController_eventServerSetSpectatorWaiting_Parms \
	{ \
		bool bWaiting; \
	}; \
	struct PlayerController_eventServerUnmutePlayer_Parms \
	{ \
		FUniqueNetIdRepl PlayerId; \
	}; \
	struct PlayerController_eventServerUpdateCamera_Parms \
	{ \
		FVector_NetQuantize CamLoc; \
		int32 CamPitchAndYaw; \
	}; \
	struct PlayerController_eventServerUpdateLevelVisibility_Parms \
	{ \
		FName PackageName; \
		bool bIsVisible; \
	}; \
	struct PlayerController_eventServerViewSelf_Parms \
	{ \
		FViewTargetTransitionParams TransitionParams; \
	};


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_199_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_199_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerController(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_APlayerController(); \
public: \
	DECLARE_CLASS(APlayerController, AController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_APlayerController, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(APlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_199_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerController(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_APlayerController(); \
public: \
	DECLARE_CLASS(APlayerController, AController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_APlayerController, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(APlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_199_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerController(APlayerController&&); \
	NO_API APlayerController(const APlayerController&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_199_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerController(APlayerController&&); \
	NO_API APlayerController(const APlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerController)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_199_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InactiveStateInputComponent() { return STRUCT_OFFSET(APlayerController, InactiveStateInputComponent); } \
	FORCEINLINE static uint32 __PPO__CurrentTouchInterface() { return STRUCT_OFFSET(APlayerController, CurrentTouchInterface); } \
	FORCEINLINE static uint32 __PPO__SpectatorPawn() { return STRUCT_OFFSET(APlayerController, SpectatorPawn); } \
	FORCEINLINE static uint32 __PPO__SpawnLocation() { return STRUCT_OFFSET(APlayerController, SpawnLocation); } \
	FORCEINLINE static uint32 __PPO__bIsLocalPlayerController() { return STRUCT_OFFSET(APlayerController, bIsLocalPlayerController); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_196_PROLOG \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_199_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_199_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_199_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_199_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_199_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_199_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_199_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_199_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_199_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_199_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_199_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_199_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_199_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlayerController."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h


#define FOREACH_ENUM_EDYNAMICFORCEFEEDBACKACTION(op) \
	op(EDynamicForceFeedbackAction::Start) \
	op(EDynamicForceFeedbackAction::Update) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
