// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimNodes/AnimNode_ApplyAdditive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ApplyAdditive() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ApplyAdditive();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_ApplyAdditive::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ApplyAdditive_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ApplyAdditive, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_ApplyAdditive"), sizeof(FAnimNode_ApplyAdditive), Get_Z_Construct_UScriptStruct_FAnimNode_ApplyAdditive_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_ApplyAdditive(FAnimNode_ApplyAdditive::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_ApplyAdditive"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_ApplyAdditive
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_ApplyAdditive()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_ApplyAdditive")),new UScriptStruct::TCppStructOps<FAnimNode_ApplyAdditive>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_ApplyAdditive;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ApplyAdditive()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ApplyAdditive_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_ApplyAdditive"), sizeof(FAnimNode_ApplyAdditive), Get_Z_Construct_UScriptStruct_FAnimNode_ApplyAdditive_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ApplyAdditive.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ApplyAdditive>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActualAlpha_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ApplyAdditive.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActualAlpha = { UE4CodeGen_Private::EPropertyClass::Float, "ActualAlpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FAnimNode_ApplyAdditive, ActualAlpha), METADATA_PARAMS(NewProp_ActualAlpha_MetaData, ARRAY_COUNT(NewProp_ActualAlpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[] = {
				{ "Category", "Performance" },
				{ "DisplayName", "LOD Threshold" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ApplyAdditive.h" },
				{ "ToolTip", "* Max LOD that this node is allowed to run\n* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n* when the component LOD becomes 3, it will stop update/evaluate\n* currently transition would be issue and that has to be re-visited" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODThreshold = { UE4CodeGen_Private::EPropertyClass::Int, "LODThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_ApplyAdditive, LODThreshold), METADATA_PARAMS(NewProp_LODThreshold_MetaData, ARRAY_COUNT(NewProp_LODThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ApplyAdditive.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias = { UE4CodeGen_Private::EPropertyClass::Struct, "AlphaScaleBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_ApplyAdditive, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(NewProp_AlphaScaleBias_MetaData, ARRAY_COUNT(NewProp_AlphaScaleBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ApplyAdditive.h" },
				{ "PinShownByDefault", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha = { UE4CodeGen_Private::EPropertyClass::Float, "Alpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_ApplyAdditive, Alpha), METADATA_PARAMS(NewProp_Alpha_MetaData, ARRAY_COUNT(NewProp_Alpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Additive_MetaData[] = {
				{ "Category", "Links" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ApplyAdditive.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Additive = { UE4CodeGen_Private::EPropertyClass::Struct, "Additive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_ApplyAdditive, Additive), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(NewProp_Additive_MetaData, ARRAY_COUNT(NewProp_Additive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[] = {
				{ "Category", "Links" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ApplyAdditive.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Base = { UE4CodeGen_Private::EPropertyClass::Struct, "Base", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_ApplyAdditive, Base), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(NewProp_Base_MetaData, ARRAY_COUNT(NewProp_Base_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActualAlpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AlphaScaleBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Alpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Additive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Base,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_Base,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_ApplyAdditive",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_ApplyAdditive),
				alignof(FAnimNode_ApplyAdditive),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ApplyAdditive_CRC() { return 156095846U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
