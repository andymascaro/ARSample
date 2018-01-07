// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BoneControllers/AnimNode_SkeletalControlBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SkeletalControlBase() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentSpacePoseLink();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBoneSocketTarget();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSocketReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
class UScriptStruct* FAnimNode_SkeletalControlBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_SkeletalControlBase"), sizeof(FAnimNode_SkeletalControlBase), Get_Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_SkeletalControlBase(FAnimNode_SkeletalControlBase::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_SkeletalControlBase"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_SkeletalControlBase
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_SkeletalControlBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_SkeletalControlBase")),new UScriptStruct::TCppStructOps<FAnimNode_SkeletalControlBase>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_SkeletalControlBase;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_SkeletalControlBase"), sizeof(FAnimNode_SkeletalControlBase), Get_Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SkeletalControlBase.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SkeletalControlBase>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActualAlpha_MetaData[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SkeletalControlBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActualAlpha = { UE4CodeGen_Private::EPropertyClass::Float, "ActualAlpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FAnimNode_SkeletalControlBase, ActualAlpha), METADATA_PARAMS(NewProp_ActualAlpha_MetaData, ARRAY_COUNT(NewProp_ActualAlpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[] = {
				{ "Category", "Performance" },
				{ "DisplayName", "LOD Threshold" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SkeletalControlBase.h" },
				{ "ToolTip", "* Max LOD that this node is allowed to run\n* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n* when the component LOD becomes 3, it will stop update/evaluate\n* currently transition would be issue and that has to be re-visited" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODThreshold = { UE4CodeGen_Private::EPropertyClass::Int, "LODThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_SkeletalControlBase, LODThreshold), METADATA_PARAMS(NewProp_LODThreshold_MetaData, ARRAY_COUNT(NewProp_LODThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SkeletalControlBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias = { UE4CodeGen_Private::EPropertyClass::Struct, "AlphaScaleBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_SkeletalControlBase, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(NewProp_AlphaScaleBias_MetaData, ARRAY_COUNT(NewProp_AlphaScaleBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SkeletalControlBase.h" },
				{ "PinShownByDefault", "" },
				{ "ToolTip", "Current strength of the skeletal control" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha = { UE4CodeGen_Private::EPropertyClass::Float, "Alpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_SkeletalControlBase, Alpha), METADATA_PARAMS(NewProp_Alpha_MetaData, ARRAY_COUNT(NewProp_Alpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentPose_MetaData[] = {
				{ "Category", "Links" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SkeletalControlBase.h" },
				{ "ToolTip", "Input link" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentPose = { UE4CodeGen_Private::EPropertyClass::Struct, "ComponentPose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_SkeletalControlBase, ComponentPose), Z_Construct_UScriptStruct_FComponentSpacePoseLink, METADATA_PARAMS(NewProp_ComponentPose_MetaData, ARRAY_COUNT(NewProp_ComponentPose_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActualAlpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AlphaScaleBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Alpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentPose,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_Base,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_SkeletalControlBase",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_SkeletalControlBase),
				alignof(FAnimNode_SkeletalControlBase),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_CRC() { return 1172613855U; }
class UScriptStruct* FBoneSocketTarget::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FBoneSocketTarget_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneSocketTarget, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("BoneSocketTarget"), sizeof(FBoneSocketTarget), Get_Z_Construct_UScriptStruct_FBoneSocketTarget_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoneSocketTarget(FBoneSocketTarget::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("BoneSocketTarget"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFBoneSocketTarget
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFBoneSocketTarget()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoneSocketTarget")),new UScriptStruct::TCppStructOps<FBoneSocketTarget>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFBoneSocketTarget;
	UScriptStruct* Z_Construct_UScriptStruct_FBoneSocketTarget()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoneSocketTarget_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoneSocketTarget"), sizeof(FBoneSocketTarget), Get_Z_Construct_UScriptStruct_FBoneSocketTarget_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SkeletalControlBase.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneSocketTarget>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketReference_MetaData[] = {
				{ "Category", "FBoneSocketTarget" },
				{ "EditCondition", "bUseSocket" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SkeletalControlBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SocketReference = { UE4CodeGen_Private::EPropertyClass::Struct, "SocketReference", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBoneSocketTarget, SocketReference), Z_Construct_UScriptStruct_FSocketReference, METADATA_PARAMS(NewProp_SocketReference_MetaData, ARRAY_COUNT(NewProp_SocketReference_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneReference_MetaData[] = {
				{ "Category", "FBoneSocketTarget" },
				{ "EditCondition", "!bUseSocket" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SkeletalControlBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneReference = { UE4CodeGen_Private::EPropertyClass::Struct, "BoneReference", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBoneSocketTarget, BoneReference), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_BoneReference_MetaData, ARRAY_COUNT(NewProp_BoneReference_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSocket_MetaData[] = {
				{ "Category", "FBoneSocketTarget" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SkeletalControlBase.h" },
			};
#endif
			auto NewProp_bUseSocket_SetBit = [](void* Obj){ ((FBoneSocketTarget*)Obj)->bUseSocket = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSocket = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseSocket", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBoneSocketTarget), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseSocket_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseSocket_MetaData, ARRAY_COUNT(NewProp_bUseSocket_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SocketReference,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneReference,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseSocket,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BoneSocketTarget",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBoneSocketTarget),
				alignof(FBoneSocketTarget),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoneSocketTarget_CRC() { return 2985745118U; }
class UScriptStruct* FSocketReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FSocketReference_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSocketReference, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("SocketReference"), sizeof(FSocketReference), Get_Z_Construct_UScriptStruct_FSocketReference_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSocketReference(FSocketReference::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("SocketReference"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFSocketReference
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFSocketReference()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SocketReference")),new UScriptStruct::TCppStructOps<FSocketReference>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFSocketReference;
	UScriptStruct* Z_Construct_UScriptStruct_FSocketReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSocketReference_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SocketReference"), sizeof(FSocketReference), Get_Z_Construct_UScriptStruct_FSocketReference_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SkeletalControlBase.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSocketReference>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
				{ "Category", "FSocketReference" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SkeletalControlBase.h" },
				{ "ToolTip", "Target socket to look at. Used if LookAtBone is empty. - You can use  LookAtLocation if you need offset from this point. That location will be used in their local space. *" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName = { UE4CodeGen_Private::EPropertyClass::Name, "SocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSocketReference, SocketName), METADATA_PARAMS(NewProp_SocketName_MetaData, ARRAY_COUNT(NewProp_SocketName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SocketName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SocketReference",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSocketReference),
				alignof(FSocketReference),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSocketReference_CRC() { return 3885113364U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
