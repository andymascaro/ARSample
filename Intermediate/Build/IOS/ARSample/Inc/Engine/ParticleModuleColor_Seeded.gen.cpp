// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Color/ParticleModuleColor_Seeded.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleColor_Seeded() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColor_Seeded_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColor_Seeded();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleRandomSeedInfo();
// End Cross Module References
	void UParticleModuleColor_Seeded::StaticRegisterNativesUParticleModuleColor_Seeded()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleColor_Seeded_NoRegister()
	{
		return UParticleModuleColor_Seeded::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleColor_Seeded()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleColor,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Init Color (Seed)" },
				{ "HideCategories", "Object Object Object Object" },
				{ "IncludePath", "Particles/Color/ParticleModuleColor_Seeded.h" },
				{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColor_Seeded.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomSeedInfo_MetaData[] = {
				{ "Category", "RandomSeed" },
				{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColor_Seeded.h" },
				{ "ToolTip", "The random seed(s) to use for looking up values in StartLocation" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomSeedInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "RandomSeedInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleColor_Seeded, RandomSeedInfo), Z_Construct_UScriptStruct_FParticleRandomSeedInfo, METADATA_PARAMS(NewProp_RandomSeedInfo_MetaData, ARRAY_COUNT(NewProp_RandomSeedInfo_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RandomSeedInfo,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleColor_Seeded>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleColor_Seeded::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00801080u,
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
	IMPLEMENT_CLASS(UParticleModuleColor_Seeded, 1656480265);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleColor_Seeded(Z_Construct_UClass_UParticleModuleColor_Seeded, &UParticleModuleColor_Seeded::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleColor_Seeded"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleColor_Seeded);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
