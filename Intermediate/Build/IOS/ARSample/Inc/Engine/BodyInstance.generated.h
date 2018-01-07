// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BodyInstance_generated_h
#error "BodyInstance.generated.h already included, missing '#pragma once' in BodyInstance.h"
#endif
#define ENGINE_BodyInstance_generated_h

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodyInstance_h_194_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance(); \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__CollisionEnabled() { return STRUCT_OFFSET(FBodyInstance, CollisionEnabled); } \
	FORCEINLINE static uint32 __PPO__CollisionProfileName() { return STRUCT_OFFSET(FBodyInstance, CollisionProfileName); } \
	FORCEINLINE static uint32 __PPO__CollisionResponses() { return STRUCT_OFFSET(FBodyInstance, CollisionResponses); } \
	FORCEINLINE static uint32 __PPO__MaxDepenetrationVelocity() { return STRUCT_OFFSET(FBodyInstance, MaxDepenetrationVelocity); } \
	FORCEINLINE static uint32 __PPO__MassInKgOverride() { return STRUCT_OFFSET(FBodyInstance, MassInKgOverride); } \
	FORCEINLINE static uint32 __PPO__ObjectType() { return STRUCT_OFFSET(FBodyInstance, ObjectType); } \
	FORCEINLINE static uint32 __PPO__WalkableSlopeOverride() { return STRUCT_OFFSET(FBodyInstance, WalkableSlopeOverride); } \
	FORCEINLINE static uint32 __PPO__PhysMaterialOverride() { return STRUCT_OFFSET(FBodyInstance, PhysMaterialOverride); }


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodyInstance_h_114_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FCollisionResponse(); \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__ResponseToChannels() { return STRUCT_OFFSET(FCollisionResponse, ResponseToChannels); } \
	FORCEINLINE static uint32 __PPO__ResponseArray() { return STRUCT_OFFSET(FCollisionResponse, ResponseArray); }


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodyInstance_h


#define FOREACH_ENUM_EDYNAMICACTORSCENE(op) \
	op(EDynamicActorScene::Default) \
	op(EDynamicActorScene::UseSyncScene) 
#define FOREACH_ENUM_EDOFMODE(op) \
	op(EDOFMode::Default) \
	op(EDOFMode::SixDOF) \
	op(EDOFMode::YZPlane) \
	op(EDOFMode::XZPlane) \
	op(EDOFMode::XYPlane) \
	op(EDOFMode::CustomPlane) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
