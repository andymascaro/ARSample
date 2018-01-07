// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimNodes/AnimNode_RotateRootBone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RotateRootBone() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RotateRootBone();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_RotateRootBone::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RotateRootBone, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_RotateRootBone"), sizeof(FAnimNode_RotateRootBone), Get_Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_RotateRootBone(FAnimNode_RotateRootBone::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_RotateRootBone"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RotateRootBone
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RotateRootBone()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_RotateRootBone")),new UScriptStruct::TCppStructOps<FAnimNode_RotateRootBone>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RotateRootBone;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RotateRootBone()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_RotateRootBone"), sizeof(FAnimNode_RotateRootBone), Get_Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotateRootBone.h" },
				{ "ToolTip", "@TODO: Comment" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RotateRootBone>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshToComponent_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotateRootBone.h" },
				{ "PinShownByDefault", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshToComponent = { UE4CodeGen_Private::EPropertyClass::Struct, "MeshToComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_RotateRootBone, MeshToComponent), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_MeshToComponent_MetaData, ARRAY_COUNT(NewProp_MeshToComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Yaw_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotateRootBone.h" },
				{ "PinShownByDefault", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Yaw = { UE4CodeGen_Private::EPropertyClass::Float, "Yaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_RotateRootBone, Yaw), METADATA_PARAMS(NewProp_Yaw_MetaData, ARRAY_COUNT(NewProp_Yaw_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotateRootBone.h" },
				{ "PinShownByDefault", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pitch = { UE4CodeGen_Private::EPropertyClass::Float, "Pitch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_RotateRootBone, Pitch), METADATA_PARAMS(NewProp_Pitch_MetaData, ARRAY_COUNT(NewProp_Pitch_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePose_MetaData[] = {
				{ "Category", "Links" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotateRootBone.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BasePose = { UE4CodeGen_Private::EPropertyClass::Struct, "BasePose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_RotateRootBone, BasePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(NewProp_BasePose_MetaData, ARRAY_COUNT(NewProp_BasePose_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshToComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Yaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pitch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BasePose,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_Base,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_RotateRootBone",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_RotateRootBone),
				alignof(FAnimNode_RotateRootBone),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RotateRootBone_CRC() { return 2895338704U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
