// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Kill/ParticleModuleKillBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleKillBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleKillBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleKillBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleKillBase::StaticRegisterNativesUParticleModuleKillBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleKillBase_NoRegister()
	{
		return UParticleModuleKillBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleKillBase()
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
				{ "DisplayName", "Kill" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Particles/Kill/ParticleModuleKillBase.h" },
				{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillBase.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleKillBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleKillBase::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleKillBase, 76325933);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleKillBase(Z_Construct_UClass_UParticleModuleKillBase, &UParticleModuleKillBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleKillBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleKillBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
