// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimNodes/AnimNode_AimOffsetLookAt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_AimOffsetLookAt() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_AimOffsetLookAt::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_AimOffsetLookAt"), sizeof(FAnimNode_AimOffsetLookAt), Get_Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_AimOffsetLookAt(FAnimNode_AimOffsetLookAt::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_AimOffsetLookAt"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_AimOffsetLookAt
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_AimOffsetLookAt()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_AimOffsetLookAt")),new UScriptStruct::TCppStructOps<FAnimNode_AimOffsetLookAt>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_AimOffsetLookAt;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_AimOffsetLookAt"), sizeof(FAnimNode_AimOffsetLookAt), Get_Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetLookAt.h" },
				{ "ToolTip", "This node uses a source transform of a socket on the skeletal mesh to automatically calculate\nYaw and Pitch directions for a referenced aim offset given a point in the world to look at." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_AimOffsetLookAt>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PivotSocketLocalTransform_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetLookAt.h" },
				{ "ToolTip", "Cached local transform of the pivot socket" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotSocketLocalTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "PivotSocketLocalTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_AimOffsetLookAt, PivotSocketLocalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_PivotSocketLocalTransform_MetaData, ARRAY_COUNT(NewProp_PivotSocketLocalTransform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PivotSocketBoneReference_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetLookAt.h" },
				{ "ToolTip", "Cached reference to the pivot socket's bone" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotSocketBoneReference = { UE4CodeGen_Private::EPropertyClass::Struct, "PivotSocketBoneReference", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_AimOffsetLookAt, PivotSocketBoneReference), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_PivotSocketBoneReference_MetaData, ARRAY_COUNT(NewProp_PivotSocketBoneReference_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketLocalTransform_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetLookAt.h" },
				{ "ToolTip", "Cached local transform of the source socket" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SocketLocalTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "SocketLocalTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_AimOffsetLookAt, SocketLocalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_SocketLocalTransform_MetaData, ARRAY_COUNT(NewProp_SocketLocalTransform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketBoneReference_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetLookAt.h" },
				{ "ToolTip", "Cached reference to the source socket's bone" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SocketBoneReference = { UE4CodeGen_Private::EPropertyClass::Struct, "SocketBoneReference", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_AimOffsetLookAt, SocketBoneReference), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_SocketBoneReference_MetaData, ARRAY_COUNT(NewProp_SocketBoneReference_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
				{ "Category", "LookAt" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetLookAt.h" },
				{ "PinShownByDefault", "" },
				{ "ToolTip", "Amount of this node to blend into the output pose" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha = { UE4CodeGen_Private::EPropertyClass::Float, "Alpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_AimOffsetLookAt, Alpha), METADATA_PARAMS(NewProp_Alpha_MetaData, ARRAY_COUNT(NewProp_Alpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketAxis_MetaData[] = {
				{ "Category", "LookAt" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetLookAt.h" },
				{ "PinHiddenByDefault", "" },
				{ "ToolTip", "Axis in the socket transform to consider the 'forward' or look at axis" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SocketAxis = { UE4CodeGen_Private::EPropertyClass::Struct, "SocketAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_AimOffsetLookAt, SocketAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_SocketAxis_MetaData, ARRAY_COUNT(NewProp_SocketAxis_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PivotSocketName_MetaData[] = {
				{ "Category", "LookAt" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetLookAt.h" },
				{ "PinHiddenByDefault", "" },
				{ "ToolTip", "Socket to treat as the look at pivot (optional). This will overwrite the translation of the source socket transform to better match the lookat direction" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PivotSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "PivotSocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_AimOffsetLookAt, PivotSocketName), METADATA_PARAMS(NewProp_PivotSocketName_MetaData, ARRAY_COUNT(NewProp_PivotSocketName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceSocketName_MetaData[] = {
				{ "Category", "LookAt" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetLookAt.h" },
				{ "PinHiddenByDefault", "" },
				{ "ToolTip", "Socket to treat as the look at source" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourceSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "SourceSocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_AimOffsetLookAt, SourceSocketName), METADATA_PARAMS(NewProp_SourceSocketName_MetaData, ARRAY_COUNT(NewProp_SourceSocketName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtLocation_MetaData[] = {
				{ "Category", "LookAt" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetLookAt.h" },
				{ "PinShownByDefault", "" },
				{ "ToolTip", "Location, in world space to look at" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAtLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "LookAtLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_AimOffsetLookAt, LookAtLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LookAtLocation_MetaData, ARRAY_COUNT(NewProp_LookAtLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLODEnabled_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetLookAt.h" },
			};
#endif
			auto NewProp_bIsLODEnabled_SetBit = [](void* Obj){ ((FAnimNode_AimOffsetLookAt*)Obj)->bIsLODEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLODEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsLODEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_AimOffsetLookAt), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsLODEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsLODEnabled_MetaData, ARRAY_COUNT(NewProp_bIsLODEnabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[] = {
				{ "Category", "Performance" },
				{ "DisplayName", "LOD Threshold" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetLookAt.h" },
				{ "ToolTip", "* Max LOD that this node is allowed to run\n* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n* when the component LOD becomes 3, it will stop update/evaluate\n* currently transition would be issue and that has to be re-visited" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODThreshold = { UE4CodeGen_Private::EPropertyClass::Int, "LODThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_AimOffsetLookAt, LODThreshold), METADATA_PARAMS(NewProp_LODThreshold_MetaData, ARRAY_COUNT(NewProp_LODThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePose_MetaData[] = {
				{ "Category", "Links" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetLookAt.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BasePose = { UE4CodeGen_Private::EPropertyClass::Struct, "BasePose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_AimOffsetLookAt, BasePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(NewProp_BasePose_MetaData, ARRAY_COUNT(NewProp_BasePose_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PivotSocketLocalTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PivotSocketBoneReference,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SocketLocalTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SocketBoneReference,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Alpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SocketAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PivotSocketName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceSocketName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LookAtLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsLODEnabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BasePose,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_AimOffsetLookAt",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_AimOffsetLookAt),
				alignof(FAnimNode_AimOffsetLookAt),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_CRC() { return 199532796U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
