// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Framework/Styling/TextBlockWidgetStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextBlockWidgetStyle() {}
// Cross Module References
	SLATE_API UClass* Z_Construct_UClass_UTextBlockWidgetStyle_NoRegister();
	SLATE_API UClass* Z_Construct_UClass_UTextBlockWidgetStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
	UPackage* Z_Construct_UPackage__Script_Slate();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
// End Cross Module References
	void UTextBlockWidgetStyle::StaticRegisterNativesUTextBlockWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_UTextBlockWidgetStyle_NoRegister()
	{
		return UTextBlockWidgetStyle::StaticClass();
	}
	UClass* Z_Construct_UClass_UTextBlockWidgetStyle()
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
				{ "IncludePath", "Framework/Styling/TextBlockWidgetStyle.h" },
				{ "ModuleRelativePath", "Public/Framework/Styling/TextBlockWidgetStyle.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextBlockStyle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Framework/Styling/TextBlockWidgetStyle.h" },
				{ "ShowOnlyInnerProperties", "" },
				{ "ToolTip", "The actual data describing the button's appearance." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextBlockStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "TextBlockStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UTextBlockWidgetStyle, TextBlockStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(NewProp_TextBlockStyle_MetaData, ARRAY_COUNT(NewProp_TextBlockStyle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextBlockStyle,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTextBlockWidgetStyle>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTextBlockWidgetStyle::StaticClass,
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
	IMPLEMENT_CLASS(UTextBlockWidgetStyle, 3971155017);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextBlockWidgetStyle(Z_Construct_UClass_UTextBlockWidgetStyle, &UTextBlockWidgetStyle::StaticClass, TEXT("/Script/Slate"), TEXT("UTextBlockWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextBlockWidgetStyle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
