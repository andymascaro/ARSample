// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Beam/ParticleModuleBeamNoise.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleBeamNoise() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamNoise_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamNoise();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleBeamNoise::StaticRegisterNativesUParticleModuleBeamNoise()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleBeamNoise_NoRegister()
	{
		return UParticleModuleBeamNoise::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleBeamNoise()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleBeamBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Noise" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Beam/ParticleModuleBeamNoise.h" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseScale_MetaData[] = {
				{ "Category", "LowFreq" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
				{ "ToolTip", "The scale factor to apply to noise range.\nThe lookup value is determined by dividing the number of noise points present by the\nmaximum number of noise points (Frequency)." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NoiseScale = { UE4CodeGen_Private::EPropertyClass::Struct, "NoiseScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamNoise, NoiseScale), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_NoiseScale_MetaData, ARRAY_COUNT(NewProp_NoiseScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyNoiseScale_MetaData[] = {
				{ "Category", "LowFreq" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
				{ "ToolTip", "If true, apply the noise scale to the beam." },
			};
#endif
			auto NewProp_bApplyNoiseScale_SetBit = [](void* Obj){ ((UParticleModuleBeamNoise*)Obj)->bApplyNoiseScale = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyNoiseScale = { UE4CodeGen_Private::EPropertyClass::Bool, "bApplyNoiseScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleBeamNoise), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bApplyNoiseScale_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bApplyNoiseScale_MetaData, ARRAY_COUNT(NewProp_bApplyNoiseScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrequencyDistance_MetaData[] = {
				{ "Category", "LowFreq" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
				{ "ToolTip", "The distance at which to deposit noise points.\nIf 0.0, then use the static frequency value.\nIf not, distribute noise points at the given distance, up to the static Frequency value.\nAt that point, evenly distribute them along the beam." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrequencyDistance = { UE4CodeGen_Private::EPropertyClass::Float, "FrequencyDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamNoise, FrequencyDistance), METADATA_PARAMS(NewProp_FrequencyDistance_MetaData, ARRAY_COUNT(NewProp_FrequencyDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTargetNoise_MetaData[] = {
				{ "Category", "LowFreq" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
				{ "ToolTip", "Whether to apply noise to the target point (or end of line in distance mode...)\nIf true, the beam could potentially 'leave' the target..." },
			};
#endif
			auto NewProp_bTargetNoise_SetBit = [](void* Obj){ ((UParticleModuleBeamNoise*)Obj)->bTargetNoise = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTargetNoise = { UE4CodeGen_Private::EPropertyClass::Bool, "bTargetNoise", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleBeamNoise), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTargetNoise_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTargetNoise_MetaData, ARRAY_COUNT(NewProp_bTargetNoise_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseTessellation_MetaData[] = {
				{ "Category", "LowFreq" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
				{ "ToolTip", "The amount of tessellation between noise points." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NoiseTessellation = { UE4CodeGen_Private::EPropertyClass::Int, "NoiseTessellation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamNoise, NoiseTessellation), METADATA_PARAMS(NewProp_NoiseTessellation_MetaData, ARRAY_COUNT(NewProp_NoiseTessellation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseTangentStrength_MetaData[] = {
				{ "Category", "LowFreq" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
				{ "ToolTip", "The strength of noise tangents, if enabled." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NoiseTangentStrength = { UE4CodeGen_Private::EPropertyClass::Struct, "NoiseTangentStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamNoise, NoiseTangentStrength), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_NoiseTangentStrength_MetaData, ARRAY_COUNT(NewProp_NoiseTangentStrength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseNoiseTangents_MetaData[] = {
				{ "Category", "LowFreq" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
				{ "ToolTip", "If true, calculate tangents at each noise point." },
			};
#endif
			auto NewProp_bUseNoiseTangents_SetBit = [](void* Obj){ ((UParticleModuleBeamNoise*)Obj)->bUseNoiseTangents = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseNoiseTangents = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseNoiseTangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleBeamNoise), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseNoiseTangents_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseNoiseTangents_MetaData, ARRAY_COUNT(NewProp_bUseNoiseTangents_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseTension_MetaData[] = {
				{ "Category", "LowFreq" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
				{ "ToolTip", "The tension to apply to the tessellated noise line." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NoiseTension = { UE4CodeGen_Private::EPropertyClass::Float, "NoiseTension", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamNoise, NoiseTension), METADATA_PARAMS(NewProp_NoiseTension_MetaData, ARRAY_COUNT(NewProp_NoiseTension_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseLockTime_MetaData[] = {
				{ "Category", "LowFreq" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
				{ "ToolTip", "How long the  noise points should be locked - 0.0 indicates forever." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NoiseLockTime = { UE4CodeGen_Private::EPropertyClass::Float, "NoiseLockTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamNoise, NoiseLockTime), METADATA_PARAMS(NewProp_NoiseLockTime_MetaData, ARRAY_COUNT(NewProp_NoiseLockTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOscillate_MetaData[] = {
				{ "Category", "LowFreq" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
				{ "ToolTip", "Whether the noise points should be oscillate." },
			};
#endif
			auto NewProp_bOscillate_SetBit = [](void* Obj){ ((UParticleModuleBeamNoise*)Obj)->bOscillate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOscillate = { UE4CodeGen_Private::EPropertyClass::Bool, "bOscillate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleBeamNoise), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOscillate_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOscillate_MetaData, ARRAY_COUNT(NewProp_bOscillate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoiseLock_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
				{ "ToolTip", "INTERNAL - Whether the noise points should be locked." },
			};
#endif
			auto NewProp_bNoiseLock_SetBit = [](void* Obj){ ((UParticleModuleBeamNoise*)Obj)->bNoiseLock = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoiseLock = { UE4CodeGen_Private::EPropertyClass::Bool, "bNoiseLock", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleBeamNoise), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNoiseLock_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNoiseLock_MetaData, ARRAY_COUNT(NewProp_bNoiseLock_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseLockRadius_MetaData[] = {
				{ "Category", "LowFreq" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
				{ "ToolTip", "Default target-point information to use if the beam method is endpoint." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NoiseLockRadius = { UE4CodeGen_Private::EPropertyClass::Float, "NoiseLockRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamNoise, NoiseLockRadius), METADATA_PARAMS(NewProp_NoiseLockRadius_MetaData, ARRAY_COUNT(NewProp_NoiseLockRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSmooth_MetaData[] = {
				{ "Category", "LowFreq" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
				{ "ToolTip", "Whether the noise movement should be smooth or 'jerky'." },
			};
#endif
			auto NewProp_bSmooth_SetBit = [](void* Obj){ ((UParticleModuleBeamNoise*)Obj)->bSmooth = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSmooth = { UE4CodeGen_Private::EPropertyClass::Bool, "bSmooth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleBeamNoise), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSmooth_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSmooth_MetaData, ARRAY_COUNT(NewProp_bSmooth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseSpeed_MetaData[] = {
				{ "Category", "LowFreq" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
				{ "ToolTip", "The speed with which to move each noise point." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NoiseSpeed = { UE4CodeGen_Private::EPropertyClass::Struct, "NoiseSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamNoise, NoiseSpeed), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_NoiseSpeed_MetaData, ARRAY_COUNT(NewProp_NoiseSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNRScaleEmitterTime_MetaData[] = {
				{ "Category", "LowFreq" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
				{ "ToolTip", "If true,  the NoiseRangeScale will be grabbed based on the emitter time.\nIf false, the NoiseRangeScale will be grabbed based on the particle time." },
			};
#endif
			auto NewProp_bNRScaleEmitterTime_SetBit = [](void* Obj){ ((UParticleModuleBeamNoise*)Obj)->bNRScaleEmitterTime = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNRScaleEmitterTime = { UE4CodeGen_Private::EPropertyClass::Bool, "bNRScaleEmitterTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleBeamNoise), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNRScaleEmitterTime_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNRScaleEmitterTime_MetaData, ARRAY_COUNT(NewProp_bNRScaleEmitterTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseRangeScale_MetaData[] = {
				{ "Category", "LowFreq" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
				{ "ToolTip", "A scale factor that will be applied to the noise range." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NoiseRangeScale = { UE4CodeGen_Private::EPropertyClass::Struct, "NoiseRangeScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamNoise, NoiseRangeScale), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_NoiseRangeScale_MetaData, ARRAY_COUNT(NewProp_NoiseRangeScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseRange_MetaData[] = {
				{ "Category", "LowFreq" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
				{ "ToolTip", "The noise point ranges." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NoiseRange = { UE4CodeGen_Private::EPropertyClass::Struct, "NoiseRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamNoise, NoiseRange), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_NoiseRange_MetaData, ARRAY_COUNT(NewProp_NoiseRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frequency_LowRange_MetaData[] = {
				{ "Category", "LowFreq" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
				{ "ToolTip", "If not 0, then the frequency will select a random value in the range\n        [Frequency_LowRange..Frequency]" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Frequency_LowRange = { UE4CodeGen_Private::EPropertyClass::Int, "Frequency_LowRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamNoise, Frequency_LowRange), METADATA_PARAMS(NewProp_Frequency_LowRange_MetaData, ARRAY_COUNT(NewProp_Frequency_LowRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
				{ "Category", "LowFreq" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
				{ "ToolTip", "The frequency of noise points." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Frequency = { UE4CodeGen_Private::EPropertyClass::Int, "Frequency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamNoise, Frequency), METADATA_PARAMS(NewProp_Frequency_MetaData, ARRAY_COUNT(NewProp_Frequency_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLowFreq_Enabled_MetaData[] = {
				{ "Category", "LowFreq" },
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
				{ "ToolTip", "Is low frequency noise enabled." },
			};
#endif
			auto NewProp_bLowFreq_Enabled_SetBit = [](void* Obj){ ((UParticleModuleBeamNoise*)Obj)->bLowFreq_Enabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLowFreq_Enabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bLowFreq_Enabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleBeamNoise), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLowFreq_Enabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLowFreq_Enabled_MetaData, ARRAY_COUNT(NewProp_bLowFreq_Enabled_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NoiseScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bApplyNoiseScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrequencyDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTargetNoise,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NoiseTessellation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NoiseTangentStrength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseNoiseTangents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NoiseTension,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NoiseLockTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOscillate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNoiseLock,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NoiseLockRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSmooth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NoiseSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNRScaleEmitterTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NoiseRangeScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NoiseRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Frequency_LowRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Frequency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLowFreq_Enabled,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleBeamNoise>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleBeamNoise::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleBeamNoise, 4012803977);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleBeamNoise(Z_Construct_UClass_UParticleModuleBeamNoise, &UParticleModuleBeamNoise::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleBeamNoise"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleBeamNoise);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
