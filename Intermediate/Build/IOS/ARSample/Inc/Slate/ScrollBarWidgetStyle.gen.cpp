// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Framework/Styling/ScrollBarWidgetStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScrollBarWidgetStyle() {}
// Cross Module References
	SLATE_API UClass* Z_Construct_UClass_UScrollBarWidgetStyle_NoRegister();
	SLATE_API UClass* Z_Construct_UClass_UScrollBarWidgetStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
	UPackage* Z_Construct_UPackage__Script_Slate();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBarStyle();
// End Cross Module References
	void UScrollBarWidgetStyle::StaticRegisterNativesUScrollBarWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_UScrollBarWidgetStyle_NoRegister()
	{
		return UScrollBarWidgetStyle::StaticClass();
	}
	UClass* Z_Construct_UClass_UScrollBarWidgetStyle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Slate,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Framework/Styling/ScrollBarWidgetStyle.h" },
				{ "ModuleRelativePath", "Public/Framework/Styling/ScrollBarWidgetStyle.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollBarStyle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Framework/Styling/ScrollBarWidgetStyle.h" },
				{ "ShowOnlyInnerProperties", "" },
				{ "ToolTip", "The actual data describing the scrollbox's appearance." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScrollBarStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "ScrollBarStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UScrollBarWidgetStyle, ScrollBarStyle), Z_Construct_UScriptStruct_FScrollBarStyle, METADATA_PARAMS(NewProp_ScrollBarStyle_MetaData, ARRAY_COUNT(NewProp_ScrollBarStyle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScrollBarStyle,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UScrollBarWidgetStyle>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UScrollBarWidgetStyle::StaticClass,
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
	IMPLEMENT_CLASS(UScrollBarWidgetStyle, 678280029);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScrollBarWidgetStyle(Z_Construct_UClass_UScrollBarWidgetStyle, &UScrollBarWidgetStyle::StaticClass, TEXT("/Script/Slate"), TEXT("UScrollBarWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScrollBarWidgetStyle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
