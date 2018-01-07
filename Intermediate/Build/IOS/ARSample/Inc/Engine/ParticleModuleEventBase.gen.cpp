// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Event/ParticleModuleEventBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleEventBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleEventBase::StaticRegisterNativesUParticleModuleEventBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleEventBase_NoRegister()
	{
		return UParticleModuleEventBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleEventBase()
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
				{ "DisplayName", "Event" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Particles/Event/ParticleModuleEventBase.h" },
				{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventBase.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleEventBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleEventBase::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleEventBase, 476104921);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleEventBase(Z_Construct_UClass_UParticleModuleEventBase, &UParticleModuleEventBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleEventBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleEventBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
