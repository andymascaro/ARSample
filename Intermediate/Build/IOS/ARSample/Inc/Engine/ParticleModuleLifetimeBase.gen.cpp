// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Lifetime/ParticleModuleLifetimeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLifetimeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLifetimeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLifetimeBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleLifetimeBase::StaticRegisterNativesUParticleModuleLifetimeBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleLifetimeBase_NoRegister()
	{
		return UParticleModuleLifetimeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleLifetimeBase()
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
				{ "DisplayName", "Lifetime" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Particles/Lifetime/ParticleModuleLifetimeBase.h" },
				{ "ModuleRelativePath", "Classes/Particles/Lifetime/ParticleModuleLifetimeBase.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleLifetimeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleLifetimeBase::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleLifetimeBase, 25131925);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleLifetimeBase(Z_Construct_UClass_UParticleModuleLifetimeBase, &UParticleModuleLifetimeBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleLifetimeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLifetimeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
