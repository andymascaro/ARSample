// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/GameStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameStateBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameStateBase_HasBegunPlay();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameStateBase_HasMatchStarted();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameStateBase_OnRep_GameModeClass();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedHasBegunPlay();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSeconds();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameStateBase_OnRep_SpectatorClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ASpectatorPawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
// End Cross Module References
	void AGameStateBase::StaticRegisterNativesAGameStateBase()
	{
		UClass* Class = AGameStateBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerRespawnDelay", (Native)&AGameStateBase::execGetPlayerRespawnDelay },
			{ "GetPlayerStartTime", (Native)&AGameStateBase::execGetPlayerStartTime },
			{ "GetServerWorldTimeSeconds", (Native)&AGameStateBase::execGetServerWorldTimeSeconds },
			{ "HasBegunPlay", (Native)&AGameStateBase::execHasBegunPlay },
			{ "HasMatchStarted", (Native)&AGameStateBase::execHasMatchStarted },
			{ "OnRep_GameModeClass", (Native)&AGameStateBase::execOnRep_GameModeClass },
			{ "OnRep_ReplicatedHasBegunPlay", (Native)&AGameStateBase::execOnRep_ReplicatedHasBegunPlay },
			{ "OnRep_ReplicatedWorldTimeSeconds", (Native)&AGameStateBase::execOnRep_ReplicatedWorldTimeSeconds },
			{ "OnRep_SpectatorClass", (Native)&AGameStateBase::execOnRep_SpectatorClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay()
	{
		struct GameStateBase_eventGetPlayerRespawnDelay_Parms
		{
			AController* Controller;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameStateBase_eventGetPlayerRespawnDelay_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller = { UE4CodeGen_Private::EPropertyClass::Object, "Controller", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameStateBase_eventGetPlayerRespawnDelay_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Controller,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameState" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
				{ "ToolTip", "Returns how much time needs to be spent before a player can respawn" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase, "GetPlayerRespawnDelay", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(GameStateBase_eventGetPlayerRespawnDelay_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime()
	{
		struct GameStateBase_eventGetPlayerStartTime_Parms
		{
			AController* Controller;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameStateBase_eventGetPlayerStartTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller = { UE4CodeGen_Private::EPropertyClass::Object, "Controller", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameStateBase_eventGetPlayerStartTime_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Controller,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameState" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
				{ "ToolTip", "Returns the time that should be used as when a player started" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase, "GetPlayerStartTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(GameStateBase_eventGetPlayerStartTime_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds()
	{
		struct GameStateBase_eventGetServerWorldTimeSeconds_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameStateBase_eventGetServerWorldTimeSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameState" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
				{ "ToolTip", "Returns the simulated TimeSeconds on the server, will be synchronized on client and server" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase, "GetServerWorldTimeSeconds", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(GameStateBase_eventGetServerWorldTimeSeconds_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameStateBase_HasBegunPlay()
	{
		struct GameStateBase_eventHasBegunPlay_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((GameStateBase_eventHasBegunPlay_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GameStateBase_eventHasBegunPlay_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameState" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
				{ "ToolTip", "Returns true if the world has started play (called BeginPlay on actors)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase, "HasBegunPlay", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(GameStateBase_eventHasBegunPlay_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameStateBase_HasMatchStarted()
	{
		struct GameStateBase_eventHasMatchStarted_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((GameStateBase_eventHasMatchStarted_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GameStateBase_eventHasMatchStarted_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameState" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
				{ "ToolTip", "Returns true if the world has started match (called MatchStarted callbacks)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase, "HasMatchStarted", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(GameStateBase_eventHasMatchStarted_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameStateBase_OnRep_GameModeClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
				{ "ToolTip", "GameModeBase class notification callback." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase, "OnRep_GameModeClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedHasBegunPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
				{ "ToolTip", "By default calls BeginPlay and StartMatch" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase, "OnRep_ReplicatedHasBegunPlay", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
				{ "ToolTip", "Allows clients to calculate ServerWorldTimeSecondsDelta" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase, "OnRep_ReplicatedWorldTimeSeconds", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameStateBase_OnRep_SpectatorClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
				{ "ToolTip", "Callback when we receive the spectator class" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase, "OnRep_SpectatorClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameStateBase_NoRegister()
	{
		return AGameStateBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AGameStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AInfo,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay, "GetPlayerRespawnDelay" }, // 154002946
				{ &Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime, "GetPlayerStartTime" }, // 2463499766
				{ &Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds, "GetServerWorldTimeSeconds" }, // 2199321062
				{ &Z_Construct_UFunction_AGameStateBase_HasBegunPlay, "HasBegunPlay" }, // 3386378223
				{ &Z_Construct_UFunction_AGameStateBase_HasMatchStarted, "HasMatchStarted" }, // 1050577797
				{ &Z_Construct_UFunction_AGameStateBase_OnRep_GameModeClass, "OnRep_GameModeClass" }, // 3147414969
				{ &Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedHasBegunPlay, "OnRep_ReplicatedHasBegunPlay" }, // 2800978633
				{ &Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSeconds, "OnRep_ReplicatedWorldTimeSeconds" }, // 1351155134
				{ &Z_Construct_UFunction_AGameStateBase_OnRep_SpectatorClass, "OnRep_SpectatorClass" }, // 1711198773
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "GameFramework/GameStateBase.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
				{ "ToolTip", "GameStateBase is a class that manages the game's global state, and is spawned by GameModeBase.\nIt exists on both the client and the server and is fully replicated." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerWorldTimeSecondsUpdateFrequency_MetaData[] = {
				{ "Category", "GameState" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
				{ "ToolTip", "Frequency that the server updates the replicated TimeSeconds from the world. Set to zero to disable periodic updates." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerWorldTimeSecondsUpdateFrequency = { UE4CodeGen_Private::EPropertyClass::Float, "ServerWorldTimeSecondsUpdateFrequency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AGameStateBase, ServerWorldTimeSecondsUpdateFrequency), METADATA_PARAMS(NewProp_ServerWorldTimeSecondsUpdateFrequency_MetaData, ARRAY_COUNT(NewProp_ServerWorldTimeSecondsUpdateFrequency_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerWorldTimeSecondsDelta_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
				{ "ToolTip", "The difference from the local world's TimeSeconds and the server world's TimeSeconds." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerWorldTimeSecondsDelta = { UE4CodeGen_Private::EPropertyClass::Float, "ServerWorldTimeSecondsDelta", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(AGameStateBase, ServerWorldTimeSecondsDelta), METADATA_PARAMS(NewProp_ServerWorldTimeSecondsDelta_MetaData, ARRAY_COUNT(NewProp_ServerWorldTimeSecondsDelta_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedWorldTimeSeconds_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
				{ "ToolTip", "Server TimeSeconds. Useful for syncing up animation and gameplay." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReplicatedWorldTimeSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "ReplicatedWorldTimeSeconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080100002020, 1, "OnRep_ReplicatedWorldTimeSeconds", STRUCT_OFFSET(AGameStateBase, ReplicatedWorldTimeSeconds), METADATA_PARAMS(NewProp_ReplicatedWorldTimeSeconds_MetaData, ARRAY_COUNT(NewProp_ReplicatedWorldTimeSeconds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicatedHasBegunPlay_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
				{ "ToolTip", "Replicated when GameModeBase->StartPlay has been called so the client will also start play" },
			};
#endif
			auto NewProp_bReplicatedHasBegunPlay_SetBit = [](void* Obj){ ((AGameStateBase*)Obj)->bReplicatedHasBegunPlay = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicatedHasBegunPlay = { UE4CodeGen_Private::EPropertyClass::Bool, "bReplicatedHasBegunPlay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080100002020, 1, "OnRep_ReplicatedHasBegunPlay", sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AGameStateBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReplicatedHasBegunPlay_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bReplicatedHasBegunPlay_MetaData, ARRAY_COUNT(NewProp_bReplicatedHasBegunPlay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerArray_MetaData[] = {
				{ "Category", "GameState" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
				{ "ToolTip", "Array of all PlayerStates, maintained on both server and clients (PlayerStates are always relevant)" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerArray = { UE4CodeGen_Private::EPropertyClass::Array, "PlayerArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002014, 1, nullptr, STRUCT_OFFSET(AGameStateBase, PlayerArray), METADATA_PARAMS(NewProp_PlayerArray_MetaData, ARRAY_COUNT(NewProp_PlayerArray_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerArray_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectatorClass_MetaData[] = {
				{ "Category", "GameState" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
				{ "ToolTip", "Class used by spectators, assigned by GameModeBase." },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpectatorClass = { UE4CodeGen_Private::EPropertyClass::Class, "SpectatorClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000100002034, 1, "OnRep_SpectatorClass", STRUCT_OFFSET(AGameStateBase, SpectatorClass), Z_Construct_UClass_ASpectatorPawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_SpectatorClass_MetaData, ARRAY_COUNT(NewProp_SpectatorClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthorityGameMode_MetaData[] = {
				{ "Category", "GameState" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
				{ "ToolTip", "Instance of the current game mode, exists only on the server. For non-authority clients, this will be NULL." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuthorityGameMode = { UE4CodeGen_Private::EPropertyClass::Object, "AuthorityGameMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002014, 1, nullptr, STRUCT_OFFSET(AGameStateBase, AuthorityGameMode), Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(NewProp_AuthorityGameMode_MetaData, ARRAY_COUNT(NewProp_AuthorityGameMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModeClass_MetaData[] = {
				{ "Category", "GameState" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
				{ "ToolTip", "Class of the server's game mode, assigned by GameModeBase." },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameModeClass = { UE4CodeGen_Private::EPropertyClass::Class, "GameModeClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000100002034, 1, "OnRep_GameModeClass", STRUCT_OFFSET(AGameStateBase, GameModeClass), Z_Construct_UClass_AGameModeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_GameModeClass_MetaData, ARRAY_COUNT(NewProp_GameModeClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ServerWorldTimeSecondsUpdateFrequency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ServerWorldTimeSecondsDelta,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReplicatedWorldTimeSeconds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReplicatedHasBegunPlay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerArray_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpectatorClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AuthorityGameMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameModeClass,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGameStateBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGameStateBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900280u,
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
	IMPLEMENT_CLASS(AGameStateBase, 3015270790);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameStateBase(Z_Construct_UClass_AGameStateBase, &AGameStateBase::StaticClass, TEXT("/Script/Engine"), TEXT("AGameStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
