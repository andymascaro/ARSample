// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/SubUV/ParticleModuleSubUVBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSubUVBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSubUVBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSubUVBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleSubUVBase::StaticRegisterNativesUParticleModuleSubUVBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleSubUVBase_NoRegister()
	{
		return UParticleModuleSubUVBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleSubUVBase()
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
				{ "DisplayName", "SubUV" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Particles/SubUV/ParticleModuleSubUVBase.h" },
				{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUVBase.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleSubUVBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleSubUVBase::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleSubUVBase, 2933868477);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleSubUVBase(Z_Construct_UClass_UParticleModuleSubUVBase, &UParticleModuleSubUVBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleSubUVBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSubUVBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
