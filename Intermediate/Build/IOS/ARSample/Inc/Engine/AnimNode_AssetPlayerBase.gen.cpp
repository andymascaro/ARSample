// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimNode_AssetPlayerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_AssetPlayerBase() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimGroupRole();
// End Cross Module References
class UScriptStruct* FAnimNode_AssetPlayerBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_AssetPlayerBase"), sizeof(FAnimNode_AssetPlayerBase), Get_Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_AssetPlayerBase(FAnimNode_AssetPlayerBase::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNode_AssetPlayerBase"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNode_AssetPlayerBase
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNode_AssetPlayerBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_AssetPlayerBase")),new UScriptStruct::TCppStructOps<FAnimNode_AssetPlayerBase>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNode_AssetPlayerBase;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_AssetPlayerBase"), sizeof(FAnimNode_AssetPlayerBase), Get_Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_AssetPlayerBase.h" },
				{ "ToolTip", "Base class for any asset playing anim node" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_AssetPlayerBase>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalTimeAccumulator_MetaData[] = {
				{ "Category", "DoNotEdit" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_AssetPlayerBase.h" },
				{ "ToolTip", "Accumulated time used to reference the asset in this node" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InternalTimeAccumulator = { UE4CodeGen_Private::EPropertyClass::Float, "InternalTimeAccumulator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002004, 1, nullptr, STRUCT_OFFSET(FAnimNode_AssetPlayerBase, InternalTimeAccumulator), METADATA_PARAMS(NewProp_InternalTimeAccumulator_MetaData, ARRAY_COUNT(NewProp_InternalTimeAccumulator_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendWeight_MetaData[] = {
				{ "Category", "DoNotEdit" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_AssetPlayerBase.h" },
				{ "ToolTip", "Last encountered blendweight for this node" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendWeight = { UE4CodeGen_Private::EPropertyClass::Float, "BlendWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002004, 1, nullptr, STRUCT_OFFSET(FAnimNode_AssetPlayerBase, BlendWeight), METADATA_PARAMS(NewProp_BlendWeight_MetaData, ARRAY_COUNT(NewProp_BlendWeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupRole_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_AssetPlayerBase.h" },
				{ "ToolTip", "The role this player can assume within the group (ignored if GroupIndex is INDEX_NONE)" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_GroupRole = { UE4CodeGen_Private::EPropertyClass::Byte, "GroupRole", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_AssetPlayerBase, GroupRole), Z_Construct_UEnum_Engine_EAnimGroupRole, METADATA_PARAMS(NewProp_GroupRole_MetaData, ARRAY_COUNT(NewProp_GroupRole_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_AssetPlayerBase.h" },
				{ "ToolTip", "The group index, assigned at compile time based on the editoronly GroupName (or INDEX_NONE if it is not part of any group)" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_GroupIndex = { UE4CodeGen_Private::EPropertyClass::Int, "GroupIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_AssetPlayerBase, GroupIndex), METADATA_PARAMS(NewProp_GroupIndex_MetaData, ARRAY_COUNT(NewProp_GroupIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreForRelevancyTest_MetaData[] = {
				{ "Category", "Relevancy" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_AssetPlayerBase.h" },
				{ "PinHiddenByDefault", "" },
				{ "ToolTip", "If true, \"Relevant anim\" nodes that look for the highest weighted animation in a state will ignore\nthis node" },
			};
#endif
			auto NewProp_bIgnoreForRelevancyTest_SetBit = [](void* Obj){ ((FAnimNode_AssetPlayerBase*)Obj)->bIgnoreForRelevancyTest = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreForRelevancyTest = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreForRelevancyTest", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_AssetPlayerBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIgnoreForRelevancyTest_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIgnoreForRelevancyTest_MetaData, ARRAY_COUNT(NewProp_bIgnoreForRelevancyTest_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InternalTimeAccumulator,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendWeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupRole,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIgnoreForRelevancyTest,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FAnimNode_Base,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_AssetPlayerBase",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_AssetPlayerBase),
				alignof(FAnimNode_AssetPlayerBase),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_CRC() { return 3788477525U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
