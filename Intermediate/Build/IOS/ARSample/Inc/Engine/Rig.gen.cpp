// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/Rig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRig() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EConstraintTransform();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EControlConstraint();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformBaseConstraint();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigTransformConstraint();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_URig_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EConstraintTransform_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EConstraintTransform, Z_Construct_UPackage__Script_Engine(), TEXT("EConstraintTransform"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EConstraintTransform(EConstraintTransform_StaticEnum, TEXT("/Script/Engine"), TEXT("EConstraintTransform"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EConstraintTransform_CRC() { return 4049015845U; }
	UEnum* Z_Construct_UEnum_Engine_EConstraintTransform()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EConstraintTransform"), 0, Get_Z_Construct_UEnum_Engine_EConstraintTransform_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EConstraintTransform::Absolute", (int64)EConstraintTransform::Absolute },
				{ "EConstraintTransform::Relative", (int64)EConstraintTransform::Relative },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Absolute.ToolTip", "Absolute value." },
				{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
				{ "Relative.ToolTip", "Apply relative transform from ref pose." },
				{ "ToolTip", "Constraint Transform Type. - currently unused" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EConstraintTransform",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EConstraintTransform::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EControlConstraint_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EControlConstraint, Z_Construct_UPackage__Script_Engine(), TEXT("EControlConstraint"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EControlConstraint(EControlConstraint_StaticEnum, TEXT("/Script/Engine"), TEXT("EControlConstraint"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EControlConstraint_CRC() { return 2831224745U; }
	UEnum* Z_Construct_UEnum_Engine_EControlConstraint()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EControlConstraint"), 0, Get_Z_Construct_UEnum_Engine_EControlConstraint_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EControlConstraint::Orientation", (int64)EControlConstraint::Orientation },
				{ "EControlConstraint::Translation", (int64)EControlConstraint::Translation },
				{ "EControlConstraint::MAX", (int64)EControlConstraint::MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "MAX.ToolTip", "Max Number." },
				{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
				{ "Orientation.ToolTip", "Rotation constraint." },
				{ "ToolTip", "Control Constraint Type" },
				{ "Translation.ToolTip", "Translation constraint." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EControlConstraint",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EControlConstraint::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FTransformBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTransformBase_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformBase, Z_Construct_UPackage__Script_Engine(), TEXT("TransformBase"), sizeof(FTransformBase), Get_Z_Construct_UScriptStruct_FTransformBase_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTransformBase(FTransformBase::StaticStruct, TEXT("/Script/Engine"), TEXT("TransformBase"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTransformBase
{
	FScriptStruct_Engine_StaticRegisterNativesFTransformBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TransformBase")),new UScriptStruct::TCppStructOps<FTransformBase>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTransformBase;
	UScriptStruct* Z_Construct_UScriptStruct_FTransformBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTransformBase_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TransformBase"), sizeof(FTransformBase), Get_Z_Construct_UScriptStruct_FTransformBase_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
				{ "ToolTip", "This is a mapping table between bone in a particular skeletal mesh and bone of this skeleton set." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformBase>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Constraints_MetaData[] = {
				{ "Category", "FTransformBase" },
				{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Constraints = { UE4CodeGen_Private::EPropertyClass::Struct, "Constraints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, CPP_ARRAY_DIM(Constraints, FTransformBase), nullptr, STRUCT_OFFSET(FTransformBase, Constraints), Z_Construct_UScriptStruct_FTransformBaseConstraint, METADATA_PARAMS(NewProp_Constraints_MetaData, ARRAY_COUNT(NewProp_Constraints_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
				{ "Category", "FTransformBase" },
				{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Node = { UE4CodeGen_Private::EPropertyClass::Name, "Node", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTransformBase, Node), METADATA_PARAMS(NewProp_Node_MetaData, ARRAY_COUNT(NewProp_Node_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Constraints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Node,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TransformBase",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FTransformBase),
				alignof(FTransformBase),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTransformBase_CRC() { return 3500530024U; }
class UScriptStruct* FTransformBaseConstraint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTransformBaseConstraint_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformBaseConstraint, Z_Construct_UPackage__Script_Engine(), TEXT("TransformBaseConstraint"), sizeof(FTransformBaseConstraint), Get_Z_Construct_UScriptStruct_FTransformBaseConstraint_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTransformBaseConstraint(FTransformBaseConstraint::StaticStruct, TEXT("/Script/Engine"), TEXT("TransformBaseConstraint"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTransformBaseConstraint
{
	FScriptStruct_Engine_StaticRegisterNativesFTransformBaseConstraint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TransformBaseConstraint")),new UScriptStruct::TCppStructOps<FTransformBaseConstraint>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTransformBaseConstraint;
	UScriptStruct* Z_Construct_UScriptStruct_FTransformBaseConstraint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTransformBaseConstraint_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TransformBaseConstraint"), sizeof(FTransformBaseConstraint), Get_Z_Construct_UScriptStruct_FTransformBaseConstraint_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
				{ "ToolTip", "This defines what constraint it is defined" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformBaseConstraint>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformConstraints_MetaData[] = {
				{ "Category", "FTransformBaseConstraint" },
				{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
				{ "ToolTip", "What transform type *" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TransformConstraints = { UE4CodeGen_Private::EPropertyClass::Array, "TransformConstraints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTransformBaseConstraint, TransformConstraints), METADATA_PARAMS(NewProp_TransformConstraints_MetaData, ARRAY_COUNT(NewProp_TransformConstraints_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransformConstraints_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TransformConstraints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FRigTransformConstraint, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransformConstraints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransformConstraints_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TransformBaseConstraint",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FTransformBaseConstraint),
				alignof(FTransformBaseConstraint),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTransformBaseConstraint_CRC() { return 4165313010U; }
class UScriptStruct* FRigTransformConstraint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRigTransformConstraint_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigTransformConstraint, Z_Construct_UPackage__Script_Engine(), TEXT("RigTransformConstraint"), sizeof(FRigTransformConstraint), Get_Z_Construct_UScriptStruct_FRigTransformConstraint_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRigTransformConstraint(FRigTransformConstraint::StaticStruct, TEXT("/Script/Engine"), TEXT("RigTransformConstraint"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRigTransformConstraint
{
	FScriptStruct_Engine_StaticRegisterNativesFRigTransformConstraint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RigTransformConstraint")),new UScriptStruct::TCppStructOps<FRigTransformConstraint>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRigTransformConstraint;
	UScriptStruct* Z_Construct_UScriptStruct_FRigTransformConstraint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRigTransformConstraint_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RigTransformConstraint"), sizeof(FRigTransformConstraint), Get_Z_Construct_UScriptStruct_FRigTransformConstraint_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigTransformConstraint>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
				{ "ToolTip", "EditAnywhere, Category=\"FTransformBaseConstraint\"" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight = { UE4CodeGen_Private::EPropertyClass::Float, "Weight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRigTransformConstraint, Weight), METADATA_PARAMS(NewProp_Weight_MetaData, ARRAY_COUNT(NewProp_Weight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentSpace_MetaData[] = {
				{ "Category", "FTransformBaseConstraint" },
				{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
				{ "ToolTip", "Parent space that are define *" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParentSpace = { UE4CodeGen_Private::EPropertyClass::Name, "ParentSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FRigTransformConstraint, ParentSpace), METADATA_PARAMS(NewProp_ParentSpace_MetaData, ARRAY_COUNT(NewProp_ParentSpace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranformType_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
				{ "ToolTip", "EditAnywhere, Category=\"FTransformBaseConstraint\"" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TranformType = { UE4CodeGen_Private::EPropertyClass::Byte, "TranformType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRigTransformConstraint, TranformType), Z_Construct_UEnum_Engine_EConstraintTransform, METADATA_PARAMS(NewProp_TranformType_MetaData, ARRAY_COUNT(NewProp_TranformType_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Weight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TranformType,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RigTransformConstraint",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FRigTransformConstraint),
				alignof(FRigTransformConstraint),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRigTransformConstraint_CRC() { return 916804899U; }
class UScriptStruct* FNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNode_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNode, Z_Construct_UPackage__Script_Engine(), TEXT("Node"), sizeof(FNode), Get_Z_Construct_UScriptStruct_FNode_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNode(FNode::StaticStruct, TEXT("/Script/Engine"), TEXT("Node"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNode
{
	FScriptStruct_Engine_StaticRegisterNativesFNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Node")),new UScriptStruct::TCppStructOps<FNode>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNode;
	UScriptStruct* Z_Construct_UScriptStruct_FNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNode_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Node"), sizeof(FNode), Get_Z_Construct_UScriptStruct_FNode_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
				{ "ToolTip", "Rig Controller for bone transform *" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNode>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAdvanced_MetaData[] = {
				{ "Category", "FNode" },
				{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
			};
#endif
			auto NewProp_bAdvanced_SetBit = [](void* Obj){ ((FNode*)Obj)->bAdvanced = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdvanced = { UE4CodeGen_Private::EPropertyClass::Bool, "bAdvanced", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FNode), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAdvanced_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAdvanced_MetaData, ARRAY_COUNT(NewProp_bAdvanced_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
				{ "Category", "FNode" },
				{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
				{ "ToolTip", "This is Display Name where it will be used to display in Retarget Manager. This name has to be unique." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName = { UE4CodeGen_Private::EPropertyClass::Str, "DisplayName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FNode, DisplayName), METADATA_PARAMS(NewProp_DisplayName_MetaData, ARRAY_COUNT(NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
				{ "ToolTip", "Absolute transform of the node. Hoping to use this data in the future to render" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform = { UE4CodeGen_Private::EPropertyClass::Struct, "Transform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNode, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_Transform_MetaData, ARRAY_COUNT(NewProp_Transform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentName_MetaData[] = {
				{ "Category", "FNode" },
				{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
				{ "ToolTip", "We save Parent Node but if the parent node is removed, it will reset to root" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParentName = { UE4CodeGen_Private::EPropertyClass::Name, "ParentName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(FNode, ParentName), METADATA_PARAMS(NewProp_ParentName_MetaData, ARRAY_COUNT(NewProp_ParentName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "Category", "FNode" },
				{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
				{ "ToolTip", "Name of the original node. We don't allow to change this. This is used for identity.*" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(FNode, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAdvanced,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DisplayName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Transform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"Node",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FNode),
				alignof(FNode),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNode_CRC() { return 3727825175U; }
	void URig::StaticRegisterNativesURig()
	{
	}
	UClass* Z_Construct_UClass_URig_NoRegister()
	{
		return URig::StaticClass();
	}
	UClass* Z_Construct_UClass_URig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object" },
				{ "IncludePath", "Animation/Rig.h" },
				{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
				{ "ToolTip", "URig : that has rigging data for skeleton\n        - used for retargeting\n        - support to share different animations" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[] = {
				{ "Category", "Rig" },
				{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
				{ "ToolTip", "Skeleton bone tree - each contains name and parent index*" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Nodes = { UE4CodeGen_Private::EPropertyClass::Array, "Nodes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000041, 1, nullptr, STRUCT_OFFSET(URig, Nodes), METADATA_PARAMS(NewProp_Nodes_MetaData, ARRAY_COUNT(NewProp_Nodes_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Nodes_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Nodes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformBases_MetaData[] = {
				{ "Category", "Rig" },
				{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
				{ "ToolTip", "Skeleton bone tree - each contains name and parent index*" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TransformBases = { UE4CodeGen_Private::EPropertyClass::Array, "TransformBases", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000041, 1, nullptr, STRUCT_OFFSET(URig, TransformBases), METADATA_PARAMS(NewProp_TransformBases_MetaData, ARRAY_COUNT(NewProp_TransformBases_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransformBases_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TransformBases", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTransformBase, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Nodes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Nodes_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransformBases,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransformBases_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<URig>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&URig::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URig, 2171969996);
	static FCompiledInDefer Z_CompiledInDefer_UClass_URig(Z_Construct_UClass_URig, &URig::StaticClass, TEXT("/Script/Engine"), TEXT("URig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
