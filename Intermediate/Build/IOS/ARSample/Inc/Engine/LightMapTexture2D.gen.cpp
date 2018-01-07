// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/LightMapTexture2D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightMapTexture2D() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULightMapTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightMapTexture2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ULightMapTexture2D::StaticRegisterNativesULightMapTexture2D()
	{
	}
	UClass* Z_Construct_UClass_ULightMapTexture2D_NoRegister()
	{
		return ULightMapTexture2D::StaticClass();
	}
	UClass* Z_Construct_UClass_ULightMapTexture2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UTexture2D,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object" },
				{ "IncludePath", "Engine/LightMapTexture2D.h" },
				{ "ModuleRelativePath", "Classes/Engine/LightMapTexture2D.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULightMapTexture2D>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULightMapTexture2D::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(ULightMapTexture2D, 345889289);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightMapTexture2D(Z_Construct_UClass_ULightMapTexture2D, &ULightMapTexture2D::StaticClass, TEXT("/Script/Engine"), TEXT("ULightMapTexture2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightMapTexture2D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
