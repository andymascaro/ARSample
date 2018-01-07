// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimNode_TransitionResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_TransitionResult() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TransitionResult();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
// End Cross Module References
class UScriptStruct* FAnimNode_TransitionResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_TransitionResult_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_TransitionResult, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_TransitionResult"), sizeof(FAnimNode_TransitionResult), Get_Z_Construct_UScriptStruct_FAnimNode_TransitionResult_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_TransitionResult(FAnimNode_TransitionResult::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNode_TransitionResult"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNode_TransitionResult
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNode_TransitionResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_TransitionResult")),new UScriptStruct::TCppStructOps<FAnimNode_TransitionResult>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNode_TransitionResult;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TransitionResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_TransitionResult_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_TransitionResult"), sizeof(FAnimNode_TransitionResult), Get_Z_Construct_UScriptStruct_FAnimNode_TransitionResult_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_TransitionResult.h" },
				{ "ToolTip", "Root node of a state machine transition graph" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_TransitionResult>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanEnterTransition_MetaData[] = {
				{ "AlwaysAsPin", "" },
				{ "Category", "Result" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_TransitionResult.h" },
			};
#endif
			auto NewProp_bCanEnterTransition_SetBit = [](void* Obj){ ((FAnimNode_TransitionResult*)Obj)->bCanEnterTransition = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanEnterTransition = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanEnterTransition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_TransitionResult), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanEnterTransition_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCanEnterTransition_MetaData, ARRAY_COUNT(NewProp_bCanEnterTransition_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanEnterTransition,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FAnimNode_Base,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_TransitionResult",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_TransitionResult),
				alignof(FAnimNode_TransitionResult),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_TransitionResult_CRC() { return 2704735019U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
