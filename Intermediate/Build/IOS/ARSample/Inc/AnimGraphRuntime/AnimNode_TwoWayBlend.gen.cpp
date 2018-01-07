// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimNodes/AnimNode_TwoWayBlend.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_TwoWayBlend() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_TwoWayBlend::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_TwoWayBlend"), sizeof(FAnimNode_TwoWayBlend), Get_Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_TwoWayBlend(FAnimNode_TwoWayBlend::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_TwoWayBlend"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_TwoWayBlend
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_TwoWayBlend()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_TwoWayBlend")),new UScriptStruct::TCppStructOps<FAnimNode_TwoWayBlend>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_TwoWayBlend;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_TwoWayBlend"), sizeof(FAnimNode_TwoWayBlend), Get_Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TwoWayBlend.h" },
				{ "ToolTip", "This represents a baked transition" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_TwoWayBlend>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetChildOnActivation_MetaData[] = {
				{ "Category", "Option" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TwoWayBlend.h" },
				{ "ToolTip", "This reinitializes child pose when re-activated. For example, when active child changes" },
			};
#endif
			auto NewProp_bResetChildOnActivation_SetBit = [](void* Obj){ ((FAnimNode_TwoWayBlend*)Obj)->bResetChildOnActivation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetChildOnActivation = { UE4CodeGen_Private::EPropertyClass::Bool, "bResetChildOnActivation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_TwoWayBlend), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bResetChildOnActivation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bResetChildOnActivation_MetaData, ARRAY_COUNT(NewProp_bResetChildOnActivation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBIsRelevant_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TwoWayBlend.h" },
			};
#endif
			auto NewProp_bBIsRelevant_SetBit = [](void* Obj){ ((FAnimNode_TwoWayBlend*)Obj)->bBIsRelevant = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBIsRelevant = { UE4CodeGen_Private::EPropertyClass::Bool, "bBIsRelevant", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_TwoWayBlend), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBIsRelevant_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBIsRelevant_MetaData, ARRAY_COUNT(NewProp_bBIsRelevant_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAIsRelevant_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TwoWayBlend.h" },
			};
#endif
			auto NewProp_bAIsRelevant_SetBit = [](void* Obj){ ((FAnimNode_TwoWayBlend*)Obj)->bAIsRelevant = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAIsRelevant = { UE4CodeGen_Private::EPropertyClass::Bool, "bAIsRelevant", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_TwoWayBlend), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAIsRelevant_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAIsRelevant_MetaData, ARRAY_COUNT(NewProp_bAIsRelevant_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalBlendAlpha_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TwoWayBlend.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InternalBlendAlpha = { UE4CodeGen_Private::EPropertyClass::Float, "InternalBlendAlpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(FAnimNode_TwoWayBlend, InternalBlendAlpha), METADATA_PARAMS(NewProp_InternalBlendAlpha_MetaData, ARRAY_COUNT(NewProp_InternalBlendAlpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TwoWayBlend.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias = { UE4CodeGen_Private::EPropertyClass::Struct, "AlphaScaleBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_TwoWayBlend, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(NewProp_AlphaScaleBias_MetaData, ARRAY_COUNT(NewProp_AlphaScaleBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TwoWayBlend.h" },
				{ "PinShownByDefault", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha = { UE4CodeGen_Private::EPropertyClass::Float, "Alpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_TwoWayBlend, Alpha), METADATA_PARAMS(NewProp_Alpha_MetaData, ARRAY_COUNT(NewProp_Alpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
				{ "Category", "Links" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TwoWayBlend.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_TwoWayBlend, B), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(NewProp_B_MetaData, ARRAY_COUNT(NewProp_B_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "Category", "Links" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TwoWayBlend.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_TwoWayBlend, A), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bResetChildOnActivation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBIsRelevant,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAIsRelevant,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InternalBlendAlpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AlphaScaleBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Alpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_Base,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_TwoWayBlend",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_TwoWayBlend),
				alignof(FAnimNode_TwoWayBlend),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_CRC() { return 1945029685U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
