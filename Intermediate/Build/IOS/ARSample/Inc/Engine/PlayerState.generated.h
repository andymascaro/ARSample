// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerState;
#ifdef ENGINE_PlayerState_generated_h
#error "PlayerState.generated.h already included, missing '#pragma once' in PlayerState.h"
#endif
#define ENGINE_PlayerState_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_UniqueId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_UniqueId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_bIsInactive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_bIsInactive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_PlayerName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_PlayerName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Score) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_Score(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_UniqueId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_UniqueId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_bIsInactive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_bIsInactive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_PlayerName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_PlayerName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Score) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_Score(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_41_EVENT_PARMS \
	struct PlayerState_eventReceiveCopyProperties_Parms \
	{ \
		APlayerState* NewPlayerState; \
	}; \
	struct PlayerState_eventReceiveOverrideWith_Parms \
	{ \
		APlayerState* OldPlayerState; \
	};


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_41_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerState(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_APlayerState(); \
public: \
	DECLARE_CLASS(APlayerState, AInfo, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(APlayerState) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_41_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerState(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_APlayerState(); \
public: \
	DECLARE_CLASS(APlayerState, AInfo, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(APlayerState) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerState(APlayerState&&); \
	NO_API APlayerState(const APlayerState&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerState(APlayerState&&); \
	NO_API APlayerState(const APlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerState)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_41_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_38_PROLOG \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_41_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_41_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_41_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_41_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_41_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_41_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_41_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_41_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_41_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlayerState."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
