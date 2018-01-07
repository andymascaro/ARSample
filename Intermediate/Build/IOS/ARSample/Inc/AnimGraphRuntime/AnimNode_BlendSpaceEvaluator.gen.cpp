// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimNodes/AnimNode_BlendSpaceEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendSpaceEvaluator() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer();
// End Cross Module References
class UScriptStruct* FAnimNode_BlendSpaceEvaluator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BlendSpaceEvaluator"), sizeof(FAnimNode_BlendSpaceEvaluator), Get_Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_BlendSpaceEvaluator(FAnimNode_BlendSpaceEvaluator::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_BlendSpaceEvaluator"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendSpaceEvaluator
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendSpaceEvaluator()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_BlendSpaceEvaluator")),new UScriptStruct::TCppStructOps<FAnimNode_BlendSpaceEvaluator>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendSpaceEvaluator;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_BlendSpaceEvaluator"), sizeof(FAnimNode_BlendSpaceEvaluator), Get_Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpaceEvaluator.h" },
				{ "ToolTip", "Evaluates a point in a blendspace, using a specific time input rather than advancing time internally.\nTypically the playback position of the animation for this node will represent something other than time, like jump height.\nThis node will not trigger any notifies present in the associated sequence." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendSpaceEvaluator>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalizedTime_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpaceEvaluator.h" },
				{ "PinShownByDefault", "" },
				{ "ToolTip", "Normalized time between [0,1]. The actual length of a blendspace is dynamic based on the coordinate, so it is exposed as a normalized value." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalizedTime = { UE4CodeGen_Private::EPropertyClass::Float, "NormalizedTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpaceEvaluator, NormalizedTime), METADATA_PARAMS(NewProp_NormalizedTime_MetaData, ARRAY_COUNT(NewProp_NormalizedTime_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NormalizedTime,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_BlendSpaceEvaluator",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_BlendSpaceEvaluator),
				alignof(FAnimNode_BlendSpaceEvaluator),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_CRC() { return 4141016880U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
