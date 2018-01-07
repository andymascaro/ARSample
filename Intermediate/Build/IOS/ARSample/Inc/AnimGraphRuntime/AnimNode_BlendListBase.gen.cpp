// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimNodes/AnimNode_BlendListBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendListBase() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListBase();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlendSampleData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlend();
	ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_BlendListBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendListBase_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListBase, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BlendListBase"), sizeof(FAnimNode_BlendListBase), Get_Z_Construct_UScriptStruct_FAnimNode_BlendListBase_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_BlendListBase(FAnimNode_BlendListBase::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_BlendListBase"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendListBase
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendListBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_BlendListBase")),new UScriptStruct::TCppStructOps<FAnimNode_BlendListBase>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendListBase;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendListBase_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_BlendListBase"), sizeof(FAnimNode_BlendListBase), Get_Z_Construct_UScriptStruct_FAnimNode_BlendListBase_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
				{ "ToolTip", "Blend list node; has many children" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendListBase>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetChildOnActivation_MetaData[] = {
				{ "Category", "Option" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
				{ "ToolTip", "This reinitializes child pose when re-activated. For example, when active child changes" },
			};
#endif
			auto NewProp_bResetChildOnActivation_SetBit = [](void* Obj){ ((FAnimNode_BlendListBase*)Obj)->bResetChildOnActivation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetChildOnActivation = { UE4CodeGen_Private::EPropertyClass::Bool, "bResetChildOnActivation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_BlendListBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bResetChildOnActivation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bResetChildOnActivation_MetaData, ARRAY_COUNT(NewProp_bResetChildOnActivation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerBoneSampleData_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerBoneSampleData = { UE4CodeGen_Private::EPropertyClass::Array, "PerBoneSampleData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendListBase, PerBoneSampleData), METADATA_PARAMS(NewProp_PerBoneSampleData_MetaData, ARRAY_COUNT(NewProp_PerBoneSampleData_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerBoneSampleData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PerBoneSampleData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBlendSampleData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastActiveChildIndex_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastActiveChildIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LastActiveChildIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendListBase, LastActiveChildIndex), METADATA_PARAMS(NewProp_LastActiveChildIndex_MetaData, ARRAY_COUNT(NewProp_LastActiveChildIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainingBlendTimes_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RemainingBlendTimes = { UE4CodeGen_Private::EPropertyClass::Array, "RemainingBlendTimes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendListBase, RemainingBlendTimes), METADATA_PARAMS(NewProp_RemainingBlendTimes_MetaData, ARRAY_COUNT(NewProp_RemainingBlendTimes_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RemainingBlendTimes_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "RemainingBlendTimes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendWeights_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlendWeights = { UE4CodeGen_Private::EPropertyClass::Array, "BlendWeights", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendListBase, BlendWeights), METADATA_PARAMS(NewProp_BlendWeights_MetaData, ARRAY_COUNT(NewProp_BlendWeights_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendWeights_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "BlendWeights", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blends_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Blends = { UE4CodeGen_Private::EPropertyClass::Array, "Blends", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendListBase, Blends), METADATA_PARAMS(NewProp_Blends_MetaData, ARRAY_COUNT(NewProp_Blends_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Blends_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Blends", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAlphaBlend, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendProfile_MetaData[] = {
				{ "Category", "BlendType" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlendProfile = { UE4CodeGen_Private::EPropertyClass::Object, "BlendProfile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendListBase, BlendProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(NewProp_BlendProfile_MetaData, ARRAY_COUNT(NewProp_BlendProfile_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomBlendCurve_MetaData[] = {
				{ "Category", "BlendType" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomBlendCurve = { UE4CodeGen_Private::EPropertyClass::Object, "CustomBlendCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendListBase, CustomBlendCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(NewProp_CustomBlendCurve_MetaData, ARRAY_COUNT(NewProp_CustomBlendCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendType_MetaData[] = {
				{ "Category", "BlendType" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendType = { UE4CodeGen_Private::EPropertyClass::Enum, "BlendType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendListBase, BlendType), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(NewProp_BlendType_MetaData, ARRAY_COUNT(NewProp_BlendType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[] = {
				{ "Category", "Config" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
				{ "PinShownByDefault", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlendTime = { UE4CodeGen_Private::EPropertyClass::Array, "BlendTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000045, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendListBase, BlendTime), METADATA_PARAMS(NewProp_BlendTime_MetaData, ARRAY_COUNT(NewProp_BlendTime_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendTime_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "BlendTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendPose_MetaData[] = {
				{ "Category", "Links" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlendPose = { UE4CodeGen_Private::EPropertyClass::Array, "BlendPose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000045, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendListBase, BlendPose), METADATA_PARAMS(NewProp_BlendPose_MetaData, ARRAY_COUNT(NewProp_BlendPose_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendPose_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BlendPose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bResetChildOnActivation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PerBoneSampleData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PerBoneSampleData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastActiveChildIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RemainingBlendTimes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RemainingBlendTimes_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendWeights,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendWeights_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Blends,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Blends_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendProfile,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomBlendCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendTime_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendPose,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendPose_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_Base,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_BlendListBase",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_BlendListBase),
				alignof(FAnimNode_BlendListBase),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendListBase_CRC() { return 1773928150U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
