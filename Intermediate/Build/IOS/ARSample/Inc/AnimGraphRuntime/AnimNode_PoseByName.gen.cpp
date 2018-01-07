// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimNodes/AnimNode_PoseByName.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_PoseByName() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseByName();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseHandler();
// End Cross Module References
class UScriptStruct* FAnimNode_PoseByName::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_PoseByName_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_PoseByName, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_PoseByName"), sizeof(FAnimNode_PoseByName), Get_Z_Construct_UScriptStruct_FAnimNode_PoseByName_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_PoseByName(FAnimNode_PoseByName::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_PoseByName"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_PoseByName
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_PoseByName()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_PoseByName")),new UScriptStruct::TCppStructOps<FAnimNode_PoseByName>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_PoseByName;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseByName()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_PoseByName_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_PoseByName"), sizeof(FAnimNode_PoseByName), Get_Z_Construct_UScriptStruct_FAnimNode_PoseByName_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseByName.h" },
				{ "ToolTip", "Evaluates a point in an anim sequence, using a specific time input rather than advancing time internally.\nTypically the playback position of the animation for this node will represent something other than time, like jump height.\nThis node will not trigger any notifies present in the associated sequence." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_PoseByName>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseWeight_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseByName.h" },
				{ "PinHiddenByDefault", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PoseWeight = { UE4CodeGen_Private::EPropertyClass::Float, "PoseWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_PoseByName, PoseWeight), METADATA_PARAMS(NewProp_PoseWeight_MetaData, ARRAY_COUNT(NewProp_PoseWeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseName_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseByName.h" },
				{ "PinHiddenByDefault", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PoseName = { UE4CodeGen_Private::EPropertyClass::Name, "PoseName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_PoseByName, PoseName), METADATA_PARAMS(NewProp_PoseName_MetaData, ARRAY_COUNT(NewProp_PoseName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PoseWeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PoseName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_PoseHandler,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_PoseByName",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_PoseByName),
				alignof(FAnimNode_PoseByName),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_PoseByName_CRC() { return 3913042473U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
