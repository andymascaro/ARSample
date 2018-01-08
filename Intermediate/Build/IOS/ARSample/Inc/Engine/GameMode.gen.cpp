// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameMode_AbortMatch();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameMode_EndMatch();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameMode_GetMatchState();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameMode_HasMatchEnded();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameMode_IsMatchInProgress();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameMode_K2_OnSetMatchState();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameMode_ReadyToEndMatch();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameMode_ReadyToStartMatch();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameMode_RestartGame();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameMode_Say();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameMode_SetBandwidthLimit();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameMode_StartMatch();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ULocalMessage_NoRegister();
// End Cross Module References
	static FName NAME_AGameMode_K2_OnSetMatchState = FName(TEXT("K2_OnSetMatchState"));
	void AGameMode::K2_OnSetMatchState(FName NewState)
	{
		GameMode_eventK2_OnSetMatchState_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_AGameMode_K2_OnSetMatchState),&Parms);
	}
	static FName NAME_AGameMode_ReadyToEndMatch = FName(TEXT("ReadyToEndMatch"));
	bool AGameMode::ReadyToEndMatch()
	{
		GameMode_eventReadyToEndMatch_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AGameMode_ReadyToEndMatch),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AGameMode_ReadyToStartMatch = FName(TEXT("ReadyToStartMatch"));
	bool AGameMode::ReadyToStartMatch()
	{
		GameMode_eventReadyToStartMatch_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AGameMode_ReadyToStartMatch),&Parms);
		return !!Parms.ReturnValue;
	}
	void AGameMode::StaticRegisterNativesAGameMode()
	{
		UClass* Class = AGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AbortMatch", (Native)&AGameMode::execAbortMatch },
			{ "EndMatch", (Native)&AGameMode::execEndMatch },
			{ "GetMatchState", (Native)&AGameMode::execGetMatchState },
			{ "HasMatchEnded", (Native)&AGameMode::execHasMatchEnded },
			{ "IsMatchInProgress", (Native)&AGameMode::execIsMatchInProgress },
			{ "ReadyToEndMatch", (Native)&AGameMode::execReadyToEndMatch },
			{ "ReadyToStartMatch", (Native)&AGameMode::execReadyToStartMatch },
			{ "RestartGame", (Native)&AGameMode::execRestartGame },
			{ "Say", (Native)&AGameMode::execSay },
			{ "SetBandwidthLimit", (Native)&AGameMode::execSetBandwidthLimit },
			{ "StartMatch", (Native)&AGameMode::execStartMatch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AGameMode_AbortMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
				{ "ToolTip", "Report that a match has failed due to unrecoverable error" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, "AbortMatch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameMode_EndMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
				{ "ToolTip", "Transition from InProgress to WaitingPostMatch. You can call this manually, will also get called if ReadyToEndMatch returns true" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, "EndMatch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameMode_GetMatchState()
	{
		struct GameMode_eventGetMatchState_Parms
		{
			FName ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameMode_eventGetMatchState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
				{ "ToolTip", "Returns the current match state, this is an accessor to protect the state machine flow" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, "GetMatchState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(GameMode_eventGetMatchState_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameMode_HasMatchEnded()
	{
		struct GameMode_eventHasMatchEnded_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((GameMode_eventHasMatchEnded_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GameMode_eventHasMatchEnded_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
				{ "ToolTip", "Returns true if the match state is WaitingPostMatch or later" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, "HasMatchEnded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(GameMode_eventHasMatchEnded_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameMode_IsMatchInProgress()
	{
		struct GameMode_eventIsMatchInProgress_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((GameMode_eventIsMatchInProgress_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GameMode_eventIsMatchInProgress_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
				{ "ToolTip", "Returns true if the match state is InProgress or other gameplay state" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, "IsMatchInProgress", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(GameMode_eventIsMatchInProgress_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameMode_K2_OnSetMatchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewState = { UE4CodeGen_Private::EPropertyClass::Name, "NewState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameMode_eventK2_OnSetMatchState_Parms, NewState), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewState,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "DisplayName", "OnSetMatchState" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
				{ "ToolTip", "Implementable event to respond to match state changes" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, "K2_OnSetMatchState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(GameMode_eventK2_OnSetMatchState_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameMode_ReadyToEndMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((GameMode_eventReadyToEndMatch_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GameMode_eventReadyToEndMatch_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
				{ "ToolTip", "@return true if ready to End Match. Games should override this" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, "ReadyToEndMatch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080C00, sizeof(GameMode_eventReadyToEndMatch_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameMode_ReadyToStartMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((GameMode_eventReadyToStartMatch_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GameMode_eventReadyToStartMatch_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
				{ "ToolTip", "@return True if ready to Start Match. Games should override this" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, "ReadyToStartMatch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080C00, sizeof(GameMode_eventReadyToStartMatch_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameMode_RestartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
				{ "ToolTip", "Restart the game, by default travel to the current map" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, "RestartGame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameMode_Say()
	{
		struct GameMode_eventSay_Parms
		{
			FString Msg;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Msg = { UE4CodeGen_Private::EPropertyClass::Str, "Msg", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameMode_eventSay_Parms, Msg), METADATA_PARAMS(NewProp_Msg_MetaData, ARRAY_COUNT(NewProp_Msg_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Msg,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
				{ "ToolTip", "Exec command to broadcast a string to all players" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, "Say", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020600, sizeof(GameMode_eventSay_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameMode_SetBandwidthLimit()
	{
		struct GameMode_eventSetBandwidthLimit_Parms
		{
			float AsyncIOBandwidthLimit;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AsyncIOBandwidthLimit = { UE4CodeGen_Private::EPropertyClass::Float, "AsyncIOBandwidthLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameMode_eventSetBandwidthLimit_Parms, AsyncIOBandwidthLimit), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AsyncIOBandwidthLimit,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, "SetBandwidthLimit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, sizeof(GameMode_eventSetBandwidthLimit_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameMode_StartMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
				{ "ToolTip", "Transition from WaitingToStart to InProgress. You can call this manually, will also get called if ReadyToStartMatch returns true" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, "StartMatch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameMode_NoRegister()
	{
		return AGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AGameMode_AbortMatch, "AbortMatch" }, // 207413737
				{ &Z_Construct_UFunction_AGameMode_EndMatch, "EndMatch" }, // 3604298478
				{ &Z_Construct_UFunction_AGameMode_GetMatchState, "GetMatchState" }, // 3482250532
				{ &Z_Construct_UFunction_AGameMode_HasMatchEnded, "HasMatchEnded" }, // 1961829223
				{ &Z_Construct_UFunction_AGameMode_IsMatchInProgress, "IsMatchInProgress" }, // 3841967199
				{ &Z_Construct_UFunction_AGameMode_K2_OnSetMatchState, "K2_OnSetMatchState" }, // 4273261747
				{ &Z_Construct_UFunction_AGameMode_ReadyToEndMatch, "ReadyToEndMatch" }, // 2978114099
				{ &Z_Construct_UFunction_AGameMode_ReadyToStartMatch, "ReadyToStartMatch" }, // 3648423424
				{ &Z_Construct_UFunction_AGameMode_RestartGame, "RestartGame" }, // 3115711251
				{ &Z_Construct_UFunction_AGameMode_Say, "Say" }, // 3663023031
				{ &Z_Construct_UFunction_AGameMode_SetBandwidthLimit, "SetBandwidthLimit" }, // 143824629
				{ &Z_Construct_UFunction_AGameMode_StartMatch, "StartMatch" }, // 1112469647
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "GameFramework/GameMode.h" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
				{ "ToolTip", "GameMode is a subclass of GameModeBase that behaves like a multiplayer match-based game.\nIt has default behavior for picking spawn points and match state.\nIf you want a simpler base, inherit from GameModeBase instead." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHandleDedicatedServerReplays_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
				{ "ToolTip", "If true, dedicated servers will record replays when HandleMatchHasStarted/HandleMatchHasStopped is called" },
			};
#endif
			auto NewProp_bHandleDedicatedServerReplays_SetBit = [](void* Obj){ ((AGameMode*)Obj)->bHandleDedicatedServerReplays = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHandleDedicatedServerReplays = { UE4CodeGen_Private::EPropertyClass::Bool, "bHandleDedicatedServerReplays", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AGameMode), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHandleDedicatedServerReplays_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHandleDedicatedServerReplays_MetaData, ARRAY_COUNT(NewProp_bHandleDedicatedServerReplays_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InactivePlayerStateLifeSpan_MetaData[] = {
				{ "Category", "GameMode" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
				{ "ToolTip", "Time a playerstate will stick around in an inactive state after a player logout" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InactivePlayerStateLifeSpan = { UE4CodeGen_Private::EPropertyClass::Float, "InactivePlayerStateLifeSpan", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(AGameMode, InactivePlayerStateLifeSpan), METADATA_PARAMS(NewProp_InactivePlayerStateLifeSpan_MetaData, ARRAY_COUNT(NewProp_InactivePlayerStateLifeSpan_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InactivePlayerArray_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
				{ "ToolTip", "PlayerStates of players who have disconnected from the server (saved in case they reconnect)" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InactivePlayerArray = { UE4CodeGen_Private::EPropertyClass::Array, "InactivePlayerArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AGameMode, InactivePlayerArray), METADATA_PARAMS(NewProp_InactivePlayerArray_MetaData, ARRAY_COUNT(NewProp_InactivePlayerArray_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InactivePlayerArray_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "InactivePlayerArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineMessageClass_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
				{ "ToolTip", "Contains strings describing localized game agnostic messages." },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_EngineMessageClass = { UE4CodeGen_Private::EPropertyClass::Class, "EngineMessageClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000000, 1, nullptr, STRUCT_OFFSET(AGameMode, EngineMessageClass), Z_Construct_UClass_ULocalMessage_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_EngineMessageClass_MetaData, ARRAY_COUNT(NewProp_EngineMessageClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumTravellingPlayers_MetaData[] = {
				{ "Category", "GameMode" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
				{ "ToolTip", "Number of players that are still traveling from a previous map" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumTravellingPlayers = { UE4CodeGen_Private::EPropertyClass::Int, "NumTravellingPlayers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(AGameMode, NumTravellingPlayers), METADATA_PARAMS(NewProp_NumTravellingPlayers_MetaData, ARRAY_COUNT(NewProp_NumTravellingPlayers_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRespawnDelay_MetaData[] = {
				{ "Category", "GameMode" },
				{ "DisplayName", "Minimum Respawn Delay" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
				{ "ToolTip", "Minimum time before player can respawn after dying." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinRespawnDelay = { UE4CodeGen_Private::EPropertyClass::Float, "MinRespawnDelay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(AGameMode, MinRespawnDelay), METADATA_PARAMS(NewProp_MinRespawnDelay_MetaData, ARRAY_COUNT(NewProp_MinRespawnDelay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumBots_MetaData[] = {
				{ "Category", "GameMode" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
				{ "ToolTip", "number of non-human players (AI controlled but participating as a player)." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumBots = { UE4CodeGen_Private::EPropertyClass::Int, "NumBots", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(AGameMode, NumBots), METADATA_PARAMS(NewProp_NumBots_MetaData, ARRAY_COUNT(NewProp_NumBots_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumPlayers_MetaData[] = {
				{ "Category", "GameMode" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
				{ "ToolTip", "Current number of human players." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumPlayers = { UE4CodeGen_Private::EPropertyClass::Int, "NumPlayers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(AGameMode, NumPlayers), METADATA_PARAMS(NewProp_NumPlayers_MetaData, ARRAY_COUNT(NewProp_NumPlayers_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSpectators_MetaData[] = {
				{ "Category", "GameMode" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
				{ "ToolTip", "Current number of spectators." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSpectators = { UE4CodeGen_Private::EPropertyClass::Int, "NumSpectators", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(AGameMode, NumSpectators), METADATA_PARAMS(NewProp_NumSpectators_MetaData, ARRAY_COUNT(NewProp_NumSpectators_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDelayedStart_MetaData[] = {
				{ "Category", "GameMode" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
				{ "ToolTip", "Whether the game should immediately start when the first player logs in. Affects the default behavior of ReadyToStartMatch" },
			};
#endif
			auto NewProp_bDelayedStart_SetBit = [](void* Obj){ ((AGameMode*)Obj)->bDelayedStart = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDelayedStart = { UE4CodeGen_Private::EPropertyClass::Bool, "bDelayedStart", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AGameMode), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDelayedStart_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDelayedStart_MetaData, ARRAY_COUNT(NewProp_bDelayedStart_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchState_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
				{ "ToolTip", "What match state we are currently in" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_MatchState = { UE4CodeGen_Private::EPropertyClass::Name, "MatchState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(AGameMode, MatchState), METADATA_PARAMS(NewProp_MatchState_MetaData, ARRAY_COUNT(NewProp_MatchState_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHandleDedicatedServerReplays,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InactivePlayerStateLifeSpan,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InactivePlayerArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InactivePlayerArray_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EngineMessageClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumTravellingPlayers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinRespawnDelay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumBots,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumPlayers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumSpectators,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDelayedStart,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MatchState,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0090028Cu,
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
	IMPLEMENT_CLASS(AGameMode, 2894841358);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameMode(Z_Construct_UClass_AGameMode, &AGameMode::StaticClass, TEXT("/Script/Engine"), TEXT("AGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
