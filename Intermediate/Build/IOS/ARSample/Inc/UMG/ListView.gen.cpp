// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/ListView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeListView() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UListView_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UListView();
	UMG_API UClass* Z_Construct_UClass_UTableViewBase();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UTableViewBase_OnGenerateRowUObject__DelegateSignature();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ESelectionMode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UListView::StaticRegisterNativesUListView()
	{
	}
	UClass* Z_Construct_UClass_UListView_NoRegister()
	{
		return UListView::StaticClass();
	}
	UClass* Z_Construct_UClass_UListView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UTableViewBase,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DevelopmentStatus", "Experimental" },
				{ "IncludePath", "Components/ListView.h" },
				{ "ModuleRelativePath", "Public/Components/ListView.h" },
				{ "ToolTip", "Allows thousands of items to be displayed in a list.  Generates widgets dynamically for each item." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGenerateRowEvent_MetaData[] = {
				{ "Category", "Events" },
				{ "IsBindableEvent", "True" },
				{ "ModuleRelativePath", "Public/Components/ListView.h" },
				{ "ToolTip", "Called when a widget needs to be generated" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnGenerateRowEvent = { UE4CodeGen_Private::EPropertyClass::Delegate, "OnGenerateRowEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080001, 1, nullptr, STRUCT_OFFSET(UListView, OnGenerateRowEvent), Z_Construct_UDelegateFunction_UTableViewBase_OnGenerateRowUObject__DelegateSignature, METADATA_PARAMS(NewProp_OnGenerateRowEvent_MetaData, ARRAY_COUNT(NewProp_OnGenerateRowEvent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionMode_MetaData[] = {
				{ "Category", "Content" },
				{ "ModuleRelativePath", "Public/Components/ListView.h" },
				{ "ToolTip", "The selection method for the list" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectionMode = { UE4CodeGen_Private::EPropertyClass::Byte, "SelectionMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UListView, SelectionMode), Z_Construct_UEnum_Slate_ESelectionMode, METADATA_PARAMS(NewProp_SelectionMode_MetaData, ARRAY_COUNT(NewProp_SelectionMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
				{ "Category", "Content" },
				{ "ModuleRelativePath", "Public/Components/ListView.h" },
				{ "ToolTip", "The list of items to generate widgets for" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items = { UE4CodeGen_Private::EPropertyClass::Array, "Items", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UListView, Items), METADATA_PARAMS(NewProp_Items_MetaData, ARRAY_COUNT(NewProp_Items_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Items_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Items", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemHeight_MetaData[] = {
				{ "Category", "Content" },
				{ "ModuleRelativePath", "Public/Components/ListView.h" },
				{ "ToolTip", "The height of each widget" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ItemHeight = { UE4CodeGen_Private::EPropertyClass::Float, "ItemHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UListView, ItemHeight), METADATA_PARAMS(NewProp_ItemHeight_MetaData, ARRAY_COUNT(NewProp_ItemHeight_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnGenerateRowEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectionMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Items,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Items_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemHeight,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UListView>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UListView::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UListView, 2888084982);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UListView(Z_Construct_UClass_UListView, &UListView::StaticClass, TEXT("/Script/UMG"), TEXT("UListView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UListView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
