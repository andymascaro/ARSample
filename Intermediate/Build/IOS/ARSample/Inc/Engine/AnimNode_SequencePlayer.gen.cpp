// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimNode_SequencePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SequencePlayer() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequencePlayer();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
// End Cross Module References
class UScriptStruct* FAnimNode_SequencePlayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_SequencePlayer"), sizeof(FAnimNode_SequencePlayer), Get_Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_SequencePlayer(FAnimNode_SequencePlayer::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNode_SequencePlayer"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNode_SequencePlayer
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNode_SequencePlayer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_SequencePlayer")),new UScriptStruct::TCppStructOps<FAnimNode_SequencePlayer>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNode_SequencePlayer;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequencePlayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_SequencePlayer"), sizeof(FAnimNode_SequencePlayer), Get_Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
				{ "ToolTip", "Sequence player node" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SequencePlayer>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
				{ "PinHiddenByDefault", "" },
				{ "ToolTip", "The start up position, it only applies when reinitialized\nif you loop, it will still start from 0.f after finishing the round" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartPosition = { UE4CodeGen_Private::EPropertyClass::Float, "StartPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_SequencePlayer, StartPosition), METADATA_PARAMS(NewProp_StartPosition_MetaData, ARRAY_COUNT(NewProp_StartPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
				{ "PinHiddenByDefault", "" },
				{ "ToolTip", "The play rate multiplier. Can be negative, which will cause the animation to play in reverse." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "PlayRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_SequencePlayer, PlayRate), METADATA_PARAMS(NewProp_PlayRate_MetaData, ARRAY_COUNT(NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoopAnimation_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
				{ "PinHiddenByDefault", "" },
				{ "ToolTip", "Should the animation continue looping when it reaches the end?" },
			};
#endif
			auto NewProp_bLoopAnimation_SetBit = [](void* Obj){ ((FAnimNode_SequencePlayer*)Obj)->bLoopAnimation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoopAnimation = { UE4CodeGen_Private::EPropertyClass::Bool, "bLoopAnimation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_SequencePlayer), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLoopAnimation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLoopAnimation_MetaData, ARRAY_COUNT(NewProp_bLoopAnimation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
				{ "PinHiddenByDefault", "" },
				{ "ToolTip", "The animation sequence asset to play" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sequence = { UE4CodeGen_Private::EPropertyClass::Object, "Sequence", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_SequencePlayer, Sequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(NewProp_Sequence_MetaData, ARRAY_COUNT(NewProp_Sequence_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLoopAnimation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sequence,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_SequencePlayer",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_SequencePlayer),
				alignof(FAnimNode_SequencePlayer),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_CRC() { return 4040496050U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
