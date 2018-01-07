// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Location/ParticleModuleLocationPrimitiveSphere_Seeded.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationPrimitiveSphere_Seeded() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere_Seeded_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere_Seeded();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleRandomSeedInfo();
// End Cross Module References
	void UParticleModuleLocationPrimitiveSphere_Seeded::StaticRegisterNativesUParticleModuleLocationPrimitiveSphere_Seeded()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere_Seeded_NoRegister()
	{
		return UParticleModuleLocationPrimitiveSphere_Seeded::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere_Seeded()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Sphere (Seed)" },
				{ "HideCategories", "Object Object Object Object Object" },
				{ "IncludePath", "Particles/Location/ParticleModuleLocationPrimitiveSphere_Seeded.h" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveSphere_Seeded.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomSeedInfo_MetaData[] = {
				{ "Category", "RandomSeed" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveSphere_Seeded.h" },
				{ "ToolTip", "The random seed(s) to use for looking up values in StartLocation" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomSeedInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "RandomSeedInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationPrimitiveSphere_Seeded, RandomSeedInfo), Z_Construct_UScriptStruct_FParticleRandomSeedInfo, METADATA_PARAMS(NewProp_RandomSeedInfo_MetaData, ARRAY_COUNT(NewProp_RandomSeedInfo_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RandomSeedInfo,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleLocationPrimitiveSphere_Seeded>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleLocationPrimitiveSphere_Seeded::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00901080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleLocationPrimitiveSphere_Seeded, 2832095134);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleLocationPrimitiveSphere_Seeded(Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere_Seeded, &UParticleModuleLocationPrimitiveSphere_Seeded::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleLocationPrimitiveSphere_Seeded"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationPrimitiveSphere_Seeded);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
