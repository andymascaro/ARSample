// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimNodes/AnimNode_LayeredBoneBlend.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LayeredBoneBlend() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerBoneBlendWeight();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECurveBlendOption();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputBlendPose();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_LayeredBoneBlend::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_LayeredBoneBlend"), sizeof(FAnimNode_LayeredBoneBlend), Get_Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_LayeredBoneBlend(FAnimNode_LayeredBoneBlend::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_LayeredBoneBlend"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_LayeredBoneBlend
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_LayeredBoneBlend()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_LayeredBoneBlend")),new UScriptStruct::TCppStructOps<FAnimNode_LayeredBoneBlend>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_LayeredBoneBlend;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_LayeredBoneBlend"), sizeof(FAnimNode_LayeredBoneBlend), Get_Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
				{ "ToolTip", "Layered blend (per bone); has dynamic number of blendposes that can blend per different bone sets" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LayeredBoneBlend>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualBoneGuid_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VirtualBoneGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "VirtualBoneGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_LayeredBoneBlend, VirtualBoneGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_VirtualBoneGuid_MetaData, ARRAY_COUNT(NewProp_VirtualBoneGuid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletonGuid_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkeletonGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "SkeletonGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_LayeredBoneBlend, SkeletonGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_SkeletonGuid_MetaData, ARRAY_COUNT(NewProp_SkeletonGuid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerBoneBlendWeights_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
				{ "ToolTip", "This is buffer to serialize blend weight data for each joints\nThis has to save with the corresponding SkeletopnGuid\nIf not, it will rebuild in run-time" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerBoneBlendWeights = { UE4CodeGen_Private::EPropertyClass::Array, "PerBoneBlendWeights", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_LayeredBoneBlend, PerBoneBlendWeights), METADATA_PARAMS(NewProp_PerBoneBlendWeights_MetaData, ARRAY_COUNT(NewProp_PerBoneBlendWeights_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerBoneBlendWeights_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PerBoneBlendWeights", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPerBoneBlendWeight, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasRelevantPoses_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
			};
#endif
			auto NewProp_bHasRelevantPoses_SetBit = [](void* Obj){ ((FAnimNode_LayeredBoneBlend*)Obj)->bHasRelevantPoses = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasRelevantPoses = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasRelevantPoses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_LayeredBoneBlend), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasRelevantPoses_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasRelevantPoses_MetaData, ARRAY_COUNT(NewProp_bHasRelevantPoses_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlendRootMotionBasedOnRootBone_MetaData[] = {
				{ "Category", "Config" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
				{ "ToolTip", "Whether to incorporate the per-bone blend weight of the root bone when lending root motion" },
			};
#endif
			auto NewProp_bBlendRootMotionBasedOnRootBone_SetBit = [](void* Obj){ ((FAnimNode_LayeredBoneBlend*)Obj)->bBlendRootMotionBasedOnRootBone = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlendRootMotionBasedOnRootBone = { UE4CodeGen_Private::EPropertyClass::Bool, "bBlendRootMotionBasedOnRootBone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_LayeredBoneBlend), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBlendRootMotionBasedOnRootBone_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBlendRootMotionBasedOnRootBone_MetaData, ARRAY_COUNT(NewProp_bBlendRootMotionBasedOnRootBone_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveBlendOption_MetaData[] = {
				{ "Category", "Config" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
				{ "ToolTip", "How to blend the layers together" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurveBlendOption = { UE4CodeGen_Private::EPropertyClass::Byte, "CurveBlendOption", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_LayeredBoneBlend, CurveBlendOption), Z_Construct_UEnum_Engine_ECurveBlendOption, METADATA_PARAMS(NewProp_CurveBlendOption_MetaData, ARRAY_COUNT(NewProp_CurveBlendOption_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMeshSpaceRotationBlend_MetaData[] = {
				{ "Category", "Config" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
				{ "ToolTip", "Whether to blend bone rotations in mesh space or in local space" },
			};
#endif
			auto NewProp_bMeshSpaceRotationBlend_SetBit = [](void* Obj){ ((FAnimNode_LayeredBoneBlend*)Obj)->bMeshSpaceRotationBlend = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMeshSpaceRotationBlend = { UE4CodeGen_Private::EPropertyClass::Bool, "bMeshSpaceRotationBlend", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_LayeredBoneBlend), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMeshSpaceRotationBlend_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bMeshSpaceRotationBlend_MetaData, ARRAY_COUNT(NewProp_bMeshSpaceRotationBlend_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendWeights_MetaData[] = {
				{ "Category", "Runtime" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
				{ "PinShownByDefault", "" },
				{ "ToolTip", "The weights of each layer" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlendWeights = { UE4CodeGen_Private::EPropertyClass::Array, "BlendWeights", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000045, 1, nullptr, STRUCT_OFFSET(FAnimNode_LayeredBoneBlend, BlendWeights), METADATA_PARAMS(NewProp_BlendWeights_MetaData, ARRAY_COUNT(NewProp_BlendWeights_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendWeights_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "BlendWeights", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerSetup_MetaData[] = {
				{ "Category", "Config" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
				{ "ToolTip", "Configuration for the parts of the skeleton to blend for each layer. Allows\ncertain parts of the tree to be blended out or omitted from the pose." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LayerSetup = { UE4CodeGen_Private::EPropertyClass::Array, "LayerSetup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000041, 1, nullptr, STRUCT_OFFSET(FAnimNode_LayeredBoneBlend, LayerSetup), METADATA_PARAMS(NewProp_LayerSetup_MetaData, ARRAY_COUNT(NewProp_LayerSetup_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LayerSetup_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LayerSetup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInputBlendPose, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendPoses_MetaData[] = {
				{ "Category", "Links" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
				{ "ToolTip", "Each layer's blended pose" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlendPoses = { UE4CodeGen_Private::EPropertyClass::Array, "BlendPoses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000045, 1, nullptr, STRUCT_OFFSET(FAnimNode_LayeredBoneBlend, BlendPoses), METADATA_PARAMS(NewProp_BlendPoses_MetaData, ARRAY_COUNT(NewProp_BlendPoses_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendPoses_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BlendPoses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePose_MetaData[] = {
				{ "Category", "Links" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
				{ "ToolTip", "The source pose" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BasePose = { UE4CodeGen_Private::EPropertyClass::Struct, "BasePose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_LayeredBoneBlend, BasePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(NewProp_BasePose_MetaData, ARRAY_COUNT(NewProp_BasePose_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VirtualBoneGuid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkeletonGuid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PerBoneBlendWeights,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PerBoneBlendWeights_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasRelevantPoses,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBlendRootMotionBasedOnRootBone,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurveBlendOption,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMeshSpaceRotationBlend,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendWeights,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendWeights_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LayerSetup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LayerSetup_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendPoses,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendPoses_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BasePose,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_Base,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_LayeredBoneBlend",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_LayeredBoneBlend),
				alignof(FAnimNode_LayeredBoneBlend),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_CRC() { return 4271078470U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
