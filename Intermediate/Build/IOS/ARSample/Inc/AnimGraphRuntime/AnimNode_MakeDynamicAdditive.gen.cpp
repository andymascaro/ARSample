// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimNodes/AnimNode_MakeDynamicAdditive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_MakeDynamicAdditive() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_MakeDynamicAdditive::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_MakeDynamicAdditive"), sizeof(FAnimNode_MakeDynamicAdditive), Get_Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_MakeDynamicAdditive(FAnimNode_MakeDynamicAdditive::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_MakeDynamicAdditive"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_MakeDynamicAdditive
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_MakeDynamicAdditive()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_MakeDynamicAdditive")),new UScriptStruct::TCppStructOps<FAnimNode_MakeDynamicAdditive>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_MakeDynamicAdditive;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_MakeDynamicAdditive"), sizeof(FAnimNode_MakeDynamicAdditive), Get_Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MakeDynamicAdditive.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_MakeDynamicAdditive>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMeshSpaceAdditive_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MakeDynamicAdditive.h" },
				{ "ToolTip", "Do additive delta calculation in mesh space" },
			};
#endif
			auto NewProp_bMeshSpaceAdditive_SetBit = [](void* Obj){ ((FAnimNode_MakeDynamicAdditive*)Obj)->bMeshSpaceAdditive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMeshSpaceAdditive = { UE4CodeGen_Private::EPropertyClass::Bool, "bMeshSpaceAdditive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_MakeDynamicAdditive), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMeshSpaceAdditive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bMeshSpaceAdditive_MetaData, ARRAY_COUNT(NewProp_bMeshSpaceAdditive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Additive_MetaData[] = {
				{ "Category", "Links" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MakeDynamicAdditive.h" },
				{ "ToolTip", "Pose to make additive" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Additive = { UE4CodeGen_Private::EPropertyClass::Struct, "Additive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_MakeDynamicAdditive, Additive), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(NewProp_Additive_MetaData, ARRAY_COUNT(NewProp_Additive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[] = {
				{ "Category", "Links" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MakeDynamicAdditive.h" },
				{ "ToolTip", "Reference pose for additive delta calculation" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Base = { UE4CodeGen_Private::EPropertyClass::Struct, "Base", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_MakeDynamicAdditive, Base), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(NewProp_Base_MetaData, ARRAY_COUNT(NewProp_Base_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMeshSpaceAdditive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Additive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Base,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_Base,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_MakeDynamicAdditive",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_MakeDynamicAdditive),
				alignof(FAnimNode_MakeDynamicAdditive),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_CRC() { return 4111720016U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
