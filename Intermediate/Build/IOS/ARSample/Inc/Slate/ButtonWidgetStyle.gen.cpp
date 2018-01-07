// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Framework/Styling/ButtonWidgetStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeButtonWidgetStyle() {}
// Cross Module References
	SLATE_API UClass* Z_Construct_UClass_UButtonWidgetStyle_NoRegister();
	SLATE_API UClass* Z_Construct_UClass_UButtonWidgetStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
	UPackage* Z_Construct_UPackage__Script_Slate();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
// End Cross Module References
	void UButtonWidgetStyle::StaticRegisterNativesUButtonWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_UButtonWidgetStyle_NoRegister()
	{
		return UButtonWidgetStyle::StaticClass();
	}
	UClass* Z_Construct_UClass_UButtonWidgetStyle()
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
				{ "IncludePath", "Framework/Styling/ButtonWidgetStyle.h" },
				{ "ModuleRelativePath", "Public/Framework/Styling/ButtonWidgetStyle.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonStyle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Framework/Styling/ButtonWidgetStyle.h" },
				{ "ShowOnlyInnerProperties", "" },
				{ "ToolTip", "The actual data describing the button's appearance." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "ButtonStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UButtonWidgetStyle, ButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(NewProp_ButtonStyle_MetaData, ARRAY_COUNT(NewProp_ButtonStyle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ButtonStyle,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UButtonWidgetStyle>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UButtonWidgetStyle::StaticClass,
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
	IMPLEMENT_CLASS(UButtonWidgetStyle, 1139783200);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UButtonWidgetStyle(Z_Construct_UClass_UButtonWidgetStyle, &UButtonWidgetStyle::StaticClass, TEXT("/Script/Slate"), TEXT("UButtonWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UButtonWidgetStyle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
