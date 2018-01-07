// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/BTTaskNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTaskNode() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UClass* Z_Construct_UClass_UBTNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_NoRegister();
// End Cross Module References
	void UBTTaskNode::StaticRegisterNativesUBTTaskNode()
	{
	}
	UClass* Z_Construct_UClass_UBTTaskNode_NoRegister()
	{
		return UBTTaskNode::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTTaskNode()
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
				{ "IncludePath", "BehaviorTree/BTTaskNode.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTTaskNode.h" },
				{ "ToolTip", "Task are leaf nodes of behavior tree, which perform actual actions\n\nBecause some of them can be instanced for specific AI, following virtual functions are not marked as const:\n - ExecuteTask\n - AbortTask\n - TickTask\n - OnMessage\n\nIf your node is not being instanced (default behavior), DO NOT change any properties of object within those functions!\nTemplate nodes are shared across all behavior tree components using the same tree asset and must store\ntheir runtime properties in provided NodeMemory block (allocation size determined by GetInstanceMemorySize() )" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreRestartSelf_MetaData[] = {
				{ "Category", "Task" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTTaskNode.h" },
				{ "ToolTip", "if set, task search will be discarded when this task is selected to execute but is already running" },
			};
#endif
			auto NewProp_bIgnoreRestartSelf_SetBit = [](void* Obj){ ((UBTTaskNode*)Obj)->bIgnoreRestartSelf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreRestartSelf = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreRestartSelf", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTTaskNode), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIgnoreRestartSelf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIgnoreRestartSelf_MetaData, ARRAY_COUNT(NewProp_bIgnoreRestartSelf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Services_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTTaskNode.h" },
				{ "ToolTip", "service nodes" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Services = { UE4CodeGen_Private::EPropertyClass::Array, "Services", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBTTaskNode, Services), METADATA_PARAMS(NewProp_Services_MetaData, ARRAY_COUNT(NewProp_Services_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Services_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Services", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UBTService_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIgnoreRestartSelf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Services,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Services_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTTaskNode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTTaskNode::StaticClass,
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
	IMPLEMENT_CLASS(UBTTaskNode, 1218528299);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTaskNode(Z_Construct_UClass_UBTTaskNode, &UBTTaskNode::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTaskNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTaskNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
