// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieSceneSequencePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSequencePlayer() {}
// Cross Module References
	MOVIESCENE_API UFunction* Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingOverridesInterface_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequencePlayer_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequencePlayer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MOVIESCENE_API UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_ChangePlaybackDirection();
	MOVIESCENE_API UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	MOVIESCENE_API UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetLength();
	MOVIESCENE_API UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlaybackEnd();
	MOVIESCENE_API UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlaybackPosition();
	MOVIESCENE_API UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlaybackStart();
	MOVIESCENE_API UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate();
	MOVIESCENE_API UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GoToEndAndStop();
	MOVIESCENE_API UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused();
	MOVIESCENE_API UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying();
	MOVIESCENE_API UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToPosition();
	MOVIESCENE_API UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_Pause();
	MOVIESCENE_API UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_Play();
	MOVIESCENE_API UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping();
	MOVIESCENE_API UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayReverse();
	MOVIESCENE_API UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_Scrub();
	MOVIESCENE_API UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition();
	MOVIESCENE_API UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackRange();
	MOVIESCENE_API UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate();
	MOVIESCENE_API UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_StartPlayingNextTick();
	MOVIESCENE_API UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_Stop();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MovieScene, "OnMovieSceneSequencePlayerEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FMovieSceneSequencePlaybackSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequencePlaybackSettings"), sizeof(FMovieSceneSequencePlaybackSettings), Get_Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSequencePlaybackSettings(FMovieSceneSequencePlaybackSettings::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSequencePlaybackSettings"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequencePlaybackSettings
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequencePlaybackSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSequencePlaybackSettings")),new UScriptStruct::TCppStructOps<FMovieSceneSequencePlaybackSettings>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequencePlaybackSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSequencePlaybackSettings"), sizeof(FMovieSceneSequencePlaybackSettings), Get_Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Settings for the level sequence player actor." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequencePlaybackSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BindingOverrides_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Interface that defines overridden bindings for this sequence" },
			};
#endif
			static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_BindingOverrides = { UE4CodeGen_Private::EPropertyClass::Interface, "BindingOverrides", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSequencePlaybackSettings, BindingOverrides), Z_Construct_UClass_UMovieSceneBindingOverridesInterface_NoRegister, METADATA_PARAMS(NewProp_BindingOverrides_MetaData, ARRAY_COUNT(NewProp_BindingOverrides_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideHud_MetaData[] = {
				{ "Category", "Cinematic" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Hide HUD during play" },
			};
#endif
			auto NewProp_bHideHud_SetBit = [](void* Obj){ ((FMovieSceneSequencePlaybackSettings*)Obj)->bHideHud = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideHud = { UE4CodeGen_Private::EPropertyClass::Bool, "bHideHud", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMovieSceneSequencePlaybackSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHideHud_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHideHud_MetaData, ARRAY_COUNT(NewProp_bHideHud_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHidePlayer_MetaData[] = {
				{ "Category", "Cinematic" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Hide Player Pawn during play" },
			};
#endif
			auto NewProp_bHidePlayer_SetBit = [](void* Obj){ ((FMovieSceneSequencePlaybackSettings*)Obj)->bHidePlayer = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHidePlayer = { UE4CodeGen_Private::EPropertyClass::Bool, "bHidePlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMovieSceneSequencePlaybackSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHidePlayer_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHidePlayer_MetaData, ARRAY_COUNT(NewProp_bHidePlayer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableLookAtInput_MetaData[] = {
				{ "Category", "Cinematic" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Disable LookAt Input from player during play" },
			};
#endif
			auto NewProp_bDisableLookAtInput_SetBit = [](void* Obj){ ((FMovieSceneSequencePlaybackSettings*)Obj)->bDisableLookAtInput = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableLookAtInput = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableLookAtInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMovieSceneSequencePlaybackSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisableLookAtInput_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisableLookAtInput_MetaData, ARRAY_COUNT(NewProp_bDisableLookAtInput_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableMovementInput_MetaData[] = {
				{ "Category", "Cinematic" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Disable Input from player during play" },
			};
#endif
			auto NewProp_bDisableMovementInput_SetBit = [](void* Obj){ ((FMovieSceneSequencePlaybackSettings*)Obj)->bDisableMovementInput = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableMovementInput = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableMovementInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMovieSceneSequencePlaybackSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisableMovementInput_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisableMovementInput_MetaData, ARRAY_COUNT(NewProp_bDisableMovementInput_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRestoreState_MetaData[] = {
				{ "Category", "Playback" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Flag used to specify whether actor states should be restored on stop" },
			};
#endif
			auto NewProp_bRestoreState_SetBit = [](void* Obj){ ((FMovieSceneSequencePlaybackSettings*)Obj)->bRestoreState = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRestoreState = { UE4CodeGen_Private::EPropertyClass::Bool, "bRestoreState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMovieSceneSequencePlaybackSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRestoreState_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRestoreState_MetaData, ARRAY_COUNT(NewProp_bRestoreState_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
				{ "Category", "Playback" },
				{ "EditCondition", "!bRandomStartTime" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Start playback at the specified time" },
				{ "Units", "s" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime = { UE4CodeGen_Private::EPropertyClass::Float, "StartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMovieSceneSequencePlaybackSettings, StartTime), METADATA_PARAMS(NewProp_StartTime_MetaData, ARRAY_COUNT(NewProp_StartTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomStartTime_MetaData[] = {
				{ "Category", "Playback" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Start playback at a random time" },
			};
#endif
			auto NewProp_bRandomStartTime_SetBit = [](void* Obj){ ((FMovieSceneSequencePlaybackSettings*)Obj)->bRandomStartTime = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomStartTime = { UE4CodeGen_Private::EPropertyClass::Bool, "bRandomStartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMovieSceneSequencePlaybackSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRandomStartTime_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRandomStartTime_MetaData, ARRAY_COUNT(NewProp_bRandomStartTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
				{ "Category", "Playback" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "The rate at which to playback the animation" },
				{ "Units", "Multiplier" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "PlayRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMovieSceneSequencePlaybackSettings, PlayRate), METADATA_PARAMS(NewProp_PlayRate_MetaData, ARRAY_COUNT(NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopCount_MetaData[] = {
				{ "Category", "Playback" },
				{ "DisplayName", "Loop" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Number of times to loop playback. -1 for infinite, else the number of times to loop before stopping" },
				{ "UIMin", "1" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoopCount = { UE4CodeGen_Private::EPropertyClass::Int, "LoopCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMovieSceneSequencePlaybackSettings, LoopCount), METADATA_PARAMS(NewProp_LoopCount_MetaData, ARRAY_COUNT(NewProp_LoopCount_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BindingOverrides,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHideHud,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHidePlayer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisableLookAtInput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisableMovementInput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRestoreState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRandomStartTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LoopCount,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneSequencePlaybackSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneSequencePlaybackSettings),
				alignof(FMovieSceneSequencePlaybackSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_CRC() { return 2773391205U; }
	void UMovieSceneSequencePlayer::StaticRegisterNativesUMovieSceneSequencePlayer()
	{
		UClass* Class = UMovieSceneSequencePlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangePlaybackDirection", (Native)&UMovieSceneSequencePlayer::execChangePlaybackDirection },
			{ "GetBoundObjects", (Native)&UMovieSceneSequencePlayer::execGetBoundObjects },
			{ "GetLength", (Native)&UMovieSceneSequencePlayer::execGetLength },
			{ "GetPlaybackEnd", (Native)&UMovieSceneSequencePlayer::execGetPlaybackEnd },
			{ "GetPlaybackPosition", (Native)&UMovieSceneSequencePlayer::execGetPlaybackPosition },
			{ "GetPlaybackStart", (Native)&UMovieSceneSequencePlayer::execGetPlaybackStart },
			{ "GetPlayRate", (Native)&UMovieSceneSequencePlayer::execGetPlayRate },
			{ "GoToEndAndStop", (Native)&UMovieSceneSequencePlayer::execGoToEndAndStop },
			{ "IsPaused", (Native)&UMovieSceneSequencePlayer::execIsPaused },
			{ "IsPlaying", (Native)&UMovieSceneSequencePlayer::execIsPlaying },
			{ "JumpToPosition", (Native)&UMovieSceneSequencePlayer::execJumpToPosition },
			{ "Pause", (Native)&UMovieSceneSequencePlayer::execPause },
			{ "Play", (Native)&UMovieSceneSequencePlayer::execPlay },
			{ "PlayLooping", (Native)&UMovieSceneSequencePlayer::execPlayLooping },
			{ "PlayReverse", (Native)&UMovieSceneSequencePlayer::execPlayReverse },
			{ "Scrub", (Native)&UMovieSceneSequencePlayer::execScrub },
			{ "SetPlaybackPosition", (Native)&UMovieSceneSequencePlayer::execSetPlaybackPosition },
			{ "SetPlaybackRange", (Native)&UMovieSceneSequencePlayer::execSetPlaybackRange },
			{ "SetPlayRate", (Native)&UMovieSceneSequencePlayer::execSetPlayRate },
			{ "StartPlayingNextTick", (Native)&UMovieSceneSequencePlayer::execStartPlayingNextTick },
			{ "Stop", (Native)&UMovieSceneSequencePlayer::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_ChangePlaybackDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Cinematic" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Changes the direction of playback (go in reverse if it was going forward, or vice versa)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, "ChangePlaybackDirection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects()
	{
		struct MovieSceneSequencePlayer_eventGetBoundObjects_Parms
		{
			FMovieSceneObjectBindingID ObjectBinding;
			TArray<UObject*> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetBoundObjects_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectBinding = { UE4CodeGen_Private::EPropertyClass::Struct, "ObjectBinding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetBoundObjects_Parms, ObjectBinding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectBinding,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Cinematic" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Retrieve all objects currently bound to the specified binding identifier" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, "GetBoundObjects", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MovieSceneSequencePlayer_eventGetBoundObjects_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetLength()
	{
		struct MovieSceneSequencePlayer_eventGetLength_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Cinematic" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Get the playback length of the sequence" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, "GetLength", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MovieSceneSequencePlayer_eventGetLength_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlaybackEnd()
	{
		struct MovieSceneSequencePlayer_eventGetPlaybackEnd_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetPlaybackEnd_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Cinematic" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Get the offset within the level sequence to finish playing" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, "GetPlaybackEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MovieSceneSequencePlayer_eventGetPlaybackEnd_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlaybackPosition()
	{
		struct MovieSceneSequencePlayer_eventGetPlaybackPosition_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetPlaybackPosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Cinematic" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Get the current playback position" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, "GetPlaybackPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MovieSceneSequencePlayer_eventGetPlaybackPosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlaybackStart()
	{
		struct MovieSceneSequencePlayer_eventGetPlaybackStart_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetPlaybackStart_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Cinematic" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Get the offset within the level sequence to start playing" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, "GetPlaybackStart", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MovieSceneSequencePlayer_eventGetPlaybackStart_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate()
	{
		struct MovieSceneSequencePlayer_eventGetPlayRate_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetPlayRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Cinematic" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Get the playback rate of this player." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, "GetPlayRate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MovieSceneSequencePlayer_eventGetPlayRate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GoToEndAndStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Cinematic" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Go to end of the sequence and stop. Adheres to 'When Finished' section rules." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, "GoToEndAndStop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused()
	{
		struct MovieSceneSequencePlayer_eventIsPaused_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MovieSceneSequencePlayer_eventIsPaused_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MovieSceneSequencePlayer_eventIsPaused_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Cinematic" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Check whether the sequence is paused." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, "IsPaused", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MovieSceneSequencePlayer_eventIsPaused_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying()
	{
		struct MovieSceneSequencePlayer_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MovieSceneSequencePlayer_eventIsPlaying_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MovieSceneSequencePlayer_eventIsPlaying_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Cinematic" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Check whether the sequence is actively playing." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, "IsPlaying", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MovieSceneSequencePlayer_eventIsPlaying_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToPosition()
	{
		struct MovieSceneSequencePlayer_eventJumpToPosition_Parms
		{
			float NewPlaybackPosition;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPlaybackPosition = { UE4CodeGen_Private::EPropertyClass::Float, "NewPlaybackPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventJumpToPosition_Parms, NewPlaybackPosition), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewPlaybackPosition,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Cinematic" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Jump to new playback position\n@param NewPlaybackPosition - The new playback position to set.\nThis can be used to update sequencer repeatedly, as if in a scrubbing state" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, "JumpToPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MovieSceneSequencePlayer_eventJumpToPosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Cinematic" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Pause playback." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, "Pause", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Cinematic" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Start playback forwards from the current time cursor position, using the current play rate." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, "Play", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping()
	{
		struct MovieSceneSequencePlayer_eventPlayLooping_Parms
		{
			int32 NumLoops;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLoops = { UE4CodeGen_Private::EPropertyClass::Int, "NumLoops", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventPlayLooping_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumLoops,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Cinematic" },
				{ "CPP_Default_NumLoops", "-1" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Start playback from the current time cursor position, looping the specified number of times.\n@param NumLoops - The number of loops to play. -1 indicates infinite looping." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, "PlayLooping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MovieSceneSequencePlayer_eventPlayLooping_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayReverse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Cinematic" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Reverse playback." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, "PlayReverse", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_Scrub()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Cinematic" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Scrub playback." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, "Scrub", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition()
	{
		struct MovieSceneSequencePlayer_eventSetPlaybackPosition_Parms
		{
			float NewPlaybackPosition;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPlaybackPosition = { UE4CodeGen_Private::EPropertyClass::Float, "NewPlaybackPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetPlaybackPosition_Parms, NewPlaybackPosition), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewPlaybackPosition,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Cinematic" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Set the current playback position\n@param NewPlaybackPosition - The new playback position to set.\nIf the animation is currently playing, it will continue to do so from the new position" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, "SetPlaybackPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MovieSceneSequencePlayer_eventSetPlaybackPosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackRange()
	{
		struct MovieSceneSequencePlayer_eventSetPlaybackRange_Parms
		{
			float NewStartTime;
			float NewEndTime;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewEndTime_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewEndTime = { UE4CodeGen_Private::EPropertyClass::Float, "NewEndTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetPlaybackRange_Parms, NewEndTime), METADATA_PARAMS(NewProp_NewEndTime_MetaData, ARRAY_COUNT(NewProp_NewEndTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewStartTime_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewStartTime = { UE4CodeGen_Private::EPropertyClass::Float, "NewStartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetPlaybackRange_Parms, NewStartTime), METADATA_PARAMS(NewProp_NewStartTime_MetaData, ARRAY_COUNT(NewProp_NewStartTime_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewEndTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewStartTime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Cinematic" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Sets the range in time to be played back by this player, overriding the default range stored in the asset\n\n@param       NewStartTime    The new starting time for playback\n@param       NewEndTime              The new ending time for playback.  Must be larger than the start time." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, "SetPlaybackRange", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MovieSceneSequencePlayer_eventSetPlaybackRange_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate()
	{
		struct MovieSceneSequencePlayer_eventSetPlayRate_Parms
		{
			float PlayRate;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "PlayRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetPlayRate_Parms, PlayRate), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayRate,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Cinematic" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Set the playback rate of this player. Negative values will play the animation in reverse.\n@param PlayRate - The new rate of playback for the animation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, "SetPlayRate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MovieSceneSequencePlayer_eventSetPlayRate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_StartPlayingNextTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Cinematic" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Start playback from the current time cursor position, using the current play rate. Does not update the animation until next tick." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, "StartPlayingNextTick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Cinematic" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Stop playback." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, "Stop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovieSceneSequencePlayer_NoRegister()
	{
		return UMovieSceneSequencePlayer::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneSequencePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_ChangePlaybackDirection, "ChangePlaybackDirection" }, // 3091127378
				{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects, "GetBoundObjects" }, // 3038048130
				{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetLength, "GetLength" }, // 2820177499
				{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlaybackEnd, "GetPlaybackEnd" }, // 3604958484
				{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlaybackPosition, "GetPlaybackPosition" }, // 216021385
				{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlaybackStart, "GetPlaybackStart" }, // 1611412593
				{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate, "GetPlayRate" }, // 3367521757
				{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GoToEndAndStop, "GoToEndAndStop" }, // 1806010791
				{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused, "IsPaused" }, // 2205208537
				{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying, "IsPlaying" }, // 897553305
				{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToPosition, "JumpToPosition" }, // 4124128272
				{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_Pause, "Pause" }, // 908845199
				{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_Play, "Play" }, // 2970889577
				{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping, "PlayLooping" }, // 2742568715
				{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayReverse, "PlayReverse" }, // 1119212348
				{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_Scrub, "Scrub" }, // 635362711
				{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition, "SetPlaybackPosition" }, // 3672244915
				{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackRange, "SetPlaybackRange" }, // 1295384046
				{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate, "SetPlayRate" }, // 874736494
				{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_StartPlayingNextTick, "StartPlayingNextTick" }, // 1288480889
				{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_Stop, "Stop" }, // 1801006281
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "MovieSceneSequencePlayer.h" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "Abstract class that provides consistent player behaviour for various animation players" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaybackSettings_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Specific playback settings for the animation." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaybackSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "PlaybackSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSequencePlayer, PlaybackSettings), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, METADATA_PARAMS(NewProp_PlaybackSettings_MetaData, ARRAY_COUNT(NewProp_PlaybackSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentNumLoops_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "The number of times we have looped in the current playback" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentNumLoops = { UE4CodeGen_Private::EPropertyClass::Int, "CurrentNumLoops", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSequencePlayer, CurrentNumLoops), METADATA_PARAMS(NewProp_CurrentNumLoops_MetaData, ARRAY_COUNT(NewProp_CurrentNumLoops_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Time time at which to end playing the sequence (defaults to the upper bound of the sequence's play range)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndTime = { UE4CodeGen_Private::EPropertyClass::Float, "EndTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSequencePlayer, EndTime), METADATA_PARAMS(NewProp_EndTime_MetaData, ARRAY_COUNT(NewProp_EndTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Time time at which to start playing the sequence (defaults to the lower bound of the sequence's play range)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime = { UE4CodeGen_Private::EPropertyClass::Float, "StartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSequencePlayer, StartTime), METADATA_PARAMS(NewProp_StartTime_MetaData, ARRAY_COUNT(NewProp_StartTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeCursorPosition_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "The current time cursor position within the sequence (in seconds)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeCursorPosition = { UE4CodeGen_Private::EPropertyClass::Float, "TimeCursorPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSequencePlayer, TimeCursorPosition), METADATA_PARAMS(NewProp_TimeCursorPosition_MetaData, ARRAY_COUNT(NewProp_TimeCursorPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "The sequence to play back" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sequence = { UE4CodeGen_Private::EPropertyClass::Object, "Sequence", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSequencePlayer, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(NewProp_Sequence_MetaData, ARRAY_COUNT(NewProp_Sequence_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPendingFirstUpdate_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "True where we're waiting for the first update of the sequence after calling StartPlayingNextTick." },
			};
#endif
			auto NewProp_bPendingFirstUpdate_SetBit = [](void* Obj){ ((UMovieSceneSequencePlayer*)Obj)->bPendingFirstUpdate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPendingFirstUpdate = { UE4CodeGen_Private::EPropertyClass::Bool, "bPendingFirstUpdate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMovieSceneSequencePlayer), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPendingFirstUpdate_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPendingFirstUpdate_MetaData, ARRAY_COUNT(NewProp_bPendingFirstUpdate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReversePlayback_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Whether we're currently playing in reverse." },
			};
#endif
			auto NewProp_bReversePlayback_SetBit = [](void* Obj){ ((UMovieSceneSequencePlayer*)Obj)->bReversePlayback = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReversePlayback = { UE4CodeGen_Private::EPropertyClass::Bool, "bReversePlayback", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMovieSceneSequencePlayer), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReversePlayback_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bReversePlayback_MetaData, ARRAY_COUNT(NewProp_bReversePlayback_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Movie player status." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status = { UE4CodeGen_Private::EPropertyClass::Byte, "Status", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSequencePlayer, Status), Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus, METADATA_PARAMS(NewProp_Status_MetaData, ARRAY_COUNT(NewProp_Status_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFinished_MetaData[] = {
				{ "Category", "Game|Cinematic" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Event triggered when the level sequence player finishes naturally (without explicitly calling stop)" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinished = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnFinished", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSequencePlayer, OnFinished), Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnFinished_MetaData, ARRAY_COUNT(NewProp_OnFinished_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPause_MetaData[] = {
				{ "Category", "Game|Cinematic" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Event triggered when the level sequence player is paused" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPause = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnPause", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSequencePlayer, OnPause), Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnPause_MetaData, ARRAY_COUNT(NewProp_OnPause_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStop_MetaData[] = {
				{ "Category", "Game|Cinematic" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Event triggered when the level sequence player is stopped" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStop = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnStop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSequencePlayer, OnStop), Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnStop_MetaData, ARRAY_COUNT(NewProp_OnStop_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayReverse_MetaData[] = {
				{ "Category", "Game|Cinematic" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Event triggered when the level sequence player is played in reverse" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayReverse = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnPlayReverse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSequencePlayer, OnPlayReverse), Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnPlayReverse_MetaData, ARRAY_COUNT(NewProp_OnPlayReverse_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlay_MetaData[] = {
				{ "Category", "Game|Cinematic" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "ToolTip", "Event triggered when the level sequence player is played" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlay = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnPlay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSequencePlayer, OnPlay), Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnPlay_MetaData, ARRAY_COUNT(NewProp_OnPlay_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlaybackSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentNumLoops,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeCursorPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sequence,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPendingFirstUpdate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReversePlayback,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Status,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnFinished,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnPause,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnStop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnPlayReverse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnPlay,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneSequencePlayer>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneSequencePlayer::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900081u,
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
	IMPLEMENT_CLASS(UMovieSceneSequencePlayer, 3949829825);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneSequencePlayer(Z_Construct_UClass_UMovieSceneSequencePlayer, &UMovieSceneSequencePlayer::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneSequencePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSequencePlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
