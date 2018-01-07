// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimNodes/AnimNode_MultiWayBlend.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_MultiWayBlend() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_MultiWayBlend::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_MultiWayBlend"), sizeof(FAnimNode_MultiWayBlend), Get_Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_MultiWayBlend(FAnimNode_MultiWayBlend::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_MultiWayBlend"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_MultiWayBlend
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_MultiWayBlend()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_MultiWayBlend")),new UScriptStruct::TCppStructOps<FAnimNode_MultiWayBlend>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_MultiWayBlend;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_MultiWayBlend"), sizeof(FAnimNode_MultiWayBlend), Get_Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MultiWayBlend.h" },
				{ "ToolTip", "This represents a baked transition" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_MultiWayBlend>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MultiWayBlend.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias = { UE4CodeGen_Private::EPropertyClass::Struct, "AlphaScaleBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_MultiWayBlend, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(NewProp_AlphaScaleBias_MetaData, ARRAY_COUNT(NewProp_AlphaScaleBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNormalizeAlpha_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MultiWayBlend.h" },
			};
#endif
			auto NewProp_bNormalizeAlpha_SetBit = [](void* Obj){ ((FAnimNode_MultiWayBlend*)Obj)->bNormalizeAlpha = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNormalizeAlpha = { UE4CodeGen_Private::EPropertyClass::Bool, "bNormalizeAlpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_MultiWayBlend), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNormalizeAlpha_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNormalizeAlpha_MetaData, ARRAY_COUNT(NewProp_bNormalizeAlpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAdditiveNode_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MultiWayBlend.h" },
			};
#endif
			auto NewProp_bAdditiveNode_SetBit = [](void* Obj){ ((FAnimNode_MultiWayBlend*)Obj)->bAdditiveNode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdditiveNode = { UE4CodeGen_Private::EPropertyClass::Bool, "bAdditiveNode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_MultiWayBlend), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAdditiveNode_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAdditiveNode_MetaData, ARRAY_COUNT(NewProp_bAdditiveNode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredAlphas_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MultiWayBlend.h" },
				{ "PinShownByDefault", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DesiredAlphas = { UE4CodeGen_Private::EPropertyClass::Array, "DesiredAlphas", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_MultiWayBlend, DesiredAlphas), METADATA_PARAMS(NewProp_DesiredAlphas_MetaData, ARRAY_COUNT(NewProp_DesiredAlphas_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredAlphas_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "DesiredAlphas", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Poses_MetaData[] = {
				{ "Category", "Links" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MultiWayBlend.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Poses = { UE4CodeGen_Private::EPropertyClass::Array, "Poses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_MultiWayBlend, Poses), METADATA_PARAMS(NewProp_Poses_MetaData, ARRAY_COUNT(NewProp_Poses_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Poses_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Poses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AlphaScaleBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNormalizeAlpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAdditiveNode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DesiredAlphas,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DesiredAlphas_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Poses,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Poses_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_Base,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_MultiWayBlend",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_MultiWayBlend),
				alignof(FAnimNode_MultiWayBlend),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_CRC() { return 3965983352U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
