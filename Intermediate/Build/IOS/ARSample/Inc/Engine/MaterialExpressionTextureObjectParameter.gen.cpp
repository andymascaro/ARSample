// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionTextureObjectParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureObjectParameter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureObjectParameter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureObjectParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionTextureObjectParameter::StaticRegisterNativesUMaterialExpressionTextureObjectParameter()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionTextureObjectParameter_NoRegister()
	{
		return UMaterialExpressionTextureObjectParameter::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionTextureObjectParameter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureSampleParameter,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object MaterialExpressionTextureSample Object Object Object Object" },
				{ "IncludePath", "Materials/MaterialExpressionTextureObjectParameter.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureObjectParameter.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionTextureObjectParameter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionTextureObjectParameter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00082080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionTextureObjectParameter, 1423623536);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionTextureObjectParameter(Z_Construct_UClass_UMaterialExpressionTextureObjectParameter, &UMaterialExpressionTextureObjectParameter::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionTextureObjectParameter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureObjectParameter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
