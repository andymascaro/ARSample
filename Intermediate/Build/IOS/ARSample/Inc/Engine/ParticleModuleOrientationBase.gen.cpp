// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Orientation/ParticleModuleOrientationBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleOrientationBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrientationBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrientationBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleOrientationBase::StaticRegisterNativesUParticleModuleOrientationBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleOrientationBase_NoRegister()
	{
		return UParticleModuleOrientationBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleOrientationBase()
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
				{ "DisplayName", "Orientation" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Particles/Orientation/ParticleModuleOrientationBase.h" },
				{ "ModuleRelativePath", "Classes/Particles/Orientation/ParticleModuleOrientationBase.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleOrientationBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleOrientationBase::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleOrientationBase, 1007419557);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleOrientationBase(Z_Construct_UClass_UParticleModuleOrientationBase, &UParticleModuleOrientationBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleOrientationBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleOrientationBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
