// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Slate/CheckboxStyleAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckboxStyleAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCheckBoxStyleAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCheckBoxStyleAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCheckBoxStyle();
// End Cross Module References
	void UCheckBoxStyleAsset::StaticRegisterNativesUCheckBoxStyleAsset()
	{
	}
	UClass* Z_Construct_UClass_UCheckBoxStyleAsset_NoRegister()
	{
		return UCheckBoxStyleAsset::StaticClass();
	}
	UClass* Z_Construct_UClass_UCheckBoxStyleAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object" },
				{ "IncludePath", "Slate/CheckboxStyleAsset.h" },
				{ "ModuleRelativePath", "Classes/Slate/CheckboxStyleAsset.h" },
				{ "ToolTip", "An asset describing a CheckBox's appearance.\nJust a wrapper for the struct with real data in it." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckBoxStyle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Classes/Slate/CheckboxStyleAsset.h" },
				{ "ShowOnlyInnerProperties", "" },
				{ "ToolTip", "The actual data describing the Check Box's appearance." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CheckBoxStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "CheckBoxStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UCheckBoxStyleAsset, CheckBoxStyle), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(NewProp_CheckBoxStyle_MetaData, ARRAY_COUNT(NewProp_CheckBoxStyle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CheckBoxStyle,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCheckBoxStyleAsset>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCheckBoxStyleAsset::StaticClass,
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
	IMPLEMENT_CLASS(UCheckBoxStyleAsset, 3153228964);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCheckBoxStyleAsset(Z_Construct_UClass_UCheckBoxStyleAsset, &UCheckBoxStyleAsset::StaticClass, TEXT("/Script/Engine"), TEXT("UCheckBoxStyleAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckBoxStyleAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
