// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Styling/SlateWidgetStyleAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateWidgetStyleAsset() {}
// Cross Module References
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase_NoRegister();
// End Cross Module References
	void USlateWidgetStyleAsset::StaticRegisterNativesUSlateWidgetStyleAsset()
	{
	}
	UClass* Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister()
	{
		return USlateWidgetStyleAsset::StaticClass();
	}
	UClass* Z_Construct_UClass_USlateWidgetStyleAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object" },
				{ "IncludePath", "Styling/SlateWidgetStyleAsset.h" },
				{ "ModuleRelativePath", "Public/Styling/SlateWidgetStyleAsset.h" },
				{ "ToolTip", "Just a wrapper for the struct with real data in it." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomStyle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Styling/SlateWidgetStyleAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomStyle = { UE4CodeGen_Private::EPropertyClass::Object, "CustomStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0012000000080009, 1, nullptr, STRUCT_OFFSET(USlateWidgetStyleAsset, CustomStyle), Z_Construct_UClass_USlateWidgetStyleContainerBase_NoRegister, METADATA_PARAMS(NewProp_CustomStyle_MetaData, ARRAY_COUNT(NewProp_CustomStyle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomStyle,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USlateWidgetStyleAsset>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USlateWidgetStyleAsset::StaticClass,
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
	IMPLEMENT_CLASS(USlateWidgetStyleAsset, 4177203411);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlateWidgetStyleAsset(Z_Construct_UClass_USlateWidgetStyleAsset, &USlateWidgetStyleAsset::StaticClass, TEXT("/Script/SlateCore"), TEXT("USlateWidgetStyleAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateWidgetStyleAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
