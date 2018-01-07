// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UGameInstance_DebugCreatePlayer();
	ENGINE_API UFunction* Z_Construct_UFunction_UGameInstance_DebugRemovePlayer();
	ENGINE_API UFunction* Z_Construct_UFunction_UGameInstance_HandleNetworkError();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENetworkFailure();
	ENGINE_API UFunction* Z_Construct_UFunction_UGameInstance_HandleTravelError();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETravelFailure();
	ENGINE_API UFunction* Z_Construct_UFunction_UGameInstance_ReceiveInit();
	ENGINE_API UFunction* Z_Construct_UFunction_UGameInstance_ReceiveShutdown();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineSession_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
// End Cross Module References
	static FName NAME_UGameInstance_HandleNetworkError = FName(TEXT("HandleNetworkError"));
	void UGameInstance::HandleNetworkError(ENetworkFailure::Type FailureType, bool bIsServer)
	{
		GameInstance_eventHandleNetworkError_Parms Parms;
		Parms.FailureType=FailureType;
		Parms.bIsServer=bIsServer ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UGameInstance_HandleNetworkError),&Parms);
	}
	static FName NAME_UGameInstance_HandleTravelError = FName(TEXT("HandleTravelError"));
	void UGameInstance::HandleTravelError(ETravelFailure::Type FailureType)
	{
		GameInstance_eventHandleTravelError_Parms Parms;
		Parms.FailureType=FailureType;
		ProcessEvent(FindFunctionChecked(NAME_UGameInstance_HandleTravelError),&Parms);
	}
	static FName NAME_UGameInstance_ReceiveInit = FName(TEXT("ReceiveInit"));
	void UGameInstance::ReceiveInit()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGameInstance_ReceiveInit),NULL);
	}
	static FName NAME_UGameInstance_ReceiveShutdown = FName(TEXT("ReceiveShutdown"));
	void UGameInstance::ReceiveShutdown()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGameInstance_ReceiveShutdown),NULL);
	}
	void UGameInstance::StaticRegisterNativesUGameInstance()
	{
		UClass* Class = UGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DebugCreatePlayer", (Native)&UGameInstance::execDebugCreatePlayer },
			{ "DebugRemovePlayer", (Native)&UGameInstance::execDebugRemovePlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UGameInstance_DebugCreatePlayer()
	{
		struct GameInstance_eventDebugCreatePlayer_Parms
		{
			int32 ControllerId;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerId = { UE4CodeGen_Private::EPropertyClass::Int, "ControllerId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameInstance_eventDebugCreatePlayer_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControllerId,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
				{ "ToolTip", "Debug console command to create a player.\n@param ControllerId - The controller ID the player should accept input from." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameInstance, "DebugCreatePlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, sizeof(GameInstance_eventDebugCreatePlayer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameInstance_DebugRemovePlayer()
	{
		struct GameInstance_eventDebugRemovePlayer_Parms
		{
			int32 ControllerId;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerId = { UE4CodeGen_Private::EPropertyClass::Int, "ControllerId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameInstance_eventDebugRemovePlayer_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControllerId,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
				{ "ToolTip", "Debug console command to remove the player with a given controller ID.\n@param ControllerId - The controller ID to search for." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameInstance, "DebugRemovePlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, sizeof(GameInstance_eventDebugRemovePlayer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameInstance_HandleNetworkError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bIsServer_SetBit = [](void* Obj){ ((GameInstance_eventHandleNetworkError_Parms*)Obj)->bIsServer = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsServer = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsServer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GameInstance_eventHandleNetworkError_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsServer_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_FailureType = { UE4CodeGen_Private::EPropertyClass::Byte, "FailureType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameInstance_eventHandleNetworkError_Parms, FailureType), Z_Construct_UEnum_Engine_ENetworkFailure, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsServer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FailureType,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DisplayName", "NetworkError" },
				{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
				{ "ToolTip", "Opportunity for blueprints to handle network errors." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameInstance, "HandleNetworkError", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(GameInstance_eventHandleNetworkError_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameInstance_HandleTravelError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_FailureType = { UE4CodeGen_Private::EPropertyClass::Byte, "FailureType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameInstance_eventHandleTravelError_Parms, FailureType), Z_Construct_UEnum_Engine_ETravelFailure, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FailureType,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DisplayName", "TravelError" },
				{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
				{ "ToolTip", "Opportunity for blueprints to handle travel errors." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameInstance, "HandleTravelError", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(GameInstance_eventHandleTravelError_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameInstance_ReceiveInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DisplayName", "Init" },
				{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
				{ "ToolTip", "Opportunity for blueprints to handle the game instance being initialized." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameInstance, "ReceiveInit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameInstance_ReceiveShutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DisplayName", "Shutdown" },
				{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
				{ "ToolTip", "Opportunity for blueprints to handle the game instance being shutdown." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameInstance, "ReceiveShutdown", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameInstance_NoRegister()
	{
		return UGameInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UGameInstance_DebugCreatePlayer, "DebugCreatePlayer" }, // 768500214
				{ &Z_Construct_UFunction_UGameInstance_DebugRemovePlayer, "DebugRemovePlayer" }, // 1514719890
				{ &Z_Construct_UFunction_UGameInstance_HandleNetworkError, "HandleNetworkError" }, // 2977952697
				{ &Z_Construct_UFunction_UGameInstance_HandleTravelError, "HandleTravelError" }, // 2755802316
				{ &Z_Construct_UFunction_UGameInstance_ReceiveInit, "ReceiveInit" }, // 3325208835
				{ &Z_Construct_UFunction_UGameInstance_ReceiveShutdown, "ReceiveShutdown" }, // 3530673617
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Engine/GameInstance.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
				{ "ToolTip", "GameInstance: high-level manager object for an instance of the running game.\nSpawned at game creation and not destroyed until game instance is shut down.\nRunning as a standalone game, there will be one of these.\nRunning in PIE (play-in-editor) will generate one of these per PIE instance." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineSession_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
				{ "ToolTip", "Class to manage online services" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnlineSession = { UE4CodeGen_Private::EPropertyClass::Object, "OnlineSession", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UGameInstance, OnlineSession), Z_Construct_UClass_UOnlineSession_NoRegister, METADATA_PARAMS(NewProp_OnlineSession_MetaData, ARRAY_COUNT(NewProp_OnlineSession_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalPlayers_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalPlayers = { UE4CodeGen_Private::EPropertyClass::Array, "LocalPlayers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UGameInstance, LocalPlayers), METADATA_PARAMS(NewProp_LocalPlayers_MetaData, ARRAY_COUNT(NewProp_LocalPlayers_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocalPlayers_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "LocalPlayers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnlineSession,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalPlayers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalPlayers_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGameInstance>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGameInstance::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100088u,
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
	IMPLEMENT_CLASS(UGameInstance, 1630438852);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameInstance(Z_Construct_UClass_UGameInstance, &UGameInstance::StaticClass, TEXT("/Script/Engine"), TEXT("UGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
