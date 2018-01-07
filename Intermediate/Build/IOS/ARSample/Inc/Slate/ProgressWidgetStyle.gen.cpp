// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Framework/Styling/ProgressWidgetStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProgressWidgetStyle() {}
// Cross Module References
	SLATE_API UClass* Z_Construct_UClass_UProgressWidgetStyle_NoRegister();
	SLATE_API UClass* Z_Construct_UClass_UProgressWidgetStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
	UPackage* Z_Construct_UPackage__Script_Slate();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FProgressBarStyle();
// End Cross Module References
	void UProgressWidgetStyle::StaticRegisterNativesUProgressWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_UProgressWidgetStyle_NoRegister()
	{
		return UProgressWidgetStyle::StaticClass();
	}
	UClass* Z_Construct_UClass_UProgressWidgetStyle()
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
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Framework/Styling/ProgressWidgetStyle.h" },
				{ "ModuleRelativePath", "Public/Framework/Styling/ProgressWidgetStyle.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressBarStyle_MetaData[] = {
				{ "Category", "Style" },
				{ "ModuleRelativePath", "Public/Framework/Styling/ProgressWidgetStyle.h" },
				{ "ShowOnlyInnerProperties", "" },
				{ "ToolTip", "The actual data describing the button's appearance." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProgressBarStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "ProgressBarStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UProgressWidgetStyle, ProgressBarStyle), Z_Construct_UScriptStruct_FProgressBarStyle, METADATA_PARAMS(NewProp_ProgressBarStyle_MetaData, ARRAY_COUNT(NewProp_ProgressBarStyle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProgressBarStyle,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UProgressWidgetStyle>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UProgressWidgetStyle::StaticClass,
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
	IMPLEMENT_CLASS(UProgressWidgetStyle, 3818585715);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProgressWidgetStyle(Z_Construct_UClass_UProgressWidgetStyle, &UProgressWidgetStyle::StaticClass, TEXT("/Script/Slate"), TEXT("UProgressWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProgressWidgetStyle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
