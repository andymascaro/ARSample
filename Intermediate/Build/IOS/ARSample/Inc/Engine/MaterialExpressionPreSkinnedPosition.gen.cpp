// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionPreSkinnedPosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPreSkinnedPosition() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionPreSkinnedPosition::StaticRegisterNativesUMaterialExpressionPreSkinnedPosition()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition_NoRegister()
	{
		return UMaterialExpressionPreSkinnedPosition::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition()
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
				{ "IncludePath", "Materials/MaterialExpressionPreSkinnedPosition.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPreSkinnedPosition.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionPreSkinnedPosition>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionPreSkinnedPosition::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionPreSkinnedPosition, 529614236);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionPreSkinnedPosition(Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition, &UMaterialExpressionPreSkinnedPosition::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionPreSkinnedPosition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPreSkinnedPosition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
