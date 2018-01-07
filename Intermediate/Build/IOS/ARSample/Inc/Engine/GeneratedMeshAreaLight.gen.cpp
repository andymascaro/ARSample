// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/GeneratedMeshAreaLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneratedMeshAreaLight() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGeneratedMeshAreaLight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGeneratedMeshAreaLight();
	ENGINE_API UClass* Z_Construct_UClass_ASpotLight();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void AGeneratedMeshAreaLight::StaticRegisterNativesAGeneratedMeshAreaLight()
	{
	}
	UClass* Z_Construct_UClass_AGeneratedMeshAreaLight_NoRegister()
	{
		return AGeneratedMeshAreaLight::StaticClass();
	}
	UClass* Z_Construct_UClass_AGeneratedMeshAreaLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ASpotLight,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Input Collision Replication" },
				{ "IncludePath", "Engine/GeneratedMeshAreaLight.h" },
				{ "ModuleRelativePath", "Classes/Engine/GeneratedMeshAreaLight.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
				{ "ToolTip", "Implements a light that is created after a lighting build with Lightmass and handles mesh area light influence on dynamic objects." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGeneratedMeshAreaLight>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGeneratedMeshAreaLight::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880280u,
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
	IMPLEMENT_CLASS(AGeneratedMeshAreaLight, 3606691226);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeneratedMeshAreaLight(Z_Construct_UClass_AGeneratedMeshAreaLight, &AGeneratedMeshAreaLight::StaticClass, TEXT("/Script/Engine"), TEXT("AGeneratedMeshAreaLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeneratedMeshAreaLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
