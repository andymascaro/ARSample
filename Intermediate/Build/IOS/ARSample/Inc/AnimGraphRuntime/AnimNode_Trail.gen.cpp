// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BoneControllers/AnimNode_Trail.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Trail() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Trail();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
// End Cross Module References
class UScriptStruct* FAnimNode_Trail::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Trail_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Trail, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_Trail"), sizeof(FAnimNode_Trail), Get_Z_Construct_UScriptStruct_FAnimNode_Trail_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_Trail(FAnimNode_Trail::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_Trail"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_Trail
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_Trail()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_Trail")),new UScriptStruct::TCppStructOps<FAnimNode_Trail>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_Trail;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Trail()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Trail_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_Trail"), sizeof(FAnimNode_Trail), Get_Z_Construct_UScriptStruct_FAnimNode_Trail_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
				{ "ToolTip", "Trail Controller" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Trail>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseJoint_MetaData[] = {
				{ "Category", "Velocity" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
				{ "ToolTip", "Base Joint to calculate velocity from. If none, it will use Component's World Transform. ." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseJoint = { UE4CodeGen_Private::EPropertyClass::Struct, "BaseJoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_Trail, BaseJoint), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_BaseJoint_MetaData, ARRAY_COUNT(NewProp_BaseJoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActorSpaceFakeVel_MetaData[] = {
				{ "Category", "Velocity" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
				{ "ToolTip", "Whether 'fake' velocity should be applied in actor or world space." },
			};
#endif
			auto NewProp_bActorSpaceFakeVel_SetBit = [](void* Obj){ ((FAnimNode_Trail*)Obj)->bActorSpaceFakeVel = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActorSpaceFakeVel = { UE4CodeGen_Private::EPropertyClass::Bool, "bActorSpaceFakeVel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_Trail), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bActorSpaceFakeVel_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bActorSpaceFakeVel_MetaData, ARRAY_COUNT(NewProp_bActorSpaceFakeVel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FakeVelocity_MetaData[] = {
				{ "Category", "Velocity" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
				{ "ToolTip", "'Fake' velocity applied to bones." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FakeVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "FakeVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_Trail, FakeVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_FakeVelocity_MetaData, ARRAY_COUNT(NewProp_FakeVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StretchLimit_MetaData[] = {
				{ "Category", "Limit" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
				{ "ToolTip", "If bLimitStretch is true, this indicates how long a bone can stretch beyond its length in the ref-pose." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StretchLimit = { UE4CodeGen_Private::EPropertyClass::Float, "StretchLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_Trail, StretchLimit), METADATA_PARAMS(NewProp_StretchLimit_MetaData, ARRAY_COUNT(NewProp_StretchLimit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLimitStretch_MetaData[] = {
				{ "Category", "Limit" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
				{ "ToolTip", "Limit the amount that a bone can stretch from its ref-pose length." },
			};
#endif
			auto NewProp_bLimitStretch_SetBit = [](void* Obj){ ((FAnimNode_Trail*)Obj)->bLimitStretch = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLimitStretch = { UE4CodeGen_Private::EPropertyClass::Bool, "bLimitStretch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_Trail), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLimitStretch_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLimitStretch_MetaData, ARRAY_COUNT(NewProp_bLimitStretch_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailRelaxationSpeed_MetaData[] = {
				{ "Category", "Trail" },
				{ "CustomizeProperty", "" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
				{ "ToolTip", "How quickly we 'relax' the bones to their animated positions. Time 0 will map to top root joint, time 1 will map to the bottom joint." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrailRelaxationSpeed = { UE4CodeGen_Private::EPropertyClass::Struct, "TrailRelaxationSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_Trail, TrailRelaxationSpeed), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(NewProp_TrailRelaxationSpeed_MetaData, ARRAY_COUNT(NewProp_TrailRelaxationSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailRelaxation_MetaData[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
				{ "ToolTip", "How quickly we 'relax' the bones to their animated positions. Deprecated. Replaced to TrailRelaxationCurve" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrailRelaxation = { UE4CodeGen_Private::EPropertyClass::Float, "TrailRelaxation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_Trail, TrailRelaxation_DEPRECATED), METADATA_PARAMS(NewProp_TrailRelaxation_MetaData, ARRAY_COUNT(NewProp_TrailRelaxation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvertChainBoneAxis_MetaData[] = {
				{ "Category", "Trail" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
				{ "ToolTip", "Invert the direction specified in ChainBoneAxis." },
			};
#endif
			auto NewProp_bInvertChainBoneAxis_SetBit = [](void* Obj){ ((FAnimNode_Trail*)Obj)->bInvertChainBoneAxis = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvertChainBoneAxis = { UE4CodeGen_Private::EPropertyClass::Bool, "bInvertChainBoneAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_Trail), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInvertChainBoneAxis_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInvertChainBoneAxis_MetaData, ARRAY_COUNT(NewProp_bInvertChainBoneAxis_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChainBoneAxis_MetaData[] = {
				{ "Category", "Trail" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
				{ "ToolTip", "Axis of the bones to point along trail." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChainBoneAxis = { UE4CodeGen_Private::EPropertyClass::Byte, "ChainBoneAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_Trail, ChainBoneAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(NewProp_ChainBoneAxis_MetaData, ARRAY_COUNT(NewProp_ChainBoneAxis_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChainLength_MetaData[] = {
				{ "Category", "Trail" },
				{ "ClampMin", "2" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
				{ "ToolTip", "Number of bones above the active one in the hierarchy to modify. ChainLength should be at least 2." },
				{ "UIMin", "2" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChainLength = { UE4CodeGen_Private::EPropertyClass::Int, "ChainLength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_Trail, ChainLength), METADATA_PARAMS(NewProp_ChainLength_MetaData, ARRAY_COUNT(NewProp_ChainLength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailBone_MetaData[] = {
				{ "Category", "Trail" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
				{ "ToolTip", "Reference to the active bone in the hierarchy to modify." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrailBone = { UE4CodeGen_Private::EPropertyClass::Struct, "TrailBone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_Trail, TrailBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_TrailBone_MetaData, ARRAY_COUNT(NewProp_TrailBone_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseJoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bActorSpaceFakeVel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FakeVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StretchLimit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLimitStretch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrailRelaxationSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrailRelaxation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInvertChainBoneAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChainBoneAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChainLength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrailBone,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_Trail",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_Trail),
				alignof(FAnimNode_Trail),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Trail_CRC() { return 4147200406U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
