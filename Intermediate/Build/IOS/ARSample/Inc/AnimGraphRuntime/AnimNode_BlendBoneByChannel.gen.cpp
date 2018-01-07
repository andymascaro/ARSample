// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimNodes/AnimNode_BlendBoneByChannel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendBoneByChannel() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBlendBoneByChannelEntry();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
class UScriptStruct* FAnimNode_BlendBoneByChannel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BlendBoneByChannel"), sizeof(FAnimNode_BlendBoneByChannel), Get_Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_BlendBoneByChannel(FAnimNode_BlendBoneByChannel::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_BlendBoneByChannel"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendBoneByChannel
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendBoneByChannel()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_BlendBoneByChannel")),new UScriptStruct::TCppStructOps<FAnimNode_BlendBoneByChannel>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendBoneByChannel;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_BlendBoneByChannel"), sizeof(FAnimNode_BlendBoneByChannel), Get_Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendBoneByChannel>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidBoneEntries_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
				{ "ToolTip", "Array of bone entries, that has been validated to be correct at runtime.\nSo we don't have to perform validation checks per frame." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValidBoneEntries = { UE4CodeGen_Private::EPropertyClass::Array, "ValidBoneEntries", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendBoneByChannel, ValidBoneEntries), METADATA_PARAMS(NewProp_ValidBoneEntries_MetaData, ARRAY_COUNT(NewProp_ValidBoneEntries_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ValidBoneEntries_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ValidBoneEntries", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBlendBoneByChannelEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBIsRelevant_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
			};
#endif
			auto NewProp_bBIsRelevant_SetBit = [](void* Obj){ ((FAnimNode_BlendBoneByChannel*)Obj)->bBIsRelevant = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBIsRelevant = { UE4CodeGen_Private::EPropertyClass::Bool, "bBIsRelevant", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_BlendBoneByChannel), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBIsRelevant_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBIsRelevant_MetaData, ARRAY_COUNT(NewProp_bBIsRelevant_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalBlendAlpha_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InternalBlendAlpha = { UE4CodeGen_Private::EPropertyClass::Float, "InternalBlendAlpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendBoneByChannel, InternalBlendAlpha), METADATA_PARAMS(NewProp_InternalBlendAlpha_MetaData, ARRAY_COUNT(NewProp_InternalBlendAlpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformsSpace_MetaData[] = {
				{ "Category", "Blend" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
				{ "ToolTip", "Space to convert transforms into prior to copying channels" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TransformsSpace = { UE4CodeGen_Private::EPropertyClass::Byte, "TransformsSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendBoneByChannel, TransformsSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(NewProp_TransformsSpace_MetaData, ARRAY_COUNT(NewProp_TransformsSpace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneDefinitions_MetaData[] = {
				{ "Category", "Blend" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneDefinitions = { UE4CodeGen_Private::EPropertyClass::Array, "BoneDefinitions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendBoneByChannel, BoneDefinitions), METADATA_PARAMS(NewProp_BoneDefinitions_MetaData, ARRAY_COUNT(NewProp_BoneDefinitions_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneDefinitions_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BoneDefinitions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBlendBoneByChannelEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias = { UE4CodeGen_Private::EPropertyClass::Struct, "AlphaScaleBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendBoneByChannel, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(NewProp_AlphaScaleBias_MetaData, ARRAY_COUNT(NewProp_AlphaScaleBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
				{ "PinShownByDefault", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha = { UE4CodeGen_Private::EPropertyClass::Float, "Alpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendBoneByChannel, Alpha), METADATA_PARAMS(NewProp_Alpha_MetaData, ARRAY_COUNT(NewProp_Alpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
				{ "Category", "Links" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendBoneByChannel, B), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(NewProp_B_MetaData, ARRAY_COUNT(NewProp_B_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "Category", "Links" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendBoneByChannel, A), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ValidBoneEntries,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ValidBoneEntries_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBIsRelevant,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InternalBlendAlpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransformsSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneDefinitions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneDefinitions_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AlphaScaleBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Alpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_Base,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_BlendBoneByChannel",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_BlendBoneByChannel),
				alignof(FAnimNode_BlendBoneByChannel),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_CRC() { return 235557785U; }
class UScriptStruct* FBlendBoneByChannelEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("BlendBoneByChannelEntry"), sizeof(FBlendBoneByChannelEntry), Get_Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlendBoneByChannelEntry(FBlendBoneByChannelEntry::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("BlendBoneByChannelEntry"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFBlendBoneByChannelEntry
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFBlendBoneByChannelEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlendBoneByChannelEntry")),new UScriptStruct::TCppStructOps<FBlendBoneByChannelEntry>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFBlendBoneByChannelEntry;
	UScriptStruct* Z_Construct_UScriptStruct_FBlendBoneByChannelEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlendBoneByChannelEntry"), sizeof(FBlendBoneByChannelEntry), Get_Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendBoneByChannelEntry>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlendScale_MetaData[] = {
				{ "Category", "Blend" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
				{ "ToolTip", "Copy Scale from Source to Target" },
			};
#endif
			auto NewProp_bBlendScale_SetBit = [](void* Obj){ ((FBlendBoneByChannelEntry*)Obj)->bBlendScale = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlendScale = { UE4CodeGen_Private::EPropertyClass::Bool, "bBlendScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBlendBoneByChannelEntry), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBlendScale_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBlendScale_MetaData, ARRAY_COUNT(NewProp_bBlendScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlendRotation_MetaData[] = {
				{ "Category", "Blend" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
				{ "ToolTip", "Copy Rotation from Source to Target" },
			};
#endif
			auto NewProp_bBlendRotation_SetBit = [](void* Obj){ ((FBlendBoneByChannelEntry*)Obj)->bBlendRotation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlendRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bBlendRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBlendBoneByChannelEntry), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBlendRotation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBlendRotation_MetaData, ARRAY_COUNT(NewProp_bBlendRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlendTranslation_MetaData[] = {
				{ "Category", "Blend" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
				{ "ToolTip", "Copy Translation from Source to Target" },
			};
#endif
			auto NewProp_bBlendTranslation_SetBit = [](void* Obj){ ((FBlendBoneByChannelEntry*)Obj)->bBlendTranslation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlendTranslation = { UE4CodeGen_Private::EPropertyClass::Bool, "bBlendTranslation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBlendBoneByChannelEntry), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBlendTranslation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBlendTranslation_MetaData, ARRAY_COUNT(NewProp_bBlendTranslation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetBone_MetaData[] = {
				{ "Category", "Blend" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
				{ "ToolTip", "Bone to apply Transform to" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetBone = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetBone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBlendBoneByChannelEntry, TargetBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_TargetBone_MetaData, ARRAY_COUNT(NewProp_TargetBone_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceBone_MetaData[] = {
				{ "Category", "Blend" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
				{ "ToolTip", "Bone to take Transform from" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceBone = { UE4CodeGen_Private::EPropertyClass::Struct, "SourceBone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBlendBoneByChannelEntry, SourceBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_SourceBone_MetaData, ARRAY_COUNT(NewProp_SourceBone_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBlendScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBlendRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBlendTranslation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetBone,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceBone,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BlendBoneByChannelEntry",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBlendBoneByChannelEntry),
				alignof(FBlendBoneByChannelEntry),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_CRC() { return 2858822822U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
