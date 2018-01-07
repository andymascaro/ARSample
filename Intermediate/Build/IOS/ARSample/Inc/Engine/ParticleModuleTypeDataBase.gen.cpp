// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleTypeDataBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleTypeDataBase::StaticRegisterNativesUParticleModuleTypeDataBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleTypeDataBase_NoRegister()
	{
		return UParticleModuleTypeDataBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleTypeDataBase()
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
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Particles/TypeData/ParticleModuleTypeDataBase.h" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBase.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleTypeDataBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleTypeDataBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00081081u,
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
	IMPLEMENT_CLASS(UParticleModuleTypeDataBase, 3874242642);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleTypeDataBase(Z_Construct_UClass_UParticleModuleTypeDataBase, &UParticleModuleTypeDataBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleTypeDataBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleTypeDataBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
