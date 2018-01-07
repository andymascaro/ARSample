// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundAttenuation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundAttenuation() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EReverbSendMethod();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAirAbsorptionMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESoundDistanceCalc();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBaseAttenuationSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	ENGINE_API UClass* Z_Construct_UClass_UReverbPluginSourceSettingsBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UClass* Z_Construct_UClass_USpatializationPluginSourceSettingsBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EReverbSendMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EReverbSendMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EReverbSendMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EReverbSendMethod(EReverbSendMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EReverbSendMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EReverbSendMethod_CRC() { return 3870430627U; }
	UEnum* Z_Construct_UEnum_Engine_EReverbSendMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EReverbSendMethod"), 0, Get_Z_Construct_UEnum_Engine_EReverbSendMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EReverbSendMethod::Linear", (int64)EReverbSendMethod::Linear },
				{ "EReverbSendMethod::CustomCurve", (int64)EReverbSendMethod::CustomCurve },
				{ "EReverbSendMethod::Manual", (int64)EReverbSendMethod::Manual },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CustomCurve.ToolTip", "A reverb send based on a supplied curve" },
				{ "Linear.ToolTip", "A reverb send based on linear interpolation between a distance range and send-level range" },
				{ "Manual.ToolTip", "A manual reverb send level (Uses the specififed constant send level value. Useful for 2D sounds.)" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EReverbSendMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EReverbSendMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAirAbsorptionMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAirAbsorptionMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EAirAbsorptionMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAirAbsorptionMethod(EAirAbsorptionMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EAirAbsorptionMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAirAbsorptionMethod_CRC() { return 1080475654U; }
	UEnum* Z_Construct_UEnum_Engine_EAirAbsorptionMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAirAbsorptionMethod"), 0, Get_Z_Construct_UEnum_Engine_EAirAbsorptionMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAirAbsorptionMethod::Linear", (int64)EAirAbsorptionMethod::Linear },
				{ "EAirAbsorptionMethod::CustomCurve", (int64)EAirAbsorptionMethod::CustomCurve },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CustomCurve.ToolTip", "The air absorption conforms to a custom distance curve." },
				{ "Linear.ToolTip", "The air absorption conform to a linear distance function" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAirAbsorptionMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EAirAbsorptionMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESoundSpatializationAlgorithm_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm, Z_Construct_UPackage__Script_Engine(), TEXT("ESoundSpatializationAlgorithm"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESoundSpatializationAlgorithm(ESoundSpatializationAlgorithm_StaticEnum, TEXT("/Script/Engine"), TEXT("ESoundSpatializationAlgorithm"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm_CRC() { return 498421410U; }
	UEnum* Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESoundSpatializationAlgorithm"), 0, Get_Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SPATIALIZATION_Default", (int64)SPATIALIZATION_Default },
				{ "SPATIALIZATION_HRTF", (int64)SPATIALIZATION_HRTF },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "SPATIALIZATION_Default.ToolTip", "Standard panning method for spatialization." },
				{ "SPATIALIZATION_HRTF.ToolTip", "3rd party object-based spatialization (HRTF, Atmos). Requires a spatializaton plugin." },
				{ "ToolTip", "This enumeration is deprecated" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESoundSpatializationAlgorithm",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ESoundSpatializationAlgorithm",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESoundDistanceCalc_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESoundDistanceCalc, Z_Construct_UPackage__Script_Engine(), TEXT("ESoundDistanceCalc"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESoundDistanceCalc(ESoundDistanceCalc_StaticEnum, TEXT("/Script/Engine"), TEXT("ESoundDistanceCalc"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESoundDistanceCalc_CRC() { return 1258159844U; }
	UEnum* Z_Construct_UEnum_Engine_ESoundDistanceCalc()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESoundDistanceCalc"), 0, Get_Z_Construct_UEnum_Engine_ESoundDistanceCalc_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SOUNDDISTANCE_Normal", (int64)SOUNDDISTANCE_Normal },
				{ "SOUNDDISTANCE_InfiniteXYPlane", (int64)SOUNDDISTANCE_InfiniteXYPlane },
				{ "SOUNDDISTANCE_InfiniteXZPlane", (int64)SOUNDDISTANCE_InfiniteXZPlane },
				{ "SOUNDDISTANCE_InfiniteYZPlane", (int64)SOUNDDISTANCE_InfiniteYZPlane },
				{ "SOUNDDISTANCE_MAX", (int64)SOUNDDISTANCE_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "This enumeration is deprecated" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESoundDistanceCalc",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ESoundDistanceCalc",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSoundAttenuationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundAttenuationSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundAttenuationSettings, Z_Construct_UPackage__Script_Engine(), TEXT("SoundAttenuationSettings"), sizeof(FSoundAttenuationSettings), Get_Z_Construct_UScriptStruct_FSoundAttenuationSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundAttenuationSettings(FSoundAttenuationSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundAttenuationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundAttenuationSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundAttenuationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundAttenuationSettings")),new UScriptStruct::TCppStructOps<FSoundAttenuationSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundAttenuationSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundAttenuationSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundAttenuationSettings"), sizeof(FSoundAttenuationSettings), Get_Z_Construct_UScriptStruct_FSoundAttenuationSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "The settings for attenuating." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundAttenuationSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManualReverbSendLevel_MetaData[] = {
				{ "Category", "AttenuationReverbSend" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "The manual master reverb send level to use. Doesn't change as a function of distance." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ManualReverbSendLevel = { UE4CodeGen_Private::EPropertyClass::Float, "ManualReverbSendLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, ManualReverbSendLevel), METADATA_PARAMS(NewProp_ManualReverbSendLevel_MetaData, ARRAY_COUNT(NewProp_ManualReverbSendLevel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomReverbSendCurve_MetaData[] = {
				{ "Category", "AttenuationReverbSend" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "The custom reverb send curve to use for distance-based send level." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomReverbSendCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "CustomReverbSendCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, CustomReverbSendCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(NewProp_CustomReverbSendCurve_MetaData, ARRAY_COUNT(NewProp_CustomReverbSendCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverbDistanceMax_MetaData[] = {
				{ "Category", "AttenuationReverbSend" },
				{ "DisplayName", "Reverb Max Send Distance" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "The max distance to send to the master reverb." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReverbDistanceMax = { UE4CodeGen_Private::EPropertyClass::Float, "ReverbDistanceMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, ReverbDistanceMax), METADATA_PARAMS(NewProp_ReverbDistanceMax_MetaData, ARRAY_COUNT(NewProp_ReverbDistanceMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverbDistanceMin_MetaData[] = {
				{ "Category", "AttenuationReverbSend" },
				{ "DisplayName", "Reverb Min Send Distance" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "The min distance to send to the master reverb." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReverbDistanceMin = { UE4CodeGen_Private::EPropertyClass::Float, "ReverbDistanceMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, ReverbDistanceMin), METADATA_PARAMS(NewProp_ReverbDistanceMin_MetaData, ARRAY_COUNT(NewProp_ReverbDistanceMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverbWetLevelMax_MetaData[] = {
				{ "Category", "AttenuationReverbSend" },
				{ "DisplayName", "Reverb Max Send Level" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "The amount to send to master reverb when sound is located at a distance equal to value specified in the reverb max send distance." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReverbWetLevelMax = { UE4CodeGen_Private::EPropertyClass::Float, "ReverbWetLevelMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, ReverbWetLevelMax), METADATA_PARAMS(NewProp_ReverbWetLevelMax_MetaData, ARRAY_COUNT(NewProp_ReverbWetLevelMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverbWetLevelMin_MetaData[] = {
				{ "Category", "AttenuationReverbSend" },
				{ "DisplayName", "Reverb Min Send Level" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "The amount to send to master reverb when sound is located at a distance equal to value specified in the reverb min send distance." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReverbWetLevelMin = { UE4CodeGen_Private::EPropertyClass::Float, "ReverbWetLevelMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, ReverbWetLevelMin), METADATA_PARAMS(NewProp_ReverbWetLevelMin_MetaData, ARRAY_COUNT(NewProp_ReverbWetLevelMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverbPluginSettings_MetaData[] = {
				{ "Category", "AttenuationReverbSend" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "Settings to use with reverb audio plugin. These are defined by the plugin creator. Not all audio plugins utilize this feature." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReverbPluginSettings = { UE4CodeGen_Private::EPropertyClass::Object, "ReverbPluginSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, ReverbPluginSettings), Z_Construct_UClass_UReverbPluginSourceSettingsBase_NoRegister, METADATA_PARAMS(NewProp_ReverbPluginSettings_MetaData, ARRAY_COUNT(NewProp_ReverbPluginSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverbSendMethod_MetaData[] = {
				{ "Category", "AttenuationReverbSend" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "What method to use to control master reverb sends" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReverbSendMethod = { UE4CodeGen_Private::EPropertyClass::Enum, "ReverbSendMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, ReverbSendMethod), Z_Construct_UEnum_Engine_EReverbSendMethod, METADATA_PARAMS(NewProp_ReverbSendMethod_MetaData, ARRAY_COUNT(NewProp_ReverbSendMethod_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReverbSendMethod_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionPluginSettings_MetaData[] = {
				{ "Category", "AttenuationOcclusion" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "Settings to use with occlusion audio plugin. These are defined by the plugin creator. Not all audio plugins utilize this feature." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OcclusionPluginSettings = { UE4CodeGen_Private::EPropertyClass::Object, "OcclusionPluginSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, OcclusionPluginSettings), Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_NoRegister, METADATA_PARAMS(NewProp_OcclusionPluginSettings_MetaData, ARRAY_COUNT(NewProp_OcclusionPluginSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionInterpolationTime_MetaData[] = {
				{ "Category", "AttenuationOcclusion" },
				{ "ClampMin", "0" },
				{ "EditCondition", "bEnableOcclusion" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "The amount of time in seconds to interpolate to the target OcclusionLowPassFilterFrequency when a sound is occluded." },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionInterpolationTime = { UE4CodeGen_Private::EPropertyClass::Float, "OcclusionInterpolationTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, OcclusionInterpolationTime), METADATA_PARAMS(NewProp_OcclusionInterpolationTime_MetaData, ARRAY_COUNT(NewProp_OcclusionInterpolationTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionVolumeAttenuation_MetaData[] = {
				{ "Category", "AttenuationOcclusion" },
				{ "ClampMin", "0.0" },
				{ "EditCondition", "bEnableOcclusion" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "The amount of volume attenuation to apply to sounds which are occluded." },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionVolumeAttenuation = { UE4CodeGen_Private::EPropertyClass::Float, "OcclusionVolumeAttenuation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, OcclusionVolumeAttenuation), METADATA_PARAMS(NewProp_OcclusionVolumeAttenuation_MetaData, ARRAY_COUNT(NewProp_OcclusionVolumeAttenuation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionLowPassFilterFrequency_MetaData[] = {
				{ "Category", "AttenuationOcclusion" },
				{ "ClampMin", "0.0" },
				{ "EditCondition", "bEnableOcclusion" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "The low pass filter frequency (in hertz) to apply if the sound playing in this audio component is occluded. This will override the frequency set in LowPassFilterFrequency. A frequency of 0.0 is the device sample rate and will bypass the filter." },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionLowPassFilterFrequency = { UE4CodeGen_Private::EPropertyClass::Float, "OcclusionLowPassFilterFrequency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, OcclusionLowPassFilterFrequency), METADATA_PARAMS(NewProp_OcclusionLowPassFilterFrequency_MetaData, ARRAY_COUNT(NewProp_OcclusionLowPassFilterFrequency_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionTraceChannel_MetaData[] = {
				{ "Category", "AttenuationOcclusion" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "Which trace channel to use for audio occlusion checks." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_OcclusionTraceChannel = { UE4CodeGen_Private::EPropertyClass::Byte, "OcclusionTraceChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, OcclusionTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(NewProp_OcclusionTraceChannel_MetaData, ARRAY_COUNT(NewProp_OcclusionTraceChannel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusReleaseInterpSpeed_MetaData[] = {
				{ "Category", "AttenuationListenerFocus" },
				{ "ClampMin", "0.0" },
				{ "EditCondition", "bEnableFocusInterpolation" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "Scalar used to increase interpolation speed downwards to the target Focus value" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusReleaseInterpSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "FocusReleaseInterpSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, FocusReleaseInterpSpeed), METADATA_PARAMS(NewProp_FocusReleaseInterpSpeed_MetaData, ARRAY_COUNT(NewProp_FocusReleaseInterpSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusAttackInterpSpeed_MetaData[] = {
				{ "Category", "AttenuationListenerFocus" },
				{ "ClampMin", "0.0" },
				{ "EditCondition", "bEnableFocusInterpolation" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "Scalar used to increase interpolation speed upwards to the target Focus value" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusAttackInterpSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "FocusAttackInterpSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, FocusAttackInterpSpeed), METADATA_PARAMS(NewProp_FocusAttackInterpSpeed_MetaData, ARRAY_COUNT(NewProp_FocusAttackInterpSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonFocusVolumeAttenuation_MetaData[] = {
				{ "Category", "AttenuationListenerFocus" },
				{ "ClampMin", "0.0" },
				{ "EditCondition", "bEnableListenerFocus" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "Amount to attenuate sounds that are not in focus. Can be overridden at the sound-level." },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NonFocusVolumeAttenuation = { UE4CodeGen_Private::EPropertyClass::Float, "NonFocusVolumeAttenuation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, NonFocusVolumeAttenuation), METADATA_PARAMS(NewProp_NonFocusVolumeAttenuation_MetaData, ARRAY_COUNT(NewProp_NonFocusVolumeAttenuation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusVolumeAttenuation_MetaData[] = {
				{ "Category", "AttenuationListenerFocus" },
				{ "ClampMin", "0.0" },
				{ "EditCondition", "bEnableListenerFocus" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "Amount to attenuate sounds that are in focus. Can be overridden at the sound-level." },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusVolumeAttenuation = { UE4CodeGen_Private::EPropertyClass::Float, "FocusVolumeAttenuation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, FocusVolumeAttenuation), METADATA_PARAMS(NewProp_FocusVolumeAttenuation_MetaData, ARRAY_COUNT(NewProp_FocusVolumeAttenuation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonFocusPriorityScale_MetaData[] = {
				{ "Category", "AttenuationListenerFocus" },
				{ "ClampMin", "0.0" },
				{ "EditCondition", "bEnableListenerFocus" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "Amount to scale the priority of sounds that are not in-focus. Can be used to reduce the priority of sounds that are not in focus." },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NonFocusPriorityScale = { UE4CodeGen_Private::EPropertyClass::Float, "NonFocusPriorityScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, NonFocusPriorityScale), METADATA_PARAMS(NewProp_NonFocusPriorityScale_MetaData, ARRAY_COUNT(NewProp_NonFocusPriorityScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusPriorityScale_MetaData[] = {
				{ "Category", "AttenuationListenerFocus" },
				{ "ClampMin", "0.0" },
				{ "EditCondition", "bEnableListenerFocus" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "Amount to scale the priority of sounds that are in focus. Can be used to boost the priority of sounds that are in focus." },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusPriorityScale = { UE4CodeGen_Private::EPropertyClass::Float, "FocusPriorityScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, FocusPriorityScale), METADATA_PARAMS(NewProp_FocusPriorityScale_MetaData, ARRAY_COUNT(NewProp_FocusPriorityScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonFocusDistanceScale_MetaData[] = {
				{ "Category", "AttenuationListenerFocus" },
				{ "ClampMin", "0.0" },
				{ "EditCondition", "bEnableListenerFocus" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "Amount to scale the distance calculation of sounds that are not in-focus. Can be used to make in-focus sounds appear to be closer or further away than they actually are." },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NonFocusDistanceScale = { UE4CodeGen_Private::EPropertyClass::Float, "NonFocusDistanceScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, NonFocusDistanceScale), METADATA_PARAMS(NewProp_NonFocusDistanceScale_MetaData, ARRAY_COUNT(NewProp_NonFocusDistanceScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusDistanceScale_MetaData[] = {
				{ "Category", "AttenuationListenerFocus" },
				{ "ClampMin", "0.0" },
				{ "EditCondition", "bEnableListenerFocus" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "Amount to scale the distance calculation of sounds that are in-focus. Can be used to make in-focus sounds appear to be closer or further away than they actually are." },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusDistanceScale = { UE4CodeGen_Private::EPropertyClass::Float, "FocusDistanceScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, FocusDistanceScale), METADATA_PARAMS(NewProp_FocusDistanceScale_MetaData, ARRAY_COUNT(NewProp_FocusDistanceScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonFocusAzimuth_MetaData[] = {
				{ "Category", "AttenuationListenerFocus" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "Azimuth angle (in degrees) relative to the listener forward vector which defines the non-focus region of sounds. Sounds playing at an angle greater than this will be out of focus." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NonFocusAzimuth = { UE4CodeGen_Private::EPropertyClass::Float, "NonFocusAzimuth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, NonFocusAzimuth), METADATA_PARAMS(NewProp_NonFocusAzimuth_MetaData, ARRAY_COUNT(NewProp_NonFocusAzimuth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusAzimuth_MetaData[] = {
				{ "Category", "AttenuationListenerFocus" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "Azimuth angle (in degrees) relative to the listener forward vector which defines the focus region of sounds. Sounds playing at an angle less than this will be in focus." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusAzimuth = { UE4CodeGen_Private::EPropertyClass::Float, "FocusAzimuth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, FocusAzimuth), METADATA_PARAMS(NewProp_FocusAzimuth_MetaData, ARRAY_COUNT(NewProp_FocusAzimuth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HPFFrequencyAtMax_MetaData[] = {
				{ "Category", "AttenuationAirAbsorption" },
				{ "DisplayName", "High Pass Cutoff Frequency Max" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "The range of the cutoff frequency (in hz) of the highpass absorption filter." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HPFFrequencyAtMax = { UE4CodeGen_Private::EPropertyClass::Float, "HPFFrequencyAtMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, HPFFrequencyAtMax), METADATA_PARAMS(NewProp_HPFFrequencyAtMax_MetaData, ARRAY_COUNT(NewProp_HPFFrequencyAtMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HPFFrequencyAtMin_MetaData[] = {
				{ "Category", "AttenuationAirAbsorption" },
				{ "DisplayName", "High Pass Cutoff Frequency Min" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "The range of the cutoff frequency (in hz) of the highpass absorption filter." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HPFFrequencyAtMin = { UE4CodeGen_Private::EPropertyClass::Float, "HPFFrequencyAtMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, HPFFrequencyAtMin), METADATA_PARAMS(NewProp_HPFFrequencyAtMin_MetaData, ARRAY_COUNT(NewProp_HPFFrequencyAtMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPFFrequencyAtMax_MetaData[] = {
				{ "Category", "AttenuationAirAbsorption" },
				{ "DisplayName", "Low Pass Cutoff Frequency Max" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "The range of the cutoff frequency (in hz) of the lowpass absorption filter." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPFFrequencyAtMax = { UE4CodeGen_Private::EPropertyClass::Float, "LPFFrequencyAtMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, LPFFrequencyAtMax), METADATA_PARAMS(NewProp_LPFFrequencyAtMax_MetaData, ARRAY_COUNT(NewProp_LPFFrequencyAtMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPFFrequencyAtMin_MetaData[] = {
				{ "Category", "AttenuationAirAbsorption" },
				{ "DisplayName", "Low Pass Cutoff Frequency Min" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "The range of the cutoff frequency (in hz) of the lowpass absorption filter." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPFFrequencyAtMin = { UE4CodeGen_Private::EPropertyClass::Float, "LPFFrequencyAtMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, LPFFrequencyAtMin), METADATA_PARAMS(NewProp_LPFFrequencyAtMin_MetaData, ARRAY_COUNT(NewProp_LPFFrequencyAtMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomHighpassAirAbsorptionCurve_MetaData[] = {
				{ "Category", "AttenuationAirAbsorption" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "The normalized custom curve to use for the air absorption highpass frequency values. Does a mapping from defined distance values (x-axis) and defined frequency values (y-axis)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomHighpassAirAbsorptionCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "CustomHighpassAirAbsorptionCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, CustomHighpassAirAbsorptionCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(NewProp_CustomHighpassAirAbsorptionCurve_MetaData, ARRAY_COUNT(NewProp_CustomHighpassAirAbsorptionCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomLowpassAirAbsorptionCurve_MetaData[] = {
				{ "Category", "AttenuationAirAbsorption" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "The normalized custom curve to use for the air absorption lowpass frequency values. Does a mapping from defined distance values (x-axis) and defined frequency values (y-axis)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomLowpassAirAbsorptionCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "CustomLowpassAirAbsorptionCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, CustomLowpassAirAbsorptionCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(NewProp_CustomLowpassAirAbsorptionCurve_MetaData, ARRAY_COUNT(NewProp_CustomLowpassAirAbsorptionCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsorptionMethod_MetaData[] = {
				{ "Category", "AttenuationAirAbsorption" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "What method to use to map distance values to frequency absorption values." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AbsorptionMethod = { UE4CodeGen_Private::EPropertyClass::Enum, "AbsorptionMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, AbsorptionMethod), Z_Construct_UEnum_Engine_EAirAbsorptionMethod, METADATA_PARAMS(NewProp_AbsorptionMethod_MetaData, ARRAY_COUNT(NewProp_AbsorptionMethod_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AbsorptionMethod_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPFRadiusMax_MetaData[] = {
				{ "Category", "AttenuationAirAbsorption" },
				{ "DisplayName", "Max Distance Range" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "The max distance range at which to apply an absorption LPF filter. Absorption freq cutoff interpolates between filter frequency ranges between these distance values." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPFRadiusMax = { UE4CodeGen_Private::EPropertyClass::Float, "LPFRadiusMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, LPFRadiusMax), METADATA_PARAMS(NewProp_LPFRadiusMax_MetaData, ARRAY_COUNT(NewProp_LPFRadiusMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPFRadiusMin_MetaData[] = {
				{ "Category", "AttenuationAirAbsorption" },
				{ "DisplayName", "Min Distance Range" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "The distance min range at which to apply an absorption LPF filter." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPFRadiusMin = { UE4CodeGen_Private::EPropertyClass::Float, "LPFRadiusMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, LPFRadiusMin), METADATA_PARAMS(NewProp_LPFRadiusMin_MetaData, ARRAY_COUNT(NewProp_LPFRadiusMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadiusMax_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadiusMax = { UE4CodeGen_Private::EPropertyClass::Float, "RadiusMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, RadiusMax_DEPRECATED), METADATA_PARAMS(NewProp_RadiusMax_MetaData, ARRAY_COUNT(NewProp_RadiusMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadiusMin_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadiusMin = { UE4CodeGen_Private::EPropertyClass::Float, "RadiusMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, RadiusMin_DEPRECATED), METADATA_PARAMS(NewProp_RadiusMin_MetaData, ARRAY_COUNT(NewProp_RadiusMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpatializationPluginSettings_MetaData[] = {
				{ "Category", "AttenuationSpatialization" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "Settings to use with occlusion audio plugin. These are defined by the plugin creator. Not all audio plugins utilize this feature." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpatializationPluginSettings = { UE4CodeGen_Private::EPropertyClass::Object, "SpatializationPluginSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, SpatializationPluginSettings), Z_Construct_UClass_USpatializationPluginSourceSettingsBase_NoRegister, METADATA_PARAMS(NewProp_SpatializationPluginSettings_MetaData, ARRAY_COUNT(NewProp_SpatializationPluginSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpatializationAlgorithm_MetaData[] = {
				{ "Category", "AttenuationSpatialization" },
				{ "ClampMin", "0" },
				{ "DisplayName", "Spatialization Method" },
				{ "EditCondition", "bSpatialize" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "What method we use to spatialize the sound." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpatializationAlgorithm = { UE4CodeGen_Private::EPropertyClass::Byte, "SpatializationAlgorithm", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, SpatializationAlgorithm), Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm, METADATA_PARAMS(NewProp_SpatializationAlgorithm_MetaData, ARRAY_COUNT(NewProp_SpatializationAlgorithm_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StereoSpread_MetaData[] = {
				{ "Category", "AttenuationSpatialization" },
				{ "ClampMin", "0" },
				{ "DisplayName", "3D Stereo Spread" },
				{ "EditCondition", "bSpatialize" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "The world-space absolution distance between left and right stereo channels when stereo assets are 3D spatialized." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StereoSpread = { UE4CodeGen_Private::EPropertyClass::Float, "StereoSpread", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, StereoSpread), METADATA_PARAMS(NewProp_StereoSpread_MetaData, ARRAY_COUNT(NewProp_StereoSpread_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OmniRadius_MetaData[] = {
				{ "Category", "AttenuationSpatialization" },
				{ "ClampMin", "0" },
				{ "DisplayName", "Non-Spatialized Radius" },
				{ "EditCondition", "bSpatialize" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "The distance below which a sound is non-spatialized (2D). This prevents near-field audio from flipping as audio crosses the listener's position." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OmniRadius = { UE4CodeGen_Private::EPropertyClass::Float, "OmniRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, OmniRadius), METADATA_PARAMS(NewProp_OmniRadius_MetaData, ARRAY_COUNT(NewProp_OmniRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceType_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DistanceType = { UE4CodeGen_Private::EPropertyClass::Byte, "DistanceType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, DistanceType_DEPRECATED), Z_Construct_UEnum_Engine_ESoundDistanceCalc, METADATA_PARAMS(NewProp_DistanceType_MetaData, ARRAY_COUNT(NewProp_DistanceType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLogFrequencyScaling_MetaData[] = {
				{ "Category", "AttenuationAirAbsorption" },
				{ "DisplayName", "Enable Log Frequency Scaling" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "Enables applying a log scale to frequency values (so frequency sweeping is perceptually linear)." },
			};
#endif
			auto NewProp_bEnableLogFrequencyScaling_SetBit = [](void* Obj){ ((FSoundAttenuationSettings*)Obj)->bEnableLogFrequencyScaling = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLogFrequencyScaling = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableLogFrequencyScaling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSoundAttenuationSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableLogFrequencyScaling_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableLogFrequencyScaling_MetaData, ARRAY_COUNT(NewProp_bEnableLogFrequencyScaling_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyNormalizationToStereoSounds_MetaData[] = {
				{ "Category", "AttenuationSpatialization" },
				{ "DisplayName", "Normalize 3D Stereo Sounds" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "Enables applying a -6 dB attenuation to stereo assets which are 3d spatialized. Avoids clipping when assets have spread of 0.0 due to channel summing." },
			};
#endif
			auto NewProp_bApplyNormalizationToStereoSounds_SetBit = [](void* Obj){ ((FSoundAttenuationSettings*)Obj)->bApplyNormalizationToStereoSounds = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyNormalizationToStereoSounds = { UE4CodeGen_Private::EPropertyClass::Bool, "bApplyNormalizationToStereoSounds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSoundAttenuationSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bApplyNormalizationToStereoSounds_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bApplyNormalizationToStereoSounds_MetaData, ARRAY_COUNT(NewProp_bApplyNormalizationToStereoSounds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableReverbSend_MetaData[] = {
				{ "Category", "AttenuationReverbSend" },
				{ "DisplayName", "Enable Reverb Send" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "Enables adjusting reverb sends based on distance." },
			};
#endif
			auto NewProp_bEnableReverbSend_SetBit = [](void* Obj){ ((FSoundAttenuationSettings*)Obj)->bEnableReverbSend = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableReverbSend = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableReverbSend", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSoundAttenuationSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableReverbSend_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableReverbSend_MetaData, ARRAY_COUNT(NewProp_bEnableReverbSend_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseComplexCollisionForOcclusion_MetaData[] = {
				{ "Category", "AttenuationOcclusion" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "Enables tracing against complex collision when doing occlusion traces." },
			};
#endif
			auto NewProp_bUseComplexCollisionForOcclusion_SetBit = [](void* Obj){ ((FSoundAttenuationSettings*)Obj)->bUseComplexCollisionForOcclusion = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseComplexCollisionForOcclusion = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseComplexCollisionForOcclusion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSoundAttenuationSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseComplexCollisionForOcclusion_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseComplexCollisionForOcclusion_MetaData, ARRAY_COUNT(NewProp_bUseComplexCollisionForOcclusion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableOcclusion_MetaData[] = {
				{ "Category", "AttenuationOcclusion" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "Enables realtime occlusion tracing." },
			};
#endif
			auto NewProp_bEnableOcclusion_SetBit = [](void* Obj){ ((FSoundAttenuationSettings*)Obj)->bEnableOcclusion = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableOcclusion = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableOcclusion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSoundAttenuationSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableOcclusion_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableOcclusion_MetaData, ARRAY_COUNT(NewProp_bEnableOcclusion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableFocusInterpolation_MetaData[] = {
				{ "Category", "AttenuationListenerFocus" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "Enables focus interpolation to smooth transition in and and of focus." },
			};
#endif
			auto NewProp_bEnableFocusInterpolation_SetBit = [](void* Obj){ ((FSoundAttenuationSettings*)Obj)->bEnableFocusInterpolation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableFocusInterpolation = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableFocusInterpolation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSoundAttenuationSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableFocusInterpolation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableFocusInterpolation_MetaData, ARRAY_COUNT(NewProp_bEnableFocusInterpolation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableListenerFocus_MetaData[] = {
				{ "Category", "AttenuationListenerFocus" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "Enable listener focus-based adjustments." },
			};
#endif
			auto NewProp_bEnableListenerFocus_SetBit = [](void* Obj){ ((FSoundAttenuationSettings*)Obj)->bEnableListenerFocus = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableListenerFocus = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableListenerFocus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSoundAttenuationSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableListenerFocus_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableListenerFocus_MetaData, ARRAY_COUNT(NewProp_bEnableListenerFocus_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAttenuateWithLPF_MetaData[] = {
				{ "Category", "AttenuationAirAbsorption" },
				{ "DisplayName", "Enable Air Absorption" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "Allows simulation of air absorption by applying a filter with a cutoff frequency as a function of distance." },
			};
#endif
			auto NewProp_bAttenuateWithLPF_SetBit = [](void* Obj){ ((FSoundAttenuationSettings*)Obj)->bAttenuateWithLPF = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttenuateWithLPF = { UE4CodeGen_Private::EPropertyClass::Bool, "bAttenuateWithLPF", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSoundAttenuationSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAttenuateWithLPF_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAttenuateWithLPF_MetaData, ARRAY_COUNT(NewProp_bAttenuateWithLPF_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpatialize_MetaData[] = {
				{ "Category", "AttenuationSpatialization" },
				{ "DisplayName", "Enable Spatialization" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "Allows the source to be 3D spatialized." },
			};
#endif
			auto NewProp_bSpatialize_SetBit = [](void* Obj){ ((FSoundAttenuationSettings*)Obj)->bSpatialize = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpatialize = { UE4CodeGen_Private::EPropertyClass::Bool, "bSpatialize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSoundAttenuationSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSpatialize_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSpatialize_MetaData, ARRAY_COUNT(NewProp_bSpatialize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAttenuate_MetaData[] = {
				{ "Category", "AttenuationDistance" },
				{ "DisplayName", "Enable Volume Attenuation" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "Allows distance-based volume attenuation." },
			};
#endif
			auto NewProp_bAttenuate_SetBit = [](void* Obj){ ((FSoundAttenuationSettings*)Obj)->bAttenuate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttenuate = { UE4CodeGen_Private::EPropertyClass::Bool, "bAttenuate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSoundAttenuationSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAttenuate_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAttenuate_MetaData, ARRAY_COUNT(NewProp_bAttenuate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ManualReverbSendLevel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomReverbSendCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReverbDistanceMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReverbDistanceMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReverbWetLevelMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReverbWetLevelMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReverbPluginSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReverbSendMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReverbSendMethod_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OcclusionPluginSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OcclusionInterpolationTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OcclusionVolumeAttenuation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OcclusionLowPassFilterFrequency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OcclusionTraceChannel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FocusReleaseInterpSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FocusAttackInterpSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NonFocusVolumeAttenuation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FocusVolumeAttenuation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NonFocusPriorityScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FocusPriorityScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NonFocusDistanceScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FocusDistanceScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NonFocusAzimuth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FocusAzimuth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HPFFrequencyAtMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HPFFrequencyAtMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LPFFrequencyAtMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LPFFrequencyAtMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomHighpassAirAbsorptionCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomLowpassAirAbsorptionCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AbsorptionMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AbsorptionMethod_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LPFRadiusMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LPFRadiusMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RadiusMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RadiusMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpatializationPluginSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpatializationAlgorithm,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StereoSpread,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OmniRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistanceType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableLogFrequencyScaling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bApplyNormalizationToStereoSounds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableReverbSend,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseComplexCollisionForOcclusion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableOcclusion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableFocusInterpolation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableListenerFocus,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAttenuateWithLPF,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSpatialize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAttenuate,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FBaseAttenuationSettings,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SoundAttenuationSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FSoundAttenuationSettings),
				alignof(FSoundAttenuationSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundAttenuationSettings_CRC() { return 67580880U; }
	void USoundAttenuation::StaticRegisterNativesUSoundAttenuation()
	{
	}
	UClass* Z_Construct_UClass_USoundAttenuation_NoRegister()
	{
		return USoundAttenuation::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundAttenuation()
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
				{ "HideCategories", "Object" },
				{ "IncludePath", "Sound/SoundAttenuation.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "Defines how a sound changes volume with distance to the listener" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attenuation_MetaData[] = {
				{ "Category", "Settings" },
				{ "CustomizeProperty", "" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attenuation = { UE4CodeGen_Private::EPropertyClass::Struct, "Attenuation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(USoundAttenuation, Attenuation), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(NewProp_Attenuation_MetaData, ARRAY_COUNT(NewProp_Attenuation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Attenuation,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundAttenuation>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundAttenuation::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00081080u,
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
	IMPLEMENT_CLASS(USoundAttenuation, 20819408);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundAttenuation(Z_Construct_UClass_USoundAttenuation, &USoundAttenuation::StaticClass, TEXT("/Script/Engine"), TEXT("USoundAttenuation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundAttenuation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
