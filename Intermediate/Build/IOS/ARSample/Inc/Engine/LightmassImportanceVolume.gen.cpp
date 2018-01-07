// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Lightmass/LightmassImportanceVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightmassImportanceVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ALightmassImportanceVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ALightmassImportanceVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ALightmassImportanceVolume::StaticRegisterNativesALightmassImportanceVolume()
	{
	}
	UClass* Z_Construct_UClass_ALightmassImportanceVolume_NoRegister()
	{
		return ALightmassImportanceVolume::StaticClass();
	}
	UClass* Z_Construct_UClass_ALightmassImportanceVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AVolume,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Brush Attachment Physics Volume Brush Physics Object Display Rendering Physics Input Blueprint" },
				{ "IncludePath", "Lightmass/LightmassImportanceVolume.h" },
				{ "ModuleRelativePath", "Classes/Lightmass/LightmassImportanceVolume.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ALightmassImportanceVolume>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ALightmassImportanceVolume::StaticClass,
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
	IMPLEMENT_CLASS(ALightmassImportanceVolume, 2276232523);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALightmassImportanceVolume(Z_Construct_UClass_ALightmassImportanceVolume, &ALightmassImportanceVolume::StaticClass, TEXT("/Script/Engine"), TEXT("ALightmassImportanceVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightmassImportanceVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
