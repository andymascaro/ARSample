// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimNodes/AnimNode_RandomPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RandomPlayer() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RandomPlayer();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlend();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
class UScriptStruct* FAnimNode_RandomPlayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RandomPlayer, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_RandomPlayer"), sizeof(FAnimNode_RandomPlayer), Get_Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_RandomPlayer(FAnimNode_RandomPlayer::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_RandomPlayer"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RandomPlayer
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RandomPlayer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_RandomPlayer")),new UScriptStruct::TCppStructOps<FAnimNode_RandomPlayer>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RandomPlayer;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RandomPlayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_RandomPlayer"), sizeof(FAnimNode_RandomPlayer), Get_Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RandomPlayer>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
				{ "ToolTip", "List of sequences to randomly step through" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Entries = { UE4CodeGen_Private::EPropertyClass::Array, "Entries", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_RandomPlayer, Entries), METADATA_PARAMS(NewProp_Entries_MetaData, ARRAY_COUNT(NewProp_Entries_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Entries_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Entries", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShuffleMode_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
				{ "ToolTip", "When shuffle mode is active we will never loop a sequence beyond MaxLoopCount\nwithout visiting each sequence in turn (no repeats). Enabling this will ignore\nChanceToPlay for each entry" },
			};
#endif
			auto NewProp_bShuffleMode_SetBit = [](void* Obj){ ((FAnimNode_RandomPlayer*)Obj)->bShuffleMode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShuffleMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bShuffleMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_RandomPlayer), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShuffleMode_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShuffleMode_MetaData, ARRAY_COUNT(NewProp_bShuffleMode_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Entries,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Entries_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShuffleMode,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_Base,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_RandomPlayer",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_RandomPlayer),
				alignof(FAnimNode_RandomPlayer),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_CRC() { return 1147232408U; }
class UScriptStruct* FRandomPlayerSequenceEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("RandomPlayerSequenceEntry"), sizeof(FRandomPlayerSequenceEntry), Get_Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRandomPlayerSequenceEntry(FRandomPlayerSequenceEntry::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("RandomPlayerSequenceEntry"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRandomPlayerSequenceEntry
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRandomPlayerSequenceEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RandomPlayerSequenceEntry")),new UScriptStruct::TCppStructOps<FRandomPlayerSequenceEntry>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRandomPlayerSequenceEntry;
	UScriptStruct* Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RandomPlayerSequenceEntry"), sizeof(FRandomPlayerSequenceEntry), Get_Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
				{ "ToolTip", "The random player node holds a list of sequences and parameter ranges which will be played continuously\nIn a random order. If shuffle mode is enabled then each entry will be played once before repeating any" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRandomPlayerSequenceEntry>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendIn_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
				{ "ToolTip", "Blending properties used when this entry is blending in ontop of another entry" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendIn = { UE4CodeGen_Private::EPropertyClass::Struct, "BlendIn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FRandomPlayerSequenceEntry, BlendIn), Z_Construct_UScriptStruct_FAlphaBlend, METADATA_PARAMS(NewProp_BlendIn_MetaData, ARRAY_COUNT(NewProp_BlendIn_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPlayRate_MetaData[] = {
				{ "Category", "Settings" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
				{ "ToolTip", "Maximum playrate for this entry" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "MaxPlayRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FRandomPlayerSequenceEntry, MaxPlayRate), METADATA_PARAMS(NewProp_MaxPlayRate_MetaData, ARRAY_COUNT(NewProp_MaxPlayRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinPlayRate_MetaData[] = {
				{ "Category", "Settings" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
				{ "ToolTip", "Minimum playrate for this entry" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinPlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "MinPlayRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FRandomPlayerSequenceEntry, MinPlayRate), METADATA_PARAMS(NewProp_MinPlayRate_MetaData, ARRAY_COUNT(NewProp_MinPlayRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLoopCount_MetaData[] = {
				{ "Category", "Settings" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
				{ "ToolTip", "Maximum number of times this entry will loop before ending" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxLoopCount = { UE4CodeGen_Private::EPropertyClass::Int, "MaxLoopCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FRandomPlayerSequenceEntry, MaxLoopCount), METADATA_PARAMS(NewProp_MaxLoopCount_MetaData, ARRAY_COUNT(NewProp_MaxLoopCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLoopCount_MetaData[] = {
				{ "Category", "Settings" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
				{ "ToolTip", "Minimum number of times this entry will loop before ending" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinLoopCount = { UE4CodeGen_Private::EPropertyClass::Int, "MinLoopCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FRandomPlayerSequenceEntry, MinLoopCount), METADATA_PARAMS(NewProp_MinLoopCount_MetaData, ARRAY_COUNT(NewProp_MinLoopCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChanceToPlay_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
				{ "ToolTip", "When not in shuffle mode, this is the chance this entry will play (normalized against all other sample chances)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChanceToPlay = { UE4CodeGen_Private::EPropertyClass::Float, "ChanceToPlay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FRandomPlayerSequenceEntry, ChanceToPlay), METADATA_PARAMS(NewProp_ChanceToPlay_MetaData, ARRAY_COUNT(NewProp_ChanceToPlay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
				{ "ToolTip", "Sequence to play when this entry is picked" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sequence = { UE4CodeGen_Private::EPropertyClass::Object, "Sequence", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FRandomPlayerSequenceEntry, Sequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(NewProp_Sequence_MetaData, ARRAY_COUNT(NewProp_Sequence_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendIn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxPlayRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinPlayRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxLoopCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinLoopCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChanceToPlay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sequence,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RandomPlayerSequenceEntry",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FRandomPlayerSequenceEntry),
				alignof(FRandomPlayerSequenceEntry),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_CRC() { return 3545463289U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
