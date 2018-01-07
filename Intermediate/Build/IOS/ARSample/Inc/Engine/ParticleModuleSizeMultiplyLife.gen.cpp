// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Size/ParticleModuleSizeMultiplyLife.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSizeMultiplyLife() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeMultiplyLife_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeMultiplyLife();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleSizeMultiplyLife::StaticRegisterNativesUParticleModuleSizeMultiplyLife()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleSizeMultiplyLife_NoRegister()
	{
		return UParticleModuleSizeMultiplyLife::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleSizeMultiplyLife()
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
				{ "DisplayName", "Size By Life" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Size/ParticleModuleSizeMultiplyLife.h" },
				{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeMultiplyLife.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiplyZ_MetaData[] = {
				{ "Category", "Size" },
				{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeMultiplyLife.h" },
				{ "ToolTip", "If true, the Z-component of the scale factor will be applied to the particle size Z-component.\nIf false, the Z-component is left unaltered." },
			};
#endif
			auto NewProp_MultiplyZ_SetBit = [](void* Obj){ ((UParticleModuleSizeMultiplyLife*)Obj)->MultiplyZ = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MultiplyZ = { UE4CodeGen_Private::EPropertyClass::Bool, "MultiplyZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleSizeMultiplyLife), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_MultiplyZ_SetBit)>::SetBit, METADATA_PARAMS(NewProp_MultiplyZ_MetaData, ARRAY_COUNT(NewProp_MultiplyZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiplyY_MetaData[] = {
				{ "Category", "Size" },
				{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeMultiplyLife.h" },
				{ "ToolTip", "If true, the Y-component of the scale factor will be applied to the particle size Y-component.\nIf false, the Y-component is left unaltered." },
			};
#endif
			auto NewProp_MultiplyY_SetBit = [](void* Obj){ ((UParticleModuleSizeMultiplyLife*)Obj)->MultiplyY = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MultiplyY = { UE4CodeGen_Private::EPropertyClass::Bool, "MultiplyY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleSizeMultiplyLife), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_MultiplyY_SetBit)>::SetBit, METADATA_PARAMS(NewProp_MultiplyY_MetaData, ARRAY_COUNT(NewProp_MultiplyY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiplyX_MetaData[] = {
				{ "Category", "Size" },
				{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeMultiplyLife.h" },
				{ "ToolTip", "If true, the X-component of the scale factor will be applied to the particle size X-component.\nIf false, the X-component is left unaltered." },
			};
#endif
			auto NewProp_MultiplyX_SetBit = [](void* Obj){ ((UParticleModuleSizeMultiplyLife*)Obj)->MultiplyX = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MultiplyX = { UE4CodeGen_Private::EPropertyClass::Bool, "MultiplyX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleSizeMultiplyLife), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_MultiplyX_SetBit)>::SetBit, METADATA_PARAMS(NewProp_MultiplyX_MetaData, ARRAY_COUNT(NewProp_MultiplyX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeMultiplier_MetaData[] = {
				{ "Category", "Size" },
				{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeMultiplyLife.h" },
				{ "ToolTip", "The scale factor for the size that should be used for a particle.\nThe value is retrieved using the RelativeTime of the particle during its update." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LifeMultiplier = { UE4CodeGen_Private::EPropertyClass::Struct, "LifeMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleSizeMultiplyLife, LifeMultiplier), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_LifeMultiplier_MetaData, ARRAY_COUNT(NewProp_LifeMultiplier_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MultiplyZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MultiplyY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MultiplyX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LifeMultiplier,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleSizeMultiplyLife>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleSizeMultiplyLife::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleSizeMultiplyLife, 401617388);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleSizeMultiplyLife(Z_Construct_UClass_UParticleModuleSizeMultiplyLife, &UParticleModuleSizeMultiplyLife::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleSizeMultiplyLife"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSizeMultiplyLife);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
