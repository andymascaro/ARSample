// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/ReverbEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReverbEffect() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UReverbEffect_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UReverbEffect();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UReverbEffect::StaticRegisterNativesUReverbEffect()
	{
	}
	UClass* Z_Construct_UClass_UReverbEffect_NoRegister()
	{
		return UReverbEffect::StaticClass();
	}
	UClass* Z_Construct_UClass_UReverbEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "object" },
				{ "IncludePath", "Sound/ReverbEffect.h" },
				{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChanged_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
				{ "ToolTip", "Transient property used to trigger real-time updates of the reverb for real-time editor previewing" },
			};
#endif
			auto NewProp_bChanged_SetBit = [](void* Obj){ ((UReverbEffect*)Obj)->bChanged = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChanged = { UE4CodeGen_Private::EPropertyClass::Bool, "bChanged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UReverbEffect), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bChanged_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bChanged_MetaData, ARRAY_COUNT(NewProp_bChanged_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomRolloffFactor_MetaData[] = {
				{ "Category", "ReverbParameters" },
				{ "ClampMax", "10.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
				{ "ToolTip", "Room Rolloff - 0.0 < 0.0 < 10.0 - multiplies the attenuation due to distance" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoomRolloffFactor = { UE4CodeGen_Private::EPropertyClass::Float, "RoomRolloffFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UReverbEffect, RoomRolloffFactor), METADATA_PARAMS(NewProp_RoomRolloffFactor_MetaData, ARRAY_COUNT(NewProp_RoomRolloffFactor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirAbsorptionGainHF_MetaData[] = {
				{ "Category", "ReverbParameters" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
				{ "ToolTip", "Air Absorption - 0.0 < 0.994 < 1.0 - lower value means more absorption" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AirAbsorptionGainHF = { UE4CodeGen_Private::EPropertyClass::Float, "AirAbsorptionGainHF", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UReverbEffect, AirAbsorptionGainHF), METADATA_PARAMS(NewProp_AirAbsorptionGainHF_MetaData, ARRAY_COUNT(NewProp_AirAbsorptionGainHF_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LateDelay_MetaData[] = {
				{ "Category", "ReverbParameters" },
				{ "ClampMax", "0.1" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
				{ "ToolTip", "Late Reverb Delay - 0.0 < 0.011 < 0.1 Seconds - time difference between late reverb and first reflections" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LateDelay = { UE4CodeGen_Private::EPropertyClass::Float, "LateDelay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UReverbEffect, LateDelay), METADATA_PARAMS(NewProp_LateDelay_MetaData, ARRAY_COUNT(NewProp_LateDelay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LateGain_MetaData[] = {
				{ "Category", "ReverbParameters" },
				{ "ClampMax", "10.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
				{ "ToolTip", "Late Reverb Gain - 0.0 < 1.26 < 10.0 - gain of the late reverb" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LateGain = { UE4CodeGen_Private::EPropertyClass::Float, "LateGain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UReverbEffect, LateGain), METADATA_PARAMS(NewProp_LateGain_MetaData, ARRAY_COUNT(NewProp_LateGain_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflectionsDelay_MetaData[] = {
				{ "Category", "ReverbParameters" },
				{ "ClampMax", "0.3" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
				{ "ToolTip", "Reflections Delay - 0.0 < 0.007 < 0.3 Seconds - the time between the listener receiving the direct path sound and the first reflection" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReflectionsDelay = { UE4CodeGen_Private::EPropertyClass::Float, "ReflectionsDelay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UReverbEffect, ReflectionsDelay), METADATA_PARAMS(NewProp_ReflectionsDelay_MetaData, ARRAY_COUNT(NewProp_ReflectionsDelay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflectionsGain_MetaData[] = {
				{ "Category", "ReverbParameters" },
				{ "ClampMax", "3.16" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
				{ "ToolTip", "Reflections Gain - 0.0 < 0.05 < 3.16 - controls the amount of initial reflections" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReflectionsGain = { UE4CodeGen_Private::EPropertyClass::Float, "ReflectionsGain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UReverbEffect, ReflectionsGain), METADATA_PARAMS(NewProp_ReflectionsGain_MetaData, ARRAY_COUNT(NewProp_ReflectionsGain_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecayHFRatio_MetaData[] = {
				{ "Category", "ReverbParameters" },
				{ "ClampMax", "2.0" },
				{ "ClampMin", "0.1" },
				{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
				{ "ToolTip", "Decay High Frequency Ratio - 0.1 < 0.83 < 2.0 - how much the quicker or slower the high frequencies decay relative to the lower frequencies." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecayHFRatio = { UE4CodeGen_Private::EPropertyClass::Float, "DecayHFRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UReverbEffect, DecayHFRatio), METADATA_PARAMS(NewProp_DecayHFRatio_MetaData, ARRAY_COUNT(NewProp_DecayHFRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecayTime_MetaData[] = {
				{ "Category", "ReverbParameters" },
				{ "ClampMax", "20.0" },
				{ "ClampMin", "0.1" },
				{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
				{ "ToolTip", "Decay Time - 0.1 < 1.49 < 20.0 Seconds - larger is more reverb" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecayTime = { UE4CodeGen_Private::EPropertyClass::Float, "DecayTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UReverbEffect, DecayTime), METADATA_PARAMS(NewProp_DecayTime_MetaData, ARRAY_COUNT(NewProp_DecayTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GainHF_MetaData[] = {
				{ "Category", "ReverbParameters" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
				{ "ToolTip", "Reverb Gain High Frequency - 0.0 < 0.89 < 1.0 - attenuates the high frequency reflected sound" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GainHF = { UE4CodeGen_Private::EPropertyClass::Float, "GainHF", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UReverbEffect, GainHF), METADATA_PARAMS(NewProp_GainHF_MetaData, ARRAY_COUNT(NewProp_GainHF_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gain_MetaData[] = {
				{ "Category", "ReverbParameters" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
				{ "ToolTip", "Reverb Gain - 0.0 < 0.32 < 1.0 - overall reverb gain - master volume control" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gain = { UE4CodeGen_Private::EPropertyClass::Float, "Gain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UReverbEffect, Gain), METADATA_PARAMS(NewProp_Gain_MetaData, ARRAY_COUNT(NewProp_Gain_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Diffusion_MetaData[] = {
				{ "Category", "ReverbParameters" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
				{ "ToolTip", "Diffusion - 0.0 < 1.0 < 1.0 - Echo density in the reverberation decay - lower is more grainy" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Diffusion = { UE4CodeGen_Private::EPropertyClass::Float, "Diffusion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UReverbEffect, Diffusion), METADATA_PARAMS(NewProp_Diffusion_MetaData, ARRAY_COUNT(NewProp_Diffusion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[] = {
				{ "Category", "ReverbParameters" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Sound/ReverbEffect.h" },
				{ "ToolTip", "Density - 0.0 < 1.0 < 1.0 - Coloration of the late reverb - lower value is more grainy" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Density = { UE4CodeGen_Private::EPropertyClass::Float, "Density", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UReverbEffect, Density), METADATA_PARAMS(NewProp_Density_MetaData, ARRAY_COUNT(NewProp_Density_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bChanged,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RoomRolloffFactor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AirAbsorptionGainHF,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LateDelay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LateGain,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReflectionsDelay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReflectionsGain,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DecayHFRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DecayTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GainHF,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Gain,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Diffusion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Density,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UReverbEffect>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UReverbEffect::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
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
	IMPLEMENT_CLASS(UReverbEffect, 2436210930);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReverbEffect(Z_Construct_UClass_UReverbEffect, &UReverbEffect::StaticClass, TEXT("/Script/Engine"), TEXT("UReverbEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReverbEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
