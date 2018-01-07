// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Slate/ButtonStyleAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeButtonStyleAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UButtonStyleAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UButtonStyleAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
// End Cross Module References
	void UButtonStyleAsset::StaticRegisterNativesUButtonStyleAsset()
	{
	}
	UClass* Z_Construct_UClass_UButtonStyleAsset_NoRegister()
	{
		return UButtonStyleAsset::StaticClass();
	}
	UClass* Z_Construct_UClass_UButtonStyleAsset()
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
				{ "IncludePath", "Slate/ButtonStyleAsset.h" },
				{ "ModuleRelativePath", "Classes/Slate/ButtonStyleAsset.h" },
				{ "ToolTip", "An asset describing a button's appearance.\nJust a wrapper for the struct with real data in it.style factory" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonStyle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Classes/Slate/ButtonStyleAsset.h" },
				{ "ShowOnlyInnerProperties", "" },
				{ "ToolTip", "The actual data describing the button's appearance." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "ButtonStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UButtonStyleAsset, ButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(NewProp_ButtonStyle_MetaData, ARRAY_COUNT(NewProp_ButtonStyle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ButtonStyle,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UButtonStyleAsset>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UButtonStyleAsset::StaticClass,
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
	IMPLEMENT_CLASS(UButtonStyleAsset, 7263203);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UButtonStyleAsset(Z_Construct_UClass_UButtonStyleAsset, &UButtonStyleAsset::StaticClass, TEXT("/Script/Engine"), TEXT("UButtonStyleAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UButtonStyleAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
