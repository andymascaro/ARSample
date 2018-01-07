// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AIPerceptionTypes_generated_h
#error "AIPerceptionTypes.generated.h already included, missing '#pragma once' in AIPerceptionTypes.h"
#endif
#define AIMODULE_AIPerceptionTypes_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionTypes_h_207_GENERATED_BODY \
	friend AIMODULE_API class UScriptStruct* Z_Construct_UScriptStruct_FAISenseAffiliationFilter(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionTypes_h_130_GENERATED_BODY \
	friend AIMODULE_API class UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus(); \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Age() { return STRUCT_OFFSET(FAIStimulus, Age); } \
	FORCEINLINE static uint32 __PPO__ExpirationAge() { return STRUCT_OFFSET(FAIStimulus, ExpirationAge); }


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionTypes_h


#define FOREACH_ENUM_EAISENSENOTIFYTYPE(op) \
	op(EAISenseNotifyType::OnEveryPerception) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
