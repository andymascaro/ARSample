// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/VectorField/ParticleModuleVectorFieldRotationRate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVectorFieldRotationRate() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldRotationRate();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UParticleModuleVectorFieldRotationRate::StaticRegisterNativesUParticleModuleVectorFieldRotationRate()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_NoRegister()
	{
		return UParticleModuleVectorFieldRotationRate::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldRotationRate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleVectorFieldBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "VF Rotation Rate" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/VectorField/ParticleModuleVectorFieldRotationRate.h" },
				{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldRotationRate.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[] = {
				{ "Category", "VectorField" },
				{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldRotationRate.h" },
				{ "ToolTip", "Constant rotation rate applied to the local vector field." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationRate = { UE4CodeGen_Private::EPropertyClass::Struct, "RotationRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldRotationRate, RotationRate), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_RotationRate_MetaData, ARRAY_COUNT(NewProp_RotationRate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotationRate,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleVectorFieldRotationRate>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleVectorFieldRotationRate::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00001080u,
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
	IMPLEMENT_CLASS(UParticleModuleVectorFieldRotationRate, 4172135262);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleVectorFieldRotationRate(Z_Construct_UClass_UParticleModuleVectorFieldRotationRate, &UParticleModuleVectorFieldRotationRate::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleVectorFieldRotationRate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVectorFieldRotationRate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
