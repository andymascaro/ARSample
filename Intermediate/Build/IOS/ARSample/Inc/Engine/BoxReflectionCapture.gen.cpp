// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/BoxReflectionCapture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxReflectionCapture() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ABoxReflectionCapture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ABoxReflectionCapture();
	ENGINE_API UClass* Z_Construct_UClass_AReflectionCapture();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ABoxReflectionCapture::StaticRegisterNativesABoxReflectionCapture()
	{
	}
	UClass* Z_Construct_UClass_ABoxReflectionCapture_NoRegister()
	{
		return ABoxReflectionCapture::StaticClass();
	}
	UClass* Z_Construct_UClass_ABoxReflectionCapture()
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
				{ "IncludePath", "Engine/BoxReflectionCapture.h" },
				{ "ModuleRelativePath", "Classes/Engine/BoxReflectionCapture.h" },
				{ "ToolTip", "Actor used to capture the scene for reflection in a box shape\n@see https://docs.unrealengine.com/latest/INT/Resources/ContentExamples/Reflections/1_3/index.html" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABoxReflectionCapture>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABoxReflectionCapture::StaticClass,
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
	IMPLEMENT_CLASS(ABoxReflectionCapture, 3021268620);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoxReflectionCapture(Z_Construct_UClass_ABoxReflectionCapture, &ABoxReflectionCapture::StaticClass, TEXT("/Script/Engine"), TEXT("ABoxReflectionCapture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoxReflectionCapture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
