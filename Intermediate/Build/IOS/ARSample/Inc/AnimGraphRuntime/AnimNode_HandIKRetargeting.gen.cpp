// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BoneControllers/AnimNode_HandIKRetargeting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_HandIKRetargeting() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
class UScriptStruct* FAnimNode_HandIKRetargeting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_HandIKRetargeting"), sizeof(FAnimNode_HandIKRetargeting), Get_Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_HandIKRetargeting(FAnimNode_HandIKRetargeting::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_HandIKRetargeting"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_HandIKRetargeting
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_HandIKRetargeting()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_HandIKRetargeting")),new UScriptStruct::TCppStructOps<FAnimNode_HandIKRetargeting>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_HandIKRetargeting;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_HandIKRetargeting"), sizeof(FAnimNode_HandIKRetargeting), Get_Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_HandIKRetargeting.h" },
				{ "ToolTip", "Node to handle re-targeting of Hand IK bone chain.\nIt looks at position in Mesh Space of Left and Right IK bones, and moves Left and Right IK bones to those.\nbased on HandFKWeight. (0 = favor left hand, 1 = favor right hand, 0.5 = equal weight).\nThis is used so characters of different proportions can handle the same props." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_HandIKRetargeting>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandFKWeight_MetaData[] = {
				{ "Category", "HandIKRetargeting" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_HandIKRetargeting.h" },
				{ "PinShownByDefault", "" },
				{ "ToolTip", "Which hand to favor. 0.5 is equal weight for both, 1 = right hand, 0 = left hand." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HandFKWeight = { UE4CodeGen_Private::EPropertyClass::Float, "HandFKWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_HandIKRetargeting, HandFKWeight), METADATA_PARAMS(NewProp_HandFKWeight_MetaData, ARRAY_COUNT(NewProp_HandFKWeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKBonesToMove_MetaData[] = {
				{ "Category", "HandIKRetargeting" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_HandIKRetargeting.h" },
				{ "ToolTip", "IK Bones to move." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IKBonesToMove = { UE4CodeGen_Private::EPropertyClass::Array, "IKBonesToMove", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_HandIKRetargeting, IKBonesToMove), METADATA_PARAMS(NewProp_IKBonesToMove_MetaData, ARRAY_COUNT(NewProp_IKBonesToMove_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_IKBonesToMove_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "IKBonesToMove", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandIK_MetaData[] = {
				{ "Category", "HandIKRetargeting" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_HandIKRetargeting.h" },
				{ "ToolTip", "Bone for Left Hand IK" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftHandIK = { UE4CodeGen_Private::EPropertyClass::Struct, "LeftHandIK", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_HandIKRetargeting, LeftHandIK), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_LeftHandIK_MetaData, ARRAY_COUNT(NewProp_LeftHandIK_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandIK_MetaData[] = {
				{ "Category", "HandIKRetargeting" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_HandIKRetargeting.h" },
				{ "ToolTip", "Bone for Right Hand IK" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightHandIK = { UE4CodeGen_Private::EPropertyClass::Struct, "RightHandIK", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_HandIKRetargeting, RightHandIK), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_RightHandIK_MetaData, ARRAY_COUNT(NewProp_RightHandIK_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandFK_MetaData[] = {
				{ "Category", "HandIKRetargeting" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_HandIKRetargeting.h" },
				{ "ToolTip", "Bone for Left Hand FK" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftHandFK = { UE4CodeGen_Private::EPropertyClass::Struct, "LeftHandFK", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_HandIKRetargeting, LeftHandFK), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_LeftHandFK_MetaData, ARRAY_COUNT(NewProp_LeftHandFK_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandFK_MetaData[] = {
				{ "Category", "HandIKRetargeting" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_HandIKRetargeting.h" },
				{ "ToolTip", "Bone for Right Hand FK" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightHandFK = { UE4CodeGen_Private::EPropertyClass::Struct, "RightHandFK", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_HandIKRetargeting, RightHandFK), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_RightHandFK_MetaData, ARRAY_COUNT(NewProp_RightHandFK_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HandFKWeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IKBonesToMove,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IKBonesToMove_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeftHandIK,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RightHandIK,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeftHandFK,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RightHandFK,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_HandIKRetargeting",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_HandIKRetargeting),
				alignof(FAnimNode_HandIKRetargeting),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_CRC() { return 1527129711U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
