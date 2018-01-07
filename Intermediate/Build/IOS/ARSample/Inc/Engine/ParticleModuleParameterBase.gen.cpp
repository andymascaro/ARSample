// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Parameter/ParticleModuleParameterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleParameterBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleParameterBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleParameterBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleParameterBase::StaticRegisterNativesUParticleModuleParameterBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleParameterBase_NoRegister()
	{
		return UParticleModuleParameterBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleParameterBase()
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
				{ "DisplayName", "Parameter" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Particles/Parameter/ParticleModuleParameterBase.h" },
				{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterBase.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleParameterBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleParameterBase::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleParameterBase, 1705144612);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleParameterBase(Z_Construct_UClass_UParticleModuleParameterBase, &UParticleModuleParameterBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleParameterBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleParameterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
