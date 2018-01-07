// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Animation/PoseSnapshot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSnapshot() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSnapshot();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
class UScriptStruct* FPoseSnapshot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPoseSnapshot_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSnapshot, Z_Construct_UPackage__Script_Engine(), TEXT("PoseSnapshot"), sizeof(FPoseSnapshot), Get_Z_Construct_UScriptStruct_FPoseSnapshot_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPoseSnapshot(FPoseSnapshot::StaticStruct, TEXT("/Script/Engine"), TEXT("PoseSnapshot"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPoseSnapshot
{
	FScriptStruct_Engine_StaticRegisterNativesFPoseSnapshot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PoseSnapshot")),new UScriptStruct::TCppStructOps<FPoseSnapshot>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPoseSnapshot;
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSnapshot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPoseSnapshot_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PoseSnapshot"), sizeof(FPoseSnapshot), Get_Z_Construct_UScriptStruct_FPoseSnapshot_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Animation/PoseSnapshot.h" },
				{ "ToolTip", "A pose for a skeletal mesh" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSnapshot>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
				{ "Category", "Snapshot" },
				{ "ModuleRelativePath", "Public/Animation/PoseSnapshot.h" },
				{ "ToolTip", "Whether the pose is valid" },
			};
#endif
			auto NewProp_bIsValid_SetBit = [](void* Obj){ ((FPoseSnapshot*)Obj)->bIsValid = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsValid = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsValid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FPoseSnapshot), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsValid_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsValid_MetaData, ARRAY_COUNT(NewProp_bIsValid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapshotName_MetaData[] = {
				{ "Category", "Snapshot" },
				{ "ModuleRelativePath", "Public/Animation/PoseSnapshot.h" },
				{ "ToolTip", "The name for this snapshot" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SnapshotName = { UE4CodeGen_Private::EPropertyClass::Name, "SnapshotName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPoseSnapshot, SnapshotName), METADATA_PARAMS(NewProp_SnapshotName_MetaData, ARRAY_COUNT(NewProp_SnapshotName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshName_MetaData[] = {
				{ "Category", "Snapshot" },
				{ "ModuleRelativePath", "Public/Animation/PoseSnapshot.h" },
				{ "ToolTip", "The name of the skeletal mesh that was used to take this snapshot" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SkeletalMeshName = { UE4CodeGen_Private::EPropertyClass::Name, "SkeletalMeshName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPoseSnapshot, SkeletalMeshName), METADATA_PARAMS(NewProp_SkeletalMeshName_MetaData, ARRAY_COUNT(NewProp_SkeletalMeshName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[] = {
				{ "Category", "Snapshot" },
				{ "ModuleRelativePath", "Public/Animation/PoseSnapshot.h" },
				{ "ToolTip", "Array of bone names (corresponding to LocalTransforms)" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneNames = { UE4CodeGen_Private::EPropertyClass::Array, "BoneNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPoseSnapshot, BoneNames), METADATA_PARAMS(NewProp_BoneNames_MetaData, ARRAY_COUNT(NewProp_BoneNames_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "BoneNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalTransforms_MetaData[] = {
				{ "Category", "Snapshot" },
				{ "ModuleRelativePath", "Public/Animation/PoseSnapshot.h" },
				{ "ToolTip", "Array of transforms per-bone" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalTransforms = { UE4CodeGen_Private::EPropertyClass::Array, "LocalTransforms", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPoseSnapshot, LocalTransforms), METADATA_PARAMS(NewProp_LocalTransforms_MetaData, ARRAY_COUNT(NewProp_LocalTransforms_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalTransforms_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LocalTransforms", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsValid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SnapshotName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkeletalMeshName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneNames_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalTransforms,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalTransforms_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PoseSnapshot",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FPoseSnapshot),
				alignof(FPoseSnapshot),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPoseSnapshot_CRC() { return 3261396881U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
