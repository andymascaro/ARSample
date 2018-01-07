// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
// End Cross Module References
	void USoundNode::StaticRegisterNativesUSoundNode()
	{
	}
	UClass* Z_Construct_UClass_USoundNode_NoRegister()
	{
		return USoundNode::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundNode()
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
				{ "IncludePath", "Sound/SoundNode.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNode.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphNode_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundNode.h" },
				{ "ToolTip", "Node's Graph representation, used to get position." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphNode = { UE4CodeGen_Private::EPropertyClass::Object, "GraphNode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(USoundNode, GraphNode), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(NewProp_GraphNode_MetaData, ARRAY_COUNT(NewProp_GraphNode_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildNodes_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundNode.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildNodes = { UE4CodeGen_Private::EPropertyClass::Array, "ChildNodes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(USoundNode, ChildNodes), METADATA_PARAMS(NewProp_ChildNodes_MetaData, ARRAY_COUNT(NewProp_ChildNodes_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildNodes_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ChildNodes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_USoundNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GraphNode,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChildNodes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChildNodes_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundNode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundNode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00101081u,
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
	IMPLEMENT_CLASS(USoundNode, 231465717);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNode(Z_Construct_UClass_USoundNode, &USoundNode::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
