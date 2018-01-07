// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/RichTextBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRichTextBlock() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_URichTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock();
	UMG_API UClass* Z_Construct_UClass_UTextLayoutWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_URichTextBlockDecorator_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature();
// End Cross Module References
	void URichTextBlock::StaticRegisterNativesURichTextBlock()
	{
	}
	UClass* Z_Construct_UClass_URichTextBlock_NoRegister()
	{
		return URichTextBlock::StaticClass();
	}
	UClass* Z_Construct_UClass_URichTextBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UTextLayoutWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DevelopmentStatus", "Experimental" },
				{ "IncludePath", "Components/RichTextBlock.h" },
				{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "The rich text block\n\n* Fancy Text\n* No Children" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Decorators_MetaData[] = {
				{ "Category", "Decorators" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Decorators = { UE4CodeGen_Private::EPropertyClass::Array, "Decorators", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020088000000009, 1, nullptr, STRUCT_OFFSET(URichTextBlock, Decorators), METADATA_PARAMS(NewProp_Decorators_MetaData, ARRAY_COUNT(NewProp_Decorators_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Decorators_Inner_MetaData[] = {
				{ "Category", "Decorators" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Decorators_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Decorators", RF_Public|RF_Transient|RF_MarkAsNative, 0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_URichTextBlockDecorator_NoRegister, METADATA_PARAMS(NewProp_Decorators_Inner_MetaData, ARRAY_COUNT(NewProp_Decorators_Inner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
				{ "ToolTip", "The default color for the text." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color = { UE4CodeGen_Private::EPropertyClass::Struct, "Color", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000015, 1, nullptr, STRUCT_OFFSET(URichTextBlock, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_Color_MetaData, ARRAY_COUNT(NewProp_Color_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
				{ "ToolTip", "The default font for the text." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font = { UE4CodeGen_Private::EPropertyClass::Struct, "Font", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000015, 1, nullptr, STRUCT_OFFSET(URichTextBlock, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(NewProp_Font_MetaData, ARRAY_COUNT(NewProp_Font_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
				{ "ToolTip", "A bindable delegate to allow logic to drive the text of the widget" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_TextDelegate = { UE4CodeGen_Private::EPropertyClass::Delegate, "TextDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080000, 1, nullptr, STRUCT_OFFSET(URichTextBlock, TextDelegate), Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature, METADATA_PARAMS(NewProp_TextDelegate_MetaData, ARRAY_COUNT(NewProp_TextDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
				{ "Category", "Content" },
				{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
				{ "MultiLine", "true" },
				{ "ToolTip", "The text to display" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Text, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(URichTextBlock, Text), METADATA_PARAMS(NewProp_Text_MetaData, ARRAY_COUNT(NewProp_Text_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Decorators,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Decorators_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Color,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Font,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<URichTextBlock>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&URichTextBlock::StaticClass,
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
	IMPLEMENT_CLASS(URichTextBlock, 783557319);
	static FCompiledInDefer Z_CompiledInDefer_UClass_URichTextBlock(Z_Construct_UClass_URichTextBlock, &URichTextBlock::StaticClass, TEXT("/Script/UMG"), TEXT("URichTextBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URichTextBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
