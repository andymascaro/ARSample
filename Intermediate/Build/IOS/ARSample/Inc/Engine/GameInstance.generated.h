// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_GameInstance_generated_h
#error "GameInstance.generated.h already included, missing '#pragma once' in GameInstance.h"
#endif
#define ENGINE_GameInstance_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_113_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDebugRemovePlayer) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ControllerId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DebugRemovePlayer(Z_Param_ControllerId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugCreatePlayer) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ControllerId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DebugCreatePlayer(Z_Param_ControllerId); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDebugRemovePlayer) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ControllerId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DebugRemovePlayer(Z_Param_ControllerId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugCreatePlayer) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ControllerId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DebugCreatePlayer(Z_Param_ControllerId); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_113_EVENT_PARMS \
	struct GameInstance_eventHandleNetworkError_Parms \
	{ \
		TEnumAsByte<ENetworkFailure::Type> FailureType; \
		bool bIsServer; \
	}; \
	struct GameInstance_eventHandleTravelError_Parms \
	{ \
		TEnumAsByte<ETravelFailure::Type> FailureType; \
	};


#define Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_113_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_113_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameInstance(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UGameInstance(); \
public: \
	DECLARE_CLASS(UGameInstance, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UGameInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_113_INCLASS \
private: \
	static void StaticRegisterNativesUGameInstance(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UGameInstance(); \
public: \
	DECLARE_CLASS(UGameInstance, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UGameInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_113_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameInstance(UGameInstance&&); \
	NO_API UGameInstance(const UGameInstance&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_113_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameInstance(UGameInstance&&); \
	NO_API UGameInstance(const UGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameInstance)


#define Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_113_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LocalPlayers() { return STRUCT_OFFSET(UGameInstance, LocalPlayers); } \
	FORCEINLINE static uint32 __PPO__OnlineSession() { return STRUCT_OFFSET(UGameInstance, OnlineSession); }


#define Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_110_PROLOG \
	Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_113_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_113_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_113_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_113_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_113_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_113_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_113_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_113_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_113_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_113_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_113_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_113_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
