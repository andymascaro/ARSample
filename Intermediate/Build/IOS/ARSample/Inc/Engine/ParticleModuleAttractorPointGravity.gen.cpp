// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Attractor/ParticleModuleAttractorPointGravity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAttractorPointGravity() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorPointGravity_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorPointGravity();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UParticleModuleAttractorPointGravity::StaticRegisterNativesUParticleModuleAttractorPointGravity()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleAttractorPointGravity_NoRegister()
	{
		return UParticleModuleAttractorPointGravity::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleAttractorPointGravity()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleAttractorBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Point Gravity" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Attractor/ParticleModuleAttractorPointGravity.h" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPointGravity.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrengthRaw_MetaData[] = {
				{ "Category", "PointGravitySource" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPointGravity.h" },
				{ "ToolTip", "The strength of the point source." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StrengthRaw = { UE4CodeGen_Private::EPropertyClass::Struct, "StrengthRaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008002000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleAttractorPointGravity, StrengthRaw), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_StrengthRaw_MetaData, ARRAY_COUNT(NewProp_StrengthRaw_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPointGravity.h" },
				{ "ToolTip", "The strength of the point source." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Strength = { UE4CodeGen_Private::EPropertyClass::Object, "Strength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020080008, 1, nullptr, STRUCT_OFFSET(UParticleModuleAttractorPointGravity, Strength_DEPRECATED), Z_Construct_UClass_UDistributionFloat_NoRegister, METADATA_PARAMS(NewProp_Strength_MetaData, ARRAY_COUNT(NewProp_Strength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
				{ "Category", "PointGravitySource" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPointGravity.h" },
				{ "ToolTip", "The distance at which the influence of the point begins to falloff." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleAttractorPointGravity, Radius), METADATA_PARAMS(NewProp_Radius_MetaData, ARRAY_COUNT(NewProp_Radius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
				{ "Category", "PointGravitySource" },
				{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPointGravity.h" },
				{ "ToolTip", "The position of the point gravity source." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Struct, "Position", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleAttractorPointGravity, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Position_MetaData, ARRAY_COUNT(NewProp_Position_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StrengthRaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Strength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Position,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleAttractorPointGravity>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleAttractorPointGravity::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleAttractorPointGravity, 3396495099);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleAttractorPointGravity(Z_Construct_UClass_UParticleModuleAttractorPointGravity, &UParticleModuleAttractorPointGravity::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleAttractorPointGravity"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAttractorPointGravity);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
