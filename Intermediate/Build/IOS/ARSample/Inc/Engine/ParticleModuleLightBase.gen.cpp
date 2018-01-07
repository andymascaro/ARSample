// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Light/ParticleModuleLightBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLightBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLightBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLightBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleLightBase::StaticRegisterNativesUParticleModuleLightBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleLightBase_NoRegister()
	{
		return UParticleModuleLightBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleLightBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModule,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Light" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Particles/Light/ParticleModuleLightBase.h" },
				{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLightBase.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleLightBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleLightBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00001081u,
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
	IMPLEMENT_CLASS(UParticleModuleLightBase, 2929916548);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleLightBase(Z_Construct_UClass_UParticleModuleLightBase, &UParticleModuleLightBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleLightBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLightBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
