// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/CheatManager.h"
#include "Classes/GameFramework/PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheatManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCheatManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCheatManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_BugIt();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_BugItGo();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_BugItStringCreator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_ChangeSize();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_CheatScript();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_DamageTarget();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_DebugCapsuleSweep();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepCapture();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepChannel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepClear();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepComplex();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepPawn();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepSize();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_DestroyAll();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_DestroyAllPawnsExceptTarget();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_DestroyPawns();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_DestroyTarget();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_DisableDebugCamera();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_DumpChatState();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_DumpOnlineSessionState();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_DumpPartyState();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_DumpVoiceMutingState();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_EnableDebugCamera();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_FlushLog();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_Fly();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_FreezeFrame();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_Ghost();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_God();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_InvertMouse();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_LogLoc();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_OnlyLoadLevel();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_PlayersOnly();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_RebuildNavigation();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_ReceiveEndPlay();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_ReceiveInitCheatManager();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_ServerToggleAILogging();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_SetMouseSensitivityToDefault();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_SetNavDrawDistance();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_SetWorldOrigin();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_Slomo();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_StreamLevelIn();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_StreamLevelOut();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_Summon();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_Teleport();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_TestCollisionDistance();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_ToggleAILogging();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_ToggleDebugCamera();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_ViewActor();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_ViewClass();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_ViewPlayer();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_ViewSelf();
	ENGINE_API UFunction* Z_Construct_UFunction_UCheatManager_Walk();
	ENGINE_API UClass* Z_Construct_UClass_ADebugCameraController_NoRegister();
// End Cross Module References
	static FName NAME_UCheatManager_ReceiveEndPlay = FName(TEXT("ReceiveEndPlay"));
	void UCheatManager::ReceiveEndPlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCheatManager_ReceiveEndPlay),NULL);
	}
	static FName NAME_UCheatManager_ReceiveInitCheatManager = FName(TEXT("ReceiveInitCheatManager"));
	void UCheatManager::ReceiveInitCheatManager()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCheatManager_ReceiveInitCheatManager),NULL);
	}
	static FName NAME_UCheatManager_ServerToggleAILogging = FName(TEXT("ServerToggleAILogging"));
	void UCheatManager::ServerToggleAILogging()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCheatManager_ServerToggleAILogging),NULL);
	}
	void UCheatManager::StaticRegisterNativesUCheatManager()
	{
		UClass* Class = UCheatManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BugIt", (Native)&UCheatManager::execBugIt },
			{ "BugItGo", (Native)&UCheatManager::execBugItGo },
			{ "BugItStringCreator", (Native)&UCheatManager::execBugItStringCreator },
			{ "ChangeSize", (Native)&UCheatManager::execChangeSize },
			{ "CheatScript", (Native)&UCheatManager::execCheatScript },
			{ "DamageTarget", (Native)&UCheatManager::execDamageTarget },
			{ "DebugCapsuleSweep", (Native)&UCheatManager::execDebugCapsuleSweep },
			{ "DebugCapsuleSweepCapture", (Native)&UCheatManager::execDebugCapsuleSweepCapture },
			{ "DebugCapsuleSweepChannel", (Native)&UCheatManager::execDebugCapsuleSweepChannel },
			{ "DebugCapsuleSweepClear", (Native)&UCheatManager::execDebugCapsuleSweepClear },
			{ "DebugCapsuleSweepComplex", (Native)&UCheatManager::execDebugCapsuleSweepComplex },
			{ "DebugCapsuleSweepPawn", (Native)&UCheatManager::execDebugCapsuleSweepPawn },
			{ "DebugCapsuleSweepSize", (Native)&UCheatManager::execDebugCapsuleSweepSize },
			{ "DestroyAll", (Native)&UCheatManager::execDestroyAll },
			{ "DestroyAllPawnsExceptTarget", (Native)&UCheatManager::execDestroyAllPawnsExceptTarget },
			{ "DestroyPawns", (Native)&UCheatManager::execDestroyPawns },
			{ "DestroyTarget", (Native)&UCheatManager::execDestroyTarget },
			{ "DisableDebugCamera", (Native)&UCheatManager::execDisableDebugCamera },
			{ "DumpChatState", (Native)&UCheatManager::execDumpChatState },
			{ "DumpOnlineSessionState", (Native)&UCheatManager::execDumpOnlineSessionState },
			{ "DumpPartyState", (Native)&UCheatManager::execDumpPartyState },
			{ "DumpVoiceMutingState", (Native)&UCheatManager::execDumpVoiceMutingState },
			{ "EnableDebugCamera", (Native)&UCheatManager::execEnableDebugCamera },
			{ "FlushLog", (Native)&UCheatManager::execFlushLog },
			{ "Fly", (Native)&UCheatManager::execFly },
			{ "FreezeFrame", (Native)&UCheatManager::execFreezeFrame },
			{ "Ghost", (Native)&UCheatManager::execGhost },
			{ "God", (Native)&UCheatManager::execGod },
			{ "InvertMouse", (Native)&UCheatManager::execInvertMouse },
			{ "LogLoc", (Native)&UCheatManager::execLogLoc },
			{ "OnlyLoadLevel", (Native)&UCheatManager::execOnlyLoadLevel },
			{ "PlayersOnly", (Native)&UCheatManager::execPlayersOnly },
			{ "RebuildNavigation", (Native)&UCheatManager::execRebuildNavigation },
			{ "ServerToggleAILogging", (Native)&UCheatManager::execServerToggleAILogging },
			{ "SetMouseSensitivityToDefault", (Native)&UCheatManager::execSetMouseSensitivityToDefault },
			{ "SetNavDrawDistance", (Native)&UCheatManager::execSetNavDrawDistance },
			{ "SetWorldOrigin", (Native)&UCheatManager::execSetWorldOrigin },
			{ "Slomo", (Native)&UCheatManager::execSlomo },
			{ "StreamLevelIn", (Native)&UCheatManager::execStreamLevelIn },
			{ "StreamLevelOut", (Native)&UCheatManager::execStreamLevelOut },
			{ "Summon", (Native)&UCheatManager::execSummon },
			{ "Teleport", (Native)&UCheatManager::execTeleport },
			{ "TestCollisionDistance", (Native)&UCheatManager::execTestCollisionDistance },
			{ "ToggleAILogging", (Native)&UCheatManager::execToggleAILogging },
			{ "ToggleDebugCamera", (Native)&UCheatManager::execToggleDebugCamera },
			{ "ViewActor", (Native)&UCheatManager::execViewActor },
			{ "ViewClass", (Native)&UCheatManager::execViewClass },
			{ "ViewPlayer", (Native)&UCheatManager::execViewPlayer },
			{ "ViewSelf", (Native)&UCheatManager::execViewSelf },
			{ "Walk", (Native)&UCheatManager::execWalk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UCheatManager_BugIt()
	{
		struct CheatManager_eventBugIt_Parms
		{
			FString ScreenShotDescription;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenShotDescription_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ScreenShotDescription = { UE4CodeGen_Private::EPropertyClass::Str, "ScreenShotDescription", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CheatManager_eventBugIt_Parms, ScreenShotDescription), METADATA_PARAMS(NewProp_ScreenShotDescription_MetaData, ARRAY_COUNT(NewProp_ScreenShotDescription_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenShotDescription,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "This function is used to print out the BugIt location.  It prints out copy and paste versions for both IMing someone to type in\nand also a gameinfo ?options version so that you can append it to your launching url and be taken to the correct place.\nAdditionally, it will take a screen shot so reporting bugs is a one command action!" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "BugIt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, sizeof(CheatManager_eventBugIt_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_BugItGo()
	{
		struct CheatManager_eventBugItGo_Parms
		{
			float X;
			float Y;
			float Z;
			float Pitch;
			float Yaw;
			float Roll;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Roll = { UE4CodeGen_Private::EPropertyClass::Float, "Roll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CheatManager_eventBugItGo_Parms, Roll), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Yaw = { UE4CodeGen_Private::EPropertyClass::Float, "Yaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CheatManager_eventBugItGo_Parms, Yaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pitch = { UE4CodeGen_Private::EPropertyClass::Float, "Pitch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CheatManager_eventBugItGo_Parms, Pitch), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z = { UE4CodeGen_Private::EPropertyClass::Float, "Z", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CheatManager_eventBugItGo_Parms, Z), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y = { UE4CodeGen_Private::EPropertyClass::Float, "Y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CheatManager_eventBugItGo_Parms, Y), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X = { UE4CodeGen_Private::EPropertyClass::Float, "X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CheatManager_eventBugItGo_Parms, X), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Roll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Yaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pitch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Z,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_X,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "This will move the player and set their rotation to the passed in values.\nWe have this version of the BugIt family as it is easier to type in just raw numbers in the console." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "BugItGo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, sizeof(CheatManager_eventBugItGo_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_BugItStringCreator()
	{
		struct CheatManager_eventBugItStringCreator_Parms
		{
			FVector ViewLocation;
			FRotator ViewRotation;
			FString GoString;
			FString LocString;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocString = { UE4CodeGen_Private::EPropertyClass::Str, "LocString", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CheatManager_eventBugItStringCreator_Parms, LocString), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_GoString = { UE4CodeGen_Private::EPropertyClass::Str, "GoString", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CheatManager_eventBugItStringCreator_Parms, GoString), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "ViewRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CheatManager_eventBugItStringCreator_Parms, ViewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "ViewLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CheatManager_eventBugItStringCreator_Parms, ViewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocString,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GoString,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ViewRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ViewLocation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "This will create a BugItGo string for us.  Nice for calling form c++ where you just want the string and no Screenshots *" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "BugItStringCreator", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00C20600, sizeof(CheatManager_eventBugItStringCreator_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_ChangeSize()
	{
		struct CheatManager_eventChangeSize_Parms
		{
			float F;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F = { UE4CodeGen_Private::EPropertyClass::Float, "F", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CheatManager_eventChangeSize_Parms, F), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_F,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Cheat Manager" },
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Scale the player's size to be F * default size." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "ChangeSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020600, sizeof(CheatManager_eventChangeSize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_CheatScript()
	{
		struct CheatManager_eventCheatScript_Parms
		{
			FString ScriptName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ScriptName = { UE4CodeGen_Private::EPropertyClass::Str, "ScriptName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CheatManager_eventCheatScript_Parms, ScriptName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScriptName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Executes commands listed in CheatScript.ScriptName ini section of DefaultGame.ini" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "CheatScript", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020601, sizeof(CheatManager_eventCheatScript_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_DamageTarget()
	{
		struct CheatManager_eventDamageTarget_Parms
		{
			float DamageAmount;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageAmount = { UE4CodeGen_Private::EPropertyClass::Float, "DamageAmount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CheatManager_eventDamageTarget_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamageAmount,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Cheat Manager" },
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Damage the actor you're looking at (sourced from the player)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "DamageTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020600, sizeof(CheatManager_eventDamageTarget_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_DebugCapsuleSweep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Toggle capsule trace debugging. Will trace a capsule from current view point and show where it hits the world" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "DebugCapsuleSweep", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Capture current trace and add to persistent list *" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "DebugCapsuleSweepCapture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepChannel()
	{
		struct CheatManager_eventDebugCapsuleSweepChannel_Parms
		{
			TEnumAsByte<ECollisionChannel> Channel;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Channel = { UE4CodeGen_Private::EPropertyClass::Byte, "Channel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CheatManager_eventDebugCapsuleSweepChannel_Parms, Channel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Channel,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Change Trace Channel *" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "DebugCapsuleSweepChannel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, sizeof(CheatManager_eventDebugCapsuleSweepChannel_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepClear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Clear persistent list for trace capture *" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "DebugCapsuleSweepClear", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepComplex()
	{
		struct CheatManager_eventDebugCapsuleSweepComplex_Parms
		{
			bool bTraceComplex;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bTraceComplex_SetBit = [](void* Obj){ ((CheatManager_eventDebugCapsuleSweepComplex_Parms*)Obj)->bTraceComplex = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex = { UE4CodeGen_Private::EPropertyClass::Bool, "bTraceComplex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CheatManager_eventDebugCapsuleSweepComplex_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTraceComplex_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTraceComplex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Change Trace Complex setting *" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "DebugCapsuleSweepComplex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, sizeof(CheatManager_eventDebugCapsuleSweepComplex_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Capture current local PC's pawn's location and add to persistent list *" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "DebugCapsuleSweepPawn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepSize()
	{
		struct CheatManager_eventDebugCapsuleSweepSize_Parms
		{
			float HalfHeight;
			float Radius;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CheatManager_eventDebugCapsuleSweepSize_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HalfHeight = { UE4CodeGen_Private::EPropertyClass::Float, "HalfHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CheatManager_eventDebugCapsuleSweepSize_Parms, HalfHeight), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HalfHeight,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Change Trace capsule size *" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "DebugCapsuleSweepSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, sizeof(CheatManager_eventDebugCapsuleSweepSize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_DestroyAll()
	{
		struct CheatManager_eventDestroyAll_Parms
		{
			TSubclassOf<AActor>  aClass;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_aClass = { UE4CodeGen_Private::EPropertyClass::Class, "aClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(CheatManager_eventDestroyAll_Parms, aClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_aClass,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Destroy all actors of class aClass" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "DestroyAll", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, sizeof(CheatManager_eventDestroyAll_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_DestroyAllPawnsExceptTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Destroy all pawns except for the (pawn) target.  If no (pawn) target is found we don't destroy anything." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "DestroyAllPawnsExceptTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_DestroyPawns()
	{
		struct CheatManager_eventDestroyPawns_Parms
		{
			TSubclassOf<APawn>  aClass;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_aClass = { UE4CodeGen_Private::EPropertyClass::Class, "aClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(CheatManager_eventDestroyPawns_Parms, aClass), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_aClass,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Destroys (by calling destroy directly) all non-player pawns of class aClass in the level" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "DestroyPawns", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, sizeof(CheatManager_eventDestroyPawns_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_DestroyTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Cheat Manager" },
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Destroy the actor you're looking at." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "DestroyTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_DisableDebugCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Cheat Manager" },
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Switch controller from debug camera back to normal controller" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "DisableDebugCamera", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_DumpChatState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Dump known chat information" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "DumpChatState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_DumpOnlineSessionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Dump online session information" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "DumpOnlineSessionState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_DumpPartyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Dump known party information" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "DumpPartyState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_DumpVoiceMutingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Dump current state of voice chat" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "DumpVoiceMutingState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_EnableDebugCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Cheat Manager" },
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Switch controller to debug camera without locking gameplay and with locking local player controller input" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "EnableDebugCamera", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_FlushLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "This will force a flush of the output log to file" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "FlushLog", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_Fly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Cheat Manager" },
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Pawn can fly." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "Fly", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_FreezeFrame()
	{
		struct CheatManager_eventFreezeFrame_Parms
		{
			float Delay;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay = { UE4CodeGen_Private::EPropertyClass::Float, "Delay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CheatManager_eventFreezeFrame_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Delay,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Cheat Manager" },
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Pause the game for Delay seconds." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "FreezeFrame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020600, sizeof(CheatManager_eventFreezeFrame_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_Ghost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Cheat Manager" },
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Pawn no longer collides with the world, and can fly" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "Ghost", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_God()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Cheat Manager" },
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Invulnerability cheat." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "God", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_InvertMouse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Backwards compatibility exec function for people used to it instead of using InvertAxisKey" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "InvertMouse", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020601, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_LogLoc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Logs the current location in bugit format without taking screenshot and further routing." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "LogLoc", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_OnlyLoadLevel()
	{
		struct CheatManager_eventOnlyLoadLevel_Parms
		{
			FName PackageName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackageName = { UE4CodeGen_Private::EPropertyClass::Name, "PackageName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CheatManager_eventOnlyLoadLevel_Parms, PackageName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PackageName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Load the given level." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "OnlyLoadLevel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, sizeof(CheatManager_eventOnlyLoadLevel_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_PlayersOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Cheat Manager" },
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Freeze everything in the level except for players." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "PlayersOnly", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_RebuildNavigation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Builds the navigation mesh (or rebuilds it). *" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "RebuildNavigation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_ReceiveEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DisplayName", "Shutdown" },
				{ "keywords", "endplay" },
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "This is the End Play event for the CheatManager" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "ReceiveEndPlay", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_ReceiveInitCheatManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DisplayName", "Init Cheat Manager" },
				{ "Keywords", "Begin Play" },
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "BP implementable event for when CheatManager is created to allow any needed initialization." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "ReceiveInitCheatManager", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_ServerToggleAILogging()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "ServerToggleAILogging", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_SetMouseSensitivityToDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Exec function to return the mouse sensitivity to its default value" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "SetMouseSensitivityToDefault", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020601, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_SetNavDrawDistance()
	{
		struct CheatManager_eventSetNavDrawDistance_Parms
		{
			float DrawDistance;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DrawDistance = { UE4CodeGen_Private::EPropertyClass::Float, "DrawDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CheatManager_eventSetNavDrawDistance_Parms, DrawDistance), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawDistance,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Sets navigation drawing distance. Relevant only in non-editor modes. *" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "SetNavDrawDistance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020601, sizeof(CheatManager_eventSetNavDrawDistance_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_SetWorldOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Translate world origin to this player position" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "SetWorldOrigin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020601, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_Slomo()
	{
		struct CheatManager_eventSlomo_Parms
		{
			float NewTimeDilation;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewTimeDilation = { UE4CodeGen_Private::EPropertyClass::Float, "NewTimeDilation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CheatManager_eventSlomo_Parms, NewTimeDilation), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewTimeDilation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Cheat Manager" },
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Modify time dilation to change apparent speed of passage of time. e.g. \"Slomo 0.1\" makes everything move very slowly, while \"Slomo 10\" makes everything move very fast." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "Slomo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020600, sizeof(CheatManager_eventSlomo_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_StreamLevelIn()
	{
		struct CheatManager_eventStreamLevelIn_Parms
		{
			FName PackageName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackageName = { UE4CodeGen_Private::EPropertyClass::Name, "PackageName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CheatManager_eventStreamLevelIn_Parms, PackageName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PackageName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Stream in the given level." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "StreamLevelIn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, sizeof(CheatManager_eventStreamLevelIn_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_StreamLevelOut()
	{
		struct CheatManager_eventStreamLevelOut_Parms
		{
			FName PackageName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackageName = { UE4CodeGen_Private::EPropertyClass::Name, "PackageName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CheatManager_eventStreamLevelOut_Parms, PackageName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PackageName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Stream out the given level." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "StreamLevelOut", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, sizeof(CheatManager_eventStreamLevelOut_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_Summon()
	{
		struct CheatManager_eventSummon_Parms
		{
			FString ClassName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClassName = { UE4CodeGen_Private::EPropertyClass::Str, "ClassName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CheatManager_eventSummon_Parms, ClassName), METADATA_PARAMS(NewProp_ClassName_MetaData, ARRAY_COUNT(NewProp_ClassName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClassName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Load Classname and spawn an actor of that class" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "Summon", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, sizeof(CheatManager_eventSummon_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_Teleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Cheat Manager" },
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Teleport to surface player is looking at." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "Teleport", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_TestCollisionDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Test all volumes in the world to the player controller's view location*" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "TestCollisionDistance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_ToggleAILogging()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "toggles AI logging" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "ToggleAILogging", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_ToggleDebugCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Toggle between debug camera/player camera without locking gameplay and with locking local player controller input." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "ToggleDebugCamera", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_ViewActor()
	{
		struct CheatManager_eventViewActor_Parms
		{
			FName ActorName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActorName = { UE4CodeGen_Private::EPropertyClass::Name, "ActorName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CheatManager_eventViewActor_Parms, ActorName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "View from the point of view of AActor with Name ActorName." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "ViewActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, sizeof(CheatManager_eventViewActor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_ViewClass()
	{
		struct CheatManager_eventViewClass_Parms
		{
			TSubclassOf<AActor>  DesiredClass;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_DesiredClass = { UE4CodeGen_Private::EPropertyClass::Class, "DesiredClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(CheatManager_eventViewClass_Parms, DesiredClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DesiredClass,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "View from the point of view of an AActor of class DesiredClass.  Each subsequent ViewClass cycles through the list of actors of that class." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "ViewClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, sizeof(CheatManager_eventViewClass_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_ViewPlayer()
	{
		struct CheatManager_eventViewPlayer_Parms
		{
			FString S;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_S_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_S = { UE4CodeGen_Private::EPropertyClass::Str, "S", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CheatManager_eventViewPlayer_Parms, S), METADATA_PARAMS(NewProp_S_MetaData, ARRAY_COUNT(NewProp_S_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_S,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "View from the point of view of player with PlayerName S." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "ViewPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, sizeof(CheatManager_eventViewPlayer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_ViewSelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Make controlled pawn the viewtarget again." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "ViewSelf", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheatManager_Walk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Cheat Manager" },
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Return to walking movement mode from Fly or Ghost cheat." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheatManager, "Walk", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCheatManager_NoRegister()
	{
		return UCheatManager::StaticClass();
	}
	UClass* Z_Construct_UClass_UCheatManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UCheatManager_BugIt, "BugIt" }, // 1765380413
				{ &Z_Construct_UFunction_UCheatManager_BugItGo, "BugItGo" }, // 1794381215
				{ &Z_Construct_UFunction_UCheatManager_BugItStringCreator, "BugItStringCreator" }, // 2032616916
				{ &Z_Construct_UFunction_UCheatManager_ChangeSize, "ChangeSize" }, // 120853693
				{ &Z_Construct_UFunction_UCheatManager_CheatScript, "CheatScript" }, // 1602253489
				{ &Z_Construct_UFunction_UCheatManager_DamageTarget, "DamageTarget" }, // 1867107241
				{ &Z_Construct_UFunction_UCheatManager_DebugCapsuleSweep, "DebugCapsuleSweep" }, // 767632953
				{ &Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepCapture, "DebugCapsuleSweepCapture" }, // 965228542
				{ &Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepChannel, "DebugCapsuleSweepChannel" }, // 2381147130
				{ &Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepClear, "DebugCapsuleSweepClear" }, // 1695764188
				{ &Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepComplex, "DebugCapsuleSweepComplex" }, // 1543314229
				{ &Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepPawn, "DebugCapsuleSweepPawn" }, // 4104124741
				{ &Z_Construct_UFunction_UCheatManager_DebugCapsuleSweepSize, "DebugCapsuleSweepSize" }, // 3803859097
				{ &Z_Construct_UFunction_UCheatManager_DestroyAll, "DestroyAll" }, // 3275140069
				{ &Z_Construct_UFunction_UCheatManager_DestroyAllPawnsExceptTarget, "DestroyAllPawnsExceptTarget" }, // 2455426667
				{ &Z_Construct_UFunction_UCheatManager_DestroyPawns, "DestroyPawns" }, // 1814753708
				{ &Z_Construct_UFunction_UCheatManager_DestroyTarget, "DestroyTarget" }, // 1533153753
				{ &Z_Construct_UFunction_UCheatManager_DisableDebugCamera, "DisableDebugCamera" }, // 1138650868
				{ &Z_Construct_UFunction_UCheatManager_DumpChatState, "DumpChatState" }, // 3024813627
				{ &Z_Construct_UFunction_UCheatManager_DumpOnlineSessionState, "DumpOnlineSessionState" }, // 2965467623
				{ &Z_Construct_UFunction_UCheatManager_DumpPartyState, "DumpPartyState" }, // 854822683
				{ &Z_Construct_UFunction_UCheatManager_DumpVoiceMutingState, "DumpVoiceMutingState" }, // 3931692665
				{ &Z_Construct_UFunction_UCheatManager_EnableDebugCamera, "EnableDebugCamera" }, // 827155977
				{ &Z_Construct_UFunction_UCheatManager_FlushLog, "FlushLog" }, // 3513272877
				{ &Z_Construct_UFunction_UCheatManager_Fly, "Fly" }, // 597913640
				{ &Z_Construct_UFunction_UCheatManager_FreezeFrame, "FreezeFrame" }, // 1949104447
				{ &Z_Construct_UFunction_UCheatManager_Ghost, "Ghost" }, // 1211658463
				{ &Z_Construct_UFunction_UCheatManager_God, "God" }, // 813330161
				{ &Z_Construct_UFunction_UCheatManager_InvertMouse, "InvertMouse" }, // 3357756086
				{ &Z_Construct_UFunction_UCheatManager_LogLoc, "LogLoc" }, // 54539893
				{ &Z_Construct_UFunction_UCheatManager_OnlyLoadLevel, "OnlyLoadLevel" }, // 1701588529
				{ &Z_Construct_UFunction_UCheatManager_PlayersOnly, "PlayersOnly" }, // 2456465671
				{ &Z_Construct_UFunction_UCheatManager_RebuildNavigation, "RebuildNavigation" }, // 1864145865
				{ &Z_Construct_UFunction_UCheatManager_ReceiveEndPlay, "ReceiveEndPlay" }, // 3553049266
				{ &Z_Construct_UFunction_UCheatManager_ReceiveInitCheatManager, "ReceiveInitCheatManager" }, // 1304991534
				{ &Z_Construct_UFunction_UCheatManager_ServerToggleAILogging, "ServerToggleAILogging" }, // 1756948414
				{ &Z_Construct_UFunction_UCheatManager_SetMouseSensitivityToDefault, "SetMouseSensitivityToDefault" }, // 957530386
				{ &Z_Construct_UFunction_UCheatManager_SetNavDrawDistance, "SetNavDrawDistance" }, // 2065591108
				{ &Z_Construct_UFunction_UCheatManager_SetWorldOrigin, "SetWorldOrigin" }, // 1178634908
				{ &Z_Construct_UFunction_UCheatManager_Slomo, "Slomo" }, // 2373822815
				{ &Z_Construct_UFunction_UCheatManager_StreamLevelIn, "StreamLevelIn" }, // 2591497393
				{ &Z_Construct_UFunction_UCheatManager_StreamLevelOut, "StreamLevelOut" }, // 951223011
				{ &Z_Construct_UFunction_UCheatManager_Summon, "Summon" }, // 2784627837
				{ &Z_Construct_UFunction_UCheatManager_Teleport, "Teleport" }, // 2717420658
				{ &Z_Construct_UFunction_UCheatManager_TestCollisionDistance, "TestCollisionDistance" }, // 4139675001
				{ &Z_Construct_UFunction_UCheatManager_ToggleAILogging, "ToggleAILogging" }, // 1268015141
				{ &Z_Construct_UFunction_UCheatManager_ToggleDebugCamera, "ToggleDebugCamera" }, // 122384419
				{ &Z_Construct_UFunction_UCheatManager_ViewActor, "ViewActor" }, // 1616604321
				{ &Z_Construct_UFunction_UCheatManager_ViewClass, "ViewClass" }, // 3965976449
				{ &Z_Construct_UFunction_UCheatManager_ViewPlayer, "ViewPlayer" }, // 3873883508
				{ &Z_Construct_UFunction_UCheatManager_ViewSelf, "ViewSelf" }, // 3046328853
				{ &Z_Construct_UFunction_UCheatManager_Walk, "Walk" }, // 1550002468
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "GameFramework/CheatManager.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Cheat Manager is a central blueprint to implement test and debug code and actions that are not to ship with the game.\nAs the Cheat Manager is not instanced in shipping builds, it is for debugging purposes only" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugCameraControllerClass_MetaData[] = {
				{ "Category", "Debug Camera" },
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Debug camera - used to have independent camera without stopping gameplay" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_DebugCameraControllerClass = { UE4CodeGen_Private::EPropertyClass::Class, "DebugCameraControllerClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010015, 1, nullptr, STRUCT_OFFSET(UCheatManager, DebugCameraControllerClass), Z_Construct_UClass_ADebugCameraController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_DebugCameraControllerClass_MetaData, ARRAY_COUNT(NewProp_DebugCameraControllerClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugCameraControllerRef_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/CheatManager.h" },
				{ "ToolTip", "Debug camera - used to have independent camera without stopping gameplay" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebugCameraControllerRef = { UE4CodeGen_Private::EPropertyClass::Object, "DebugCameraControllerRef", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UCheatManager, DebugCameraControllerRef), Z_Construct_UClass_ADebugCameraController_NoRegister, METADATA_PARAMS(NewProp_DebugCameraControllerRef_MetaData, ARRAY_COUNT(NewProp_DebugCameraControllerRef_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugCameraControllerClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugCameraControllerRef,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCheatManager>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCheatManager::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UCheatManager, 1143695148);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCheatManager(Z_Construct_UClass_UCheatManager, &UCheatManager::StaticClass, TEXT("/Script/Engine"), TEXT("UCheatManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheatManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
