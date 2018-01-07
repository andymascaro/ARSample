// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/VectorField/ParticleModuleVectorFieldRotation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVectorFieldRotation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldRotation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldRotation();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UParticleModuleVectorFieldRotation::StaticRegisterNativesUParticleModuleVectorFieldRotation()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldRotation_NoRegister()
	{
		return UParticleModuleVectorFieldRotation::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldRotation()
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
				{ "DisplayName", "VF Init Rotation" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/VectorField/ParticleModuleVectorFieldRotation.h" },
				{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldRotation.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInitialRotation_MetaData[] = {
				{ "Category", "VectorField" },
				{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldRotation.h" },
				{ "ToolTip", "Maximum initial rotation applied to the local vector field." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxInitialRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "MaxInitialRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldRotation, MaxInitialRotation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_MaxInitialRotation_MetaData, ARRAY_COUNT(NewProp_MaxInitialRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinInitialRotation_MetaData[] = {
				{ "Category", "VectorField" },
				{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldRotation.h" },
				{ "ToolTip", "Minimum initial rotation applied to the local vector field." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinInitialRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "MinInitialRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldRotation, MinInitialRotation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_MinInitialRotation_MetaData, ARRAY_COUNT(NewProp_MinInitialRotation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxInitialRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinInitialRotation,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleVectorFieldRotation>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleVectorFieldRotation::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleVectorFieldRotation, 2370144203);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleVectorFieldRotation(Z_Construct_UClass_UParticleModuleVectorFieldRotation, &UParticleModuleVectorFieldRotation::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleVectorFieldRotation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVectorFieldRotation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
