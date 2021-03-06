// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
#ifdef ENGINE_GameStateBase_generated_h
#error "GameStateBase.generated.h already included, missing '#pragma once' in GameStateBase.h"
#endif
#define ENGINE_GameStateBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedWorldTimeSeconds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_ReplicatedWorldTimeSeconds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedHasBegunPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_ReplicatedHasBegunPlay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_SpectatorClass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_SpectatorClass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_GameModeClass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_GameModeClass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerRespawnDelay) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPlayerRespawnDelay(Z_Param_Controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerStartTime) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPlayerStartTime(Z_Param_Controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasMatchStarted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasMatchStarted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasBegunPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasBegunPlay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetServerWorldTimeSeconds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetServerWorldTimeSeconds(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedWorldTimeSeconds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_ReplicatedWorldTimeSeconds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedHasBegunPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_ReplicatedHasBegunPlay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_SpectatorClass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_SpectatorClass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_GameModeClass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_GameModeClass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerRespawnDelay) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPlayerRespawnDelay(Z_Param_Controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerStartTime) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPlayerStartTime(Z_Param_Controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasMatchStarted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasMatchStarted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasBegunPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasBegunPlay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetServerWorldTimeSeconds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetServerWorldTimeSeconds(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameStateBase(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_AGameStateBase(); \
public: \
	DECLARE_CLASS(AGameStateBase, AInfo, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AGameStateBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_31_INCLASS \
private: \
	static void StaticRegisterNativesAGameStateBase(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_AGameStateBase(); \
public: \
	DECLARE_CLASS(AGameStateBase, AInfo, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AGameStateBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameStateBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameStateBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameStateBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameStateBase(AGameStateBase&&); \
	NO_API AGameStateBase(const AGameStateBase&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameStateBase(AGameStateBase&&); \
	NO_API AGameStateBase(const AGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameStateBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameStateBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameStateBase)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bReplicatedHasBegunPlay() { return STRUCT_OFFSET(AGameStateBase, bReplicatedHasBegunPlay); } \
	FORCEINLINE static uint32 __PPO__ReplicatedWorldTimeSeconds() { return STRUCT_OFFSET(AGameStateBase, ReplicatedWorldTimeSeconds); } \
	FORCEINLINE static uint32 __PPO__ServerWorldTimeSecondsDelta() { return STRUCT_OFFSET(AGameStateBase, ServerWorldTimeSecondsDelta); } \
	FORCEINLINE static uint32 __PPO__ServerWorldTimeSecondsUpdateFrequency() { return STRUCT_OFFSET(AGameStateBase, ServerWorldTimeSecondsUpdateFrequency); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_28_PROLOG
#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_31_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_31_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_31_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_31_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_31_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_31_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameStateBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
