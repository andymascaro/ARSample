// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionLandscapeVisibilityMask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeVisibilityMask() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeVisibilityMask_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeVisibilityMask();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UMaterialExpressionLandscapeVisibilityMask::StaticRegisterNativesUMaterialExpressionLandscapeVisibilityMask()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionLandscapeVisibilityMask_NoRegister()
	{
		return UMaterialExpressionLandscapeVisibilityMask::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionLandscapeVisibilityMask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Materials/MaterialExpressionLandscapeVisibilityMask.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeVisibilityMask.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeVisibilityMask.h" },
				{ "ToolTip", "GUID that should be unique within the material, this is used for parameter renaming." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID = { UE4CodeGen_Private::EPropertyClass::Struct, "ExpressionGUID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeVisibilityMask, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_ExpressionGUID_MetaData, ARRAY_COUNT(NewProp_ExpressionGUID_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExpressionGUID,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionLandscapeVisibilityMask>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionLandscapeVisibilityMask::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00102080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionLandscapeVisibilityMask, 995698559);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionLandscapeVisibilityMask(Z_Construct_UClass_UMaterialExpressionLandscapeVisibilityMask, &UMaterialExpressionLandscapeVisibilityMask::StaticClass, TEXT("/Script/Landscape"), TEXT("UMaterialExpressionLandscapeVisibilityMask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLandscapeVisibilityMask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
