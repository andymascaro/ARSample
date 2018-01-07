// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/RotationRate/ParticleModuleMeshRotationRateOverLife.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleMeshRotationRateOverLife() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRateBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleMeshRotationRateOverLife::StaticRegisterNativesUParticleModuleMeshRotationRateOverLife()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_NoRegister()
	{
		return UParticleModuleMeshRotationRateOverLife::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleRotationRateBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Mesh Rotation Rate over Life" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/RotationRate/ParticleModuleMeshRotationRateOverLife.h" },
				{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleMeshRotationRateOverLife.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScaleRotRate_MetaData[] = {
				{ "Category", "Rotation" },
				{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleMeshRotationRateOverLife.h" },
				{ "ToolTip", "If true, scale the current rotation rate by the value retrieved.\nOtherwise, set the rotation rate to the value retrieved." },
			};
#endif
			auto NewProp_bScaleRotRate_SetBit = [](void* Obj){ ((UParticleModuleMeshRotationRateOverLife*)Obj)->bScaleRotRate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScaleRotRate = { UE4CodeGen_Private::EPropertyClass::Bool, "bScaleRotRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleMeshRotationRateOverLife), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bScaleRotRate_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bScaleRotRate_MetaData, ARRAY_COUNT(NewProp_bScaleRotRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotRate_MetaData[] = {
				{ "Category", "Rotation" },
				{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleMeshRotationRateOverLife.h" },
				{ "ToolTip", "The rotation rate desired.\nThe value is retrieved using the RelativeTime of the particle." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotRate = { UE4CodeGen_Private::EPropertyClass::Struct, "RotRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleMeshRotationRateOverLife, RotRate), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_RotRate_MetaData, ARRAY_COUNT(NewProp_RotRate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bScaleRotRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotRate,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleMeshRotationRateOverLife>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleMeshRotationRateOverLife::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleMeshRotationRateOverLife, 3324995188);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleMeshRotationRateOverLife(Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife, &UParticleModuleMeshRotationRateOverLife::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleMeshRotationRateOverLife"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleMeshRotationRateOverLife);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
