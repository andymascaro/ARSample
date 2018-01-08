// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_CanSpectate();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_ChangeName();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_FindPlayerStart();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_GetNumPlayers();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_GetNumSpectators();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_HasMatchStarted();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_InitStartSpot();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_K2_OnChangeName();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_K2_OnLogout();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_K2_PostLogin();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_MustSpectate();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_PlayerCanRestart();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_ResetLevel();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_RestartPlayer();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_ReturnToMainMenuHost();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_ShouldReset();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_StartPlay();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameSession_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ASpectatorPawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AHUD_NoRegister();
// End Cross Module References
	static FName NAME_AGameModeBase_CanSpectate = FName(TEXT("CanSpectate"));
	bool AGameModeBase::CanSpectate(APlayerController* Viewer, APlayerState* ViewTarget)
	{
		GameModeBase_eventCanSpectate_Parms Parms;
		Parms.Viewer=Viewer;
		Parms.ViewTarget=ViewTarget;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_CanSpectate),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AGameModeBase_ChoosePlayerStart = FName(TEXT("ChoosePlayerStart"));
	AActor* AGameModeBase::ChoosePlayerStart(AController* Player)
	{
		GameModeBase_eventChoosePlayerStart_Parms Parms;
		Parms.Player=Player;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_ChoosePlayerStart),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AGameModeBase_FindPlayerStart = FName(TEXT("FindPlayerStart"));
	AActor* AGameModeBase::FindPlayerStart(AController* Player, const FString& IncomingName)
	{
		GameModeBase_eventFindPlayerStart_Parms Parms;
		Parms.Player=Player;
		Parms.IncomingName=IncomingName;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_FindPlayerStart),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AGameModeBase_GetDefaultPawnClassForController = FName(TEXT("GetDefaultPawnClassForController"));
	UClass* AGameModeBase::GetDefaultPawnClassForController(AController* InController)
	{
		GameModeBase_eventGetDefaultPawnClassForController_Parms Parms;
		Parms.InController=InController;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_GetDefaultPawnClassForController),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AGameModeBase_HandleStartingNewPlayer = FName(TEXT("HandleStartingNewPlayer"));
	void AGameModeBase::HandleStartingNewPlayer(APlayerController* NewPlayer)
	{
		GameModeBase_eventHandleStartingNewPlayer_Parms Parms;
		Parms.NewPlayer=NewPlayer;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_HandleStartingNewPlayer),&Parms);
	}
	static FName NAME_AGameModeBase_InitializeHUDForPlayer = FName(TEXT("InitializeHUDForPlayer"));
	void AGameModeBase::InitializeHUDForPlayer(APlayerController* NewPlayer)
	{
		GameModeBase_eventInitializeHUDForPlayer_Parms Parms;
		Parms.NewPlayer=NewPlayer;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_InitializeHUDForPlayer),&Parms);
	}
	static FName NAME_AGameModeBase_InitStartSpot = FName(TEXT("InitStartSpot"));
	void AGameModeBase::InitStartSpot(AActor* StartSpot, AController* NewPlayer)
	{
		GameModeBase_eventInitStartSpot_Parms Parms;
		Parms.StartSpot=StartSpot;
		Parms.NewPlayer=NewPlayer;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_InitStartSpot),&Parms);
	}
	static FName NAME_AGameModeBase_K2_OnChangeName = FName(TEXT("K2_OnChangeName"));
	void AGameModeBase::K2_OnChangeName(AController* Other, const FString& NewName, bool bNameChange)
	{
		GameModeBase_eventK2_OnChangeName_Parms Parms;
		Parms.Other=Other;
		Parms.NewName=NewName;
		Parms.bNameChange=bNameChange ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_K2_OnChangeName),&Parms);
	}
	static FName NAME_AGameModeBase_K2_OnLogout = FName(TEXT("K2_OnLogout"));
	void AGameModeBase::K2_OnLogout(AController* ExitingController)
	{
		GameModeBase_eventK2_OnLogout_Parms Parms;
		Parms.ExitingController=ExitingController;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_K2_OnLogout),&Parms);
	}
	static FName NAME_AGameModeBase_K2_OnRestartPlayer = FName(TEXT("K2_OnRestartPlayer"));
	void AGameModeBase::K2_OnRestartPlayer(AController* NewPlayer)
	{
		GameModeBase_eventK2_OnRestartPlayer_Parms Parms;
		Parms.NewPlayer=NewPlayer;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_K2_OnRestartPlayer),&Parms);
	}
	static FName NAME_AGameModeBase_K2_OnSwapPlayerControllers = FName(TEXT("K2_OnSwapPlayerControllers"));
	void AGameModeBase::K2_OnSwapPlayerControllers(APlayerController* OldPC, APlayerController* NewPC)
	{
		GameModeBase_eventK2_OnSwapPlayerControllers_Parms Parms;
		Parms.OldPC=OldPC;
		Parms.NewPC=NewPC;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_K2_OnSwapPlayerControllers),&Parms);
	}
	static FName NAME_AGameModeBase_K2_PostLogin = FName(TEXT("K2_PostLogin"));
	void AGameModeBase::K2_PostLogin(APlayerController* NewPlayer)
	{
		GameModeBase_eventK2_PostLogin_Parms Parms;
		Parms.NewPlayer=NewPlayer;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_K2_PostLogin),&Parms);
	}
	static FName NAME_AGameModeBase_MustSpectate = FName(TEXT("MustSpectate"));
	bool AGameModeBase::MustSpectate(APlayerController* NewPlayerController) const
	{
		GameModeBase_eventMustSpectate_Parms Parms;
		Parms.NewPlayerController=NewPlayerController;
		const_cast<AGameModeBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_MustSpectate),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AGameModeBase_PlayerCanRestart = FName(TEXT("PlayerCanRestart"));
	bool AGameModeBase::PlayerCanRestart(APlayerController* Player)
	{
		GameModeBase_eventPlayerCanRestart_Parms Parms;
		Parms.Player=Player;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_PlayerCanRestart),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AGameModeBase_ShouldReset = FName(TEXT("ShouldReset"));
	bool AGameModeBase::ShouldReset(AActor* ActorToReset)
	{
		GameModeBase_eventShouldReset_Parms Parms;
		Parms.ActorToReset=ActorToReset;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_ShouldReset),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AGameModeBase_SpawnDefaultPawnAtTransform = FName(TEXT("SpawnDefaultPawnAtTransform"));
	APawn* AGameModeBase::SpawnDefaultPawnAtTransform(AController* NewPlayer, FTransform const& SpawnTransform)
	{
		GameModeBase_eventSpawnDefaultPawnAtTransform_Parms Parms;
		Parms.NewPlayer=NewPlayer;
		Parms.SpawnTransform=SpawnTransform;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_SpawnDefaultPawnAtTransform),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AGameModeBase_SpawnDefaultPawnFor = FName(TEXT("SpawnDefaultPawnFor"));
	APawn* AGameModeBase::SpawnDefaultPawnFor(AController* NewPlayer, AActor* StartSpot)
	{
		GameModeBase_eventSpawnDefaultPawnFor_Parms Parms;
		Parms.NewPlayer=NewPlayer;
		Parms.StartSpot=StartSpot;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_SpawnDefaultPawnFor),&Parms);
		return Parms.ReturnValue;
	}
	void AGameModeBase::StaticRegisterNativesAGameModeBase()
	{
		UClass* Class = AGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanSpectate", (Native)&AGameModeBase::execCanSpectate },
			{ "ChangeName", (Native)&AGameModeBase::execChangeName },
			{ "ChoosePlayerStart", (Native)&AGameModeBase::execChoosePlayerStart },
			{ "FindPlayerStart", (Native)&AGameModeBase::execFindPlayerStart },
			{ "GetDefaultPawnClassForController", (Native)&AGameModeBase::execGetDefaultPawnClassForController },
			{ "GetNumPlayers", (Native)&AGameModeBase::execGetNumPlayers },
			{ "GetNumSpectators", (Native)&AGameModeBase::execGetNumSpectators },
			{ "HandleStartingNewPlayer", (Native)&AGameModeBase::execHandleStartingNewPlayer },
			{ "HasMatchStarted", (Native)&AGameModeBase::execHasMatchStarted },
			{ "InitializeHUDForPlayer", (Native)&AGameModeBase::execInitializeHUDForPlayer },
			{ "InitStartSpot", (Native)&AGameModeBase::execInitStartSpot },
			{ "K2_FindPlayerStart", (Native)&AGameModeBase::execK2_FindPlayerStart },
			{ "MustSpectate", (Native)&AGameModeBase::execMustSpectate },
			{ "PlayerCanRestart", (Native)&AGameModeBase::execPlayerCanRestart },
			{ "ResetLevel", (Native)&AGameModeBase::execResetLevel },
			{ "RestartPlayer", (Native)&AGameModeBase::execRestartPlayer },
			{ "RestartPlayerAtPlayerStart", (Native)&AGameModeBase::execRestartPlayerAtPlayerStart },
			{ "RestartPlayerAtTransform", (Native)&AGameModeBase::execRestartPlayerAtTransform },
			{ "ReturnToMainMenuHost", (Native)&AGameModeBase::execReturnToMainMenuHost },
			{ "ShouldReset", (Native)&AGameModeBase::execShouldReset },
			{ "SpawnDefaultPawnAtTransform", (Native)&AGameModeBase::execSpawnDefaultPawnAtTransform },
			{ "SpawnDefaultPawnFor", (Native)&AGameModeBase::execSpawnDefaultPawnFor },
			{ "StartPlay", (Native)&AGameModeBase::execStartPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AGameModeBase_CanSpectate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((GameModeBase_eventCanSpectate_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GameModeBase_eventCanSpectate_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ViewTarget = { UE4CodeGen_Private::EPropertyClass::Object, "ViewTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventCanSpectate_Parms, ViewTarget), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Viewer = { UE4CodeGen_Private::EPropertyClass::Object, "Viewer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventCanSpectate_Parms, Viewer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ViewTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Viewer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Return whether Viewer is allowed to spectate from the point of view of ViewTarget." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, "CanSpectate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(GameModeBase_eventCanSpectate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameModeBase_ChangeName()
	{
		struct GameModeBase_eventChangeName_Parms
		{
			AController* Controller;
			FString NewName;
			bool bNameChange;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bNameChange_SetBit = [](void* Obj){ ((GameModeBase_eventChangeName_Parms*)Obj)->bNameChange = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNameChange = { UE4CodeGen_Private::EPropertyClass::Bool, "bNameChange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GameModeBase_eventChangeName_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNameChange_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewName = { UE4CodeGen_Private::EPropertyClass::Str, "NewName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventChangeName_Parms, NewName), METADATA_PARAMS(NewProp_NewName_MetaData, ARRAY_COUNT(NewProp_NewName_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller = { UE4CodeGen_Private::EPropertyClass::Object, "Controller", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventChangeName_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNameChange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Controller,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Sets the name for a controller\n@param Controller    The controller of the player to change the name of\n@param NewName               The name to set the player to\n@param bNameChange   Whether the name is changing or if this is the first time it has been set" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, "ChangeName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(GameModeBase_eventChangeName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventChoosePlayerStart_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player = { UE4CodeGen_Private::EPropertyClass::Object, "Player", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventChoosePlayerStart_Parms, Player), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Player,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Return the 'best' player start for this player to spawn from\nDefault implementation looks for a random unoccupied spot\n\n@param Player is the controller for whom we are choosing a playerstart\n@returns AActor chosen as player start (usually a PlayerStart)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, "ChoosePlayerStart", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(GameModeBase_eventChoosePlayerStart_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameModeBase_FindPlayerStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventFindPlayerStart_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncomingName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_IncomingName = { UE4CodeGen_Private::EPropertyClass::Str, "IncomingName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventFindPlayerStart_Parms, IncomingName), METADATA_PARAMS(NewProp_IncomingName_MetaData, ARRAY_COUNT(NewProp_IncomingName_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player = { UE4CodeGen_Private::EPropertyClass::Object, "Player", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventFindPlayerStart_Parms, Player), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IncomingName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Player,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Return the specific player start actor that should be used for the next spawn\nThis will either use a previously saved startactor, or calls ChoosePlayerStart\n\n@param Player The AController for whom we are choosing a Player Start\n@param IncomingName Specifies the tag of a Player Start to use\n@returns Actor chosen as player start (usually a PlayerStart)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, "FindPlayerStart", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(GameModeBase_eventFindPlayerStart_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventGetDefaultPawnClassForController_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InController = { UE4CodeGen_Private::EPropertyClass::Object, "InController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventGetDefaultPawnClassForController_Parms, InController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Classes" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Returns default pawn class for given controller" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, "GetDefaultPawnClassForController", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(GameModeBase_eventGetDefaultPawnClassForController_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameModeBase_GetNumPlayers()
	{
		struct GameModeBase_eventGetNumPlayers_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventGetNumPlayers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Returns number of active human players, excluding spectators" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, "GetNumPlayers", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(GameModeBase_eventGetNumPlayers_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameModeBase_GetNumSpectators()
	{
		struct GameModeBase_eventGetNumSpectators_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventGetNumSpectators_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Returns number of human players currently spectating" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, "GetNumSpectators", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(GameModeBase_eventGetNumSpectators_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "NewPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventHandleStartingNewPlayer_Parms, NewPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewPlayer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Signals that a player is ready to enter the game, which may start it up" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, "HandleStartingNewPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(GameModeBase_eventHandleStartingNewPlayer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameModeBase_HasMatchStarted()
	{
		struct GameModeBase_eventHasMatchStarted_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((GameModeBase_eventHasMatchStarted_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GameModeBase_eventHasMatchStarted_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Returns true if the match start callbacks have been called" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, "HasMatchStarted", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(GameModeBase_eventHasMatchStarted_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "NewPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventInitializeHUDForPlayer_Parms, NewPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewPlayer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Initialize the AHUD object for a player. Games can override this to do something different" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, "InitializeHUDForPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080C00, sizeof(GameModeBase_eventInitializeHUDForPlayer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameModeBase_InitStartSpot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "NewPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventInitStartSpot_Parms, NewPlayer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartSpot = { UE4CodeGen_Private::EPropertyClass::Object, "StartSpot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventInitStartSpot_Parms, StartSpot), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewPlayer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartSpot,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Called from RestartPlayerAtPlayerStart, can be used to initialize the start spawn actor" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, "InitStartSpot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(GameModeBase_eventInitStartSpot_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart()
	{
		struct GameModeBase_eventK2_FindPlayerStart_Parms
		{
			AController* Player;
			FString IncomingName;
			AActor* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventK2_FindPlayerStart_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncomingName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_IncomingName = { UE4CodeGen_Private::EPropertyClass::Str, "IncomingName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventK2_FindPlayerStart_Parms, IncomingName), METADATA_PARAMS(NewProp_IncomingName_MetaData, ARRAY_COUNT(NewProp_IncomingName_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player = { UE4CodeGen_Private::EPropertyClass::Object, "Player", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventK2_FindPlayerStart_Parms, Player), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IncomingName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Player,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "DisplayName", "FindPlayerStart" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Return the specific player start actor that should be used for the next spawn\nThis will either use a previously saved startactor, or calls ChoosePlayerStart\n\n@param Player The AController for whom we are choosing a Player Start\n@param IncomingName Specifies the tag of a Player Start to use\n@returns Actor chosen as player start (usually a PlayerStart)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, "K2_FindPlayerStart", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GameModeBase_eventK2_FindPlayerStart_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameModeBase_K2_OnChangeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bNameChange_SetBit = [](void* Obj){ ((GameModeBase_eventK2_OnChangeName_Parms*)Obj)->bNameChange = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNameChange = { UE4CodeGen_Private::EPropertyClass::Bool, "bNameChange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GameModeBase_eventK2_OnChangeName_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNameChange_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewName = { UE4CodeGen_Private::EPropertyClass::Str, "NewName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventK2_OnChangeName_Parms, NewName), METADATA_PARAMS(NewProp_NewName_MetaData, ARRAY_COUNT(NewProp_NewName_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other = { UE4CodeGen_Private::EPropertyClass::Object, "Other", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventK2_OnChangeName_Parms, Other), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNameChange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Other,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "DisplayName", "OnChangeName" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Overridable event for GameMode blueprint to respond to a change name call\n@param Controller    The controller of the player to change the name of\n@param NewName               The name to set the player to\n@param bNameChange   Whether the name is changing or if this is the first time it has been set" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, "K2_OnChangeName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(GameModeBase_eventK2_OnChangeName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameModeBase_K2_OnLogout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExitingController = { UE4CodeGen_Private::EPropertyClass::Object, "ExitingController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventK2_OnLogout_Parms, ExitingController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExitingController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "DisplayName", "OnLogout" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Implementable event when a Controller with a PlayerState leaves the game." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, "K2_OnLogout", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(GameModeBase_eventK2_OnLogout_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "NewPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventK2_OnRestartPlayer_Parms, NewPlayer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewPlayer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "DisplayName", "OnRestartPlayer" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Implementable event called at the end of RestartPlayer" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, "K2_OnRestartPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(GameModeBase_eventK2_OnRestartPlayer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPC = { UE4CodeGen_Private::EPropertyClass::Object, "NewPC", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventK2_OnSwapPlayerControllers_Parms, NewPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldPC = { UE4CodeGen_Private::EPropertyClass::Object, "OldPC", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventK2_OnSwapPlayerControllers_Parms, OldPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewPC,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldPC,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "DisplayName", "OnSwapPlayerControllers" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Called when a PlayerController is swapped to a new one during seamless travel" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, "K2_OnSwapPlayerControllers", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(GameModeBase_eventK2_OnSwapPlayerControllers_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameModeBase_K2_PostLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "NewPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventK2_PostLogin_Parms, NewPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewPlayer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "DisplayName", "OnPostLogin" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Notification that a player has successfully logged in, and has been given a player controller" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, "K2_PostLogin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(GameModeBase_eventK2_PostLogin_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameModeBase_MustSpectate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((GameModeBase_eventMustSpectate_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GameModeBase_eventMustSpectate_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayerController = { UE4CodeGen_Private::EPropertyClass::Object, "NewPlayerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventMustSpectate_Parms, NewPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewPlayerController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Returns true if NewPlayerController may only join the server as a spectator." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, "MustSpectate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48020C00, sizeof(GameModeBase_eventMustSpectate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameModeBase_PlayerCanRestart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((GameModeBase_eventPlayerCanRestart_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GameModeBase_eventPlayerCanRestart_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player = { UE4CodeGen_Private::EPropertyClass::Object, "Player", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventPlayerCanRestart_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Player,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Returns true if it's valid to call RestartPlayer. By default will call Player->CanRestartPlayer" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, "PlayerCanRestart", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(GameModeBase_eventPlayerCanRestart_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameModeBase_ResetLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Overridable function called when resetting level. This is used to reset the game state while staying in the same map\nDefault implementation calls Reset() on all actors except GameMode and Controllers" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, "ResetLevel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameModeBase_RestartPlayer()
	{
		struct GameModeBase_eventRestartPlayer_Parms
		{
			AController* NewPlayer;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "NewPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventRestartPlayer_Parms, NewPlayer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewPlayer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Tries to spawn the player's pawn, at the location returned by FindPlayerStart" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, "RestartPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(GameModeBase_eventRestartPlayer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart()
	{
		struct GameModeBase_eventRestartPlayerAtPlayerStart_Parms
		{
			AController* NewPlayer;
			AActor* StartSpot;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartSpot = { UE4CodeGen_Private::EPropertyClass::Object, "StartSpot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventRestartPlayerAtPlayerStart_Parms, StartSpot), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "NewPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventRestartPlayerAtPlayerStart_Parms, NewPlayer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartSpot,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewPlayer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Tries to spawn the player's pawn at the specified actor's location" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, "RestartPlayerAtPlayerStart", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(GameModeBase_eventRestartPlayerAtPlayerStart_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform()
	{
		struct GameModeBase_eventRestartPlayerAtTransform_Parms
		{
			AController* NewPlayer;
			FTransform SpawnTransform;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "SpawnTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventRestartPlayerAtTransform_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_SpawnTransform_MetaData, ARRAY_COUNT(NewProp_SpawnTransform_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "NewPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventRestartPlayerAtTransform_Parms, NewPlayer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewPlayer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Tries to spawn the player's pawn at a specific location" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, "RestartPlayerAtTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20400, sizeof(GameModeBase_eventRestartPlayerAtTransform_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameModeBase_ReturnToMainMenuHost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Return to main menu, and disconnect any players" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, "ReturnToMainMenuHost", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameModeBase_ShouldReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((GameModeBase_eventShouldReset_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GameModeBase_eventShouldReset_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToReset = { UE4CodeGen_Private::EPropertyClass::Object, "ActorToReset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventShouldReset_Parms, ActorToReset), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorToReset,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Overridable function to determine whether an Actor should have Reset called when the game has Reset called on it.\nDefault implementation returns true\n@param ActorToReset The actor to make a determination for\n@return true if ActorToReset should have Reset() called on it while restarting the game,\n                false if the GameMode will manually reset it or if the actor does not need to be reset" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, "ShouldReset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(GameModeBase_eventShouldReset_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventSpawnDefaultPawnAtTransform_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "SpawnTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventSpawnDefaultPawnAtTransform_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_SpawnTransform_MetaData, ARRAY_COUNT(NewProp_SpawnTransform_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "NewPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventSpawnDefaultPawnAtTransform_Parms, NewPlayer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewPlayer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Called during RestartPlayer to actually spawn the player's pawn, when using a transform\n@param       NewPlayer - Controller for whom this pawn is spawned\n@param       StartSpot - Actor at which to spawn pawn\n@return      a pawn of the default pawn class" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, "SpawnDefaultPawnAtTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08C20C00, sizeof(GameModeBase_eventSpawnDefaultPawnAtTransform_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventSpawnDefaultPawnFor_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartSpot = { UE4CodeGen_Private::EPropertyClass::Object, "StartSpot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventSpawnDefaultPawnFor_Parms, StartSpot), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "NewPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeBase_eventSpawnDefaultPawnFor_Parms, NewPlayer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartSpot,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewPlayer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Called during RestartPlayer to actually spawn the player's pawn, when using a start spot\n@param       NewPlayer - Controller for whom this pawn is spawned\n@param       StartSpot - Actor at which to spawn pawn\n@return      a pawn of the default pawn class" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, "SpawnDefaultPawnFor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(GameModeBase_eventSpawnDefaultPawnFor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameModeBase_StartPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Transitions to calls BeginPlay on actors." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, "StartPlay", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameModeBase_NoRegister()
	{
		return AGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AInfo,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AGameModeBase_CanSpectate, "CanSpectate" }, // 3776952277
				{ &Z_Construct_UFunction_AGameModeBase_ChangeName, "ChangeName" }, // 1855218422
				{ &Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart, "ChoosePlayerStart" }, // 2496799972
				{ &Z_Construct_UFunction_AGameModeBase_FindPlayerStart, "FindPlayerStart" }, // 1891753536
				{ &Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController, "GetDefaultPawnClassForController" }, // 1392142882
				{ &Z_Construct_UFunction_AGameModeBase_GetNumPlayers, "GetNumPlayers" }, // 3671329106
				{ &Z_Construct_UFunction_AGameModeBase_GetNumSpectators, "GetNumSpectators" }, // 4149244014
				{ &Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer, "HandleStartingNewPlayer" }, // 3265078160
				{ &Z_Construct_UFunction_AGameModeBase_HasMatchStarted, "HasMatchStarted" }, // 1047403045
				{ &Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer, "InitializeHUDForPlayer" }, // 301641259
				{ &Z_Construct_UFunction_AGameModeBase_InitStartSpot, "InitStartSpot" }, // 1617259686
				{ &Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart, "K2_FindPlayerStart" }, // 444228997
				{ &Z_Construct_UFunction_AGameModeBase_K2_OnChangeName, "K2_OnChangeName" }, // 811570667
				{ &Z_Construct_UFunction_AGameModeBase_K2_OnLogout, "K2_OnLogout" }, // 3315500374
				{ &Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer, "K2_OnRestartPlayer" }, // 3741916443
				{ &Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers, "K2_OnSwapPlayerControllers" }, // 1764029353
				{ &Z_Construct_UFunction_AGameModeBase_K2_PostLogin, "K2_PostLogin" }, // 4271032116
				{ &Z_Construct_UFunction_AGameModeBase_MustSpectate, "MustSpectate" }, // 1494554129
				{ &Z_Construct_UFunction_AGameModeBase_PlayerCanRestart, "PlayerCanRestart" }, // 1358598225
				{ &Z_Construct_UFunction_AGameModeBase_ResetLevel, "ResetLevel" }, // 3868861058
				{ &Z_Construct_UFunction_AGameModeBase_RestartPlayer, "RestartPlayer" }, // 4158437358
				{ &Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart, "RestartPlayerAtPlayerStart" }, // 303814496
				{ &Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform, "RestartPlayerAtTransform" }, // 2913105913
				{ &Z_Construct_UFunction_AGameModeBase_ReturnToMainMenuHost, "ReturnToMainMenuHost" }, // 4101121405
				{ &Z_Construct_UFunction_AGameModeBase_ShouldReset, "ShouldReset" }, // 2235234184
				{ &Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform, "SpawnDefaultPawnAtTransform" }, // 33265140
				{ &Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor, "SpawnDefaultPawnFor" }, // 3365933231
				{ &Z_Construct_UFunction_AGameModeBase_StartPlay, "StartPlay" }, // 1573606581
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "GameFramework/GameModeBase.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ShortTooltip", "Game Mode Base defines the game being played, its rules, scoring, and other facets of the game type." },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
				{ "ToolTip", "The GameModeBase defines the game being played. It governs the game rules, scoring, what actors\nare allowed to exist in this game type, and who may enter the game.\n\nIt is only instanced on the server and will never exist on the client.\n\nA GameModeBase actor is instantiated when the level is initialized for gameplay in\nC++ UGameEngine::LoadMap().\n\nThe class of this GameMode actor is determined by (in order) either the URL ?game=xxx,\nthe GameMode Override value set in the World Settings, or the DefaultGameMode entry set\nin the game's Project Settings.\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/GameMode/index.html" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPauseable_MetaData[] = {
				{ "Category", "GameMode" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Whether the game is pauseable." },
			};
#endif
			auto NewProp_bPauseable_SetBit = [](void* Obj){ ((AGameModeBase*)Obj)->bPauseable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPauseable = { UE4CodeGen_Private::EPropertyClass::Bool, "bPauseable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AGameModeBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPauseable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPauseable_MetaData, ARRAY_COUNT(NewProp_bPauseable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartPlayersAsSpectators_MetaData[] = {
				{ "Category", "GameMode" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Whether players should immediately spawn when logging in, or stay as spectators until they manually spawn" },
			};
#endif
			auto NewProp_bStartPlayersAsSpectators_SetBit = [](void* Obj){ ((AGameModeBase*)Obj)->bStartPlayersAsSpectators = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartPlayersAsSpectators = { UE4CodeGen_Private::EPropertyClass::Bool, "bStartPlayersAsSpectators", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AGameModeBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStartPlayersAsSpectators_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bStartPlayersAsSpectators_MetaData, ARRAY_COUNT(NewProp_bStartPlayersAsSpectators_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSeamlessTravel_MetaData[] = {
				{ "Category", "GameMode" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Whether the game perform map travels using SeamlessTravel() which loads in the background and doesn't disconnect clients" },
			};
#endif
			auto NewProp_bUseSeamlessTravel_SetBit = [](void* Obj){ ((AGameModeBase*)Obj)->bUseSeamlessTravel = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSeamlessTravel = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseSeamlessTravel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AGameModeBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseSeamlessTravel_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseSeamlessTravel_MetaData, ARRAY_COUNT(NewProp_bUseSeamlessTravel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPlayerName_MetaData[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "The default player name assigned to players that join with no name specified." },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_DefaultPlayerName = { UE4CodeGen_Private::EPropertyClass::Text, "DefaultPlayerName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGameModeBase, DefaultPlayerName), METADATA_PARAMS(NewProp_DefaultPlayerName_MetaData, ARRAY_COUNT(NewProp_DefaultPlayerName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameState_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "GameState is used to replicate game state relevant properties to all clients." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameState = { UE4CodeGen_Private::EPropertyClass::Object, "GameState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(AGameModeBase, GameState), Z_Construct_UClass_AGameStateBase_NoRegister, METADATA_PARAMS(NewProp_GameState_MetaData, ARRAY_COUNT(NewProp_GameState_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameSession_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Game Session handles login approval, arbitration, online game interface" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameSession = { UE4CodeGen_Private::EPropertyClass::Object, "GameSession", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(AGameModeBase, GameSession), Z_Construct_UClass_AGameSession_NoRegister, METADATA_PARAMS(NewProp_GameSession_MetaData, ARRAY_COUNT(NewProp_GameSession_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplaySpectatorPlayerControllerClass_MetaData[] = {
				{ "Category", "Classes" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "The PlayerController class used when spectating a network replay." },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReplaySpectatorPlayerControllerClass = { UE4CodeGen_Private::EPropertyClass::Class, "ReplaySpectatorPlayerControllerClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000002000015, 1, nullptr, STRUCT_OFFSET(AGameModeBase, ReplaySpectatorPlayerControllerClass), Z_Construct_UClass_APlayerController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ReplaySpectatorPlayerControllerClass_MetaData, ARRAY_COUNT(NewProp_ReplaySpectatorPlayerControllerClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectatorClass_MetaData[] = {
				{ "Category", "Classes" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "The pawn class used by the PlayerController for players when spectating." },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpectatorClass = { UE4CodeGen_Private::EPropertyClass::Class, "SpectatorClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000002000015, 1, nullptr, STRUCT_OFFSET(AGameModeBase, SpectatorClass), Z_Construct_UClass_ASpectatorPawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_SpectatorClass_MetaData, ARRAY_COUNT(NewProp_SpectatorClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPawnClass_MetaData[] = {
				{ "Category", "Classes" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "The default pawn class used by players." },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultPawnClass = { UE4CodeGen_Private::EPropertyClass::Class, "DefaultPawnClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000005, 1, nullptr, STRUCT_OFFSET(AGameModeBase, DefaultPawnClass), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_DefaultPawnClass_MetaData, ARRAY_COUNT(NewProp_DefaultPawnClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDClass_MetaData[] = {
				{ "Category", "Classes" },
				{ "DisplayName", "HUD Class" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "HUD class this game uses." },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_HUDClass = { UE4CodeGen_Private::EPropertyClass::Class, "HUDClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000005, 1, nullptr, STRUCT_OFFSET(AGameModeBase, HUDClass), Z_Construct_UClass_AHUD_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_HUDClass_MetaData, ARRAY_COUNT(NewProp_HUDClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStateClass_MetaData[] = {
				{ "Category", "Classes" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "A PlayerState of this class will be associated with every player to replicate relevant player information to all clients." },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerStateClass = { UE4CodeGen_Private::EPropertyClass::Class, "PlayerStateClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000002000015, 1, nullptr, STRUCT_OFFSET(AGameModeBase, PlayerStateClass), Z_Construct_UClass_APlayerState_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_PlayerStateClass_MetaData, ARRAY_COUNT(NewProp_PlayerStateClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerControllerClass_MetaData[] = {
				{ "Category", "Classes" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "The class of PlayerController to spawn for players logging in." },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerControllerClass = { UE4CodeGen_Private::EPropertyClass::Class, "PlayerControllerClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000002000015, 1, nullptr, STRUCT_OFFSET(AGameModeBase, PlayerControllerClass), Z_Construct_UClass_APlayerController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_PlayerControllerClass_MetaData, ARRAY_COUNT(NewProp_PlayerControllerClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameStateClass_MetaData[] = {
				{ "Category", "Classes" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Class of GameState associated with this GameMode." },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameStateClass = { UE4CodeGen_Private::EPropertyClass::Class, "GameStateClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000002000015, 1, nullptr, STRUCT_OFFSET(AGameModeBase, GameStateClass), Z_Construct_UClass_AGameStateBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_GameStateClass_MetaData, ARRAY_COUNT(NewProp_GameStateClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameSessionClass_MetaData[] = {
				{ "Category", "Classes" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Class of GameSession, which handles login approval and online game interface" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameSessionClass = { UE4CodeGen_Private::EPropertyClass::Class, "GameSessionClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000005, 1, nullptr, STRUCT_OFFSET(AGameModeBase, GameSessionClass), Z_Construct_UClass_AGameSession_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_GameSessionClass_MetaData, ARRAY_COUNT(NewProp_GameSessionClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionsString_MetaData[] = {
				{ "Category", "GameMode" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
				{ "ToolTip", "Save options string and parse it when needed" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_OptionsString = { UE4CodeGen_Private::EPropertyClass::Str, "OptionsString", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(AGameModeBase, OptionsString), METADATA_PARAMS(NewProp_OptionsString_MetaData, ARRAY_COUNT(NewProp_OptionsString_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPauseable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStartPlayersAsSpectators,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseSeamlessTravel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultPlayerName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameSession,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReplaySpectatorPlayerControllerClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpectatorClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultPawnClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HUDClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerStateClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerControllerClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameStateClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameSessionClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OptionsString,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameModeBase, 2452669945);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameModeBase(Z_Construct_UClass_AGameModeBase, &AGameModeBase::StaticClass, TEXT("/Script/Engine"), TEXT("AGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
