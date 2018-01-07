// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Blueprint/WidgetTree.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetTree() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UWidgetTree_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetTree();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
// End Cross Module References
	void UWidgetTree::StaticRegisterNativesUWidgetTree()
	{
	}
	UClass* Z_Construct_UClass_UWidgetTree_NoRegister()
	{
		return UWidgetTree::StaticClass();
	}
	UClass* Z_Construct_UClass_UWidgetTree()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Blueprint/WidgetTree.h" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetTree.h" },
				{ "ToolTip", "The widget tree manages the collection of widgets in a blueprint widget." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllWidgets_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetTree.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllWidgets = { UE4CodeGen_Private::EPropertyClass::Array, "AllWidgets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020088000000008, 1, nullptr, STRUCT_OFFSET(UWidgetTree, AllWidgets), METADATA_PARAMS(NewProp_AllWidgets_MetaData, ARRAY_COUNT(NewProp_AllWidgets_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllWidgets_Inner_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetTree.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllWidgets_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AllWidgets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(NewProp_AllWidgets_Inner_MetaData, ARRAY_COUNT(NewProp_AllWidgets_Inner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootWidget_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Blueprint/WidgetTree.h" },
				{ "ToolTip", "The root widget of the tree" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootWidget = { UE4CodeGen_Private::EPropertyClass::Object, "RootWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0012000000080008, 1, nullptr, STRUCT_OFFSET(UWidgetTree, RootWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(NewProp_RootWidget_MetaData, ARRAY_COUNT(NewProp_RootWidget_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllWidgets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllWidgets_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RootWidget,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UWidgetTree>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UWidgetTree::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(UWidgetTree, 1603586167);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetTree(Z_Construct_UClass_UWidgetTree, &UWidgetTree::StaticClass, TEXT("/Script/UMG"), TEXT("UWidgetTree"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetTree);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
