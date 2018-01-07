// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimNodes/AnimNode_BlendListByEnum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendListByEnum() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListBase();
// End Cross Module References
class UScriptStruct* FAnimNode_BlendListByEnum::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BlendListByEnum"), sizeof(FAnimNode_BlendListByEnum), Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_BlendListByEnum(FAnimNode_BlendListByEnum::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_BlendListByEnum"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendListByEnum
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendListByEnum()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_BlendListByEnum")),new UScriptStruct::TCppStructOps<FAnimNode_BlendListByEnum>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendListByEnum;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_BlendListByEnum"), sizeof(FAnimNode_BlendListByEnum), Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListByEnum.h" },
				{ "ToolTip", "Blend List by Enum, it changes based on enum input that enters" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendListByEnum>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveEnumValue_MetaData[] = {
				{ "AlwaysAsPin", "" },
				{ "Category", "Runtime" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListByEnum.h" },
				{ "ToolTip", "The currently selected pose (as an enum value)" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActiveEnumValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ActiveEnumValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendListByEnum, ActiveEnumValue), nullptr, METADATA_PARAMS(NewProp_ActiveEnumValue_MetaData, ARRAY_COUNT(NewProp_ActiveEnumValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnumToPoseIndex_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListByEnum.h" },
				{ "ToolTip", "Mapping from enum value to BlendPose index; there will be one entry per entry in the enum; entries out of range always map to pose index 0" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnumToPoseIndex = { UE4CodeGen_Private::EPropertyClass::Array, "EnumToPoseIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendListByEnum, EnumToPoseIndex), METADATA_PARAMS(NewProp_EnumToPoseIndex_MetaData, ARRAY_COUNT(NewProp_EnumToPoseIndex_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EnumToPoseIndex_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "EnumToPoseIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActiveEnumValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnumToPoseIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnumToPoseIndex_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_BlendListBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_BlendListByEnum",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_BlendListByEnum),
				alignof(FAnimNode_BlendListByEnum),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_CRC() { return 3538977791U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
