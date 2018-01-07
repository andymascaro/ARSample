// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BoneControllers/AnimNode_Constraint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Constraint() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EConstraintOffsetOption();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Constraint();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConstraint();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFilterOptionPerAxis();
	ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_ETransformConstraintType();
// End Cross Module References
	static UEnum* EConstraintOffsetOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EConstraintOffsetOption, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EConstraintOffsetOption"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EConstraintOffsetOption(EConstraintOffsetOption_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("EConstraintOffsetOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_EConstraintOffsetOption_CRC() { return 3649637827U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_EConstraintOffsetOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EConstraintOffsetOption"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_EConstraintOffsetOption_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EConstraintOffsetOption::None", (int64)EConstraintOffsetOption::None },
				{ "EConstraintOffsetOption::Offset_RefPose", (int64)EConstraintOffsetOption::Offset_RefPose },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Constraint.h" },
				{ "Offset_RefPose.ToolTip", "no offset" },
				{ "ToolTip", "Enum value to describe how you'd like to maintain offset" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EConstraintOffsetOption",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EConstraintOffsetOption",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAnimNode_Constraint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Constraint_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Constraint, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_Constraint"), sizeof(FAnimNode_Constraint), Get_Z_Construct_UScriptStruct_FAnimNode_Constraint_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_Constraint(FAnimNode_Constraint::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_Constraint"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_Constraint
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_Constraint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_Constraint")),new UScriptStruct::TCppStructOps<FAnimNode_Constraint>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_Constraint;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Constraint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Constraint_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_Constraint"), sizeof(FAnimNode_Constraint), Get_Z_Construct_UScriptStruct_FAnimNode_Constraint_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "DevelopmentStatus", "Experimental" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Constraint.h" },
				{ "ToolTip", "Constraint node to parent or world transform for rotation/translation" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Constraint>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintWeights_MetaData[] = {
				{ "Category", "Runtime" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Constraint.h" },
				{ "PinShownByDefault", "" },
				{ "ToolTip", "Weight data - post edit syncs up to ConstraintSetups" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConstraintWeights = { UE4CodeGen_Private::EPropertyClass::Array, "ConstraintWeights", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000041, 1, nullptr, STRUCT_OFFSET(FAnimNode_Constraint, ConstraintWeights), METADATA_PARAMS(NewProp_ConstraintWeights_MetaData, ARRAY_COUNT(NewProp_ConstraintWeights_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstraintWeights_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "ConstraintWeights", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintSetup_MetaData[] = {
				{ "Category", "Constraints" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Constraint.h" },
				{ "ToolTip", "List of constraints" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConstraintSetup = { UE4CodeGen_Private::EPropertyClass::Array, "ConstraintSetup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_Constraint, ConstraintSetup), METADATA_PARAMS(NewProp_ConstraintSetup_MetaData, ARRAY_COUNT(NewProp_ConstraintSetup_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstraintSetup_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ConstraintSetup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FConstraint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneToModify_MetaData[] = {
				{ "Category", "SkeletalControl" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Constraint.h" },
				{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneToModify = { UE4CodeGen_Private::EPropertyClass::Struct, "BoneToModify", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_Constraint, BoneToModify), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_BoneToModify_MetaData, ARRAY_COUNT(NewProp_BoneToModify_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstraintWeights,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstraintWeights_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstraintSetup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstraintSetup_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneToModify,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_Constraint",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_Constraint),
				alignof(FAnimNode_Constraint),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Constraint_CRC() { return 3452903784U; }
class UScriptStruct* FConstraint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FConstraint_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraint, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("Constraint"), sizeof(FConstraint), Get_Z_Construct_UScriptStruct_FConstraint_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConstraint(FConstraint::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("Constraint"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFConstraint
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFConstraint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Constraint")),new UScriptStruct::TCppStructOps<FConstraint>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFConstraint;
	UScriptStruct* Z_Construct_UScriptStruct_FConstraint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConstraint_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Constraint"), sizeof(FConstraint), Get_Z_Construct_UScriptStruct_FConstraint_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Constraint.h" },
				{ "ToolTip", "Constraint Set up" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraint>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerAxis_MetaData[] = {
				{ "Category", "FConstraint" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Constraint.h" },
				{ "ToolTip", "Per axis filter options - applied in their local space not in world space" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerAxis = { UE4CodeGen_Private::EPropertyClass::Struct, "PerAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FConstraint, PerAxis), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(NewProp_PerAxis_MetaData, ARRAY_COUNT(NewProp_PerAxis_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformType_MetaData[] = {
				{ "Category", "FConstraint" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Constraint.h" },
				{ "ToolTip", "What transform type is constraint to - Translation, Rotation, Scale OR Parent. Parent overrides all component" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TransformType = { UE4CodeGen_Private::EPropertyClass::Enum, "TransformType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FConstraint, TransformType), Z_Construct_UEnum_AnimationCore_ETransformConstraintType, METADATA_PARAMS(NewProp_TransformType_MetaData, ARRAY_COUNT(NewProp_TransformType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TransformType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetOption_MetaData[] = {
				{ "Category", "FConstraint" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Constraint.h" },
				{ "ToolTip", "Maintain offset based on refpose or not.\n\nNone - no offset\nOffset_RefPose - offset is created based on reference pose\n\nIn the future, we'd like to support custom offset, not just based on ref pose" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OffsetOption = { UE4CodeGen_Private::EPropertyClass::Enum, "OffsetOption", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FConstraint, OffsetOption), Z_Construct_UEnum_AnimGraphRuntime_EConstraintOffsetOption, METADATA_PARAMS(NewProp_OffsetOption_MetaData, ARRAY_COUNT(NewProp_OffsetOption_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_OffsetOption_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetBone_MetaData[] = {
				{ "Category", "FConstraint" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Constraint.h" },
				{ "ToolTip", "Target Bone this is constraint to" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetBone = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetBone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FConstraint, TargetBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_TargetBone_MetaData, ARRAY_COUNT(NewProp_TargetBone_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PerAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransformType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransformType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OffsetOption,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OffsetOption_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetBone,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"Constraint",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FConstraint),
				alignof(FConstraint),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConstraint_CRC() { return 327691185U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
