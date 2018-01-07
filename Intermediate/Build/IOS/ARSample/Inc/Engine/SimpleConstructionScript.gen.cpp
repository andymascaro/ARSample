// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/SimpleConstructionScript.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleConstructionScript() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USimpleConstructionScript_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USimpleConstructionScript();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USCS_Node_NoRegister();
// End Cross Module References
	void USimpleConstructionScript::StaticRegisterNativesUSimpleConstructionScript()
	{
	}
	UClass* Z_Construct_UClass_USimpleConstructionScript_NoRegister()
	{
		return USimpleConstructionScript::StaticClass();
	}
	UClass* Z_Construct_UClass_USimpleConstructionScript()
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
				{ "IncludePath", "Engine/SimpleConstructionScript.h" },
				{ "ModuleRelativePath", "Classes/Engine/SimpleConstructionScript.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorComponentNodes_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SimpleConstructionScript.h" },
				{ "ToolTip", "(DEPRECATED) Actor Component based nodes are stored here.  They cannot be in the tree hierarchy" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorComponentNodes = { UE4CodeGen_Private::EPropertyClass::Array, "ActorComponentNodes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(USimpleConstructionScript, ActorComponentNodes_DEPRECATED), METADATA_PARAMS(NewProp_ActorComponentNodes_MetaData, ARRAY_COUNT(NewProp_ActorComponentNodes_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorComponentNodes_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActorComponentNodes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000020000000, 1, nullptr, 0, Z_Construct_UClass_USCS_Node_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootNode_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SimpleConstructionScript.h" },
				{ "ToolTip", "(DEPRECATED) Root node of the construction script" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootNode = { UE4CodeGen_Private::EPropertyClass::Object, "RootNode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(USimpleConstructionScript, RootNode_DEPRECATED), Z_Construct_UClass_USCS_Node_NoRegister, METADATA_PARAMS(NewProp_RootNode_MetaData, ARRAY_COUNT(NewProp_RootNode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSceneRootNode_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SimpleConstructionScript.h" },
				{ "ToolTip", "Default scene root node; used when no other nodes are available to use as the root" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultSceneRootNode = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultSceneRootNode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(USimpleConstructionScript, DefaultSceneRootNode), Z_Construct_UClass_USCS_Node_NoRegister, METADATA_PARAMS(NewProp_DefaultSceneRootNode_MetaData, ARRAY_COUNT(NewProp_DefaultSceneRootNode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllNodes_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SimpleConstructionScript.h" },
				{ "ToolTip", "All nodes that exist in the hierarchy of this SimpleConstructionScript" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllNodes = { UE4CodeGen_Private::EPropertyClass::Array, "AllNodes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(USimpleConstructionScript, AllNodes), METADATA_PARAMS(NewProp_AllNodes_MetaData, ARRAY_COUNT(NewProp_AllNodes_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllNodes_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AllNodes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_USCS_Node_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootNodes_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SimpleConstructionScript.h" },
				{ "ToolTip", "Root nodes of the construction script" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RootNodes = { UE4CodeGen_Private::EPropertyClass::Array, "RootNodes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(USimpleConstructionScript, RootNodes), METADATA_PARAMS(NewProp_RootNodes_MetaData, ARRAY_COUNT(NewProp_RootNodes_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootNodes_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "RootNodes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_USCS_Node_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorComponentNodes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorComponentNodes_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RootNode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultSceneRootNode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllNodes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllNodes_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RootNodes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RootNodes_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USimpleConstructionScript>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USimpleConstructionScript::StaticClass,
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
	IMPLEMENT_CLASS(USimpleConstructionScript, 3035208253);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USimpleConstructionScript(Z_Construct_UClass_USimpleConstructionScript, &USimpleConstructionScript::StaticClass, TEXT("/Script/Engine"), TEXT("USimpleConstructionScript"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleConstructionScript);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
