// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimNodes/AnimNode_BlendSpacePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendSpacePlayer() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpaceBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlendSampleData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlendFilter();
// End Cross Module References
class UScriptStruct* FAnimNode_BlendSpacePlayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BlendSpacePlayer"), sizeof(FAnimNode_BlendSpacePlayer), Get_Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_BlendSpacePlayer(FAnimNode_BlendSpacePlayer::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_BlendSpacePlayer"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendSpacePlayer
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendSpacePlayer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_BlendSpacePlayer")),new UScriptStruct::TCppStructOps<FAnimNode_BlendSpacePlayer>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendSpacePlayer;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_BlendSpacePlayer"), sizeof(FAnimNode_BlendSpacePlayer), Get_Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
				{ "ToolTip", "@TODO: Comment" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendSpacePlayer>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousBlendSpace_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviousBlendSpace = { UE4CodeGen_Private::EPropertyClass::Object, "PreviousBlendSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer, PreviousBlendSpace), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(NewProp_PreviousBlendSpace_MetaData, ARRAY_COUNT(NewProp_PreviousBlendSpace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendSampleDataCache_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlendSampleDataCache = { UE4CodeGen_Private::EPropertyClass::Array, "BlendSampleDataCache", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer, BlendSampleDataCache), METADATA_PARAMS(NewProp_BlendSampleDataCache_MetaData, ARRAY_COUNT(NewProp_BlendSampleDataCache_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendSampleDataCache_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BlendSampleDataCache", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBlendSampleData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendFilter_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendFilter = { UE4CodeGen_Private::EPropertyClass::Struct, "BlendFilter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer, BlendFilter), Z_Construct_UScriptStruct_FBlendFilter, METADATA_PARAMS(NewProp_BlendFilter_MetaData, ARRAY_COUNT(NewProp_BlendFilter_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetPlayTimeWhenBlendSpaceChanges_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
				{ "PinHiddenByDefault", "" },
				{ "ToolTip", "Whether we should reset the current play time when the blend space changes" },
			};
#endif
			auto NewProp_bResetPlayTimeWhenBlendSpaceChanges_SetBit = [](void* Obj){ ((FAnimNode_BlendSpacePlayer*)Obj)->bResetPlayTimeWhenBlendSpaceChanges = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetPlayTimeWhenBlendSpaceChanges = { UE4CodeGen_Private::EPropertyClass::Bool, "bResetPlayTimeWhenBlendSpaceChanges", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_BlendSpacePlayer), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bResetPlayTimeWhenBlendSpaceChanges_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bResetPlayTimeWhenBlendSpaceChanges_MetaData, ARRAY_COUNT(NewProp_bResetPlayTimeWhenBlendSpaceChanges_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendSpace_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
				{ "PinHiddenByDefault", "" },
				{ "ToolTip", "The blendspace asset to play" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlendSpace = { UE4CodeGen_Private::EPropertyClass::Object, "BlendSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer, BlendSpace), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(NewProp_BlendSpace_MetaData, ARRAY_COUNT(NewProp_BlendSpace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
				{ "Category", "Settings" },
				{ "DefaultValue", "0.f" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
				{ "PinHiddenByDefault", "" },
				{ "ToolTip", "The start up position in [0, 1], it only applies when reinitialized\nif you loop, it will still start from 0.f after finishing the round" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartPosition = { UE4CodeGen_Private::EPropertyClass::Float, "StartPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer, StartPosition), METADATA_PARAMS(NewProp_StartPosition_MetaData, ARRAY_COUNT(NewProp_StartPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[] = {
				{ "Category", "Settings" },
				{ "DefaultValue", "true" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
				{ "PinHiddenByDefault", "" },
				{ "ToolTip", "Should the animation continue looping when it reaches the end?" },
			};
#endif
			auto NewProp_bLoop_SetBit = [](void* Obj){ ((FAnimNode_BlendSpacePlayer*)Obj)->bLoop = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoop = { UE4CodeGen_Private::EPropertyClass::Bool, "bLoop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_BlendSpacePlayer), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLoop_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLoop_MetaData, ARRAY_COUNT(NewProp_bLoop_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
				{ "Category", "Settings" },
				{ "DefaultValue", "1.0" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
				{ "PinHiddenByDefault", "" },
				{ "ToolTip", "The play rate multiplier. Can be negative, which will cause the animation to play in reverse." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "PlayRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer, PlayRate), METADATA_PARAMS(NewProp_PlayRate_MetaData, ARRAY_COUNT(NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[] = {
				{ "Category", "Coordinates" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
				{ "PinHiddenByDefault", "" },
				{ "ToolTip", "The Z coordinate to sample in the blendspace" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z = { UE4CodeGen_Private::EPropertyClass::Float, "Z", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer, Z), METADATA_PARAMS(NewProp_Z_MetaData, ARRAY_COUNT(NewProp_Z_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
				{ "Category", "Coordinates" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
				{ "PinShownByDefault", "" },
				{ "ToolTip", "The Y coordinate to sample in the blendspace" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y = { UE4CodeGen_Private::EPropertyClass::Float, "Y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer, Y), METADATA_PARAMS(NewProp_Y_MetaData, ARRAY_COUNT(NewProp_Y_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
				{ "Category", "Coordinates" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
				{ "PinShownByDefault", "" },
				{ "ToolTip", "The X coordinate to sample in the blendspace" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X = { UE4CodeGen_Private::EPropertyClass::Float, "X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer, X), METADATA_PARAMS(NewProp_X_MetaData, ARRAY_COUNT(NewProp_X_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviousBlendSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendSampleDataCache,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendSampleDataCache_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendFilter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bResetPlayTimeWhenBlendSpaceChanges,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLoop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Z,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_X,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_BlendSpacePlayer",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_BlendSpacePlayer),
				alignof(FAnimNode_BlendSpacePlayer),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_CRC() { return 732250165U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
