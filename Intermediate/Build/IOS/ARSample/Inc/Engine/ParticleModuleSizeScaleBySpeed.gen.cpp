// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Size/ParticleModuleSizeScaleBySpeed.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSizeScaleBySpeed() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeScaleBySpeed();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void UParticleModuleSizeScaleBySpeed::StaticRegisterNativesUParticleModuleSizeScaleBySpeed()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_NoRegister()
	{
		return UParticleModuleSizeScaleBySpeed::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleSizeScaleBySpeed()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleSizeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Size By Speed" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Size/ParticleModuleSizeScaleBySpeed.h" },
				{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScaleBySpeed.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxScale_MetaData[] = {
				{ "Category", "ParticleModuleSizeScaleBySpeed" },
				{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScaleBySpeed.h" },
				{ "ToolTip", "The maximum amount by which to scale a particle in each dimension." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxScale = { UE4CodeGen_Private::EPropertyClass::Struct, "MaxScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleSizeScaleBySpeed, MaxScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_MaxScale_MetaData, ARRAY_COUNT(NewProp_MaxScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedScale_MetaData[] = {
				{ "Category", "ParticleModuleSizeScaleBySpeed" },
				{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScaleBySpeed.h" },
				{ "ToolTip", "By how much speed affects the size of the particle in each dimension." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpeedScale = { UE4CodeGen_Private::EPropertyClass::Struct, "SpeedScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleSizeScaleBySpeed, SpeedScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_SpeedScale_MetaData, ARRAY_COUNT(NewProp_SpeedScale_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpeedScale,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleSizeScaleBySpeed>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleSizeScaleBySpeed::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleSizeScaleBySpeed, 2773119849);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleSizeScaleBySpeed(Z_Construct_UClass_UParticleModuleSizeScaleBySpeed, &UParticleModuleSizeScaleBySpeed::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleSizeScaleBySpeed"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSizeScaleBySpeed);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
