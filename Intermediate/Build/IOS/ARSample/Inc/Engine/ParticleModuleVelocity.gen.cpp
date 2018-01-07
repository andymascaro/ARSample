// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Velocity/ParticleModuleVelocity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVelocity() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocity_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocity();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleVelocity::StaticRegisterNativesUParticleModuleVelocity()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleVelocity_NoRegister()
	{
		return UParticleModuleVelocity::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleVelocity()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleVelocityBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Initial Velocity" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Velocity/ParticleModuleVelocity.h" },
				{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocity.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartVelocityRadial_MetaData[] = {
				{ "Category", "Velocity" },
				{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocity.h" },
				{ "ToolTip", "The velocity to apply to a particle along its radial direction.\nDirection is determined by subtracting the location of the emitter from the particle location at spawn.\nValue is retrieved using the EmitterTime of the emitter." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartVelocityRadial = { UE4CodeGen_Private::EPropertyClass::Struct, "StartVelocityRadial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleVelocity, StartVelocityRadial), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_StartVelocityRadial_MetaData, ARRAY_COUNT(NewProp_StartVelocityRadial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartVelocity_MetaData[] = {
				{ "Category", "Velocity" },
				{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocity.h" },
				{ "ToolTip", "The velocity to apply to a particle when it is spawned.\nValue is retrieved using the EmitterTime of the emitter." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "StartVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleVelocity, StartVelocity), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_StartVelocity_MetaData, ARRAY_COUNT(NewProp_StartVelocity_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartVelocityRadial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartVelocity,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleVelocity>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleVelocity::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleVelocity, 3272995768);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleVelocity(Z_Construct_UClass_UParticleModuleVelocity, &UParticleModuleVelocity::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleVelocity"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVelocity);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
