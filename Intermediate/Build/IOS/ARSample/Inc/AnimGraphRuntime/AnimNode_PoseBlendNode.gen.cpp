// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimNodes/AnimNode_PoseBlendNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_PoseBlendNode() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseHandler();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_PoseBlendNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_PoseBlendNode"), sizeof(FAnimNode_PoseBlendNode), Get_Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_PoseBlendNode(FAnimNode_PoseBlendNode::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_PoseBlendNode"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_PoseBlendNode
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_PoseBlendNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_PoseBlendNode")),new UScriptStruct::TCppStructOps<FAnimNode_PoseBlendNode>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_PoseBlendNode;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_PoseBlendNode"), sizeof(FAnimNode_PoseBlendNode), Get_Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseBlendNode.h" },
				{ "ToolTip", "Evaluates a point in an anim sequence, using a specific time input rather than advancing time internally.\nTypically the playback position of the animation for this node will represent something other than time, like jump height.\nThis node will not trigger any notifies present in the associated sequence." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_PoseBlendNode>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomCurve_MetaData[] = {
				{ "Category", "Blend" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseBlendNode.h" },
				{ "ToolTip", "If you're using Custom BlendOption, you can specify curve" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomCurve = { UE4CodeGen_Private::EPropertyClass::Object, "CustomCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_PoseBlendNode, CustomCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(NewProp_CustomCurve_MetaData, ARRAY_COUNT(NewProp_CustomCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOption_MetaData[] = {
				{ "Category", "Blend" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseBlendNode.h" },
				{ "ToolTip", "Type of blending used (Linear, Cubic, etc.)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendOption = { UE4CodeGen_Private::EPropertyClass::Enum, "BlendOption", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_PoseBlendNode, BlendOption), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(NewProp_BlendOption_MetaData, ARRAY_COUNT(NewProp_BlendOption_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendOption_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[] = {
				{ "Category", "Links" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseBlendNode.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourcePose = { UE4CodeGen_Private::EPropertyClass::Struct, "SourcePose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000045, 1, nullptr, STRUCT_OFFSET(FAnimNode_PoseBlendNode, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(NewProp_SourcePose_MetaData, ARRAY_COUNT(NewProp_SourcePose_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendOption,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendOption_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourcePose,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_PoseHandler,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_PoseBlendNode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_PoseBlendNode),
				alignof(FAnimNode_PoseBlendNode),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode_CRC() { return 230181037U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
