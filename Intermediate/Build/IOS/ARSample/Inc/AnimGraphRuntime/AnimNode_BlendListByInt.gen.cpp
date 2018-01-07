// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimNodes/AnimNode_BlendListByInt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendListByInt() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListByInt();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListBase();
// End Cross Module References
class UScriptStruct* FAnimNode_BlendListByInt::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListByInt, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BlendListByInt"), sizeof(FAnimNode_BlendListByInt), Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_BlendListByInt(FAnimNode_BlendListByInt::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_BlendListByInt"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendListByInt
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendListByInt()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_BlendListByInt")),new UScriptStruct::TCppStructOps<FAnimNode_BlendListByInt>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendListByInt;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListByInt()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_BlendListByInt"), sizeof(FAnimNode_BlendListByInt), Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListByInt.h" },
				{ "ToolTip", "Blend list node; has many children" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendListByInt>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveChildIndex_MetaData[] = {
				{ "AlwaysAsPin", "" },
				{ "Category", "Runtime" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListByInt.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveChildIndex = { UE4CodeGen_Private::EPropertyClass::Int, "ActiveChildIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendListByInt, ActiveChildIndex), METADATA_PARAMS(NewProp_ActiveChildIndex_MetaData, ARRAY_COUNT(NewProp_ActiveChildIndex_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActiveChildIndex,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_BlendListBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_BlendListByInt",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_BlendListByInt),
				alignof(FAnimNode_BlendListByInt),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_CRC() { return 2700840521U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
