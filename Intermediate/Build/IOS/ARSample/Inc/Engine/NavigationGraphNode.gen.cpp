// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/NavigationGraphNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationGraphNode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ANavigationGraphNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ANavigationGraphNode();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ANavigationGraphNode::StaticRegisterNativesANavigationGraphNode()
	{
	}
	UClass* Z_Construct_UClass_ANavigationGraphNode_NoRegister()
	{
		return ANavigationGraphNode::StaticClass();
	}
	UClass* Z_Construct_UClass_ANavigationGraphNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AI/Navigation/NavigationGraphNode.h" },
				{ "IsBlueprintBase", "false" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationGraphNode.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ANavigationGraphNode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ANavigationGraphNode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880081u,
				nullptr, 0,
				nullptr, 0,
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavigationGraphNode, 3643254296);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavigationGraphNode(Z_Construct_UClass_ANavigationGraphNode, &ANavigationGraphNode::StaticClass, TEXT("/Script/Engine"), TEXT("ANavigationGraphNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavigationGraphNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
