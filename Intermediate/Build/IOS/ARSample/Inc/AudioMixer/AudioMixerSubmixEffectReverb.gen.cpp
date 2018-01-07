// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMixerSubmixEffectReverb() {}
// Cross Module References
	AUDIOMIXER_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectReverbSettings();
	UPackage* Z_Construct_UPackage__Script_AudioMixer();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USubmixEffectReverbPreset_NoRegister();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USubmixEffectReverbPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect();
	ENGINE_API UClass* Z_Construct_UClass_UReverbEffect_NoRegister();
// End Cross Module References
class UScriptStruct* FSubmixEffectReverbSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUDIOMIXER_API uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings, Z_Construct_UPackage__Script_AudioMixer(), TEXT("SubmixEffectReverbSettings"), sizeof(FSubmixEffectReverbSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubmixEffectReverbSettings(FSubmixEffectReverbSettings::StaticStruct, TEXT("/Script/AudioMixer"), TEXT("SubmixEffectReverbSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectReverbSettings
{
	FScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectReverbSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubmixEffectReverbSettings")),new UScriptStruct::TCppStructOps<FSubmixEffectReverbSettings>);
	}
} ScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectReverbSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectReverbSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AudioMixer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubmixEffectReverbSettings"), sizeof(FSubmixEffectReverbSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectReverbSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WetLevel_MetaData[] = {
				{ "Category", "Reverb" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
				{ "ToolTip", "Overall wetlevel of the reverb effect" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WetLevel = { UE4CodeGen_Private::EPropertyClass::Float, "WetLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSubmixEffectReverbSettings, WetLevel), METADATA_PARAMS(NewProp_WetLevel_MetaData, ARRAY_COUNT(NewProp_WetLevel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirAbsorptionGainHF_MetaData[] = {
				{ "Category", "ReverbParameters" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
				{ "ToolTip", "Air Absorption - 0.0 < 0.994 < 1.0 - lower value means more absorption" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AirAbsorptionGainHF = { UE4CodeGen_Private::EPropertyClass::Float, "AirAbsorptionGainHF", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSubmixEffectReverbSettings, AirAbsorptionGainHF), METADATA_PARAMS(NewProp_AirAbsorptionGainHF_MetaData, ARRAY_COUNT(NewProp_AirAbsorptionGainHF_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LateDelay_MetaData[] = {
				{ "Category", "ReverbParameters" },
				{ "ClampMax", "0.1" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
				{ "ToolTip", "Late Reverb Delay - 0.0 < 0.011 < 0.1 Seconds - time difference between late reverb and first reflections" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LateDelay = { UE4CodeGen_Private::EPropertyClass::Float, "LateDelay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSubmixEffectReverbSettings, LateDelay), METADATA_PARAMS(NewProp_LateDelay_MetaData, ARRAY_COUNT(NewProp_LateDelay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LateGain_MetaData[] = {
				{ "Category", "ReverbParameters" },
				{ "ClampMax", "10.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
				{ "ToolTip", "Late Reverb Gain - 0.0 < 1.26 < 10.0 - gain of the late reverb" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LateGain = { UE4CodeGen_Private::EPropertyClass::Float, "LateGain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSubmixEffectReverbSettings, LateGain), METADATA_PARAMS(NewProp_LateGain_MetaData, ARRAY_COUNT(NewProp_LateGain_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflectionsDelay_MetaData[] = {
				{ "Category", "ReverbParameters" },
				{ "ClampMax", "0.3" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
				{ "ToolTip", "Reflections Delay - 0.0 < 0.007 < 0.3 Seconds - the time between the listener receiving the direct path sound and the first reflection" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReflectionsDelay = { UE4CodeGen_Private::EPropertyClass::Float, "ReflectionsDelay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSubmixEffectReverbSettings, ReflectionsDelay), METADATA_PARAMS(NewProp_ReflectionsDelay_MetaData, ARRAY_COUNT(NewProp_ReflectionsDelay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflectionsGain_MetaData[] = {
				{ "Category", "ReverbParameters" },
				{ "ClampMax", "3.16" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
				{ "ToolTip", "Reflections Gain - 0.0 < 0.05 < 3.16 - controls the amount of initial reflections" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReflectionsGain = { UE4CodeGen_Private::EPropertyClass::Float, "ReflectionsGain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSubmixEffectReverbSettings, ReflectionsGain), METADATA_PARAMS(NewProp_ReflectionsGain_MetaData, ARRAY_COUNT(NewProp_ReflectionsGain_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecayHFRatio_MetaData[] = {
				{ "Category", "ReverbParameters" },
				{ "ClampMax", "2.0" },
				{ "ClampMin", "0.1" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
				{ "ToolTip", "Decay High Frequency Ratio - 0.1 < 0.83 < 2.0 - how much the quicker or slower the high frequencies decay relative to the lower frequencies." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecayHFRatio = { UE4CodeGen_Private::EPropertyClass::Float, "DecayHFRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSubmixEffectReverbSettings, DecayHFRatio), METADATA_PARAMS(NewProp_DecayHFRatio_MetaData, ARRAY_COUNT(NewProp_DecayHFRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecayTime_MetaData[] = {
				{ "Category", "ReverbParameters" },
				{ "ClampMax", "20.0" },
				{ "ClampMin", "0.1" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
				{ "ToolTip", "Decay Time - 0.1 < 1.49 < 20.0 Seconds - larger is more reverb" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecayTime = { UE4CodeGen_Private::EPropertyClass::Float, "DecayTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSubmixEffectReverbSettings, DecayTime), METADATA_PARAMS(NewProp_DecayTime_MetaData, ARRAY_COUNT(NewProp_DecayTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GainHF_MetaData[] = {
				{ "Category", "ReverbParameters" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
				{ "ToolTip", "Reverb Gain High Frequency - 0.0 < 0.89 < 1.0 - attenuates the high frequency reflected sound" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GainHF = { UE4CodeGen_Private::EPropertyClass::Float, "GainHF", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSubmixEffectReverbSettings, GainHF), METADATA_PARAMS(NewProp_GainHF_MetaData, ARRAY_COUNT(NewProp_GainHF_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gain_MetaData[] = {
				{ "Category", "ReverbParameters" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
				{ "ToolTip", "Reverb Gain - 0.0 < 0.32 < 1.0 - overall reverb gain - master volume control" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gain = { UE4CodeGen_Private::EPropertyClass::Float, "Gain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSubmixEffectReverbSettings, Gain), METADATA_PARAMS(NewProp_Gain_MetaData, ARRAY_COUNT(NewProp_Gain_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Diffusion_MetaData[] = {
				{ "Category", "ReverbParameters" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
				{ "ToolTip", "Diffusion - 0.0 < 0.85 < 1.0 - Echo density in the reverberation decay - lower is more grainy" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Diffusion = { UE4CodeGen_Private::EPropertyClass::Float, "Diffusion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSubmixEffectReverbSettings, Diffusion), METADATA_PARAMS(NewProp_Diffusion_MetaData, ARRAY_COUNT(NewProp_Diffusion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[] = {
				{ "Category", "ReverbParameters" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
				{ "ToolTip", "Density - 0.0 < 0.85 < 1.0 - Coloration of the late reverb - lower value is more grainy" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Density = { UE4CodeGen_Private::EPropertyClass::Float, "Density", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSubmixEffectReverbSettings, Density), METADATA_PARAMS(NewProp_Density_MetaData, ARRAY_COUNT(NewProp_Density_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WetLevel,
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
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SubmixEffectReverbSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FSubmixEffectReverbSettings),
				alignof(FSubmixEffectReverbSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_CRC() { return 1431655302U; }
	void USubmixEffectReverbPreset::StaticRegisterNativesUSubmixEffectReverbPreset()
	{
		UClass* Class = USubmixEffectReverbPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", (Native)&USubmixEffectReverbPreset::execSetSettings },
			{ "SetSettingsWithReverbEffect", (Native)&USubmixEffectReverbPreset::execSetSettingsWithReverbEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings()
	{
		struct SubmixEffectReverbPreset_eventSetSettings_Parms
		{
			FSubmixEffectReverbSettings InSettings;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "InSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SubmixEffectReverbPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSubmixEffectReverbSettings, METADATA_PARAMS(NewProp_InSettings_MetaData, ARRAY_COUNT(NewProp_InSettings_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSettings,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Effects" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectReverbPreset, "SetSettings", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(SubmixEffectReverbPreset_eventSetSettings_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect()
	{
		struct SubmixEffectReverbPreset_eventSetSettingsWithReverbEffect_Parms
		{
			const UReverbEffect* InReverbEffect;
			float WetLevel;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WetLevel_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WetLevel = { UE4CodeGen_Private::EPropertyClass::Float, "WetLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(SubmixEffectReverbPreset_eventSetSettingsWithReverbEffect_Parms, WetLevel), METADATA_PARAMS(NewProp_WetLevel_MetaData, ARRAY_COUNT(NewProp_WetLevel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InReverbEffect_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InReverbEffect = { UE4CodeGen_Private::EPropertyClass::Object, "InReverbEffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(SubmixEffectReverbPreset_eventSetSettingsWithReverbEffect_Parms, InReverbEffect), Z_Construct_UClass_UReverbEffect_NoRegister, METADATA_PARAMS(NewProp_InReverbEffect_MetaData, ARRAY_COUNT(NewProp_InReverbEffect_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WetLevel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InReverbEffect,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Effects" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectReverbPreset, "SetSettingsWithReverbEffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SubmixEffectReverbPreset_eventSetSettingsWithReverbEffect_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubmixEffectReverbPreset_NoRegister()
	{
		return USubmixEffectReverbPreset::StaticClass();
	}
	UClass* Z_Construct_UClass_USubmixEffectReverbPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
				(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings, "SetSettings" }, // 2980003639
				{ &Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect, "SetSettingsWithReverbEffect" }, // 237519224
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object" },
				{ "IncludePath", "SubmixEffects/AudioMixerSubmixEffectReverb.h" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
				{ "Category", "SubmixEffectPreset" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings = { UE4CodeGen_Private::EPropertyClass::Struct, "Settings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USubmixEffectReverbPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectReverbSettings, METADATA_PARAMS(NewProp_Settings_MetaData, ARRAY_COUNT(NewProp_Settings_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Settings,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USubmixEffectReverbPreset>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USubmixEffectReverbPreset::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00101080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(USubmixEffectReverbPreset, 1045821916);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubmixEffectReverbPreset(Z_Construct_UClass_USubmixEffectReverbPreset, &USubmixEffectReverbPreset::StaticClass, TEXT("/Script/AudioMixer"), TEXT("USubmixEffectReverbPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectReverbPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
