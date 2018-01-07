// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Light/ParticleModuleLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLight() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLight();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLightBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleLight::StaticRegisterNativesUParticleModuleLight()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleLight_NoRegister()
	{
		return UParticleModuleLight::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleLightBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Light" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Light/ParticleModuleLight.h" },
				{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShadowCastingLights_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
				{ "ToolTip", "Whether to cast shadows from the particle lights.  Requires High Quality Lights to be enabled.\nWarning: This can be incredibly expensive on the GPU - use with caution." },
			};
#endif
			auto NewProp_bShadowCastingLights_SetBit = [](void* Obj){ ((UParticleModuleLight*)Obj)->bShadowCastingLights = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShadowCastingLights = { UE4CodeGen_Private::EPropertyClass::Bool, "bShadowCastingLights", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UParticleModuleLight), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShadowCastingLights_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShadowCastingLights_MetaData, ARRAY_COUNT(NewProp_bShadowCastingLights_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHighQualityLights_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
				{ "ToolTip", "Converts the particle lights into high quality lights as if they came from a PointLightComponent.  High quality lights cost significantly more on both CPU and GPU." },
			};
#endif
			auto NewProp_bHighQualityLights_SetBit = [](void* Obj){ ((UParticleModuleLight*)Obj)->bHighQualityLights = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHighQualityLights = { UE4CodeGen_Private::EPropertyClass::Bool, "bHighQualityLights", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UParticleModuleLight), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHighQualityLights_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHighQualityLights_MetaData, ARRAY_COUNT(NewProp_bHighQualityLights_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricScatteringIntensity_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
				{ "ToolTip", "Intensity of the volumetric scattering from this light.  This scales Intensity and LightColor." },
				{ "UIMax", "4.0" },
				{ "UIMin", "0.25" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumetricScatteringIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "VolumetricScatteringIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000015, 1, nullptr, STRUCT_OFFSET(UParticleModuleLight, VolumetricScatteringIntensity), METADATA_PARAMS(NewProp_VolumetricScatteringIntensity_MetaData, ARRAY_COUNT(NewProp_VolumetricScatteringIntensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingChannels_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
				{ "ToolTip", "Channels that this light should affect.\nOnly affect high quality lights\nThese channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightingChannels = { UE4CodeGen_Private::EPropertyClass::Struct, "LightingChannels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UParticleModuleLight, LightingChannels), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(NewProp_LightingChannels_MetaData, ARRAY_COUNT(NewProp_LightingChannels_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightExponent_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
				{ "ToolTip", "Provides the light's exponent when inverse squared falloff is disabled." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightExponent = { UE4CodeGen_Private::EPropertyClass::Struct, "LightExponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLight, LightExponent), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_LightExponent_MetaData, ARRAY_COUNT(NewProp_LightExponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadiusScale_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
				{ "ToolTip", "Scales the particle's radius, to calculate the light's radius." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RadiusScale = { UE4CodeGen_Private::EPropertyClass::Struct, "RadiusScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLight, RadiusScale), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_RadiusScale_MetaData, ARRAY_COUNT(NewProp_RadiusScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrightnessOverLife_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
				{ "ToolTip", "Brightness scale for the light, which can be setup as a curve over the particle's lifetime." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BrightnessOverLife = { UE4CodeGen_Private::EPropertyClass::Struct, "BrightnessOverLife", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLight, BrightnessOverLife), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_BrightnessOverLife_MetaData, ARRAY_COUNT(NewProp_BrightnessOverLife_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorScaleOverLife_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
				{ "ToolTip", "Scale that is applied to the particle's color to calculate the light's color, and can be setup as a curve over the particle's lifetime." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorScaleOverLife = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorScaleOverLife", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLight, ColorScaleOverLife), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_ColorScaleOverLife_MetaData, ARRAY_COUNT(NewProp_ColorScaleOverLife_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnFraction_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
				{ "ToolTip", "Fraction of particles in this emitter to create lights on." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnFraction = { UE4CodeGen_Private::EPropertyClass::Float, "SpawnFraction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLight, SpawnFraction), METADATA_PARAMS(NewProp_SpawnFraction_MetaData, ARRAY_COUNT(NewProp_SpawnFraction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreviewLightRadius_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
				{ "ToolTip", "Will draw wireframe spheres to preview the light radius if enabled.\nNote: this is intended for previewing and the value will not be saved, it will always revert to disabled." },
			};
#endif
			auto NewProp_bPreviewLightRadius_SetBit = [](void* Obj){ ((UParticleModuleLight*)Obj)->bPreviewLightRadius = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreviewLightRadius = { UE4CodeGen_Private::EPropertyClass::Bool, "bPreviewLightRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UParticleModuleLight), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPreviewLightRadius_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPreviewLightRadius_MetaData, ARRAY_COUNT(NewProp_bPreviewLightRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectsTranslucency_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
				{ "ToolTip", "Whether lights from this module should affect translucency.\nUse with caution.  Modules enabling this should only make a few particle lights at most, and the smaller they are, the less they will cost." },
			};
#endif
			auto NewProp_bAffectsTranslucency_SetBit = [](void* Obj){ ((UParticleModuleLight*)Obj)->bAffectsTranslucency = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectsTranslucency = { UE4CodeGen_Private::EPropertyClass::Bool, "bAffectsTranslucency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UParticleModuleLight), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAffectsTranslucency_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAffectsTranslucency_MetaData, ARRAY_COUNT(NewProp_bAffectsTranslucency_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseInverseSquaredFalloff_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
				{ "ToolTip", "Whether to use physically based inverse squared falloff from the light.  If unchecked, the LightExponent distribution will be used instead." },
			};
#endif
			auto NewProp_bUseInverseSquaredFalloff_SetBit = [](void* Obj){ ((UParticleModuleLight*)Obj)->bUseInverseSquaredFalloff = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseInverseSquaredFalloff = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseInverseSquaredFalloff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UParticleModuleLight), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseInverseSquaredFalloff_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseInverseSquaredFalloff_MetaData, ARRAY_COUNT(NewProp_bUseInverseSquaredFalloff_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShadowCastingLights,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHighQualityLights,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumetricScatteringIntensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightingChannels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightExponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RadiusScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BrightnessOverLife,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColorScaleOverLife,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnFraction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPreviewLightRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAffectsTranslucency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseInverseSquaredFalloff,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleLight>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleLight::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleLight, 1368029749);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleLight(Z_Construct_UClass_UParticleModuleLight, &UParticleModuleLight::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
