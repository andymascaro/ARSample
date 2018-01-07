// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/BTNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTNode() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTNode_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
// End Cross Module References
	void UBTNode::StaticRegisterNativesUBTNode()
	{
	}
	UClass* Z_Construct_UClass_UBTNode_NoRegister()
	{
		return UBTNode::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTNode()
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
				{ "IncludePath", "BehaviorTree/BTNode.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTNode.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentNode_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTNode.h" },
				{ "ToolTip", "parent node" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentNode = { UE4CodeGen_Private::EPropertyClass::Object, "ParentNode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UBTNode, ParentNode), Z_Construct_UClass_UBTCompositeNode_NoRegister, METADATA_PARAMS(NewProp_ParentNode_MetaData, ARRAY_COUNT(NewProp_ParentNode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreeAsset_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTNode.h" },
				{ "ToolTip", "source asset" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TreeAsset = { UE4CodeGen_Private::EPropertyClass::Object, "TreeAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UBTNode, TreeAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(NewProp_TreeAsset_MetaData, ARRAY_COUNT(NewProp_TreeAsset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[] = {
				{ "Category", "Description" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTNode.h" },
				{ "ToolTip", "node name" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_NodeName = { UE4CodeGen_Private::EPropertyClass::Str, "NodeName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTNode, NodeName), METADATA_PARAMS(NewProp_NodeName_MetaData, ARRAY_COUNT(NewProp_NodeName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentNode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TreeAsset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeName,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, (int32)VTABLE_OFFSET(UBTNode, IGameplayTaskOwnerInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTNode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTNode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100081u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTNode, 4155381280);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTNode(Z_Construct_UClass_UBTNode, &UBTNode::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
