// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/BehaviorTree.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTree() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBTDecoratorLogic();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEditedDocumentInfo();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode_NoRegister();
// End Cross Module References
	void UBehaviorTree::StaticRegisterNativesUBehaviorTree()
	{
	}
	UClass* Z_Construct_UClass_UBehaviorTree_NoRegister()
	{
		return UBehaviorTree::StaticClass();
	}
	UClass* Z_Construct_UClass_UBehaviorTree()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "BehaviorTree/BehaviorTree.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTree.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootDecoratorOps_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTree.h" },
				{ "ToolTip", "logic operators for root level decorators, used by subtrees" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RootDecoratorOps = { UE4CodeGen_Private::EPropertyClass::Array, "RootDecoratorOps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBehaviorTree, RootDecoratorOps), METADATA_PARAMS(NewProp_RootDecoratorOps_MetaData, ARRAY_COUNT(NewProp_RootDecoratorOps_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootDecoratorOps_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "RootDecoratorOps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBTDecoratorLogic, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootDecorators_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTree.h" },
				{ "ToolTip", "root level decorators, used by subtrees" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RootDecorators = { UE4CodeGen_Private::EPropertyClass::Array, "RootDecorators", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBehaviorTree, RootDecorators), METADATA_PARAMS(NewProp_RootDecorators_MetaData, ARRAY_COUNT(NewProp_RootDecorators_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootDecorators_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "RootDecorators", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UBTDecorator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardAsset_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTree.h" },
				{ "ToolTip", "blackboard asset for this tree" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackboardAsset = { UE4CodeGen_Private::EPropertyClass::Object, "BlackboardAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBehaviorTree, BlackboardAsset), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(NewProp_BlackboardAsset_MetaData, ARRAY_COUNT(NewProp_BlackboardAsset_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastEditedDocuments_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTree.h" },
				{ "ToolTip", "Info about the graphs we last edited" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LastEditedDocuments = { UE4CodeGen_Private::EPropertyClass::Array, "LastEditedDocuments", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UBehaviorTree, LastEditedDocuments), METADATA_PARAMS(NewProp_LastEditedDocuments_MetaData, ARRAY_COUNT(NewProp_LastEditedDocuments_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastEditedDocuments_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LastEditedDocuments", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FEditedDocumentInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BTGraph_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTree.h" },
				{ "ToolTip", "Graph for Behavior Tree" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BTGraph = { UE4CodeGen_Private::EPropertyClass::Object, "BTGraph", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UBehaviorTree, BTGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(NewProp_BTGraph_MetaData, ARRAY_COUNT(NewProp_BTGraph_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootNode_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTree.h" },
				{ "ToolTip", "root node of loaded tree" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootNode = { UE4CodeGen_Private::EPropertyClass::Object, "RootNode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBehaviorTree, RootNode), Z_Construct_UClass_UBTCompositeNode_NoRegister, METADATA_PARAMS(NewProp_RootNode_MetaData, ARRAY_COUNT(NewProp_RootNode_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RootDecoratorOps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RootDecoratorOps_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RootDecorators,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RootDecorators_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlackboardAsset,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastEditedDocuments,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastEditedDocuments_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BTGraph,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RootNode,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBehaviorTree>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBehaviorTree::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UBehaviorTree, 2271389525);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBehaviorTree(Z_Construct_UClass_UBehaviorTree, &UBehaviorTree::StaticClass, TEXT("/Script/AIModule"), TEXT("UBehaviorTree"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorTree);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
