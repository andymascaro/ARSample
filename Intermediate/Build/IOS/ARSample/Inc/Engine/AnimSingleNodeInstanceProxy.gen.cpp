// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Animation/AnimSingleNodeInstanceProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSingleNodeInstanceProxy() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SingleNode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimSingleNodeInstanceProxy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy, Z_Construct_UPackage__Script_Engine(), TEXT("AnimSingleNodeInstanceProxy"), sizeof(FAnimSingleNodeInstanceProxy), Get_Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimSingleNodeInstanceProxy(FAnimSingleNodeInstanceProxy::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimSingleNodeInstanceProxy"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimSingleNodeInstanceProxy
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimSingleNodeInstanceProxy()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimSingleNodeInstanceProxy")),new UScriptStruct::TCppStructOps<FAnimSingleNodeInstanceProxy>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimSingleNodeInstanceProxy;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimSingleNodeInstanceProxy"), sizeof(FAnimSingleNodeInstanceProxy), Get_Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimSingleNodeInstanceProxy.h" },
				{ "ToolTip", "Proxy override for this UAnimInstance-derived class" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSingleNodeInstanceProxy>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FAnimInstanceProxy,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimSingleNodeInstanceProxy",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimSingleNodeInstanceProxy),
				alignof(FAnimSingleNodeInstanceProxy),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_CRC() { return 2909990409U; }
class UScriptStruct* FAnimNode_SingleNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SingleNode_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SingleNode, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_SingleNode"), sizeof(FAnimNode_SingleNode), Get_Z_Construct_UScriptStruct_FAnimNode_SingleNode_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_SingleNode(FAnimNode_SingleNode::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNode_SingleNode"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNode_SingleNode
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNode_SingleNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_SingleNode")),new UScriptStruct::TCppStructOps<FAnimNode_SingleNode>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNode_SingleNode;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SingleNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SingleNode_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_SingleNode"), sizeof(FAnimNode_SingleNode), Get_Z_Construct_UScriptStruct_FAnimNode_SingleNode_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Animation/AnimSingleNodeInstanceProxy.h" },
				{ "ToolTip", "Local anim node for extensible processing.\nCant be used outside of this context as it has no graph node counterpart" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SingleNode>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[] = {
				{ "Category", "Links" },
				{ "ModuleRelativePath", "Public/Animation/AnimSingleNodeInstanceProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourcePose = { UE4CodeGen_Private::EPropertyClass::Struct, "SourcePose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_SingleNode, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(NewProp_SourcePose_MetaData, ARRAY_COUNT(NewProp_SourcePose_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourcePose,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FAnimNode_Base,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_SingleNode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_SingleNode),
				alignof(FAnimNode_SingleNode),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SingleNode_CRC() { return 69920054U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
