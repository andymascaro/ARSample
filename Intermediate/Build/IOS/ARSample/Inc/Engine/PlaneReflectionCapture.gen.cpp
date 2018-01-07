// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/PlaneReflectionCapture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlaneReflectionCapture() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlaneReflectionCapture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlaneReflectionCapture();
	ENGINE_API UClass* Z_Construct_UClass_AReflectionCapture();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void APlaneReflectionCapture::StaticRegisterNativesAPlaneReflectionCapture()
	{
	}
	UClass* Z_Construct_UClass_APlaneReflectionCapture_NoRegister()
	{
		return APlaneReflectionCapture::StaticClass();
	}
	UClass* Z_Construct_UClass_APlaneReflectionCapture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AReflectionCapture,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Attachment Actor Collision Attachment Actor" },
				{ "IncludePath", "Engine/PlaneReflectionCapture.h" },
				{ "ModuleRelativePath", "Classes/Engine/PlaneReflectionCapture.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APlaneReflectionCapture>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APlaneReflectionCapture::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880081u,
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
	IMPLEMENT_CLASS(APlaneReflectionCapture, 3204246926);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlaneReflectionCapture(Z_Construct_UClass_APlaneReflectionCapture, &APlaneReflectionCapture::StaticClass, TEXT("/Script/Engine"), TEXT("APlaneReflectionCapture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlaneReflectionCapture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
