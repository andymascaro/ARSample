// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialFunction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionComment_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UMaterialFunction::StaticRegisterNativesUMaterialFunction()
	{
	}
	UClass* Z_Construct_UClass_UMaterialFunction_NoRegister()
	{
		return UMaterialFunction::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialFunction()
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
				{ "BlueprintType", "true" },
				{ "HideCategories", "object" },
				{ "IncludePath", "Materials/MaterialFunction.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
				{ "ToolTip", "A Material Function is a collection of material expressions that can be reused in different materials" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[] = {
				{ "Category", "Thumbnail" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
				{ "ToolTip", "Information for thumbnail rendering" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailInfo = { UE4CodeGen_Private::EPropertyClass::Object, "ThumbnailInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x00120008000a0009, 1, nullptr, STRUCT_OFFSET(UMaterialFunction, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(NewProp_ThumbnailInfo_MetaData, ARRAY_COUNT(NewProp_ThumbnailInfo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombinedOutputTypes_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_CombinedOutputTypes = { UE4CodeGen_Private::EPropertyClass::UInt32, "CombinedOutputTypes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010800000000, 1, nullptr, STRUCT_OFFSET(UMaterialFunction, CombinedOutputTypes), METADATA_PARAMS(NewProp_CombinedOutputTypes_MetaData, ARRAY_COUNT(NewProp_CombinedOutputTypes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombinedInputTypes_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_CombinedInputTypes = { UE4CodeGen_Private::EPropertyClass::UInt32, "CombinedInputTypes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010800000000, 1, nullptr, STRUCT_OFFSET(UMaterialFunction, CombinedInputTypes), METADATA_PARAMS(NewProp_CombinedInputTypes_MetaData, ARRAY_COUNT(NewProp_CombinedInputTypes_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReentrantFlag_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
				{ "ToolTip", "Transient flag used to track re-entrance in recursive functions like IsDependent." },
			};
#endif
			auto NewProp_bReentrantFlag_SetBit = [](void* Obj){ ((UMaterialFunction*)Obj)->bReentrantFlag = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReentrantFlag = { UE4CodeGen_Private::EPropertyClass::Bool, "bReentrantFlag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialFunction), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReentrantFlag_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bReentrantFlag_MetaData, ARRAY_COUNT(NewProp_bReentrantFlag_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterial_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "PreviewMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UMaterialFunction, PreviewMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(NewProp_PreviewMaterial_MetaData, ARRAY_COUNT(NewProp_PreviewMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionEditorComments_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
				{ "ToolTip", "Array of comments associated with this material; viewed in the material editor." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FunctionEditorComments = { UE4CodeGen_Private::EPropertyClass::Array, "FunctionEditorComments", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UMaterialFunction, FunctionEditorComments), METADATA_PARAMS(NewProp_FunctionEditorComments_MetaData, ARRAY_COUNT(NewProp_FunctionEditorComments_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FunctionEditorComments_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "FunctionEditorComments", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialExpressionComment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionExpressions_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
				{ "ToolTip", "Array of material expressions, excluding Comments.  Used by the material editor." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FunctionExpressions = { UE4CodeGen_Private::EPropertyClass::Array, "FunctionExpressions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialFunction, FunctionExpressions), METADATA_PARAMS(NewProp_FunctionExpressions_MetaData, ARRAY_COUNT(NewProp_FunctionExpressions_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FunctionExpressions_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "FunctionExpressions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LibraryCategoriesText_MetaData[] = {
				{ "Category", "MaterialFunction" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
				{ "ToolTip", "Categories that this function belongs to in the material function library.\nIdeally categories should be chosen carefully so that there are not too many." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LibraryCategoriesText = { UE4CodeGen_Private::EPropertyClass::Array, "LibraryCategoriesText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010800000001, 1, nullptr, STRUCT_OFFSET(UMaterialFunction, LibraryCategoriesText), METADATA_PARAMS(NewProp_LibraryCategoriesText_MetaData, ARRAY_COUNT(NewProp_LibraryCategoriesText_MetaData)) };
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_LibraryCategoriesText_Inner = { UE4CodeGen_Private::EPropertyClass::Text, "LibraryCategoriesText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LibraryCategories_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
				{ "ToolTip", "Categories that this function belongs to in the material function library.\nIdeally categories should be chosen carefully so that there are not too many." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LibraryCategories = { UE4CodeGen_Private::EPropertyClass::Array, "LibraryCategories", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010820000000, 1, nullptr, STRUCT_OFFSET(UMaterialFunction, LibraryCategories_DEPRECATED), METADATA_PARAMS(NewProp_LibraryCategories_MetaData, ARRAY_COUNT(NewProp_LibraryCategories_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_LibraryCategories_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "LibraryCategories", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000820000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExposeToLibrary_MetaData[] = {
				{ "Category", "MaterialFunction" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
				{ "ToolTip", "Whether to list this function in the material function library, which is a window in the material editor that lists categorized functions." },
			};
#endif
			auto NewProp_bExposeToLibrary_SetBit = [](void* Obj){ ((UMaterialFunction*)Obj)->bExposeToLibrary = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExposeToLibrary = { UE4CodeGen_Private::EPropertyClass::Bool, "bExposeToLibrary", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialFunction), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bExposeToLibrary_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bExposeToLibrary_MetaData, ARRAY_COUNT(NewProp_bExposeToLibrary_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
				{ "Category", "MaterialFunction" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
				{ "ToolTip", "Description of the function which will be displayed as a tooltip wherever the function is used." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description = { UE4CodeGen_Private::EPropertyClass::Str, "Description", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000001, 1, nullptr, STRUCT_OFFSET(UMaterialFunction, Description), METADATA_PARAMS(NewProp_Description_MetaData, ARRAY_COUNT(NewProp_Description_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentFunction_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
				{ "ToolTip", "Used in the material editor, points to the function asset being edited, which this function is just a preview for." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentFunction = { UE4CodeGen_Private::EPropertyClass::Object, "ParentFunction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UMaterialFunction, ParentFunction), Z_Construct_UClass_UMaterialFunction_NoRegister, METADATA_PARAMS(NewProp_ParentFunction_MetaData, ARRAY_COUNT(NewProp_ParentFunction_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateId_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
				{ "ToolTip", "Used by materials using this function to know when to recompile." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateId = { UE4CodeGen_Private::EPropertyClass::Struct, "StateId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000200000, 1, nullptr, STRUCT_OFFSET(UMaterialFunction, StateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_StateId_MetaData, ARRAY_COUNT(NewProp_StateId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThumbnailInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CombinedOutputTypes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CombinedInputTypes,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReentrantFlag,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviewMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FunctionEditorComments,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FunctionEditorComments_Inner,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FunctionExpressions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FunctionExpressions_Inner,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LibraryCategoriesText,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LibraryCategoriesText_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LibraryCategories,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LibraryCategories_Inner,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bExposeToLibrary,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Description,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentFunction,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StateId,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialFunction>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialFunction::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(UMaterialFunction, 2210349019);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialFunction(Z_Construct_UClass_UMaterialFunction, &UMaterialFunction::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
