// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AITypes_generated_h
#error "AITypes.generated.h already included, missing '#pragma once' in AITypes.h"
#endif
#define AIMODULE_AITypes_generated_h

#define Engine_Source_Runtime_AIModule_Classes_AITypes_h_490_GENERATED_BODY \
	friend AIMODULE_API class UScriptStruct* Z_Construct_UScriptStruct_FAIMoveRequest(); \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__GoalActor() { return STRUCT_OFFSET(FAIMoveRequest, GoalActor); }


#define Engine_Source_Runtime_AIModule_Classes_AITypes_h_431_GENERATED_BODY \
	friend AIMODULE_API class UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID(); \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__RequestID() { return STRUCT_OFFSET(FAIRequestID, RequestID); }


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_AITypes_h


#define FOREACH_ENUM_EGENERICAICHECK(op) \
	op(EGenericAICheck::Less) \
	op(EGenericAICheck::LessOrEqual) \
	op(EGenericAICheck::Equal) \
	op(EGenericAICheck::NotEqual) \
	op(EGenericAICheck::GreaterOrEqual) \
	op(EGenericAICheck::Greater) \
	op(EGenericAICheck::IsTrue) 
#define FOREACH_ENUM_EAILOCKSOURCE(op) \
	op(EAILockSource::Animation) \
	op(EAILockSource::Logic) \
	op(EAILockSource::Script) \
	op(EAILockSource::Gameplay) 
#define FOREACH_ENUM_EAIREQUESTPRIORITY(op) \
	op(EAIRequestPriority::SoftScript) \
	op(EAIRequestPriority::Logic) \
	op(EAIRequestPriority::HardScript) \
	op(EAIRequestPriority::Reaction) \
	op(EAIRequestPriority::Ultimate) 
#define FOREACH_ENUM_EPAWNACTIONEVENTTYPE(op) \
	op(EPawnActionEventType::Invalid) \
	op(EPawnActionEventType::FailedToStart) \
	op(EPawnActionEventType::InstantAbort) \
	op(EPawnActionEventType::FinishedAborting) \
	op(EPawnActionEventType::FinishedExecution) 
#define FOREACH_ENUM_EPAWNACTIONRESULT(op) \
	op(EPawnActionResult::NotStarted) \
	op(EPawnActionResult::InProgress) \
	op(EPawnActionResult::Success) \
	op(EPawnActionResult::Failed) 
#define FOREACH_ENUM_EPAWNACTIONABORTSTATE(op) \
	op(EPawnActionAbortState::NeverStarted) \
	op(EPawnActionAbortState::NotBeingAborted) \
	op(EPawnActionAbortState::MarkPendingAbort) \
	op(EPawnActionAbortState::LatentAbortInProgress) \
	op(EPawnActionAbortState::AbortDone) 
#define FOREACH_ENUM_FAIDISTANCETYPE(op) \
	op(FAIDistanceType::Distance3D) \
	op(FAIDistanceType::Distance2D) \
	op(FAIDistanceType::DistanceZ) 
#define FOREACH_ENUM_EAIOPTIONFLAG(op) \
	op(EAIOptionFlag::Default) \
	op(EAIOptionFlag::Enable) \
	op(EAIOptionFlag::Disable) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
