// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BoneControllers/AnimNode_LegIK.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LegIK() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LegIK();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimLegIKData();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimLegIKDefinition();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FIKChain();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FIKChainLink();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
class UScriptStruct* FAnimNode_LegIK::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LegIK_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LegIK, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_LegIK"), sizeof(FAnimNode_LegIK), Get_Z_Construct_UScriptStruct_FAnimNode_LegIK_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_LegIK(FAnimNode_LegIK::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_LegIK"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_LegIK
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_LegIK()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_LegIK")),new UScriptStruct::TCppStructOps<FAnimNode_LegIK>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_LegIK;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LegIK()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LegIK_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_LegIK"), sizeof(FAnimNode_LegIK), Get_Z_Construct_UScriptStruct_FAnimNode_LegIK_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LegIK>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LegsData_MetaData[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LegsData = { UE4CodeGen_Private::EPropertyClass::Array, "LegsData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FAnimNode_LegIK, LegsData), METADATA_PARAMS(NewProp_LegsData_MetaData, ARRAY_COUNT(NewProp_LegsData_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LegsData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LegsData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAnimLegIKData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LegsDefinition_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LegsDefinition = { UE4CodeGen_Private::EPropertyClass::Array, "LegsDefinition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_LegIK, LegsDefinition), METADATA_PARAMS(NewProp_LegsDefinition_MetaData, ARRAY_COUNT(NewProp_LegsDefinition_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LegsDefinition_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LegsDefinition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAnimLegIKDefinition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
				{ "ToolTip", "Max Number of Iterations." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxIterations = { UE4CodeGen_Private::EPropertyClass::Int, "MaxIterations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_LegIK, MaxIterations), METADATA_PARAMS(NewProp_MaxIterations_MetaData, ARRAY_COUNT(NewProp_MaxIterations_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReachPrecision_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
				{ "ToolTip", "Tolerance for reaching IK Target, in unreal units." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReachPrecision = { UE4CodeGen_Private::EPropertyClass::Float, "ReachPrecision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_LegIK, ReachPrecision), METADATA_PARAMS(NewProp_ReachPrecision_MetaData, ARRAY_COUNT(NewProp_ReachPrecision_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LegsData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LegsData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LegsDefinition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LegsDefinition_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxIterations,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReachPrecision,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_LegIK",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_LegIK),
				alignof(FAnimNode_LegIK),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LegIK_CRC() { return 3688494044U; }
class UScriptStruct* FIKChain::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FIKChain_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIKChain, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("IKChain"), sizeof(FIKChain), Get_Z_Construct_UScriptStruct_FIKChain_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIKChain(FIKChain::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("IKChain"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFIKChain
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFIKChain()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("IKChain")),new UScriptStruct::TCppStructOps<FIKChain>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFIKChain;
	UScriptStruct* Z_Construct_UScriptStruct_FIKChain()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIKChain_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IKChain"), sizeof(FIKChain), Get_Z_Construct_UScriptStruct_FIKChain_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIKChain>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"IKChain",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FIKChain),
				alignof(FIKChain),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIKChain_CRC() { return 3768578608U; }
class UScriptStruct* FIKChainLink::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FIKChainLink_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIKChainLink, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("IKChainLink"), sizeof(FIKChainLink), Get_Z_Construct_UScriptStruct_FIKChainLink_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIKChainLink(FIKChainLink::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("IKChainLink"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFIKChainLink
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFIKChainLink()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("IKChainLink")),new UScriptStruct::TCppStructOps<FIKChainLink>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFIKChainLink;
	UScriptStruct* Z_Construct_UScriptStruct_FIKChainLink()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIKChainLink_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IKChainLink"), sizeof(FIKChainLink), Get_Z_Construct_UScriptStruct_FIKChainLink_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIKChainLink>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"IKChainLink",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FIKChainLink),
				alignof(FIKChainLink),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIKChainLink_CRC() { return 3851372597U; }
class UScriptStruct* FAnimLegIKData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimLegIKData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimLegIKData, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimLegIKData"), sizeof(FAnimLegIKData), Get_Z_Construct_UScriptStruct_FAnimLegIKData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimLegIKData(FAnimLegIKData::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimLegIKData"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimLegIKData
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimLegIKData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimLegIKData")),new UScriptStruct::TCppStructOps<FAnimLegIKData>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimLegIKData;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimLegIKData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimLegIKData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimLegIKData"), sizeof(FAnimLegIKData), Get_Z_Construct_UScriptStruct_FAnimLegIKData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
				{ "ToolTip", "Runtime foot data after validation, we guarantee these bones to exist" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimLegIKData>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimLegIKData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAnimLegIKData),
				alignof(FAnimLegIKData),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimLegIKData_CRC() { return 3397837394U; }
class UScriptStruct* FAnimLegIKDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimLegIKDefinition_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimLegIKDefinition, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimLegIKDefinition"), sizeof(FAnimLegIKDefinition), Get_Z_Construct_UScriptStruct_FAnimLegIKDefinition_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimLegIKDefinition(FAnimLegIKDefinition::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimLegIKDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimLegIKDefinition
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimLegIKDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimLegIKDefinition")),new UScriptStruct::TCppStructOps<FAnimLegIKDefinition>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimLegIKDefinition;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimLegIKDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimLegIKDefinition_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimLegIKDefinition"), sizeof(FAnimLegIKDefinition), Get_Z_Construct_UScriptStruct_FAnimLegIKDefinition_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
				{ "ToolTip", "Per foot definitions" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimLegIKDefinition>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableKneeTwistCorrection_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
				{ "ToolTip", "Enable Knee Twist correction, by comparing Foot FK with Foot IK orientation." },
			};
#endif
			auto NewProp_bEnableKneeTwistCorrection_SetBit = [](void* Obj){ ((FAnimLegIKDefinition*)Obj)->bEnableKneeTwistCorrection = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableKneeTwistCorrection = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableKneeTwistCorrection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimLegIKDefinition), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableKneeTwistCorrection_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableKneeTwistCorrection_MetaData, ARRAY_COUNT(NewProp_bEnableKneeTwistCorrection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRotationAngle_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
				{ "ToolTip", "Only used if bEnableRotationLimit is enabled. Prevents the leg from folding onto itself,\nand forces at least this angle between Parent and Child bone." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinRotationAngle = { UE4CodeGen_Private::EPropertyClass::Float, "MinRotationAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimLegIKDefinition, MinRotationAngle), METADATA_PARAMS(NewProp_MinRotationAngle_MetaData, ARRAY_COUNT(NewProp_MinRotationAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableRotationLimit_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
				{ "ToolTip", "If enabled, we prevent the leg from bending backwards and enforce a min compression angle" },
			};
#endif
			auto NewProp_bEnableRotationLimit_SetBit = [](void* Obj){ ((FAnimLegIKDefinition*)Obj)->bEnableRotationLimit = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableRotationLimit = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableRotationLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimLegIKDefinition), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableRotationLimit_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableRotationLimit_MetaData, ARRAY_COUNT(NewProp_bEnableRotationLimit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootBoneForwardAxis_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
				{ "ToolTip", "Forward Axis for Foot bone." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_FootBoneForwardAxis = { UE4CodeGen_Private::EPropertyClass::Byte, "FootBoneForwardAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimLegIKDefinition, FootBoneForwardAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(NewProp_FootBoneForwardAxis_MetaData, ARRAY_COUNT(NewProp_FootBoneForwardAxis_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumBonesInLimb_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumBonesInLimb = { UE4CodeGen_Private::EPropertyClass::Int, "NumBonesInLimb", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimLegIKDefinition, NumBonesInLimb), METADATA_PARAMS(NewProp_NumBonesInLimb_MetaData, ARRAY_COUNT(NewProp_NumBonesInLimb_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FKFootBone_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FKFootBone = { UE4CodeGen_Private::EPropertyClass::Struct, "FKFootBone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimLegIKDefinition, FKFootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_FKFootBone_MetaData, ARRAY_COUNT(NewProp_FKFootBone_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKFootBone_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_IKFootBone = { UE4CodeGen_Private::EPropertyClass::Struct, "IKFootBone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimLegIKDefinition, IKFootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_IKFootBone_MetaData, ARRAY_COUNT(NewProp_IKFootBone_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableKneeTwistCorrection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinRotationAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableRotationLimit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FootBoneForwardAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumBonesInLimb,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FKFootBone,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IKFootBone,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimLegIKDefinition",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAnimLegIKDefinition),
				alignof(FAnimLegIKDefinition),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimLegIKDefinition_CRC() { return 1140707462U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
