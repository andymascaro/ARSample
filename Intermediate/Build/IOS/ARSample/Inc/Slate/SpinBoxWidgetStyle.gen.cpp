// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Framework/Styling/SpinBoxWidgetStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpinBoxWidgetStyle() {}
// Cross Module References
	SLATE_API UClass* Z_Construct_UClass_USpinBoxWidgetStyle_NoRegister();
	SLATE_API UClass* Z_Construct_UClass_USpinBoxWidgetStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
	UPackage* Z_Construct_UPackage__Script_Slate();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSpinBoxStyle();
// End Cross Module References
	void USpinBoxWidgetStyle::StaticRegisterNativesUSpinBoxWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_USpinBoxWidgetStyle_NoRegister()
	{
		return USpinBoxWidgetStyle::StaticClass();
	}
	UClass* Z_Construct_UClass_USpinBoxWidgetStyle()
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
				{ "IncludePath", "Framework/Styling/SpinBoxWidgetStyle.h" },
				{ "ModuleRelativePath", "Public/Framework/Styling/SpinBoxWidgetStyle.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpinBoxStyle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Framework/Styling/SpinBoxWidgetStyle.h" },
				{ "ShowOnlyInnerProperties", "" },
				{ "ToolTip", "The actual data describing the button's appearance." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpinBoxStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "SpinBoxStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USpinBoxWidgetStyle, SpinBoxStyle), Z_Construct_UScriptStruct_FSpinBoxStyle, METADATA_PARAMS(NewProp_SpinBoxStyle_MetaData, ARRAY_COUNT(NewProp_SpinBoxStyle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpinBoxStyle,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USpinBoxWidgetStyle>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USpinBoxWidgetStyle::StaticClass,
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
	IMPLEMENT_CLASS(USpinBoxWidgetStyle, 2388105092);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpinBoxWidgetStyle(Z_Construct_UClass_USpinBoxWidgetStyle, &USpinBoxWidgetStyle::StaticClass, TEXT("/Script/Slate"), TEXT("USpinBoxWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpinBoxWidgetStyle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
