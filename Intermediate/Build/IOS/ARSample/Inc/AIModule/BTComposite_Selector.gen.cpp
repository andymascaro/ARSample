// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Composites/BTComposite_Selector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTComposite_Selector() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTComposite_Selector_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTComposite_Selector();
	AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTComposite_Selector::StaticRegisterNativesUBTComposite_Selector()
	{
	}
	UClass* Z_Construct_UClass_UBTComposite_Selector_NoRegister()
	{
		return UBTComposite_Selector::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTComposite_Selector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTCompositeNode,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BehaviorTree/Composites/BTComposite_Selector.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Composites/BTComposite_Selector.h" },
				{ "ToolTip", "Selector composite node.\nSelector Nodes execute their children from left to right, and will stop executing its children when one of their children succeeds.\nIf a Selector's child succeeds, the Selector succeeds. If all the Selector's children fail, the Selector fails." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTComposite_Selector>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTComposite_Selector::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTComposite_Selector, 96762635);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTComposite_Selector(Z_Construct_UClass_UBTComposite_Selector, &UBTComposite_Selector::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTComposite_Selector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTComposite_Selector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
