// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/NodeChain.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodeChain() {}
// Cross Module References
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNodeChain();
	UPackage* Z_Construct_UPackage__Script_AnimationCore();
// End Cross Module References
class UScriptStruct* FNodeChain::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FNodeChain_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeChain, Z_Construct_UPackage__Script_AnimationCore(), TEXT("NodeChain"), sizeof(FNodeChain), Get_Z_Construct_UScriptStruct_FNodeChain_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNodeChain(FNodeChain::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("NodeChain"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFNodeChain
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFNodeChain()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NodeChain")),new UScriptStruct::TCppStructOps<FNodeChain>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFNodeChain;
	UScriptStruct* Z_Construct_UScriptStruct_FNodeChain()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNodeChain_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NodeChain"), sizeof(FNodeChain), Get_Z_Construct_UScriptStruct_FNodeChain_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/NodeChain.h" },
				{ "ToolTip", "A chain of nodes in a hierarchy" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeChain>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[] = {
				{ "ModuleRelativePath", "Public/NodeChain.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Nodes = { UE4CodeGen_Private::EPropertyClass::Array, "Nodes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNodeChain, Nodes), METADATA_PARAMS(NewProp_Nodes_MetaData, ARRAY_COUNT(NewProp_Nodes_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Nodes_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "Nodes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Nodes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Nodes_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NodeChain",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FNodeChain),
				alignof(FNodeChain),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNodeChain_CRC() { return 2898212759U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
