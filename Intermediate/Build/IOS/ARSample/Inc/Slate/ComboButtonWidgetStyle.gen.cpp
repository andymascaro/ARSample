// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Framework/Styling/ComboButtonWidgetStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboButtonWidgetStyle() {}
// Cross Module References
	SLATE_API UClass* Z_Construct_UClass_UComboButtonWidgetStyle_NoRegister();
	SLATE_API UClass* Z_Construct_UClass_UComboButtonWidgetStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
	UPackage* Z_Construct_UPackage__Script_Slate();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FComboButtonStyle();
// End Cross Module References
	void UComboButtonWidgetStyle::StaticRegisterNativesUComboButtonWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_UComboButtonWidgetStyle_NoRegister()
	{
		return UComboButtonWidgetStyle::StaticClass();
	}
	UClass* Z_Construct_UClass_UComboButtonWidgetStyle()
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
				{ "IncludePath", "Framework/Styling/ComboButtonWidgetStyle.h" },
				{ "ModuleRelativePath", "Public/Framework/Styling/ComboButtonWidgetStyle.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComboButtonStyle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Framework/Styling/ComboButtonWidgetStyle.h" },
				{ "ShowOnlyInnerProperties", "" },
				{ "ToolTip", "The actual data describing the combo button's appearance." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComboButtonStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "ComboButtonStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UComboButtonWidgetStyle, ComboButtonStyle), Z_Construct_UScriptStruct_FComboButtonStyle, METADATA_PARAMS(NewProp_ComboButtonStyle_MetaData, ARRAY_COUNT(NewProp_ComboButtonStyle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComboButtonStyle,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UComboButtonWidgetStyle>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UComboButtonWidgetStyle::StaticClass,
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
	IMPLEMENT_CLASS(UComboButtonWidgetStyle, 3501855356);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComboButtonWidgetStyle(Z_Construct_UClass_UComboButtonWidgetStyle, &UComboButtonWidgetStyle::StaticClass, TEXT("/Script/Slate"), TEXT("UComboButtonWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboButtonWidgetStyle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
