// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Constraint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstraint() {}
// Cross Module References
	ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_ETransformConstraintType();
	UPackage* Z_Construct_UPackage__Script_AnimationCore();
	ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_EConstraintType();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintDescriptor();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAimConstraintDescription();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintDescriptionEx();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAxis();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformConstraintDescription();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFilterOptionPerAxis();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformConstraint();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintDescription();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintOffset();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
// End Cross Module References
	static UEnum* ETransformConstraintType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimationCore_ETransformConstraintType, Z_Construct_UPackage__Script_AnimationCore(), TEXT("ETransformConstraintType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETransformConstraintType(ETransformConstraintType_StaticEnum, TEXT("/Script/AnimationCore"), TEXT("ETransformConstraintType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimationCore_ETransformConstraintType_CRC() { return 1786157827U; }
	UEnum* Z_Construct_UEnum_AnimationCore_ETransformConstraintType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETransformConstraintType"), 0, Get_Z_Construct_UEnum_AnimationCore_ETransformConstraintType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETransformConstraintType::Translation", (int64)ETransformConstraintType::Translation },
				{ "ETransformConstraintType::Rotation", (int64)ETransformConstraintType::Rotation },
				{ "ETransformConstraintType::Scale", (int64)ETransformConstraintType::Scale },
				{ "ETransformConstraintType::Parent", (int64)ETransformConstraintType::Parent },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Constraint.h" },
				{ "ToolTip", "Transform Constraint Types" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimationCore,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETransformConstraintType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ETransformConstraintType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EConstraintType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimationCore_EConstraintType, Z_Construct_UPackage__Script_AnimationCore(), TEXT("EConstraintType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EConstraintType(EConstraintType_StaticEnum, TEXT("/Script/AnimationCore"), TEXT("EConstraintType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimationCore_EConstraintType_CRC() { return 3930706760U; }
	UEnum* Z_Construct_UEnum_AnimationCore_EConstraintType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EConstraintType"), 0, Get_Z_Construct_UEnum_AnimationCore_EConstraintType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EConstraintType::Transform", (int64)EConstraintType::Transform },
				{ "EConstraintType::Aim", (int64)EConstraintType::Aim },
				{ "EConstraintType::MAX", (int64)EConstraintType::MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Aim.ToolTip", "Aim Constraint" },
				{ "MAX.ToolTip", "MAX - invalid" },
				{ "ModuleRelativePath", "Public/Constraint.h" },
				{ "ToolTip", "Constraint Types" },
				{ "Transform.ToolTip", "Transform Constraint" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimationCore,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EConstraintType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EConstraintType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FConstraintData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FConstraintData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintData, Z_Construct_UPackage__Script_AnimationCore(), TEXT("ConstraintData"), sizeof(FConstraintData), Get_Z_Construct_UScriptStruct_FConstraintData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConstraintData(FConstraintData::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("ConstraintData"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFConstraintData
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFConstraintData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConstraintData")),new UScriptStruct::TCppStructOps<FConstraintData>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFConstraintData;
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConstraintData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConstraintData"), sizeof(FConstraintData), Get_Z_Construct_UScriptStruct_FConstraintData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Constraint.h" },
				{ "ToolTip", "Constraint Data that is contained in Node Datat\nYou can have as many of these per node" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTransform_MetaData[] = {
				{ "ModuleRelativePath", "Public/Constraint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FConstraintData, CurrentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_CurrentTransform_MetaData, ARRAY_COUNT(NewProp_CurrentTransform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
				{ "ModuleRelativePath", "Public/Constraint.h" },
				{ "ToolTip", "Constraint offset if bMaintainOffset is used" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset = { UE4CodeGen_Private::EPropertyClass::Struct, "Offset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConstraintData, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_Offset_MetaData, ARRAY_COUNT(NewProp_Offset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[] = {
				{ "ModuleRelativePath", "Public/Constraint.h" },
				{ "ToolTip", "When the constraint is first applied, maintain the offset from the target node" },
			};
#endif
			auto NewProp_bMaintainOffset_SetBit = [](void* Obj){ ((FConstraintData*)Obj)->bMaintainOffset = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset = { UE4CodeGen_Private::EPropertyClass::Bool, "bMaintainOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FConstraintData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMaintainOffset_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bMaintainOffset_MetaData, ARRAY_COUNT(NewProp_bMaintainOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
				{ "ModuleRelativePath", "Public/Constraint.h" },
				{ "ToolTip", "Weight of the constraint" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight = { UE4CodeGen_Private::EPropertyClass::Float, "Weight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConstraintData, Weight), METADATA_PARAMS(NewProp_Weight_MetaData, ARRAY_COUNT(NewProp_Weight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetNode_MetaData[] = {
				{ "ModuleRelativePath", "Public/Constraint.h" },
				{ "ToolTip", "Target Node of this constraint" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetNode = { UE4CodeGen_Private::EPropertyClass::Name, "TargetNode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConstraintData, TargetNode), METADATA_PARAMS(NewProp_TargetNode_MetaData, ARRAY_COUNT(NewProp_TargetNode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Constraint_MetaData[] = {
				{ "ModuleRelativePath", "Public/Constraint.h" },
				{ "ToolTip", "Constraint Description" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Constraint = { UE4CodeGen_Private::EPropertyClass::Struct, "Constraint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConstraintData, Constraint), Z_Construct_UScriptStruct_FConstraintDescriptor, METADATA_PARAMS(NewProp_Constraint_MetaData, ARRAY_COUNT(NewProp_Constraint_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Offset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMaintainOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Weight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetNode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Constraint,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ConstraintData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FConstraintData),
				alignof(FConstraintData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConstraintData_CRC() { return 3807667025U; }
class UScriptStruct* FConstraintDescriptor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FConstraintDescriptor_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintDescriptor, Z_Construct_UPackage__Script_AnimationCore(), TEXT("ConstraintDescriptor"), sizeof(FConstraintDescriptor), Get_Z_Construct_UScriptStruct_FConstraintDescriptor_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConstraintDescriptor(FConstraintDescriptor::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("ConstraintDescriptor"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFConstraintDescriptor
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFConstraintDescriptor()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConstraintDescriptor")),new UScriptStruct::TCppStructOps<FConstraintDescriptor>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFConstraintDescriptor;
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintDescriptor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConstraintDescriptor_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConstraintDescriptor"), sizeof(FConstraintDescriptor), Get_Z_Construct_UScriptStruct_FConstraintDescriptor_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Constraint.h" },
				{ "ToolTip", "Constraint data container. It contains union of Constraints and node will contain array of these.\n\nThese are the one contained in NodeData, and it will be iterated via evaluate process\nThe goal is to have contiguous memory location where they can iterate through linearly" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintDescriptor>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
				{ "ModuleRelativePath", "Public/Constraint.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Enum, "Type", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConstraintDescriptor, Type), Z_Construct_UEnum_AnimationCore_EConstraintType, METADATA_PARAMS(NewProp_Type_MetaData, ARRAY_COUNT(NewProp_Type_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Type,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Type_Underlying,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ConstraintDescriptor",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FConstraintDescriptor),
				alignof(FConstraintDescriptor),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConstraintDescriptor_CRC() { return 3620796482U; }
class UScriptStruct* FAimConstraintDescription::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FAimConstraintDescription_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAimConstraintDescription, Z_Construct_UPackage__Script_AnimationCore(), TEXT("AimConstraintDescription"), sizeof(FAimConstraintDescription), Get_Z_Construct_UScriptStruct_FAimConstraintDescription_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAimConstraintDescription(FAimConstraintDescription::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("AimConstraintDescription"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFAimConstraintDescription
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFAimConstraintDescription()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AimConstraintDescription")),new UScriptStruct::TCppStructOps<FAimConstraintDescription>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFAimConstraintDescription;
	UScriptStruct* Z_Construct_UScriptStruct_FAimConstraintDescription()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAimConstraintDescription_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AimConstraintDescription"), sizeof(FAimConstraintDescription), Get_Z_Construct_UScriptStruct_FAimConstraintDescription_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Constraint.h" },
				{ "ToolTip", "A description of how to apply aim constraint" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAimConstraintDescription>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLookUp_MetaData[] = {
				{ "Category", "FAimConstraintDescription" },
				{ "ModuleRelativePath", "Public/Constraint.h" },
			};
#endif
			auto NewProp_bUseLookUp_SetBit = [](void* Obj){ ((FAimConstraintDescription*)Obj)->bUseLookUp = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLookUp = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseLookUp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAimConstraintDescription), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseLookUp_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseLookUp_MetaData, ARRAY_COUNT(NewProp_bUseLookUp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookUp_Axis_MetaData[] = {
				{ "Category", "FAimConstraintDescription" },
				{ "ModuleRelativePath", "Public/Constraint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookUp_Axis = { UE4CodeGen_Private::EPropertyClass::Struct, "LookUp_Axis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAimConstraintDescription, LookUp_Axis), Z_Construct_UScriptStruct_FAxis, METADATA_PARAMS(NewProp_LookUp_Axis_MetaData, ARRAY_COUNT(NewProp_LookUp_Axis_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAt_Axis_MetaData[] = {
				{ "Category", "FAimConstraintDescription" },
				{ "ModuleRelativePath", "Public/Constraint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAt_Axis = { UE4CodeGen_Private::EPropertyClass::Struct, "LookAt_Axis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAimConstraintDescription, LookAt_Axis), Z_Construct_UScriptStruct_FAxis, METADATA_PARAMS(NewProp_LookAt_Axis_MetaData, ARRAY_COUNT(NewProp_LookAt_Axis_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseLookUp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LookUp_Axis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LookAt_Axis,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
				Z_Construct_UScriptStruct_FConstraintDescriptionEx,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AimConstraintDescription",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAimConstraintDescription),
				alignof(FAimConstraintDescription),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAimConstraintDescription_CRC() { return 3891513507U; }
class UScriptStruct* FTransformConstraintDescription::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FTransformConstraintDescription_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformConstraintDescription, Z_Construct_UPackage__Script_AnimationCore(), TEXT("TransformConstraintDescription"), sizeof(FTransformConstraintDescription), Get_Z_Construct_UScriptStruct_FTransformConstraintDescription_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTransformConstraintDescription(FTransformConstraintDescription::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("TransformConstraintDescription"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFTransformConstraintDescription
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFTransformConstraintDescription()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TransformConstraintDescription")),new UScriptStruct::TCppStructOps<FTransformConstraintDescription>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFTransformConstraintDescription;
	UScriptStruct* Z_Construct_UScriptStruct_FTransformConstraintDescription()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTransformConstraintDescription_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TransformConstraintDescription"), sizeof(FTransformConstraintDescription), Get_Z_Construct_UScriptStruct_FTransformConstraintDescription_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Constraint.h" },
				{ "ToolTip", "A description of how to apply a simple transform constraint" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformConstraintDescription>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformType_MetaData[] = {
				{ "Category", "FAimConstraintDescription" },
				{ "ModuleRelativePath", "Public/Constraint.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TransformType = { UE4CodeGen_Private::EPropertyClass::Enum, "TransformType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTransformConstraintDescription, TransformType), Z_Construct_UEnum_AnimationCore_ETransformConstraintType, METADATA_PARAMS(NewProp_TransformType_MetaData, ARRAY_COUNT(NewProp_TransformType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TransformType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransformType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransformType_Underlying,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
				Z_Construct_UScriptStruct_FConstraintDescriptionEx,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TransformConstraintDescription",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FTransformConstraintDescription),
				alignof(FTransformConstraintDescription),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTransformConstraintDescription_CRC() { return 2030404235U; }
class UScriptStruct* FConstraintDescriptionEx::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FConstraintDescriptionEx_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintDescriptionEx, Z_Construct_UPackage__Script_AnimationCore(), TEXT("ConstraintDescriptionEx"), sizeof(FConstraintDescriptionEx), Get_Z_Construct_UScriptStruct_FConstraintDescriptionEx_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConstraintDescriptionEx(FConstraintDescriptionEx::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("ConstraintDescriptionEx"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFConstraintDescriptionEx
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFConstraintDescriptionEx()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConstraintDescriptionEx")),new UScriptStruct::TCppStructOps<FConstraintDescriptionEx>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFConstraintDescriptionEx;
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintDescriptionEx()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConstraintDescriptionEx_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConstraintDescriptionEx"), sizeof(FConstraintDescriptionEx), Get_Z_Construct_UScriptStruct_FConstraintDescriptionEx_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Constraint.h" },
				{ "ToolTip", "A description of how to apply a simple transform constraint" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintDescriptionEx>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxesFilterOption_MetaData[] = {
				{ "Category", "FAimConstraintDescription" },
				{ "ModuleRelativePath", "Public/Constraint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxesFilterOption = { UE4CodeGen_Private::EPropertyClass::Struct, "AxesFilterOption", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FConstraintDescriptionEx, AxesFilterOption), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(NewProp_AxesFilterOption_MetaData, ARRAY_COUNT(NewProp_AxesFilterOption_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxesFilterOption,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ConstraintDescriptionEx",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FConstraintDescriptionEx),
				alignof(FConstraintDescriptionEx),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConstraintDescriptionEx_CRC() { return 627080825U; }
class UScriptStruct* FTransformConstraint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FTransformConstraint_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformConstraint, Z_Construct_UPackage__Script_AnimationCore(), TEXT("TransformConstraint"), sizeof(FTransformConstraint), Get_Z_Construct_UScriptStruct_FTransformConstraint_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTransformConstraint(FTransformConstraint::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("TransformConstraint"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFTransformConstraint
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFTransformConstraint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TransformConstraint")),new UScriptStruct::TCppStructOps<FTransformConstraint>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFTransformConstraint;
	UScriptStruct* Z_Construct_UScriptStruct_FTransformConstraint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTransformConstraint_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TransformConstraint"), sizeof(FTransformConstraint), Get_Z_Construct_UScriptStruct_FTransformConstraint_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Constraint.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformConstraint>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[] = {
				{ "Category", "Transform Constraint" },
				{ "ModuleRelativePath", "Public/Constraint.h" },
				{ "ToolTip", "When the constraint is first applied, maintain the offset from the target node" },
			};
#endif
			auto NewProp_bMaintainOffset_SetBit = [](void* Obj){ ((FTransformConstraint*)Obj)->bMaintainOffset = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset = { UE4CodeGen_Private::EPropertyClass::Bool, "bMaintainOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FTransformConstraint), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMaintainOffset_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bMaintainOffset_MetaData, ARRAY_COUNT(NewProp_bMaintainOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
				{ "Category", "Transform Constraint" },
				{ "ModuleRelativePath", "Public/Constraint.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight = { UE4CodeGen_Private::EPropertyClass::Float, "Weight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTransformConstraint, Weight), METADATA_PARAMS(NewProp_Weight_MetaData, ARRAY_COUNT(NewProp_Weight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetNode_MetaData[] = {
				{ "Category", "Transform Constraint" },
				{ "ModuleRelativePath", "Public/Constraint.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetNode = { UE4CodeGen_Private::EPropertyClass::Name, "TargetNode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTransformConstraint, TargetNode), METADATA_PARAMS(NewProp_TargetNode_MetaData, ARRAY_COUNT(NewProp_TargetNode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceNode_MetaData[] = {
				{ "Category", "Transform Constraint" },
				{ "ModuleRelativePath", "Public/Constraint.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourceNode = { UE4CodeGen_Private::EPropertyClass::Name, "SourceNode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTransformConstraint, SourceNode), METADATA_PARAMS(NewProp_SourceNode_MetaData, ARRAY_COUNT(NewProp_SourceNode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[] = {
				{ "Category", "Transform Constraint" },
				{ "ModuleRelativePath", "Public/Constraint.h" },
				{ "ToolTip", "@note thought of separating this out per each but we'll have an issue with applying transform in what order\nbut something to think about if that seems better" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Operator = { UE4CodeGen_Private::EPropertyClass::Struct, "Operator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTransformConstraint, Operator), Z_Construct_UScriptStruct_FConstraintDescription, METADATA_PARAMS(NewProp_Operator_MetaData, ARRAY_COUNT(NewProp_Operator_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMaintainOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Weight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetNode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceNode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Operator,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TransformConstraint",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FTransformConstraint),
				alignof(FTransformConstraint),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTransformConstraint_CRC() { return 1741801155U; }
class UScriptStruct* FConstraintOffset::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FConstraintOffset_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintOffset, Z_Construct_UPackage__Script_AnimationCore(), TEXT("ConstraintOffset"), sizeof(FConstraintOffset), Get_Z_Construct_UScriptStruct_FConstraintOffset_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConstraintOffset(FConstraintOffset::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("ConstraintOffset"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFConstraintOffset
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFConstraintOffset()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConstraintOffset")),new UScriptStruct::TCppStructOps<FConstraintOffset>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFConstraintOffset;
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintOffset()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConstraintOffset_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConstraintOffset"), sizeof(FConstraintOffset), Get_Z_Construct_UScriptStruct_FConstraintOffset_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Constraint.h" },
				{ "ToolTip", "This is the offset for constraint\n\nSaves individual component (translation, rotation, scale or parent)\nUsed by Constraint for saving the offset, and recovering the offset" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintOffset>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
				{ "ModuleRelativePath", "Public/Constraint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parent = { UE4CodeGen_Private::EPropertyClass::Struct, "Parent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConstraintOffset, Parent), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_Parent_MetaData, ARRAY_COUNT(NewProp_Parent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
				{ "ModuleRelativePath", "Public/Constraint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Struct, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConstraintOffset, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Scale_MetaData, ARRAY_COUNT(NewProp_Scale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
				{ "ModuleRelativePath", "Public/Constraint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConstraintOffset, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(NewProp_Rotation_MetaData, ARRAY_COUNT(NewProp_Rotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[] = {
				{ "ModuleRelativePath", "Public/Constraint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Translation = { UE4CodeGen_Private::EPropertyClass::Struct, "Translation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConstraintOffset, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Translation_MetaData, ARRAY_COUNT(NewProp_Translation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Parent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Translation,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ConstraintOffset",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FConstraintOffset),
				alignof(FConstraintOffset),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConstraintOffset_CRC() { return 1094818172U; }
class UScriptStruct* FConstraintDescription::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FConstraintDescription_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintDescription, Z_Construct_UPackage__Script_AnimationCore(), TEXT("ConstraintDescription"), sizeof(FConstraintDescription), Get_Z_Construct_UScriptStruct_FConstraintDescription_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConstraintDescription(FConstraintDescription::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("ConstraintDescription"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFConstraintDescription
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFConstraintDescription()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConstraintDescription")),new UScriptStruct::TCppStructOps<FConstraintDescription>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFConstraintDescription;
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintDescription()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConstraintDescription_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConstraintDescription"), sizeof(FConstraintDescription), Get_Z_Construct_UScriptStruct_FConstraintDescription_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Constraint.h" },
				{ "ToolTip", "A description of how to apply a simple transform constraint" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintDescription>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleAxes_MetaData[] = {
				{ "Category", "Constraint" },
				{ "ModuleRelativePath", "Public/Constraint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleAxes = { UE4CodeGen_Private::EPropertyClass::Struct, "ScaleAxes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FConstraintDescription, ScaleAxes), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(NewProp_ScaleAxes_MetaData, ARRAY_COUNT(NewProp_ScaleAxes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationAxes_MetaData[] = {
				{ "Category", "Constraint" },
				{ "ModuleRelativePath", "Public/Constraint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationAxes = { UE4CodeGen_Private::EPropertyClass::Struct, "RotationAxes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FConstraintDescription, RotationAxes), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(NewProp_RotationAxes_MetaData, ARRAY_COUNT(NewProp_RotationAxes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationAxes_MetaData[] = {
				{ "Category", "Constraint" },
				{ "ModuleRelativePath", "Public/Constraint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TranslationAxes = { UE4CodeGen_Private::EPropertyClass::Struct, "TranslationAxes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FConstraintDescription, TranslationAxes), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(NewProp_TranslationAxes_MetaData, ARRAY_COUNT(NewProp_TranslationAxes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bParent_MetaData[] = {
				{ "Category", "Constraint" },
				{ "ModuleRelativePath", "Public/Constraint.h" },
				{ "ToolTip", "this does composed transform - where as individual will accumulate per component" },
			};
#endif
			auto NewProp_bParent_SetBit = [](void* Obj){ ((FConstraintDescription*)Obj)->bParent = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bParent = { UE4CodeGen_Private::EPropertyClass::Bool, "bParent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FConstraintDescription), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bParent_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bParent_MetaData, ARRAY_COUNT(NewProp_bParent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScale_MetaData[] = {
				{ "Category", "Constraint" },
				{ "ModuleRelativePath", "Public/Constraint.h" },
			};
#endif
			auto NewProp_bScale_SetBit = [](void* Obj){ ((FConstraintDescription*)Obj)->bScale = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScale = { UE4CodeGen_Private::EPropertyClass::Bool, "bScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FConstraintDescription), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bScale_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bScale_MetaData, ARRAY_COUNT(NewProp_bScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotation_MetaData[] = {
				{ "Category", "Constraint" },
				{ "ModuleRelativePath", "Public/Constraint.h" },
			};
#endif
			auto NewProp_bRotation_SetBit = [](void* Obj){ ((FConstraintDescription*)Obj)->bRotation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FConstraintDescription), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRotation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRotation_MetaData, ARRAY_COUNT(NewProp_bRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTranslation_MetaData[] = {
				{ "Category", "Constraint" },
				{ "ModuleRelativePath", "Public/Constraint.h" },
			};
#endif
			auto NewProp_bTranslation_SetBit = [](void* Obj){ ((FConstraintDescription*)Obj)->bTranslation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTranslation = { UE4CodeGen_Private::EPropertyClass::Bool, "bTranslation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FConstraintDescription), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTranslation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTranslation_MetaData, ARRAY_COUNT(NewProp_bTranslation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleAxes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotationAxes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TranslationAxes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bParent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTranslation,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ConstraintDescription",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FConstraintDescription),
				alignof(FConstraintDescription),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConstraintDescription_CRC() { return 3256592976U; }
class UScriptStruct* FFilterOptionPerAxis::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FFilterOptionPerAxis_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFilterOptionPerAxis, Z_Construct_UPackage__Script_AnimationCore(), TEXT("FilterOptionPerAxis"), sizeof(FFilterOptionPerAxis), Get_Z_Construct_UScriptStruct_FFilterOptionPerAxis_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFilterOptionPerAxis(FFilterOptionPerAxis::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("FilterOptionPerAxis"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFFilterOptionPerAxis
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFFilterOptionPerAxis()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FilterOptionPerAxis")),new UScriptStruct::TCppStructOps<FFilterOptionPerAxis>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFFilterOptionPerAxis;
	UScriptStruct* Z_Construct_UScriptStruct_FFilterOptionPerAxis()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFilterOptionPerAxis_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FilterOptionPerAxis"), sizeof(FFilterOptionPerAxis), Get_Z_Construct_UScriptStruct_FFilterOptionPerAxis_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Constraint.h" },
				{ "ToolTip", "Filter Option Per Axis\n\nThis is used to filter per axis for constraint options" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFilterOptionPerAxis>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bZ_MetaData[] = {
				{ "Category", "FFilterOptionPerAxis" },
				{ "ModuleRelativePath", "Public/Constraint.h" },
			};
#endif
			auto NewProp_bZ_SetBit = [](void* Obj){ ((FFilterOptionPerAxis*)Obj)->bZ = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bZ = { UE4CodeGen_Private::EPropertyClass::Bool, "bZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FFilterOptionPerAxis), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bZ_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bZ_MetaData, ARRAY_COUNT(NewProp_bZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bY_MetaData[] = {
				{ "Category", "FFilterOptionPerAxis" },
				{ "ModuleRelativePath", "Public/Constraint.h" },
			};
#endif
			auto NewProp_bY_SetBit = [](void* Obj){ ((FFilterOptionPerAxis*)Obj)->bY = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bY = { UE4CodeGen_Private::EPropertyClass::Bool, "bY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FFilterOptionPerAxis), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bY_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bY_MetaData, ARRAY_COUNT(NewProp_bY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bX_MetaData[] = {
				{ "Category", "FFilterOptionPerAxis" },
				{ "ModuleRelativePath", "Public/Constraint.h" },
			};
#endif
			auto NewProp_bX_SetBit = [](void* Obj){ ((FFilterOptionPerAxis*)Obj)->bX = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bX = { UE4CodeGen_Private::EPropertyClass::Bool, "bX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FFilterOptionPerAxis), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bX_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bX_MetaData, ARRAY_COUNT(NewProp_bX_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bX,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"FilterOptionPerAxis",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FFilterOptionPerAxis),
				alignof(FFilterOptionPerAxis),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFilterOptionPerAxis_CRC() { return 2437973382U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
