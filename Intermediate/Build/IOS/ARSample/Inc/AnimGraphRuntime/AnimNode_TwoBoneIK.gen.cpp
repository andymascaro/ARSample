// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BoneControllers/AnimNode_TwoBoneIK.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_TwoBoneIK() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAxis();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBoneSocketTarget();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
class UScriptStruct* FAnimNode_TwoBoneIK::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_TwoBoneIK"), sizeof(FAnimNode_TwoBoneIK), Get_Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_TwoBoneIK(FAnimNode_TwoBoneIK::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_TwoBoneIK"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_TwoBoneIK
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_TwoBoneIK()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_TwoBoneIK")),new UScriptStruct::TCppStructOps<FAnimNode_TwoBoneIK>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_TwoBoneIK;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_TwoBoneIK"), sizeof(FAnimNode_TwoBoneIK), Get_Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
				{ "ToolTip", "Simple 2 Bone IK Controller." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_TwoBoneIK>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoTwist_MetaData[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
				{ "ToolTip", "Whether or not to apply twist on the chain of joints. This clears the twist value along the TwistAxis" },
			};
#endif
			auto NewProp_bNoTwist_SetBit = [](void* Obj){ ((FAnimNode_TwoBoneIK*)Obj)->bNoTwist_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoTwist = { UE4CodeGen_Private::EPropertyClass::Bool, "bNoTwist", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_TwoBoneIK), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNoTwist_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNoTwist_MetaData, ARRAY_COUNT(NewProp_bNoTwist_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistAxis_MetaData[] = {
				{ "Category", "IK" },
				{ "editcondition", "!bAllowTwist" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
				{ "ToolTip", "Specify which axis it's aligned. Used when removing twist" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TwistAxis = { UE4CodeGen_Private::EPropertyClass::Struct, "TwistAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_TwoBoneIK, TwistAxis), Z_Construct_UScriptStruct_FAxis, METADATA_PARAMS(NewProp_TwistAxis_MetaData, ARRAY_COUNT(NewProp_TwistAxis_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowTwist_MetaData[] = {
				{ "Category", "IK" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
				{ "ToolTip", "Whether or not to apply twist on the chain of joints. This clears the twist value along the TwistAxis" },
			};
#endif
			auto NewProp_bAllowTwist_SetBit = [](void* Obj){ ((FAnimNode_TwoBoneIK*)Obj)->bAllowTwist = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowTwist = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowTwist", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_TwoBoneIK), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowTwist_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowTwist_MetaData, ARRAY_COUNT(NewProp_bAllowTwist_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointTarget_MetaData[] = {
				{ "Category", "JointTarget" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_JointTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "JointTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_TwoBoneIK, JointTarget), Z_Construct_UScriptStruct_FBoneSocketTarget, METADATA_PARAMS(NewProp_JointTarget_MetaData, ARRAY_COUNT(NewProp_JointTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointTargetSpaceBoneName_MetaData[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
				{ "ToolTip", "If JointTargetSpaceBoneName is a bone, this is the bone to use. *" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_JointTargetSpaceBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "JointTargetSpaceBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_TwoBoneIK, JointTargetSpaceBoneName_DEPRECATED), METADATA_PARAMS(NewProp_JointTargetSpaceBoneName_MetaData, ARRAY_COUNT(NewProp_JointTargetSpaceBoneName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointTargetLocation_MetaData[] = {
				{ "Category", "JointTarget" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
				{ "PinShownByDefault", "" },
				{ "ToolTip", "Joint Target Location. Location used to orient Joint bone. *" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_JointTargetLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "JointTargetLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_TwoBoneIK, JointTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_JointTargetLocation_MetaData, ARRAY_COUNT(NewProp_JointTargetLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointTargetLocationSpace_MetaData[] = {
				{ "Category", "JointTarget" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
				{ "ToolTip", "Reference frame of Joint Target Location." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_JointTargetLocationSpace = { UE4CodeGen_Private::EPropertyClass::Byte, "JointTargetLocationSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_TwoBoneIK, JointTargetLocationSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(NewProp_JointTargetLocationSpace_MetaData, ARRAY_COUNT(NewProp_JointTargetLocationSpace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectorTarget_MetaData[] = {
				{ "Category", "Effector" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectorTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "EffectorTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_TwoBoneIK, EffectorTarget), Z_Construct_UScriptStruct_FBoneSocketTarget, METADATA_PARAMS(NewProp_EffectorTarget_MetaData, ARRAY_COUNT(NewProp_EffectorTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectorLocation_MetaData[] = {
				{ "Category", "Effector" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
				{ "PinShownByDefault", "" },
				{ "ToolTip", "Effector Location. Target Location to reach." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectorLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "EffectorLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_TwoBoneIK, EffectorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_EffectorLocation_MetaData, ARRAY_COUNT(NewProp_EffectorLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectorSpaceBoneName_MetaData[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
				{ "ToolTip", "If EffectorLocationSpace is a bone, this is the bone to use. *" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_EffectorSpaceBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "EffectorSpaceBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_TwoBoneIK, EffectorSpaceBoneName_DEPRECATED), METADATA_PARAMS(NewProp_EffectorSpaceBoneName_MetaData, ARRAY_COUNT(NewProp_EffectorSpaceBoneName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectorLocationSpace_MetaData[] = {
				{ "Category", "Effector" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
				{ "ToolTip", "Reference frame of Effector Location." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_EffectorLocationSpace = { UE4CodeGen_Private::EPropertyClass::Byte, "EffectorLocationSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_TwoBoneIK, EffectorLocationSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(NewProp_EffectorLocationSpace_MetaData, ARRAY_COUNT(NewProp_EffectorLocationSpace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMaintainEffectorRelRot_MetaData[] = {
				{ "Category", "IK" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
				{ "ToolTip", "Keep local rotation of end bone" },
			};
#endif
			auto NewProp_bMaintainEffectorRelRot_SetBit = [](void* Obj){ ((FAnimNode_TwoBoneIK*)Obj)->bMaintainEffectorRelRot = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMaintainEffectorRelRot = { UE4CodeGen_Private::EPropertyClass::Bool, "bMaintainEffectorRelRot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FAnimNode_TwoBoneIK), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMaintainEffectorRelRot_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bMaintainEffectorRelRot_MetaData, ARRAY_COUNT(NewProp_bMaintainEffectorRelRot_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTakeRotationFromEffectorSpace_MetaData[] = {
				{ "Category", "IK" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
				{ "ToolTip", "Set end bone to use End Effector rotation" },
			};
#endif
			auto NewProp_bTakeRotationFromEffectorSpace_SetBit = [](void* Obj){ ((FAnimNode_TwoBoneIK*)Obj)->bTakeRotationFromEffectorSpace = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTakeRotationFromEffectorSpace = { UE4CodeGen_Private::EPropertyClass::Bool, "bTakeRotationFromEffectorSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FAnimNode_TwoBoneIK), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTakeRotationFromEffectorSpace_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTakeRotationFromEffectorSpace_MetaData, ARRAY_COUNT(NewProp_bTakeRotationFromEffectorSpace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StretchLimits_MetaData[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
				{ "ToolTip", "Limits to use if stretching is allowed - old property DEPRECATED" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StretchLimits = { UE4CodeGen_Private::EPropertyClass::Struct, "StretchLimits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_TwoBoneIK, StretchLimits_DEPRECATED), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_StretchLimits_MetaData, ARRAY_COUNT(NewProp_StretchLimits_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxStretchScale_MetaData[] = {
				{ "Category", "IK" },
				{ "ClampMin", "0.0" },
				{ "editcondition", "bAllowStretching" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
				{ "ToolTip", "Limits to use if stretching is allowed. This value determins what is the max stretch scale. For example, 1.5 means it will stretch until 150 % of the whole length of the limb." },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxStretchScale = { UE4CodeGen_Private::EPropertyClass::Float, "MaxStretchScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_TwoBoneIK, MaxStretchScale), METADATA_PARAMS(NewProp_MaxStretchScale_MetaData, ARRAY_COUNT(NewProp_MaxStretchScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartStretchRatio_MetaData[] = {
				{ "Category", "IK" },
				{ "ClampMin", "0.0" },
				{ "editcondition", "bAllowStretching" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
				{ "ToolTip", "Limits to use if stretching is allowed. This value determines when to start stretch. For example, 0.9 means once it reaches 90% of the whole length of the limb, it will start apply." },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartStretchRatio = { UE4CodeGen_Private::EPropertyClass::Float, "StartStretchRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_TwoBoneIK, StartStretchRatio), METADATA_PARAMS(NewProp_StartStretchRatio_MetaData, ARRAY_COUNT(NewProp_StartStretchRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowStretching_MetaData[] = {
				{ "Category", "IK" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
				{ "ToolTip", "Should stretching be allowed, to be prevent over extension" },
			};
#endif
			auto NewProp_bAllowStretching_SetBit = [](void* Obj){ ((FAnimNode_TwoBoneIK*)Obj)->bAllowStretching = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowStretching = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowStretching", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FAnimNode_TwoBoneIK), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowStretching_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowStretching_MetaData, ARRAY_COUNT(NewProp_bAllowStretching_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKBone_MetaData[] = {
				{ "Category", "IK" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
				{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_IKBone = { UE4CodeGen_Private::EPropertyClass::Struct, "IKBone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_TwoBoneIK, IKBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_IKBone_MetaData, ARRAY_COUNT(NewProp_IKBone_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNoTwist,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TwistAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowTwist,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JointTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JointTargetSpaceBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JointTargetLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JointTargetLocationSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EffectorTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EffectorLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EffectorSpaceBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EffectorLocationSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMaintainEffectorRelRot,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTakeRotationFromEffectorSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StretchLimits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxStretchScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartStretchRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowStretching,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IKBone,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_TwoBoneIK",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_TwoBoneIK),
				alignof(FAnimNode_TwoBoneIK),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_CRC() { return 437719098U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
