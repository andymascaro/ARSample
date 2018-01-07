// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimNodes/AnimNode_RefPose.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RefPose() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERefPoseType();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RefPose();
// End Cross Module References
	static UEnum* ERefPoseType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ERefPoseType, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ERefPoseType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERefPoseType(ERefPoseType_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("ERefPoseType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_ERefPoseType_CRC() { return 1026552614U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERefPoseType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERefPoseType"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_ERefPoseType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EIT_LocalSpace", (int64)EIT_LocalSpace },
				{ "EIT_Additive", (int64)EIT_Additive },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RefPose.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ERefPoseType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ERefPoseType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAnimNode_MeshSpaceRefPose::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_MeshSpaceRefPose"), sizeof(FAnimNode_MeshSpaceRefPose), Get_Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_MeshSpaceRefPose(FAnimNode_MeshSpaceRefPose::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_MeshSpaceRefPose"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_MeshSpaceRefPose
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_MeshSpaceRefPose()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_MeshSpaceRefPose")),new UScriptStruct::TCppStructOps<FAnimNode_MeshSpaceRefPose>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_MeshSpaceRefPose;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_MeshSpaceRefPose"), sizeof(FAnimNode_MeshSpaceRefPose), Get_Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RefPose.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_MeshSpaceRefPose>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_Base,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_MeshSpaceRefPose",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_MeshSpaceRefPose),
				alignof(FAnimNode_MeshSpaceRefPose),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose_CRC() { return 607865764U; }
class UScriptStruct* FAnimNode_RefPose::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RefPose_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RefPose, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_RefPose"), sizeof(FAnimNode_RefPose), Get_Z_Construct_UScriptStruct_FAnimNode_RefPose_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_RefPose(FAnimNode_RefPose::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_RefPose"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RefPose
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RefPose()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_RefPose")),new UScriptStruct::TCppStructOps<FAnimNode_RefPose>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RefPose;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RefPose()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RefPose_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_RefPose"), sizeof(FAnimNode_RefPose), Get_Z_Construct_UScriptStruct_FAnimNode_RefPose_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RefPose.h" },
				{ "ToolTip", "RefPose pose nodes - ref pose or additive RefPose pose" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RefPose>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefPoseType_MetaData[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RefPose.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RefPoseType = { UE4CodeGen_Private::EPropertyClass::Byte, "RefPoseType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_RefPose, RefPoseType), Z_Construct_UEnum_AnimGraphRuntime_ERefPoseType, METADATA_PARAMS(NewProp_RefPoseType_MetaData, ARRAY_COUNT(NewProp_RefPoseType_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RefPoseType,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_Base,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_RefPose",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_RefPose),
				alignof(FAnimNode_RefPose),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RefPose_CRC() { return 3336244759U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
