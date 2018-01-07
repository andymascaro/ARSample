// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Distributions/DistributionFloatParticleParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionFloatParticleParameter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatParticleParameter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatParticleParameter();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatParameterBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDistributionFloatParticleParameter::StaticRegisterNativesUDistributionFloatParticleParameter()
	{
	}
	UClass* Z_Construct_UClass_UDistributionFloatParticleParameter_NoRegister()
	{
		return UDistributionFloatParticleParameter::StaticClass();
	}
	UClass* Z_Construct_UClass_UDistributionFloatParticleParameter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDistributionFloatParameterBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object Object Object" },
				{ "IncludePath", "Distributions/DistributionFloatParticleParameter.h" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatParticleParameter.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDistributionFloatParticleParameter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDistributionFloatParticleParameter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00303080u,
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
	IMPLEMENT_CLASS(UDistributionFloatParticleParameter, 3387592599);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDistributionFloatParticleParameter(Z_Construct_UClass_UDistributionFloatParticleParameter, &UDistributionFloatParticleParameter::StaticClass, TEXT("/Script/Engine"), TEXT("UDistributionFloatParticleParameter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionFloatParticleParameter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
