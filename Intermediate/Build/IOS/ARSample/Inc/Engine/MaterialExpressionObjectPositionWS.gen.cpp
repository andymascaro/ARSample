// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionObjectPositionWS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionObjectPositionWS() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionObjectPositionWS_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionObjectPositionWS();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionObjectPositionWS::StaticRegisterNativesUMaterialExpressionObjectPositionWS()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionObjectPositionWS_NoRegister()
	{
		return UMaterialExpressionObjectPositionWS::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionObjectPositionWS()
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
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Materials/MaterialExpressionObjectPositionWS.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionObjectPositionWS.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionObjectPositionWS>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionObjectPositionWS::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00002080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionObjectPositionWS, 303492716);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionObjectPositionWS(Z_Construct_UClass_UMaterialExpressionObjectPositionWS, &UMaterialExpressionObjectPositionWS::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionObjectPositionWS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionObjectPositionWS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
