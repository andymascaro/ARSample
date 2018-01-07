// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Camera/ParticleModuleCameraBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleCameraBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCameraBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCameraBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleCameraBase::StaticRegisterNativesUParticleModuleCameraBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleCameraBase_NoRegister()
	{
		return UParticleModuleCameraBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleCameraBase()
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
				{ "DisplayName", "Camera" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Particles/Camera/ParticleModuleCameraBase.h" },
				{ "ModuleRelativePath", "Classes/Particles/Camera/ParticleModuleCameraBase.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleCameraBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleCameraBase::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleCameraBase, 3094398769);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleCameraBase(Z_Construct_UClass_UParticleModuleCameraBase, &UParticleModuleCameraBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleCameraBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleCameraBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
