// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/PlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerState_OnRep_bIsInactive();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerState_OnRep_PlayerName();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerState_OnRep_Score();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerState_OnRep_UniqueId();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerState_ReceiveCopyProperties();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerState_ReceiveOverrideWith();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ULocalMessage_NoRegister();
// End Cross Module References
	static FName NAME_APlayerState_ReceiveCopyProperties = FName(TEXT("ReceiveCopyProperties"));
	void APlayerState::ReceiveCopyProperties(APlayerState* NewPlayerState)
	{
		PlayerState_eventReceiveCopyProperties_Parms Parms;
		Parms.NewPlayerState=NewPlayerState;
		ProcessEvent(FindFunctionChecked(NAME_APlayerState_ReceiveCopyProperties),&Parms);
	}
	static FName NAME_APlayerState_ReceiveOverrideWith = FName(TEXT("ReceiveOverrideWith"));
	void APlayerState::ReceiveOverrideWith(APlayerState* OldPlayerState)
	{
		PlayerState_eventReceiveOverrideWith_Parms Parms;
		Parms.OldPlayerState=OldPlayerState;
		ProcessEvent(FindFunctionChecked(NAME_APlayerState_ReceiveOverrideWith),&Parms);
	}
	void APlayerState::StaticRegisterNativesAPlayerState()
	{
		UClass* Class = APlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_bIsInactive", (Native)&APlayerState::execOnRep_bIsInactive },
			{ "OnRep_PlayerName", (Native)&APlayerState::execOnRep_PlayerName },
			{ "OnRep_Score", (Native)&APlayerState::execOnRep_Score },
			{ "OnRep_UniqueId", (Native)&APlayerState::execOnRep_UniqueId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_APlayerState_OnRep_bIsInactive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, "OnRep_bIsInactive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerState_OnRep_PlayerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, "OnRep_PlayerName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerState_OnRep_Score()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
				{ "ToolTip", "Replication Notification Callbacks" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, "OnRep_Score", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerState_OnRep_UniqueId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, "OnRep_UniqueId", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerState_ReceiveCopyProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayerState = { UE4CodeGen_Private::EPropertyClass::Object, "NewPlayerState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerState_eventReceiveCopyProperties_Parms, NewPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewPlayerState,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "PlayerState" },
				{ "DisplayName", "CopyProperties" },
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
				{ "ToolTip", "* Can be implemented in Blueprint Child to move more properties from old to new PlayerState when traveling to a new level\n*\n* @param NewPlayerState         New PlayerState, which we fill with the current properties" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, "ReceiveCopyProperties", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(PlayerState_eventReceiveCopyProperties_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerState_ReceiveOverrideWith()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldPlayerState = { UE4CodeGen_Private::EPropertyClass::Object, "OldPlayerState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerState_eventReceiveOverrideWith_Parms, OldPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldPlayerState,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "PlayerState" },
				{ "DisplayName", "OverrideWith" },
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
				{ "ToolTip", "* Can be implemented in Blueprint Child to move more properties from old to new PlayerState when reconnecting\n*\n* @param OldPlayerState         Old PlayerState, which we use to fill the new one with" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, "ReceiveOverrideWith", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(PlayerState_eventReceiveOverrideWith_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerState_NoRegister()
	{
		return APlayerState::StaticClass();
	}
	UClass* Z_Construct_UClass_APlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AInfo,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_APlayerState_OnRep_bIsInactive, "OnRep_bIsInactive" }, // 1273242079
				{ &Z_Construct_UFunction_APlayerState_OnRep_PlayerName, "OnRep_PlayerName" }, // 2300106300
				{ &Z_Construct_UFunction_APlayerState_OnRep_Score, "OnRep_Score" }, // 675268337
				{ &Z_Construct_UFunction_APlayerState_OnRep_UniqueId, "OnRep_UniqueId" }, // 3427536291
				{ &Z_Construct_UFunction_APlayerState_ReceiveCopyProperties, "ReceiveCopyProperties" }, // 1864635594
				{ &Z_Construct_UFunction_APlayerState_ReceiveOverrideWith, "ReceiveOverrideWith" }, // 866775662
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "GameFramework/PlayerState.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
				{ "ToolTip", "A PlayerState is created for every player on a server (or in a standalone game).\nPlayerStates are replicated to all clients, and contain network game relevant information about the player, such as playername, score, etc." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueId_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
				{ "ToolTip", "The id used by the network to uniquely identify a player.\nNOTE: the internals of this property should *never* be exposed to the player as it's transient\nand opaque in meaning (ie it might mean date/time followed by something else).\nIt is OK to use and pass around this property, though." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueId = { UE4CodeGen_Private::EPropertyClass::Struct, "UniqueId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000100000020, 1, "OnRep_UniqueId", STRUCT_OFFSET(APlayerState, UniqueId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(NewProp_UniqueId_MetaData, ARRAY_COUNT(NewProp_UniqueId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedNetworkAddress_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
				{ "ToolTip", "Used to match up InactivePlayerState with rejoining playercontroller." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SavedNetworkAddress = { UE4CodeGen_Private::EPropertyClass::Str, "SavedNetworkAddress", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(APlayerState, SavedNetworkAddress), METADATA_PARAMS(NewProp_SavedNetworkAddress_MetaData, ARRAY_COUNT(NewProp_SavedNetworkAddress_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineMessageClass_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
				{ "ToolTip", "This is used for sending game agnostic messages that can be localized" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_EngineMessageClass = { UE4CodeGen_Private::EPropertyClass::Class, "EngineMessageClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000000, 1, nullptr, STRUCT_OFFSET(APlayerState, EngineMessageClass), Z_Construct_UClass_ULocalMessage_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_EngineMessageClass_MetaData, ARRAY_COUNT(NewProp_EngineMessageClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
				{ "ToolTip", "Elapsed time on server when this PlayerState was first created." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartTime = { UE4CodeGen_Private::EPropertyClass::Int, "StartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000020, 1, nullptr, STRUCT_OFFSET(APlayerState, StartTime), METADATA_PARAMS(NewProp_StartTime_MetaData, ARRAY_COUNT(NewProp_StartTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFromPreviousLevel_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
				{ "ToolTip", "indicates this is a PlayerState from the previous level of a seamless travel,\nwaiting for the player to finish the transition before creating a new one\nthis is used to avoid preserving the PlayerState in the InactivePlayerArray if the player leaves" },
			};
#endif
			auto NewProp_bFromPreviousLevel_SetBit = [](void* Obj){ ((APlayerState*)Obj)->bFromPreviousLevel = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromPreviousLevel = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromPreviousLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000020, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(APlayerState), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFromPreviousLevel_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFromPreviousLevel_MetaData, ARRAY_COUNT(NewProp_bFromPreviousLevel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInactive_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
				{ "ToolTip", "Means this PlayerState came from the GameMode's InactivePlayerArray" },
			};
#endif
			auto NewProp_bIsInactive_SetBit = [](void* Obj){ ((APlayerState*)Obj)->bIsInactive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInactive = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsInactive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000100000020, 1, "OnRep_bIsInactive", sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(APlayerState), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsInactive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsInactive_MetaData, ARRAY_COUNT(NewProp_bIsInactive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsABot_MetaData[] = {
				{ "Category", "PlayerState" },
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
				{ "ToolTip", "True if this PlayerState is associated with an AIController" },
			};
#endif
			auto NewProp_bIsABot_SetBit = [](void* Obj){ ((APlayerState*)Obj)->bIsABot = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsABot = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsABot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000034, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(APlayerState), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsABot_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsABot_MetaData, ARRAY_COUNT(NewProp_bIsABot_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlySpectator_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
				{ "ToolTip", "Whether this player can only ever be a spectator" },
			};
#endif
			auto NewProp_bOnlySpectator_SetBit = [](void* Obj){ ((APlayerState*)Obj)->bOnlySpectator = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlySpectator = { UE4CodeGen_Private::EPropertyClass::Bool, "bOnlySpectator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000020, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(APlayerState), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOnlySpectator_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOnlySpectator_MetaData, ARRAY_COUNT(NewProp_bOnlySpectator_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSpectator_MetaData[] = {
				{ "Category", "PlayerState" },
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
				{ "ToolTip", "Whether this player is currently a spectator" },
			};
#endif
			auto NewProp_bIsSpectator_SetBit = [](void* Obj){ ((APlayerState*)Obj)->bIsSpectator = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSpectator = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsSpectator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000034, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(APlayerState), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsSpectator_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsSpectator_MetaData, ARRAY_COUNT(NewProp_bIsSpectator_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[] = {
				{ "Category", "PlayerState" },
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
				{ "ToolTip", "Unique net id number. Actual value varies based on current online subsystem, use it only as a guaranteed unique number per player." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerId = { UE4CodeGen_Private::EPropertyClass::Int, "PlayerId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000034, 1, nullptr, STRUCT_OFFSET(APlayerState, PlayerId), METADATA_PARAMS(NewProp_PlayerId_MetaData, ARRAY_COUNT(NewProp_PlayerId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[] = {
				{ "Category", "PlayerState" },
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
				{ "ToolTip", "Player name, or blank if none." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName = { UE4CodeGen_Private::EPropertyClass::Str, "PlayerName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000100000034, 1, "OnRep_PlayerName", STRUCT_OFFSET(APlayerState, PlayerName), METADATA_PARAMS(NewProp_PlayerName_MetaData, ARRAY_COUNT(NewProp_PlayerName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ping_MetaData[] = {
				{ "Category", "PlayerState" },
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
				{ "ToolTip", "Replicated compressed ping for this player (holds ping in msec divided by 4)" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Ping = { UE4CodeGen_Private::EPropertyClass::Byte, "Ping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000034, 1, nullptr, STRUCT_OFFSET(APlayerState, Ping), nullptr, METADATA_PARAMS(NewProp_Ping_MetaData, ARRAY_COUNT(NewProp_Ping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
				{ "Category", "PlayerState" },
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
				{ "ToolTip", "Player's current score." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Score = { UE4CodeGen_Private::EPropertyClass::Float, "Score", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000100000034, 1, "OnRep_Score", STRUCT_OFFSET(APlayerState, Score), METADATA_PARAMS(NewProp_Score_MetaData, ARRAY_COUNT(NewProp_Score_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UniqueId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SavedNetworkAddress,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EngineMessageClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFromPreviousLevel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsInactive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsABot,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOnlySpectator,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsSpectator,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Ping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Score,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APlayerState>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APlayerState::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900280u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerState, 697006256);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerState(Z_Construct_UClass_APlayerState, &APlayerState::StaticClass, TEXT("/Script/Engine"), TEXT("APlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
