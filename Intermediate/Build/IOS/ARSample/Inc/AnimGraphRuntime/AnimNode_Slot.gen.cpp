// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimNodes/AnimNode_Slot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Slot() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Slot();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_Slot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Slot_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Slot, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_Slot"), sizeof(FAnimNode_Slot), Get_Z_Construct_UScriptStruct_FAnimNode_Slot_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_Slot(FAnimNode_Slot::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_Slot"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_Slot
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_Slot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_Slot")),new UScriptStruct::TCppStructOps<FAnimNode_Slot>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_Slot;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Slot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Slot_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_Slot"), sizeof(FAnimNode_Slot), Get_Z_Construct_UScriptStruct_FAnimNode_Slot_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Slot.h" },
				{ "ToolTip", "An animation slot node normally acts as a passthru, but a montage or PlaySlotAnimation call from\ngame code can cause an animation to blend in and be played on the slot temporarily, overriding the\nSource input." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Slot>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysUpdateSourcePose_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Slot.h" },
				{ "ToolTip", "Whether we should continue to update the source pose regardless of whether it would be used." },
			};
#endif
			auto NewProp_bAlwaysUpdateSourcePose_SetBit = [](void* Obj){ ((FAnimNode_Slot*)Obj)->bAlwaysUpdateSourcePose = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysUpdateSourcePose = { UE4CodeGen_Private::EPropertyClass::Bool, "bAlwaysUpdateSourcePose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_Slot), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAlwaysUpdateSourcePose_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAlwaysUpdateSourcePose_MetaData, ARRAY_COUNT(NewProp_bAlwaysUpdateSourcePose_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
				{ "Category", "Settings" },
				{ "CustomizeProperty", "" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Slot.h" },
				{ "ToolTip", "The name of this slot, exposed to gameplay code, etc..." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName = { UE4CodeGen_Private::EPropertyClass::Name, "SlotName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_Slot, SlotName), METADATA_PARAMS(NewProp_SlotName_MetaData, ARRAY_COUNT(NewProp_SlotName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
				{ "Category", "Links" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Slot.h" },
				{ "ToolTip", "The source input, passed thru to the output unless a montage or slot animation is currently playing" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Source = { UE4CodeGen_Private::EPropertyClass::Struct, "Source", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_Slot, Source), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(NewProp_Source_MetaData, ARRAY_COUNT(NewProp_Source_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAlwaysUpdateSourcePose,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SlotName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Source,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_Base,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_Slot",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_Slot),
				alignof(FAnimNode_Slot),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Slot_CRC() { return 2049044739U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
