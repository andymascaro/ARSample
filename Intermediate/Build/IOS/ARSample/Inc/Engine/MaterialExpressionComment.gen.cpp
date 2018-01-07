// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionComment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionComment() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionComment_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionComment();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UMaterialExpressionComment::StaticRegisterNativesUMaterialExpressionComment()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionComment_NoRegister()
	{
		return UMaterialExpressionComment::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionComment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object" },
				{ "IncludePath", "Materials/MaterialExpressionComment.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComment.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontSize_MetaData[] = {
				{ "Category", "MaterialExpressionComment" },
				{ "ClampMax", "1000" },
				{ "ClampMin", "1" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComment.h" },
				{ "ToolTip", "Size of the text in the comment box" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_FontSize = { UE4CodeGen_Private::EPropertyClass::Int, "FontSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionComment, FontSize), METADATA_PARAMS(NewProp_FontSize_MetaData, ARRAY_COUNT(NewProp_FontSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommentColor_MetaData[] = {
				{ "Category", "MaterialExpressionComment" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComment.h" },
				{ "ToolTip", "Color to style comment with" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CommentColor = { UE4CodeGen_Private::EPropertyClass::Struct, "CommentColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionComment, CommentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_CommentColor_MetaData, ARRAY_COUNT(NewProp_CommentColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
				{ "Category", "MaterialExpressionComment" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComment.h" },
				{ "MultiLine", "TRUE" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Str, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionComment, Text), METADATA_PARAMS(NewProp_Text_MetaData, ARRAY_COUNT(NewProp_Text_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComment.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeY = { UE4CodeGen_Private::EPropertyClass::Int, "SizeY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionComment, SizeY), METADATA_PARAMS(NewProp_SizeY_MetaData, ARRAY_COUNT(NewProp_SizeY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComment.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX = { UE4CodeGen_Private::EPropertyClass::Int, "SizeX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionComment, SizeX), METADATA_PARAMS(NewProp_SizeX_MetaData, ARRAY_COUNT(NewProp_SizeX_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FontSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CommentColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SizeY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SizeX,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionComment>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionComment::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionComment, 1918480748);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionComment(Z_Construct_UClass_UMaterialExpressionComment, &UMaterialExpressionComment::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionComment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionComment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
