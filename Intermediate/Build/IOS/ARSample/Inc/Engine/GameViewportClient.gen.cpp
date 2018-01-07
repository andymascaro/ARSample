// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/GameViewportClient.h"
#include "Classes/Engine/Engine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameViewportClient() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient();
	ENGINE_API UClass* Z_Construct_UClass_UScriptViewportClient();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget();
	ENGINE_API UFunction* Z_Construct_UFunction_UGameViewportClient_ShowTitleSafeArea();
	ENGINE_API UFunction* Z_Construct_UFunction_UGameViewportClient_SSSwapControllers();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDebugDisplayProperty();
	ENGINE_API UClass* Z_Construct_UClass_UConsole_NoRegister();
// End Cross Module References
	void UGameViewportClient::StaticRegisterNativesUGameViewportClient()
	{
		UClass* Class = UGameViewportClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetConsoleTarget", (Native)&UGameViewportClient::execSetConsoleTarget },
			{ "ShowTitleSafeArea", (Native)&UGameViewportClient::execShowTitleSafeArea },
			{ "SSSwapControllers", (Native)&UGameViewportClient::execSSSwapControllers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget()
	{
		struct GameViewportClient_eventSetConsoleTarget_Parms
		{
			int32 PlayerIndex;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex = { UE4CodeGen_Private::EPropertyClass::Int, "PlayerIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameViewportClient_eventSetConsoleTarget_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
				{ "ToolTip", "Sets the player which console commands will be executed in the context of." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameViewportClient, "SetConsoleTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, sizeof(GameViewportClient_eventSetConsoleTarget_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameViewportClient_ShowTitleSafeArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
				{ "ToolTip", "Exec for toggling the display of the title safe area" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameViewportClient, "ShowTitleSafeArea", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameViewportClient_SSSwapControllers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
				{ "ToolTip", "Rotates controller ids among gameplayers, useful for testing splitscreen with only one controller." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameViewportClient, "SSSwapControllers", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameViewportClient_NoRegister()
	{
		return UGameViewportClient::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameViewportClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UScriptViewportClient,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget, "SetConsoleTarget" }, // 1796839019
				{ &Z_Construct_UFunction_UGameViewportClient_ShowTitleSafeArea, "ShowTitleSafeArea" }, // 2222185981
				{ &Z_Construct_UFunction_UGameViewportClient_SSSwapControllers, "SSSwapControllers" }, // 2259058045
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/GameViewportClient.h" },
				{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
				{ "ToolTip", "A game viewport (FViewport) is a high-level abstract interface for the\nplatform specific rendering, audio, and input subsystems.\nGameViewportClient is the engine's interface to a game viewport.\nExactly one GameViewportClient is created for each instance of the game.  The\nonly case (so far) where you might have a single instance of Engine, but\nmultiple instances of the game (and thus multiple GameViewportClients) is when\nyou have more than one PIE window running.\n\nResponsibilities:\npropagating input events to the global interactions list\n\n@see UGameViewportClient" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameInstance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameInstance = { UE4CodeGen_Private::EPropertyClass::Object, "GameInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UGameViewportClient, GameInstance), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(NewProp_GameInstance_MetaData, ARRAY_COUNT(NewProp_GameInstance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
				{ "ToolTip", "The relative world context for this viewport" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World = { UE4CodeGen_Private::EPropertyClass::Object, "World", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UGameViewportClient, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(NewProp_World_MetaData, ARRAY_COUNT(NewProp_World_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugProperties_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
				{ "ToolTip", "@todo document" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DebugProperties = { UE4CodeGen_Private::EPropertyClass::Array, "DebugProperties", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UGameViewportClient, DebugProperties), METADATA_PARAMS(NewProp_DebugProperties_MetaData, ARRAY_COUNT(NewProp_DebugProperties_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugProperties_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "DebugProperties", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FDebugDisplayProperty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewportConsole_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
				{ "ToolTip", "The viewport's console.   Might be null on consoles" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ViewportConsole = { UE4CodeGen_Private::EPropertyClass::Object, "ViewportConsole", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UGameViewportClient, ViewportConsole), Z_Construct_UClass_UConsole_NoRegister, METADATA_PARAMS(NewProp_ViewportConsole_MetaData, ARRAY_COUNT(NewProp_ViewportConsole_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_World,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugProperties,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugProperties_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ViewportConsole,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGameViewportClient>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGameViewportClient::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100088u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameViewportClient, 3070892350);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameViewportClient(Z_Construct_UClass_UGameViewportClient, &UGameViewportClient::StaticClass, TEXT("/Script/Engine"), TEXT("UGameViewportClient"), false, nullptr, nullptr, nullptr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
