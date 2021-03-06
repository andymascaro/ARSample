// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class AActor;
class AController;
class APawn;
struct FTransform;
class APlayerState;
class UObject;
#ifdef ENGINE_GameModeBase_generated_h
#error "GameModeBase.generated.h already included, missing '#pragma once' in GameModeBase.h"
#endif
#define ENGINE_GameModeBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_47_RPC_WRAPPERS \
	virtual void InitializeHUDForPlayer_Implementation(APlayerController* NewPlayer); \
	virtual void InitStartSpot_Implementation(AActor* StartSpot, AController* NewPlayer); \
	virtual APawn* SpawnDefaultPawnAtTransform_Implementation(AController* NewPlayer, FTransform const& SpawnTransform); \
	virtual APawn* SpawnDefaultPawnFor_Implementation(AController* NewPlayer, AActor* StartSpot); \
	virtual bool PlayerCanRestart_Implementation(APlayerController* Player); \
	virtual AActor* FindPlayerStart_Implementation(AController* Player, const FString& IncomingName); \
	virtual AActor* ChoosePlayerStart_Implementation(AController* Player); \
	virtual bool CanSpectate_Implementation(APlayerController* Viewer, APlayerState* ViewTarget); \
	virtual bool MustSpectate_Implementation(APlayerController* NewPlayerController) const; \
	virtual void HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer); \
	virtual bool ShouldReset_Implementation(AActor* ActorToReset); \
	virtual UClass* GetDefaultPawnClassForController_Implementation(AController* InController); \
 \
	DECLARE_FUNCTION(execInitializeHUDForPlayer) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_NewPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitializeHUDForPlayer_Implementation(Z_Param_NewPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitStartSpot) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_StartSpot); \
		P_GET_OBJECT(AController,Z_Param_NewPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitStartSpot_Implementation(Z_Param_StartSpot,Z_Param_NewPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnDefaultPawnAtTransform) \
	{ \
		P_GET_OBJECT(AController,Z_Param_NewPlayer); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APawn**)Z_Param__Result=this->SpawnDefaultPawnAtTransform_Implementation(Z_Param_NewPlayer,Z_Param_Out_SpawnTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnDefaultPawnFor) \
	{ \
		P_GET_OBJECT(AController,Z_Param_NewPlayer); \
		P_GET_OBJECT(AActor,Z_Param_StartSpot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APawn**)Z_Param__Result=this->SpawnDefaultPawnFor_Implementation(Z_Param_NewPlayer,Z_Param_StartSpot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestartPlayerAtTransform) \
	{ \
		P_GET_OBJECT(AController,Z_Param_NewPlayer); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RestartPlayerAtTransform(Z_Param_NewPlayer,Z_Param_Out_SpawnTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestartPlayerAtPlayerStart) \
	{ \
		P_GET_OBJECT(AController,Z_Param_NewPlayer); \
		P_GET_OBJECT(AActor,Z_Param_StartSpot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RestartPlayerAtPlayerStart(Z_Param_NewPlayer,Z_Param_StartSpot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestartPlayer) \
	{ \
		P_GET_OBJECT(AController,Z_Param_NewPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RestartPlayer(Z_Param_NewPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayerCanRestart) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->PlayerCanRestart_Implementation(Z_Param_Player); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_FindPlayerStart) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Player); \
		P_GET_PROPERTY(UStrProperty,Z_Param_IncomingName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=this->K2_FindPlayerStart(Z_Param_Player,Z_Param_IncomingName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPlayerStart) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Player); \
		P_GET_PROPERTY(UStrProperty,Z_Param_IncomingName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=this->FindPlayerStart_Implementation(Z_Param_Player,Z_Param_IncomingName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChoosePlayerStart) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=this->ChoosePlayerStart_Implementation(Z_Param_Player); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeName) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewName); \
		P_GET_UBOOL(Z_Param_bNameChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ChangeName(Z_Param_Controller,Z_Param_NewName,Z_Param_bNameChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanSpectate) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Viewer); \
		P_GET_OBJECT(APlayerState,Z_Param_ViewTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanSpectate_Implementation(Z_Param_Viewer,Z_Param_ViewTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMustSpectate) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_NewPlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->MustSpectate_Implementation(Z_Param_NewPlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleStartingNewPlayer) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_NewPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->HandleStartingNewPlayer_Implementation(Z_Param_NewPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReturnToMainMenuHost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ReturnToMainMenuHost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldReset) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToReset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->ShouldReset_Implementation(Z_Param_ActorToReset); \
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
	DECLARE_FUNCTION(execStartPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartPlay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumSpectators) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumSpectators(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumPlayers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumPlayers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultPawnClassForController) \
	{ \
		P_GET_OBJECT(AController,Z_Param_InController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=this->GetDefaultPawnClassForController_Implementation(Z_Param_InController); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void InitializeHUDForPlayer_Implementation(APlayerController* NewPlayer); \
	virtual void InitStartSpot_Implementation(AActor* StartSpot, AController* NewPlayer); \
	virtual APawn* SpawnDefaultPawnAtTransform_Implementation(AController* NewPlayer, FTransform const& SpawnTransform); \
	virtual APawn* SpawnDefaultPawnFor_Implementation(AController* NewPlayer, AActor* StartSpot); \
	virtual bool PlayerCanRestart_Implementation(APlayerController* Player); \
	virtual AActor* FindPlayerStart_Implementation(AController* Player, const FString& IncomingName); \
	virtual AActor* ChoosePlayerStart_Implementation(AController* Player); \
	virtual bool CanSpectate_Implementation(APlayerController* Viewer, APlayerState* ViewTarget); \
	virtual bool MustSpectate_Implementation(APlayerController* NewPlayerController) const; \
	virtual void HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer); \
	virtual bool ShouldReset_Implementation(AActor* ActorToReset); \
	virtual UClass* GetDefaultPawnClassForController_Implementation(AController* InController); \
 \
	DECLARE_FUNCTION(execInitializeHUDForPlayer) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_NewPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitializeHUDForPlayer_Implementation(Z_Param_NewPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitStartSpot) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_StartSpot); \
		P_GET_OBJECT(AController,Z_Param_NewPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitStartSpot_Implementation(Z_Param_StartSpot,Z_Param_NewPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnDefaultPawnAtTransform) \
	{ \
		P_GET_OBJECT(AController,Z_Param_NewPlayer); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APawn**)Z_Param__Result=this->SpawnDefaultPawnAtTransform_Implementation(Z_Param_NewPlayer,Z_Param_Out_SpawnTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnDefaultPawnFor) \
	{ \
		P_GET_OBJECT(AController,Z_Param_NewPlayer); \
		P_GET_OBJECT(AActor,Z_Param_StartSpot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APawn**)Z_Param__Result=this->SpawnDefaultPawnFor_Implementation(Z_Param_NewPlayer,Z_Param_StartSpot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestartPlayerAtTransform) \
	{ \
		P_GET_OBJECT(AController,Z_Param_NewPlayer); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RestartPlayerAtTransform(Z_Param_NewPlayer,Z_Param_Out_SpawnTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestartPlayerAtPlayerStart) \
	{ \
		P_GET_OBJECT(AController,Z_Param_NewPlayer); \
		P_GET_OBJECT(AActor,Z_Param_StartSpot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RestartPlayerAtPlayerStart(Z_Param_NewPlayer,Z_Param_StartSpot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestartPlayer) \
	{ \
		P_GET_OBJECT(AController,Z_Param_NewPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RestartPlayer(Z_Param_NewPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayerCanRestart) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->PlayerCanRestart_Implementation(Z_Param_Player); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_FindPlayerStart) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Player); \
		P_GET_PROPERTY(UStrProperty,Z_Param_IncomingName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=this->K2_FindPlayerStart(Z_Param_Player,Z_Param_IncomingName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPlayerStart) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Player); \
		P_GET_PROPERTY(UStrProperty,Z_Param_IncomingName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=this->FindPlayerStart_Implementation(Z_Param_Player,Z_Param_IncomingName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChoosePlayerStart) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=this->ChoosePlayerStart_Implementation(Z_Param_Player); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeName) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewName); \
		P_GET_UBOOL(Z_Param_bNameChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ChangeName(Z_Param_Controller,Z_Param_NewName,Z_Param_bNameChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanSpectate) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Viewer); \
		P_GET_OBJECT(APlayerState,Z_Param_ViewTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanSpectate_Implementation(Z_Param_Viewer,Z_Param_ViewTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMustSpectate) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_NewPlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->MustSpectate_Implementation(Z_Param_NewPlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleStartingNewPlayer) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_NewPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->HandleStartingNewPlayer_Implementation(Z_Param_NewPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReturnToMainMenuHost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ReturnToMainMenuHost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldReset) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToReset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->ShouldReset_Implementation(Z_Param_ActorToReset); \
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
	DECLARE_FUNCTION(execStartPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartPlay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumSpectators) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumSpectators(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumPlayers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumPlayers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultPawnClassForController) \
	{ \
		P_GET_OBJECT(AController,Z_Param_InController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=this->GetDefaultPawnClassForController_Implementation(Z_Param_InController); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_47_EVENT_PARMS \
	struct GameModeBase_eventCanSpectate_Parms \
	{ \
		APlayerController* Viewer; \
		APlayerState* ViewTarget; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameModeBase_eventCanSpectate_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GameModeBase_eventChoosePlayerStart_Parms \
	{ \
		AController* Player; \
		AActor* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameModeBase_eventChoosePlayerStart_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct GameModeBase_eventFindPlayerStart_Parms \
	{ \
		AController* Player; \
		FString IncomingName; \
		AActor* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameModeBase_eventFindPlayerStart_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct GameModeBase_eventGetDefaultPawnClassForController_Parms \
	{ \
		AController* InController; \
		UClass* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameModeBase_eventGetDefaultPawnClassForController_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct GameModeBase_eventHandleStartingNewPlayer_Parms \
	{ \
		APlayerController* NewPlayer; \
	}; \
	struct GameModeBase_eventInitializeHUDForPlayer_Parms \
	{ \
		APlayerController* NewPlayer; \
	}; \
	struct GameModeBase_eventInitStartSpot_Parms \
	{ \
		AActor* StartSpot; \
		AController* NewPlayer; \
	}; \
	struct GameModeBase_eventK2_OnChangeName_Parms \
	{ \
		AController* Other; \
		FString NewName; \
		bool bNameChange; \
	}; \
	struct GameModeBase_eventK2_OnLogout_Parms \
	{ \
		AController* ExitingController; \
	}; \
	struct GameModeBase_eventK2_OnRestartPlayer_Parms \
	{ \
		AController* NewPlayer; \
	}; \
	struct GameModeBase_eventK2_OnSwapPlayerControllers_Parms \
	{ \
		APlayerController* OldPC; \
		APlayerController* NewPC; \
	}; \
	struct GameModeBase_eventK2_PostLogin_Parms \
	{ \
		APlayerController* NewPlayer; \
	}; \
	struct GameModeBase_eventMustSpectate_Parms \
	{ \
		APlayerController* NewPlayerController; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameModeBase_eventMustSpectate_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GameModeBase_eventPlayerCanRestart_Parms \
	{ \
		APlayerController* Player; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameModeBase_eventPlayerCanRestart_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GameModeBase_eventShouldReset_Parms \
	{ \
		AActor* ActorToReset; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameModeBase_eventShouldReset_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GameModeBase_eventSpawnDefaultPawnAtTransform_Parms \
	{ \
		AController* NewPlayer; \
		FTransform SpawnTransform; \
		APawn* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameModeBase_eventSpawnDefaultPawnAtTransform_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct GameModeBase_eventSpawnDefaultPawnFor_Parms \
	{ \
		AController* NewPlayer; \
		AActor* StartSpot; \
		APawn* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameModeBase_eventSpawnDefaultPawnFor_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_47_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameModeBase(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase(); \
public: \
	DECLARE_CLASS(AGameModeBase, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AGameModeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_47_INCLASS \
private: \
	static void StaticRegisterNativesAGameModeBase(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase(); \
public: \
	DECLARE_CLASS(AGameModeBase, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AGameModeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameModeBase(AGameModeBase&&); \
	NO_API AGameModeBase(const AGameModeBase&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameModeBase(AGameModeBase&&); \
	NO_API AGameModeBase(const AGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameModeBase)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_47_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_44_PROLOG \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_47_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_47_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_47_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_47_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_47_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_47_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_47_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_47_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_47_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameModeBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
