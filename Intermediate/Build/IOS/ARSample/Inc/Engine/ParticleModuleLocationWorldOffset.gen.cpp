// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Location/ParticleModuleLocationWorldOffset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationWorldOffset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationWorldOffset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationWorldOffset();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocation();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleLocationWorldOffset::StaticRegisterNativesUParticleModuleLocationWorldOffset()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleLocationWorldOffset_NoRegister()
	{
		return UParticleModuleLocationWorldOffset::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleLocationWorldOffset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleLocation,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "World Offset" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Location/ParticleModuleLocationWorldOffset.h" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationWorldOffset.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleLocationWorldOffset>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleLocationWorldOffset::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00901080u,
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
	IMPLEMENT_CLASS(UParticleModuleLocationWorldOffset, 3821170040);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleLocationWorldOffset(Z_Construct_UClass_UParticleModuleLocationWorldOffset, &UParticleModuleLocationWorldOffset::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleLocationWorldOffset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationWorldOffset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
