// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimNodes/AnimNode_RotationOffsetBlendSpace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RotationOffsetBlendSpace() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_RotationOffsetBlendSpace::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_RotationOffsetBlendSpace"), sizeof(FAnimNode_RotationOffsetBlendSpace), Get_Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace(FAnimNode_RotationOffsetBlendSpace::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_RotationOffsetBlendSpace"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RotationOffsetBlendSpace
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RotationOffsetBlendSpace()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_RotationOffsetBlendSpace")),new UScriptStruct::TCppStructOps<FAnimNode_RotationOffsetBlendSpace>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RotationOffsetBlendSpace;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_RotationOffsetBlendSpace"), sizeof(FAnimNode_RotationOffsetBlendSpace), Get_Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotationOffsetBlendSpace.h" },
				{ "ToolTip", "@TODO: Comment" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RotationOffsetBlendSpace>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActualAlpha_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotationOffsetBlendSpace.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActualAlpha = { UE4CodeGen_Private::EPropertyClass::Float, "ActualAlpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FAnimNode_RotationOffsetBlendSpace, ActualAlpha), METADATA_PARAMS(NewProp_ActualAlpha_MetaData, ARRAY_COUNT(NewProp_ActualAlpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotationOffsetBlendSpace.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias = { UE4CodeGen_Private::EPropertyClass::Struct, "AlphaScaleBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_RotationOffsetBlendSpace, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(NewProp_AlphaScaleBias_MetaData, ARRAY_COUNT(NewProp_AlphaScaleBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotationOffsetBlendSpace.h" },
				{ "PinShownByDefault", "" },
				{ "ToolTip", "Current strength of the AimOffset" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha = { UE4CodeGen_Private::EPropertyClass::Float, "Alpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_RotationOffsetBlendSpace, Alpha), METADATA_PARAMS(NewProp_Alpha_MetaData, ARRAY_COUNT(NewProp_Alpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLODEnabled_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotationOffsetBlendSpace.h" },
			};
#endif
			auto NewProp_bIsLODEnabled_SetBit = [](void* Obj){ ((FAnimNode_RotationOffsetBlendSpace*)Obj)->bIsLODEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLODEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsLODEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_RotationOffsetBlendSpace), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsLODEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsLODEnabled_MetaData, ARRAY_COUNT(NewProp_bIsLODEnabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[] = {
				{ "Category", "Performance" },
				{ "DisplayName", "LOD Threshold" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotationOffsetBlendSpace.h" },
				{ "ToolTip", "* Max LOD that this node is allowed to run\n* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n* when the component LOD becomes 3, it will stop update/evaluate\n* currently transition would be issue and that has to be re-visited" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODThreshold = { UE4CodeGen_Private::EPropertyClass::Int, "LODThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_RotationOffsetBlendSpace, LODThreshold), METADATA_PARAMS(NewProp_LODThreshold_MetaData, ARRAY_COUNT(NewProp_LODThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePose_MetaData[] = {
				{ "Category", "Links" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotationOffsetBlendSpace.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BasePose = { UE4CodeGen_Private::EPropertyClass::Struct, "BasePose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_RotationOffsetBlendSpace, BasePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(NewProp_BasePose_MetaData, ARRAY_COUNT(NewProp_BasePose_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActualAlpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AlphaScaleBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Alpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsLODEnabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BasePose,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_RotationOffsetBlendSpace",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_RotationOffsetBlendSpace),
				alignof(FAnimNode_RotationOffsetBlendSpace),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_CRC() { return 3801880613U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
