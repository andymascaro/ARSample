// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/VectorField/ParticleModuleVectorFieldScale.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVectorFieldScale() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldScale_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldScale();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat_NoRegister();
// End Cross Module References
	void UParticleModuleVectorFieldScale::StaticRegisterNativesUParticleModuleVectorFieldScale()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldScale_NoRegister()
	{
		return UParticleModuleVectorFieldScale::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldScale()
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
				{ "DisplayName", "Vector Field Scale" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/VectorField/ParticleModuleVectorFieldScale.h" },
				{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldScale.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorFieldScaleRaw_MetaData[] = {
				{ "Category", "VectorField" },
				{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldScale.h" },
				{ "ToolTip", "Per-particle vector field scale. Evaluated using emitter time." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorFieldScaleRaw = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorFieldScaleRaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldScale, VectorFieldScaleRaw), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_VectorFieldScaleRaw_MetaData, ARRAY_COUNT(NewProp_VectorFieldScaleRaw_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorFieldScale_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldScale.h" },
				{ "ToolTip", "Per-particle vector field scale. Evaluated using emitter time." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VectorFieldScale = { UE4CodeGen_Private::EPropertyClass::Object, "VectorFieldScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020080008, 1, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldScale, VectorFieldScale_DEPRECATED), Z_Construct_UClass_UDistributionFloat_NoRegister, METADATA_PARAMS(NewProp_VectorFieldScale_MetaData, ARRAY_COUNT(NewProp_VectorFieldScale_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorFieldScaleRaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorFieldScale,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleVectorFieldScale>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleVectorFieldScale::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleVectorFieldScale, 1520848605);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleVectorFieldScale(Z_Construct_UClass_UParticleModuleVectorFieldScale, &UParticleModuleVectorFieldScale::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleVectorFieldScale"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVectorFieldScale);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
