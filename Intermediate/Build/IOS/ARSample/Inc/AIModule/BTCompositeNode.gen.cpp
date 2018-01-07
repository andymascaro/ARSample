// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/BTCompositeNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTCompositeNode() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTDecoratorLogic();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTChildIndex();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBTCompositeChild();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBTDecoratorLogic();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode();
	AIMODULE_API UClass* Z_Construct_UClass_UBTNode();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_NoRegister();
// End Cross Module References
	static UEnum* EBTDecoratorLogic_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EBTDecoratorLogic, Z_Construct_UPackage__Script_AIModule(), TEXT("EBTDecoratorLogic"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBTDecoratorLogic(EBTDecoratorLogic_StaticEnum, TEXT("/Script/AIModule"), TEXT("EBTDecoratorLogic"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EBTDecoratorLogic_CRC() { return 2521044513U; }
	UEnum* Z_Construct_UEnum_AIModule_EBTDecoratorLogic()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBTDecoratorLogic"), 0, Get_Z_Construct_UEnum_AIModule_EBTDecoratorLogic_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBTDecoratorLogic::Invalid", (int64)EBTDecoratorLogic::Invalid },
				{ "EBTDecoratorLogic::Test", (int64)EBTDecoratorLogic::Test },
				{ "EBTDecoratorLogic::And", (int64)EBTDecoratorLogic::And },
				{ "EBTDecoratorLogic::Or", (int64)EBTDecoratorLogic::Or },
				{ "EBTDecoratorLogic::Not", (int64)EBTDecoratorLogic::Not },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "And.ToolTip", "logic op: AND" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
				{ "Not.ToolTip", "logic op: NOT" },
				{ "Or.ToolTip", "logic op: OR" },
				{ "Test.ToolTip", "Test decorator conditions." },
				{ "ToolTip", "keep in sync with DescribeLogicOp() in BTCompositeNode.cpp" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBTDecoratorLogic",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EBTDecoratorLogic::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBTChildIndex_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EBTChildIndex, Z_Construct_UPackage__Script_AIModule(), TEXT("EBTChildIndex"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBTChildIndex(EBTChildIndex_StaticEnum, TEXT("/Script/AIModule"), TEXT("EBTChildIndex"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EBTChildIndex_CRC() { return 3575082459U; }
	UEnum* Z_Construct_UEnum_AIModule_EBTChildIndex()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBTChildIndex"), 0, Get_Z_Construct_UEnum_AIModule_EBTChildIndex_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBTChildIndex::FirstNode", (int64)EBTChildIndex::FirstNode },
				{ "EBTChildIndex::TaskNode", (int64)EBTChildIndex::TaskNode },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBTChildIndex",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EBTChildIndex",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FBTCompositeChild::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FBTCompositeChild_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBTCompositeChild, Z_Construct_UPackage__Script_AIModule(), TEXT("BTCompositeChild"), sizeof(FBTCompositeChild), Get_Z_Construct_UScriptStruct_FBTCompositeChild_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBTCompositeChild(FBTCompositeChild::StaticStruct, TEXT("/Script/AIModule"), TEXT("BTCompositeChild"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFBTCompositeChild
{
	FScriptStruct_AIModule_StaticRegisterNativesFBTCompositeChild()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BTCompositeChild")),new UScriptStruct::TCppStructOps<FBTCompositeChild>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFBTCompositeChild;
	UScriptStruct* Z_Construct_UScriptStruct_FBTCompositeChild()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBTCompositeChild_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BTCompositeChild"), sizeof(FBTCompositeChild), Get_Z_Construct_UScriptStruct_FBTCompositeChild_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBTCompositeChild>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecoratorOps_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
				{ "ToolTip", "logic operations for decorators" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DecoratorOps = { UE4CodeGen_Private::EPropertyClass::Array, "DecoratorOps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBTCompositeChild, DecoratorOps), METADATA_PARAMS(NewProp_DecoratorOps_MetaData, ARRAY_COUNT(NewProp_DecoratorOps_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DecoratorOps_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "DecoratorOps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBTDecoratorLogic, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Decorators_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
				{ "ToolTip", "execution decorators" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Decorators = { UE4CodeGen_Private::EPropertyClass::Array, "Decorators", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBTCompositeChild, Decorators), METADATA_PARAMS(NewProp_Decorators_MetaData, ARRAY_COUNT(NewProp_Decorators_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Decorators_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Decorators", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UBTDecorator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildTask_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildTask = { UE4CodeGen_Private::EPropertyClass::Object, "ChildTask", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBTCompositeChild, ChildTask), Z_Construct_UClass_UBTTaskNode_NoRegister, METADATA_PARAMS(NewProp_ChildTask_MetaData, ARRAY_COUNT(NewProp_ChildTask_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildComposite_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
				{ "ToolTip", "child node" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildComposite = { UE4CodeGen_Private::EPropertyClass::Object, "ChildComposite", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBTCompositeChild, ChildComposite), Z_Construct_UClass_UBTCompositeNode_NoRegister, METADATA_PARAMS(NewProp_ChildComposite_MetaData, ARRAY_COUNT(NewProp_ChildComposite_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DecoratorOps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DecoratorOps_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Decorators,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Decorators_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChildTask,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChildComposite,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BTCompositeChild",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBTCompositeChild),
				alignof(FBTCompositeChild),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBTCompositeChild_CRC() { return 153980578U; }
class UScriptStruct* FBTDecoratorLogic::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FBTDecoratorLogic_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBTDecoratorLogic, Z_Construct_UPackage__Script_AIModule(), TEXT("BTDecoratorLogic"), sizeof(FBTDecoratorLogic), Get_Z_Construct_UScriptStruct_FBTDecoratorLogic_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBTDecoratorLogic(FBTDecoratorLogic::StaticStruct, TEXT("/Script/AIModule"), TEXT("BTDecoratorLogic"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFBTDecoratorLogic
{
	FScriptStruct_AIModule_StaticRegisterNativesFBTDecoratorLogic()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BTDecoratorLogic")),new UScriptStruct::TCppStructOps<FBTDecoratorLogic>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFBTDecoratorLogic;
	UScriptStruct* Z_Construct_UScriptStruct_FBTDecoratorLogic()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBTDecoratorLogic_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BTDecoratorLogic"), sizeof(FBTDecoratorLogic), Get_Z_Construct_UScriptStruct_FBTDecoratorLogic_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBTDecoratorLogic>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Number_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_Number = { UE4CodeGen_Private::EPropertyClass::UInt16, "Number", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBTDecoratorLogic, Number), METADATA_PARAMS(NewProp_Number_MetaData, ARRAY_COUNT(NewProp_Number_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Operation = { UE4CodeGen_Private::EPropertyClass::Byte, "Operation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBTDecoratorLogic, Operation), Z_Construct_UEnum_AIModule_EBTDecoratorLogic, METADATA_PARAMS(NewProp_Operation_MetaData, ARRAY_COUNT(NewProp_Operation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Number,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Operation,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BTDecoratorLogic",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBTDecoratorLogic),
				alignof(FBTDecoratorLogic),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBTDecoratorLogic_CRC() { return 2765707683U; }
	void UBTCompositeNode::StaticRegisterNativesUBTCompositeNode()
	{
	}
	UClass* Z_Construct_UClass_UBTCompositeNode_NoRegister()
	{
		return UBTCompositeNode::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTCompositeNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTNode,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BehaviorTree/BTCompositeNode.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Services_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
				{ "ToolTip", "service nodes" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Services = { UE4CodeGen_Private::EPropertyClass::Array, "Services", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBTCompositeNode, Services), METADATA_PARAMS(NewProp_Services_MetaData, ARRAY_COUNT(NewProp_Services_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Services_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Services", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UBTService_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
				{ "ToolTip", "child nodes" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Children = { UE4CodeGen_Private::EPropertyClass::Array, "Children", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBTCompositeNode, Children), METADATA_PARAMS(NewProp_Children_MetaData, ARRAY_COUNT(NewProp_Children_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Children_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Children", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBTCompositeChild, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Services,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Services_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Children,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Children_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTCompositeNode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTCompositeNode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100081u,
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
	IMPLEMENT_CLASS(UBTCompositeNode, 1947132300);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTCompositeNode(Z_Construct_UClass_UBTCompositeNode, &UBTCompositeNode::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTCompositeNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTCompositeNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
