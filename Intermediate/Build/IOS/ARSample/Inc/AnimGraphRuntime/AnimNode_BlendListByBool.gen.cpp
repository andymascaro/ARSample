// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimNodes/AnimNode_BlendListByBool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendListByBool() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListByBool();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListBase();
// End Cross Module References
class UScriptStruct* FAnimNode_BlendListByBool::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListByBool, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BlendListByBool"), sizeof(FAnimNode_BlendListByBool), Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_BlendListByBool(FAnimNode_BlendListByBool::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_BlendListByBool"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendListByBool
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendListByBool()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_BlendListByBool")),new UScriptStruct::TCppStructOps<FAnimNode_BlendListByBool>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendListByBool;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListByBool()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_BlendListByBool"), sizeof(FAnimNode_BlendListByBool), Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListByBool.h" },
				{ "ToolTip", "This node is effectively a 'branch', picking one of two input poses based on an input Boolean value" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendListByBool>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActiveValue_MetaData[] = {
				{ "AlwaysAsPin", "" },
				{ "Category", "Runtime" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListByBool.h" },
				{ "ToolTip", "Which input should be connected to the output?" },
			};
#endif
			auto NewProp_bActiveValue_SetBit = [](void* Obj){ ((FAnimNode_BlendListByBool*)Obj)->bActiveValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActiveValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bActiveValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_BlendListByBool), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bActiveValue_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bActiveValue_MetaData, ARRAY_COUNT(NewProp_bActiveValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bActiveValue,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_BlendListBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_BlendListByBool",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_BlendListByBool),
				alignof(FAnimNode_BlendListByBool),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_CRC() { return 530332753U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
