// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Lifetime/ParticleModuleLifetime.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLifetime() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLifetime_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLifetime();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLifetimeBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
// End Cross Module References
	void UParticleModuleLifetime::StaticRegisterNativesUParticleModuleLifetime()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleLifetime_NoRegister()
	{
		return UParticleModuleLifetime::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleLifetime()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleLifetimeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Lifetime" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Lifetime/ParticleModuleLifetime.h" },
				{ "ModuleRelativePath", "Classes/Particles/Lifetime/ParticleModuleLifetime.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lifetime_MetaData[] = {
				{ "Category", "Lifetime" },
				{ "ModuleRelativePath", "Classes/Particles/Lifetime/ParticleModuleLifetime.h" },
				{ "ToolTip", "The lifetime of the particle, in seconds. Retrieved using the EmitterTime at the spawn of the particle." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Lifetime = { UE4CodeGen_Private::EPropertyClass::Struct, "Lifetime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLifetime, Lifetime), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_Lifetime_MetaData, ARRAY_COUNT(NewProp_Lifetime_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Lifetime,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleLifetime>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleLifetime::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00881080u,
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
	IMPLEMENT_CLASS(UParticleModuleLifetime, 195269583);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleLifetime(Z_Construct_UClass_UParticleModuleLifetime, &UParticleModuleLifetime::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleLifetime"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLifetime);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
