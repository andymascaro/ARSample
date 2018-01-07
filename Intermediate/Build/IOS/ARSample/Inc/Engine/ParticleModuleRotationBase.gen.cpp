// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Rotation/ParticleModuleRotationBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleRotationBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleRotationBase::StaticRegisterNativesUParticleModuleRotationBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleRotationBase_NoRegister()
	{
		return UParticleModuleRotationBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleRotationBase()
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
				{ "DisplayName", "Rotation" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Particles/Rotation/ParticleModuleRotationBase.h" },
				{ "ModuleRelativePath", "Classes/Particles/Rotation/ParticleModuleRotationBase.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleRotationBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleRotationBase::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleRotationBase, 1425842850);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleRotationBase(Z_Construct_UClass_UParticleModuleRotationBase, &UParticleModuleRotationBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleRotationBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleRotationBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
