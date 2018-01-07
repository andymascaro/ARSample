// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LevelSequencePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequencePlayer() {}
// Cross Module References
	LEVELSEQUENCE_API UFunction* Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceID();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequencePlayer_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequencePlayer();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequencePlayer();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature()
	{
		struct _Script_LevelSequence_eventOnLevelSequencePlayerCameraCutEvent_Parms
		{
			UCameraComponent* CameraComponent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "CameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(_Script_LevelSequence_eventOnLevelSequencePlayerCameraCutEvent_Parms, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_CameraComponent_MetaData, ARRAY_COUNT(NewProp_CameraComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LevelSequence, "OnLevelSequencePlayerCameraCutEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_LevelSequence_eventOnLevelSequencePlayerCameraCutEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FLevelSequencePlayerSnapshot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot, Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequencePlayerSnapshot"), sizeof(FLevelSequencePlayerSnapshot), Get_Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSequencePlayerSnapshot(FLevelSequencePlayerSnapshot::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("LevelSequencePlayerSnapshot"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequencePlayerSnapshot
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequencePlayerSnapshot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelSequencePlayerSnapshot")),new UScriptStruct::TCppStructOps<FLevelSequencePlayerSnapshot>);
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequencePlayerSnapshot;
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSequencePlayerSnapshot"), sizeof(FLevelSequencePlayerSnapshot), Get_Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
				{ "ToolTip", "Frame snapshot information for a level sequence" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequencePlayerSnapshot>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotID_MetaData[] = {
				{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShotID = { UE4CodeGen_Private::EPropertyClass::Struct, "ShotID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, ShotID), Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(NewProp_ShotID_MetaData, ARRAY_COUNT(NewProp_ShotID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings = { UE4CodeGen_Private::EPropertyClass::Struct, "Settings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, Settings), Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings, METADATA_PARAMS(NewProp_Settings_MetaData, ARRAY_COUNT(NewProp_Settings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
				{ "Category", "General" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "CameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_CameraComponent_MetaData, ARRAY_COUNT(NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentShotLocalTime_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentShotLocalTime = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentShotLocalTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, CurrentShotLocalTime), METADATA_PARAMS(NewProp_CurrentShotLocalTime_MetaData, ARRAY_COUNT(NewProp_CurrentShotLocalTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentShotName_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_CurrentShotName = { UE4CodeGen_Private::EPropertyClass::Text, "CurrentShotName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, CurrentShotName), METADATA_PARAMS(NewProp_CurrentShotName_MetaData, ARRAY_COUNT(NewProp_CurrentShotName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterTime_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MasterTime = { UE4CodeGen_Private::EPropertyClass::Float, "MasterTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, MasterTime), METADATA_PARAMS(NewProp_MasterTime_MetaData, ARRAY_COUNT(NewProp_MasterTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterName_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_MasterName = { UE4CodeGen_Private::EPropertyClass::Text, "MasterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, MasterName), METADATA_PARAMS(NewProp_MasterName_MetaData, ARRAY_COUNT(NewProp_MasterName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShotID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Settings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentShotLocalTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentShotName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MasterTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MasterName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LevelSequencePlayerSnapshot",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FLevelSequencePlayerSnapshot),
				alignof(FLevelSequencePlayerSnapshot),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_CRC() { return 3522237343U; }
class UScriptStruct* FLevelSequenceSnapshotSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings, Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceSnapshotSettings"), sizeof(FLevelSequenceSnapshotSettings), Get_Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSequenceSnapshotSettings(FLevelSequenceSnapshotSettings::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("LevelSequenceSnapshotSettings"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceSnapshotSettings
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceSnapshotSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelSequenceSnapshotSettings")),new UScriptStruct::TCppStructOps<FLevelSequenceSnapshotSettings>);
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceSnapshotSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSequenceSnapshotSettings"), sizeof(FLevelSequenceSnapshotSettings), Get_Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceSnapshotSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
				{ "ToolTip", "Playback framerate" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameRate = { UE4CodeGen_Private::EPropertyClass::Float, "FrameRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FLevelSequenceSnapshotSettings, FrameRate), METADATA_PARAMS(NewProp_FrameRate_MetaData, ARRAY_COUNT(NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZeroPadAmount_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
				{ "ToolTip", "Zero pad frames" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ZeroPadAmount = { UE4CodeGen_Private::EPropertyClass::Byte, "ZeroPadAmount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FLevelSequenceSnapshotSettings, ZeroPadAmount), nullptr, METADATA_PARAMS(NewProp_ZeroPadAmount_MetaData, ARRAY_COUNT(NewProp_ZeroPadAmount_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrameRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ZeroPadAmount,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LevelSequenceSnapshotSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLevelSequenceSnapshotSettings),
				alignof(FLevelSequenceSnapshotSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_CRC() { return 889063162U; }
	void ULevelSequencePlayer::StaticRegisterNativesULevelSequencePlayer()
	{
		UClass* Class = ULevelSequencePlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateLevelSequencePlayer", (Native)&ULevelSequencePlayer::execCreateLevelSequencePlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer()
	{
		struct LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms
		{
			UObject* WorldContextObject;
			ULevelSequence* LevelSequence;
			FMovieSceneSequencePlaybackSettings Settings;
			ALevelSequenceActor* OutActor;
			ULevelSequencePlayer* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms, ReturnValue), Z_Construct_UClass_ULevelSequencePlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActor = { UE4CodeGen_Private::EPropertyClass::Object, "OutActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms, OutActor), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings = { UE4CodeGen_Private::EPropertyClass::Struct, "Settings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms, Settings), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelSequence = { UE4CodeGen_Private::EPropertyClass::Object, "LevelSequence", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Settings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LevelSequence,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Cinematic" },
				{ "DynamicOutputParam", "OutActor" },
				{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
				{ "ToolTip", "Create a new level sequence player.\n\n@param WorldContextObject Context object from which to retrieve a UWorld.\n@param LevelSequence The level sequence to play.\n@param Settings The desired playback settings\n@param OutActor The level sequence actor created to play this sequence." },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequencePlayer, "CreateLevelSequencePlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULevelSequencePlayer_NoRegister()
	{
		return ULevelSequencePlayer::StaticClass();
	}
	UClass* Z_Construct_UClass_ULevelSequencePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneSequencePlayer,
				(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer, "CreateLevelSequencePlayer" }, // 2538308161
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "LevelSequencePlayer.h" },
				{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "ULevelSequencePlayer is used to actually \"play\" an level sequence asset at runtime.\n\nThis class keeps track of playback state and provides functions for manipulating\nan level sequence while its playing." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalEventReceivers_MetaData[] = {
				{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
				{ "ToolTip", "Array of additional event receivers" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalEventReceivers = { UE4CodeGen_Private::EPropertyClass::Array, "AdditionalEventReceivers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(ULevelSequencePlayer, AdditionalEventReceivers), METADATA_PARAMS(NewProp_AdditionalEventReceivers_MetaData, ARRAY_COUNT(NewProp_AdditionalEventReceivers_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditionalEventReceivers_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AdditionalEventReceivers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCameraCut_MetaData[] = {
				{ "Category", "Game|Cinematic" },
				{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
				{ "ToolTip", "Event triggered when there is a camera cut" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCameraCut = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnCameraCut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ULevelSequencePlayer, OnCameraCut), Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnCameraCut_MetaData, ARRAY_COUNT(NewProp_OnCameraCut_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdditionalEventReceivers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdditionalEventReceivers_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnCameraCut,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULevelSequencePlayer>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULevelSequencePlayer::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(ULevelSequencePlayer, 1360581133);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelSequencePlayer(Z_Construct_UClass_ULevelSequencePlayer, &ULevelSequencePlayer::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ULevelSequencePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequencePlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
