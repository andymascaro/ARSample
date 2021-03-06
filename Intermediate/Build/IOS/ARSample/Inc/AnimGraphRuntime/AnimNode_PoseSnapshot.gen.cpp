// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimNodes/AnimNode_PoseSnapshot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_PoseSnapshot() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESnapshotSourceMode();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSnapshot();
// End Cross Module References
	static UEnum* ESnapshotSourceMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ESnapshotSourceMode, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ESnapshotSourceMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESnapshotSourceMode(ESnapshotSourceMode_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("ESnapshotSourceMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_ESnapshotSourceMode_CRC() { return 1041877502U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESnapshotSourceMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESnapshotSourceMode"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_ESnapshotSourceMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESnapshotSourceMode::NamedSnapshot", (int64)ESnapshotSourceMode::NamedSnapshot },
				{ "ESnapshotSourceMode::SnapshotPin", (int64)ESnapshotSourceMode::SnapshotPin },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseSnapshot.h" },
				{ "NamedSnapshot.ToolTip", "Refer to an internal snapshot by name (previously stored with SavePoseSnapshot).\nThis can be more efficient than access via pin." },
				{ "SnapshotPin.ToolTip", "Use a snapshot variable (previously populated using SnapshotPose).\nThis is more flexible and allows poses to be modified and managed externally to the animation blueprint." },
				{ "ToolTip", "How to access the snapshot" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESnapshotSourceMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ESnapshotSourceMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAnimNode_PoseSnapshot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_PoseSnapshot"), sizeof(FAnimNode_PoseSnapshot), Get_Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_PoseSnapshot(FAnimNode_PoseSnapshot::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_PoseSnapshot"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_PoseSnapshot
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_PoseSnapshot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_PoseSnapshot")),new UScriptStruct::TCppStructOps<FAnimNode_PoseSnapshot>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_PoseSnapshot;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_PoseSnapshot"), sizeof(FAnimNode_PoseSnapshot), Get_Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseSnapshot.h" },
				{ "ToolTip", "Provide a snapshot pose, either from the internal named pose cache or via a supplied snapshot" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_PoseSnapshot>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Snapshot_MetaData[] = {
				{ "Category", "Snapshot" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseSnapshot.h" },
				{ "PinHiddenByDefault", "" },
				{ "ToolTip", "Snapshot to use. This should be populated at first by calling SnapshotPose" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Snapshot = { UE4CodeGen_Private::EPropertyClass::Struct, "Snapshot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_PoseSnapshot, Snapshot), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(NewProp_Snapshot_MetaData, ARRAY_COUNT(NewProp_Snapshot_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapshotName_MetaData[] = {
				{ "Category", "Snapshot" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseSnapshot.h" },
				{ "PinShownByDefault", "" },
				{ "ToolTip", "The name of the snapshot previously stored with SavePoseSnapshot" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SnapshotName = { UE4CodeGen_Private::EPropertyClass::Name, "SnapshotName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_PoseSnapshot, SnapshotName), METADATA_PARAMS(NewProp_SnapshotName_MetaData, ARRAY_COUNT(NewProp_SnapshotName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
				{ "Category", "Snapshot" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseSnapshot.h" },
				{ "PinHiddenByDefault", "" },
				{ "ToolTip", "How to access the snapshot" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode = { UE4CodeGen_Private::EPropertyClass::Enum, "Mode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_PoseSnapshot, Mode), Z_Construct_UEnum_AnimGraphRuntime_ESnapshotSourceMode, METADATA_PARAMS(NewProp_Mode_MetaData, ARRAY_COUNT(NewProp_Mode_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Snapshot,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SnapshotName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mode_Underlying,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_Base,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_PoseSnapshot",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_PoseSnapshot),
				alignof(FAnimNode_PoseSnapshot),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot_CRC() { return 1808004083U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
