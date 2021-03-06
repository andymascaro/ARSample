// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BoneControllers/AnimNode_TwistCorrectiveNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_TwistCorrectiveNode() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveParam();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAxis();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FReferenceBoneFrame();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
class UScriptStruct* FAnimNode_TwistCorrectiveNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_TwistCorrectiveNode"), sizeof(FAnimNode_TwistCorrectiveNode), Get_Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_TwistCorrectiveNode(FAnimNode_TwistCorrectiveNode::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_TwistCorrectiveNode"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_TwistCorrectiveNode
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_TwistCorrectiveNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_TwistCorrectiveNode")),new UScriptStruct::TCppStructOps<FAnimNode_TwistCorrectiveNode>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_TwistCorrectiveNode;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_TwistCorrectiveNode"), sizeof(FAnimNode_TwistCorrectiveNode), Get_Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwistCorrectiveNode.h" },
				{ "ToolTip", "This is the node that apply corrective morphtarget for twist\nGood example is that if you twist your neck too far right or left, you're going to see odd stretch shape of neck,\nThis node can detect the angle and apply morphtarget curve\nThis isn't the twist control node for bone twist" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_TwistCorrectiveNode>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[] = {
				{ "Category", "Output Curve" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwistCorrectiveNode.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Curve = { UE4CodeGen_Private::EPropertyClass::Struct, "Curve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_TwistCorrectiveNode, Curve), Z_Construct_UScriptStruct_FAnimCurveParam, METADATA_PARAMS(NewProp_Curve_MetaData, ARRAY_COUNT(NewProp_Curve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemappedMax_MetaData[] = {
				{ "Category", "Mapping" },
				{ "DisplayName", "Mapped Range Max" },
				{ "EditCondition", "bUseRange" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwistCorrectiveNode.h" },
				{ "ToolTip", "Maximum value to apply to the destination (remapped from the input range)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RemappedMax = { UE4CodeGen_Private::EPropertyClass::Float, "RemappedMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_TwistCorrectiveNode, RemappedMax), METADATA_PARAMS(NewProp_RemappedMax_MetaData, ARRAY_COUNT(NewProp_RemappedMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemappedMin_MetaData[] = {
				{ "Category", "Mapping" },
				{ "DisplayName", "Mapped Range Min" },
				{ "EditCondition", "bUseRange" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwistCorrectiveNode.h" },
				{ "ToolTip", "Minimum value to apply to the destination (remapped from the input range)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RemappedMin = { UE4CodeGen_Private::EPropertyClass::Float, "RemappedMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_TwistCorrectiveNode, RemappedMin), METADATA_PARAMS(NewProp_RemappedMin_MetaData, ARRAY_COUNT(NewProp_RemappedMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangeMax_MetaData[] = {
				{ "Category", "Mapping" },
				{ "ClampMax", "90.000000" },
				{ "ClampMin", "0.000000" },
				{ "DisplayName", "Max Angle In Degree" },
				{ "EditCondition", "bUseRange" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwistCorrectiveNode.h" },
				{ "ToolTip", "Maximum limit of the input value (mapped to RemappedMax, only used when limiting the source range)\nWe can't go more than 180 right now because this is dot product driver" },
				{ "UIMax", "90.000000" },
				{ "UIMin", "0.000000" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangeMax = { UE4CodeGen_Private::EPropertyClass::Float, "RangeMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_TwistCorrectiveNode, RangeMax), METADATA_PARAMS(NewProp_RangeMax_MetaData, ARRAY_COUNT(NewProp_RangeMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistPlaneNormalAxis_MetaData[] = {
				{ "Category", "Reference Frame" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwistCorrectiveNode.h" },
				{ "ToolTip", "Normal of the Plane that we'd like to calculate angle calculation from in BaseFrame. Please note we're looking for Normal Axis" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TwistPlaneNormalAxis = { UE4CodeGen_Private::EPropertyClass::Struct, "TwistPlaneNormalAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_TwistCorrectiveNode, TwistPlaneNormalAxis), Z_Construct_UScriptStruct_FAxis, METADATA_PARAMS(NewProp_TwistPlaneNormalAxis_MetaData, ARRAY_COUNT(NewProp_TwistPlaneNormalAxis_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistFrame_MetaData[] = {
				{ "Category", "Reference Frame" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwistCorrectiveNode.h" },
				{ "ToolTip", "Transform component to use as input" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TwistFrame = { UE4CodeGen_Private::EPropertyClass::Struct, "TwistFrame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_TwistCorrectiveNode, TwistFrame), Z_Construct_UScriptStruct_FReferenceBoneFrame, METADATA_PARAMS(NewProp_TwistFrame_MetaData, ARRAY_COUNT(NewProp_TwistFrame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseFrame_MetaData[] = {
				{ "Category", "Reference Frame" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwistCorrectiveNode.h" },
				{ "ToolTip", "Base Frame of the reference for the twist node" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseFrame = { UE4CodeGen_Private::EPropertyClass::Struct, "BaseFrame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_TwistCorrectiveNode, BaseFrame), Z_Construct_UScriptStruct_FReferenceBoneFrame, METADATA_PARAMS(NewProp_BaseFrame_MetaData, ARRAY_COUNT(NewProp_BaseFrame_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Curve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RemappedMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RemappedMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RangeMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TwistPlaneNormalAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TwistFrame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseFrame,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_TwistCorrectiveNode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_TwistCorrectiveNode),
				alignof(FAnimNode_TwistCorrectiveNode),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode_CRC() { return 2310204914U; }
class UScriptStruct* FReferenceBoneFrame::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FReferenceBoneFrame_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FReferenceBoneFrame, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ReferenceBoneFrame"), sizeof(FReferenceBoneFrame), Get_Z_Construct_UScriptStruct_FReferenceBoneFrame_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FReferenceBoneFrame(FReferenceBoneFrame::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("ReferenceBoneFrame"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFReferenceBoneFrame
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFReferenceBoneFrame()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ReferenceBoneFrame")),new UScriptStruct::TCppStructOps<FReferenceBoneFrame>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFReferenceBoneFrame;
	UScriptStruct* Z_Construct_UScriptStruct_FReferenceBoneFrame()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FReferenceBoneFrame_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ReferenceBoneFrame"), sizeof(FReferenceBoneFrame), Get_Z_Construct_UScriptStruct_FReferenceBoneFrame_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwistCorrectiveNode.h" },
				{ "ToolTip", "Reference Bone Frame" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReferenceBoneFrame>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[] = {
				{ "Category", "FReferenceBoneFrame" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwistCorrectiveNode.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Axis = { UE4CodeGen_Private::EPropertyClass::Struct, "Axis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FReferenceBoneFrame, Axis), Z_Construct_UScriptStruct_FAxis, METADATA_PARAMS(NewProp_Axis_MetaData, ARRAY_COUNT(NewProp_Axis_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[] = {
				{ "Category", "FReferenceBoneFrame" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwistCorrectiveNode.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bone = { UE4CodeGen_Private::EPropertyClass::Struct, "Bone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FReferenceBoneFrame, Bone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_Bone_MetaData, ARRAY_COUNT(NewProp_Bone_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Axis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bone,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ReferenceBoneFrame",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FReferenceBoneFrame),
				alignof(FReferenceBoneFrame),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FReferenceBoneFrame_CRC() { return 3959337523U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
