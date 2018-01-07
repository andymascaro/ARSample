// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMixerSubmixEffectDynamicsProcessor() {}
// Cross Module References
	AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode();
	UPackage* Z_Construct_UPackage__Script_AudioMixer();
	AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType();
	AUDIOMIXER_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_NoRegister();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings();
// End Cross Module References
	static UEnum* ESubmixEffectDynamicsPeakMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode, Z_Construct_UPackage__Script_AudioMixer(), TEXT("ESubmixEffectDynamicsPeakMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubmixEffectDynamicsPeakMode(ESubmixEffectDynamicsPeakMode_StaticEnum, TEXT("/Script/AudioMixer"), TEXT("ESubmixEffectDynamicsPeakMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode_CRC() { return 3622213554U; }
	UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AudioMixer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubmixEffectDynamicsPeakMode"), 0, Get_Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESubmixEffectDynamicsPeakMode::MeanSquared", (int64)ESubmixEffectDynamicsPeakMode::MeanSquared },
				{ "ESubmixEffectDynamicsPeakMode::RootMeanSquared", (int64)ESubmixEffectDynamicsPeakMode::RootMeanSquared },
				{ "ESubmixEffectDynamicsPeakMode::Peak", (int64)ESubmixEffectDynamicsPeakMode::Peak },
				{ "ESubmixEffectDynamicsPeakMode::Count", (int64)ESubmixEffectDynamicsPeakMode::Count },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESubmixEffectDynamicsPeakMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ESubmixEffectDynamicsPeakMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESubmixEffectDynamicsProcessorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType, Z_Construct_UPackage__Script_AudioMixer(), TEXT("ESubmixEffectDynamicsProcessorType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubmixEffectDynamicsProcessorType(ESubmixEffectDynamicsProcessorType_StaticEnum, TEXT("/Script/AudioMixer"), TEXT("ESubmixEffectDynamicsProcessorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType_CRC() { return 4146786041U; }
	UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AudioMixer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubmixEffectDynamicsProcessorType"), 0, Get_Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESubmixEffectDynamicsProcessorType::Compressor", (int64)ESubmixEffectDynamicsProcessorType::Compressor },
				{ "ESubmixEffectDynamicsProcessorType::Limiter", (int64)ESubmixEffectDynamicsProcessorType::Limiter },
				{ "ESubmixEffectDynamicsProcessorType::Expander", (int64)ESubmixEffectDynamicsProcessorType::Expander },
				{ "ESubmixEffectDynamicsProcessorType::Gate", (int64)ESubmixEffectDynamicsProcessorType::Gate },
				{ "ESubmixEffectDynamicsProcessorType::Count", (int64)ESubmixEffectDynamicsProcessorType::Count },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESubmixEffectDynamicsProcessorType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ESubmixEffectDynamicsProcessorType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSubmixEffectDynamicsProcessorSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUDIOMIXER_API uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings, Z_Construct_UPackage__Script_AudioMixer(), TEXT("SubmixEffectDynamicsProcessorSettings"), sizeof(FSubmixEffectDynamicsProcessorSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings(FSubmixEffectDynamicsProcessorSettings::StaticStruct, TEXT("/Script/AudioMixer"), TEXT("SubmixEffectDynamicsProcessorSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectDynamicsProcessorSettings
{
	FScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectDynamicsProcessorSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubmixEffectDynamicsProcessorSettings")),new UScriptStruct::TCppStructOps<FSubmixEffectDynamicsProcessorSettings>);
	}
} ScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectDynamicsProcessorSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AudioMixer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubmixEffectDynamicsProcessorSettings"), sizeof(FSubmixEffectDynamicsProcessorSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
				{ "ToolTip", "A submix dynamics processor" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectDynamicsProcessorSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnalogMode_MetaData[] = {
				{ "Category", "SourceEffect|Preset" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
				{ "ToolTip", "Toggles treating the attack and release envelopes as analog-style vs digital-style. Analog will respond a bit more naturally/slower." },
			};
#endif
			auto NewProp_bAnalogMode_SetBit = [](void* Obj){ ((FSubmixEffectDynamicsProcessorSettings*)Obj)->bAnalogMode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnalogMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bAnalogMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSubmixEffectDynamicsProcessorSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAnalogMode_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAnalogMode_MetaData, ARRAY_COUNT(NewProp_bAnalogMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChannelLinked_MetaData[] = {
				{ "Category", "SourceEffect|Preset" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
				{ "ToolTip", "Whether or not to average all channels of audio before inputing into the dynamics processor" },
			};
#endif
			auto NewProp_bChannelLinked_SetBit = [](void* Obj){ ((FSubmixEffectDynamicsProcessorSettings*)Obj)->bChannelLinked = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChannelLinked = { UE4CodeGen_Private::EPropertyClass::Bool, "bChannelLinked", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSubmixEffectDynamicsProcessorSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bChannelLinked_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bChannelLinked_MetaData, ARRAY_COUNT(NewProp_bChannelLinked_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputGainDb_MetaData[] = {
				{ "Category", "SourceEffect|Preset" },
				{ "ClampMax", "20.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
				{ "ToolTip", "The output gain of the dynamics processor in dB" },
				{ "UIMax", "20.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutputGainDb = { UE4CodeGen_Private::EPropertyClass::Float, "OutputGainDb", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, OutputGainDb), METADATA_PARAMS(NewProp_OutputGainDb_MetaData, ARRAY_COUNT(NewProp_OutputGainDb_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputGainDb_MetaData[] = {
				{ "Category", "SourceEffect|Preset" },
				{ "ClampMax", "20.0" },
				{ "ClampMin", "-12.0" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
				{ "ToolTip", "The input gain of the dynamics processor in dB" },
				{ "UIMax", "20.0" },
				{ "UIMin", "-12.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputGainDb = { UE4CodeGen_Private::EPropertyClass::Float, "InputGainDb", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, InputGainDb), METADATA_PARAMS(NewProp_InputGainDb_MetaData, ARRAY_COUNT(NewProp_InputGainDb_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KneeBandwidthDb_MetaData[] = {
				{ "Category", "SourceEffect|Preset" },
				{ "ClampMax", "20.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
				{ "ToolTip", "The knee bandwidth of the compressor to use in dB" },
				{ "UIMax", "20.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KneeBandwidthDb = { UE4CodeGen_Private::EPropertyClass::Float, "KneeBandwidthDb", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, KneeBandwidthDb), METADATA_PARAMS(NewProp_KneeBandwidthDb_MetaData, ARRAY_COUNT(NewProp_KneeBandwidthDb_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[] = {
				{ "Category", "SourceEffect|Preset" },
				{ "ClampMax", "20.0" },
				{ "ClampMin", "1.0" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
				{ "ToolTip", "The dynamics processor ratio -- has different meaning depending on the processor type." },
				{ "UIMax", "20.0" },
				{ "UIMin", "1.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ratio = { UE4CodeGen_Private::EPropertyClass::Float, "Ratio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, Ratio), METADATA_PARAMS(NewProp_Ratio_MetaData, ARRAY_COUNT(NewProp_Ratio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThresholdDb_MetaData[] = {
				{ "Category", "SourceEffect|Preset" },
				{ "ClampMax", "0.0" },
				{ "ClampMin", "-60.0" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
				{ "ToolTip", "The threshold at which to perform a dynamics processing operation" },
				{ "UIMax", "0.0" },
				{ "UIMin", "-60.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThresholdDb = { UE4CodeGen_Private::EPropertyClass::Float, "ThresholdDb", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, ThresholdDb), METADATA_PARAMS(NewProp_ThresholdDb_MetaData, ARRAY_COUNT(NewProp_ThresholdDb_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleaseTimeMsec_MetaData[] = {
				{ "Category", "SourceEffect|Preset" },
				{ "ClampMax", "5000.0" },
				{ "ClampMin", "20.0" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
				{ "ToolTip", "The amount of time to release the dynamics processing effect in milliseconds" },
				{ "UIMax", "5000.0" },
				{ "UIMin", "20.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReleaseTimeMsec = { UE4CodeGen_Private::EPropertyClass::Float, "ReleaseTimeMsec", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, ReleaseTimeMsec), METADATA_PARAMS(NewProp_ReleaseTimeMsec_MetaData, ARRAY_COUNT(NewProp_ReleaseTimeMsec_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackTimeMsec_MetaData[] = {
				{ "Category", "SourceEffect|Preset" },
				{ "ClampMax", "300.0" },
				{ "ClampMin", "1.0" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
				{ "ToolTip", "The amount of time to ramp into any dynamics processing effect in milliseconds." },
				{ "UIMax", "200.0" },
				{ "UIMin", "1.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackTimeMsec = { UE4CodeGen_Private::EPropertyClass::Float, "AttackTimeMsec", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, AttackTimeMsec), METADATA_PARAMS(NewProp_AttackTimeMsec_MetaData, ARRAY_COUNT(NewProp_AttackTimeMsec_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAheadMsec_MetaData[] = {
				{ "Category", "SourceEffect|Preset" },
				{ "ClampMax", "50.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
				{ "ToolTip", "The amount of time to look ahead of the current audio. Allows for transients to be included in dynamics processing." },
				{ "UIMax", "50.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LookAheadMsec = { UE4CodeGen_Private::EPropertyClass::Float, "LookAheadMsec", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, LookAheadMsec), METADATA_PARAMS(NewProp_LookAheadMsec_MetaData, ARRAY_COUNT(NewProp_LookAheadMsec_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeakMode_MetaData[] = {
				{ "Category", "SourceEffect|Preset" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PeakMode = { UE4CodeGen_Private::EPropertyClass::Enum, "PeakMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, PeakMode), Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode, METADATA_PARAMS(NewProp_PeakMode_MetaData, ARRAY_COUNT(NewProp_PeakMode_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PeakMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicsProcessorType_MetaData[] = {
				{ "Category", "SourceEffect|Preset" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DynamicsProcessorType = { UE4CodeGen_Private::EPropertyClass::Enum, "DynamicsProcessorType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, DynamicsProcessorType), Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType, METADATA_PARAMS(NewProp_DynamicsProcessorType_MetaData, ARRAY_COUNT(NewProp_DynamicsProcessorType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DynamicsProcessorType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAnalogMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bChannelLinked,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutputGainDb,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputGainDb,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KneeBandwidthDb,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Ratio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThresholdDb,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReleaseTimeMsec,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttackTimeMsec,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LookAheadMsec,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PeakMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PeakMode_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DynamicsProcessorType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DynamicsProcessorType_Underlying,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SubmixEffectDynamicsProcessorSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FSubmixEffectDynamicsProcessorSettings),
				alignof(FSubmixEffectDynamicsProcessorSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_CRC() { return 280525500U; }
	void USubmixEffectDynamicsProcessorPreset::StaticRegisterNativesUSubmixEffectDynamicsProcessorPreset()
	{
		UClass* Class = USubmixEffectDynamicsProcessorPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", (Native)&USubmixEffectDynamicsProcessorPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings()
	{
		struct SubmixEffectDynamicsProcessorPreset_eventSetSettings_Parms
		{
			FSubmixEffectDynamicsProcessorSettings InSettings;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "InSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SubmixEffectDynamicsProcessorPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings, METADATA_PARAMS(NewProp_InSettings_MetaData, ARRAY_COUNT(NewProp_InSettings_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSettings,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Effects" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset, "SetSettings", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(SubmixEffectDynamicsProcessorPreset_eventSetSettings_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_NoRegister()
	{
		return USubmixEffectDynamicsProcessorPreset::StaticClass();
	}
	UClass* Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
				(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings, "SetSettings" }, // 2048928023
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "AudioSourceEffect" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
				{ "Category", "SubmixEffectPreset" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings = { UE4CodeGen_Private::EPropertyClass::Struct, "Settings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USubmixEffectDynamicsProcessorPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings, METADATA_PARAMS(NewProp_Settings_MetaData, ARRAY_COUNT(NewProp_Settings_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Settings,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USubmixEffectDynamicsProcessorPreset>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USubmixEffectDynamicsProcessorPreset::StaticClass,
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
	IMPLEMENT_CLASS(USubmixEffectDynamicsProcessorPreset, 449103548);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubmixEffectDynamicsProcessorPreset(Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset, &USubmixEffectDynamicsProcessorPreset::StaticClass, TEXT("/Script/AudioMixer"), TEXT("USubmixEffectDynamicsProcessorPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectDynamicsProcessorPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
