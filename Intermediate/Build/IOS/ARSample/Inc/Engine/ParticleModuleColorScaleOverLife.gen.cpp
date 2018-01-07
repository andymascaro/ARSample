// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Color/ParticleModuleColorScaleOverLife.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleColorScaleOverLife() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColorScaleOverLife_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColorScaleOverLife();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColorBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleColorScaleOverLife::StaticRegisterNativesUParticleModuleColorScaleOverLife()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleColorScaleOverLife_NoRegister()
	{
		return UParticleModuleColorScaleOverLife::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleColorScaleOverLife()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleColorBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Scale Color / Life" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Color/ParticleModuleColorScaleOverLife.h" },
				{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColorScaleOverLife.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEmitterTime_MetaData[] = {
				{ "Category", "Color" },
				{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColorScaleOverLife.h" },
				{ "ToolTip", "Whether it is EmitterTime or ParticleTime related." },
			};
#endif
			auto NewProp_bEmitterTime_SetBit = [](void* Obj){ ((UParticleModuleColorScaleOverLife*)Obj)->bEmitterTime = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEmitterTime = { UE4CodeGen_Private::EPropertyClass::Bool, "bEmitterTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleColorScaleOverLife), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEmitterTime_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEmitterTime_MetaData, ARRAY_COUNT(NewProp_bEmitterTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleOverLife_MetaData[] = {
				{ "Category", "Color" },
				{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColorScaleOverLife.h" },
				{ "ToolTip", "The scale factor for the alpha." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaScaleOverLife = { UE4CodeGen_Private::EPropertyClass::Struct, "AlphaScaleOverLife", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleColorScaleOverLife, AlphaScaleOverLife), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_AlphaScaleOverLife_MetaData, ARRAY_COUNT(NewProp_AlphaScaleOverLife_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorScaleOverLife_MetaData[] = {
				{ "Category", "Color" },
				{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColorScaleOverLife.h" },
				{ "ToolTip", "The scale factor for the color." },
				{ "TreatAsColor", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorScaleOverLife = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorScaleOverLife", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleColorScaleOverLife, ColorScaleOverLife), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_ColorScaleOverLife_MetaData, ARRAY_COUNT(NewProp_ColorScaleOverLife_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEmitterTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AlphaScaleOverLife,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColorScaleOverLife,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleColorScaleOverLife>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleColorScaleOverLife::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleColorScaleOverLife, 1057895812);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleColorScaleOverLife(Z_Construct_UClass_UParticleModuleColorScaleOverLife, &UParticleModuleColorScaleOverLife::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleColorScaleOverLife"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleColorScaleOverLife);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
