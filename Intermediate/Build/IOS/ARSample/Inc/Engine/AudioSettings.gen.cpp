// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/AudioSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioSettings() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioQualitySettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAudioSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
class UScriptStruct* FAudioQualitySettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAudioQualitySettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioQualitySettings, Z_Construct_UPackage__Script_Engine(), TEXT("AudioQualitySettings"), sizeof(FAudioQualitySettings), Get_Z_Construct_UScriptStruct_FAudioQualitySettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAudioQualitySettings(FAudioQualitySettings::StaticStruct, TEXT("/Script/Engine"), TEXT("AudioQualitySettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAudioQualitySettings
{
	FScriptStruct_Engine_StaticRegisterNativesFAudioQualitySettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AudioQualitySettings")),new UScriptStruct::TCppStructOps<FAudioQualitySettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAudioQualitySettings;
	UScriptStruct* Z_Construct_UScriptStruct_FAudioQualitySettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAudioQualitySettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AudioQualitySettings"), sizeof(FAudioQualitySettings), Get_Z_Construct_UScriptStruct_FAudioQualitySettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioQualitySettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxChannels_MetaData[] = {
				{ "Category", "Quality" },
				{ "ClampMin", "1" },
				{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
				{ "ToolTip", "The number of audio channels that can be used at once\nNOTE: Some platforms may cap this value to a lower setting regardless of what the settings request" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxChannels = { UE4CodeGen_Private::EPropertyClass::Int, "MaxChannels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAudioQualitySettings, MaxChannels), METADATA_PARAMS(NewProp_MaxChannels_MetaData, ARRAY_COUNT(NewProp_MaxChannels_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
				{ "Category", "Quality" },
				{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName = { UE4CodeGen_Private::EPropertyClass::Text, "DisplayName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAudioQualitySettings, DisplayName), METADATA_PARAMS(NewProp_DisplayName_MetaData, ARRAY_COUNT(NewProp_DisplayName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxChannels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DisplayName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AudioQualitySettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAudioQualitySettings),
				alignof(FAudioQualitySettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAudioQualitySettings_CRC() { return 2629005861U; }
	void UAudioSettings::StaticRegisterNativesUAudioSettings()
	{
	}
	UClass* Z_Construct_UClass_UAudioSettings_NoRegister()
	{
		return UAudioSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UAudioSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Audio" },
				{ "IncludePath", "Sound/AudioSettings.h" },
				{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
				{ "ToolTip", "Audio settings." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueFilenameFormat_MetaData[] = {
				{ "Category", "Dialogue" },
				{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
				{ "ToolTip", "The format string to use when generating the filename for contexts within dialogue waves. This must generate unique names for your project.\nAvailable format markers:\n  * {DialogueGuid} - The GUID of the dialogue wave. Guaranteed to be unique and stable against asset renames.\n  * {DialogueHash} - The hash of the dialogue wave. Not guaranteed to be unique or stable against asset renames, however may be unique enough if combined with the dialogue name.\n  * {DialogueName} - The name of the dialogue wave. Not guaranteed to be unique or stable against asset renames, however may be unique enough if combined with the dialogue hash.\n  * {ContextId}    - The ID of the context. Guaranteed to be unique within its dialogue wave. Not guaranteed to be stable against changes to the context.\n  * {ContextIndex} - The index of the context within its parent dialogue wave. Guaranteed to be unique within its dialogue wave. Not guaranteed to be stable against contexts being removed." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DialogueFilenameFormat = { UE4CodeGen_Private::EPropertyClass::Str, "DialogueFilenameFormat", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAudioSettings, DialogueFilenameFormat), METADATA_PARAMS(NewProp_DialogueFilenameFormat_MetaData, ARRAY_COUNT(NewProp_DialogueFilenameFormat_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowCenterChannel3DPanning_MetaData[] = {
				{ "Category", "Quality" },
				{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
				{ "ToolTip", "Enables the surround sound spatialization calculations to include the center channel." },
			};
#endif
			auto NewProp_bAllowCenterChannel3DPanning_SetBit = [](void* Obj){ ((UAudioSettings*)Obj)->bAllowCenterChannel3DPanning = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowCenterChannel3DPanning = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowCenterChannel3DPanning", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAudioSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowCenterChannel3DPanning_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowCenterChannel3DPanning_MetaData, ARRAY_COUNT(NewProp_bAllowCenterChannel3DPanning_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableMasterReverb_MetaData[] = {
				{ "Category", "Quality" },
				{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
				{ "ToolTip", "Disables master reverb effect in the audio DSP graph." },
			};
#endif
			auto NewProp_bDisableMasterReverb_SetBit = [](void* Obj){ ((UAudioSettings*)Obj)->bDisableMasterReverb = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableMasterReverb = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableMasterReverb", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAudioSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisableMasterReverb_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisableMasterReverb_MetaData, ARRAY_COUNT(NewProp_bDisableMasterReverb_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableMasterEQ_MetaData[] = {
				{ "Category", "Quality" },
				{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
				{ "ToolTip", "Disables master EQ effect in the audio DSP graph." },
			};
#endif
			auto NewProp_bDisableMasterEQ_SetBit = [](void* Obj){ ((UAudioSettings*)Obj)->bDisableMasterEQ = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableMasterEQ = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableMasterEQ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAudioSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisableMasterEQ_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisableMasterEQ_MetaData, ARRAY_COUNT(NewProp_bDisableMasterEQ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowVirtualizedSounds_MetaData[] = {
				{ "Category", "Quality" },
				{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
				{ "ToolTip", "Allows sounds to play at 0 volume." },
			};
#endif
			auto NewProp_bAllowVirtualizedSounds_SetBit = [](void* Obj){ ((UAudioSettings*)Obj)->bAllowVirtualizedSounds = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowVirtualizedSounds = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowVirtualizedSounds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAudioSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowVirtualizedSounds_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowVirtualizedSounds_MetaData, ARRAY_COUNT(NewProp_bAllowVirtualizedSounds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QualityLevels_MetaData[] = {
				{ "Category", "Quality" },
				{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QualityLevels = { UE4CodeGen_Private::EPropertyClass::Array, "QualityLevels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAudioSettings, QualityLevels), METADATA_PARAMS(NewProp_QualityLevels_MetaData, ARRAY_COUNT(NewProp_QualityLevels_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_QualityLevels_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "QualityLevels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAudioQualitySettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumConcurrentStreams_MetaData[] = {
				{ "Category", "Audio" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
				{ "ToolTip", "How many streaming sounds can be played at the same time (if more are played they will be sorted by priority)" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumConcurrentStreams = { UE4CodeGen_Private::EPropertyClass::Int, "MaximumConcurrentStreams", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAudioSettings, MaximumConcurrentStreams), METADATA_PARAMS(NewProp_MaximumConcurrentStreams_MetaData, ARRAY_COUNT(NewProp_MaximumConcurrentStreams_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowPassFilterResonance_MetaData[] = {
				{ "Category", "Audio" },
				{ "ClampMax", "1.500000" },
				{ "ClampMin", "0.100000" },
				{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowPassFilterResonance = { UE4CodeGen_Private::EPropertyClass::Float, "LowPassFilterResonance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, STRUCT_OFFSET(UAudioSettings, LowPassFilterResonance), METADATA_PARAMS(NewProp_LowPassFilterResonance_MetaData, ARRAY_COUNT(NewProp_LowPassFilterResonance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultReverbSendLevel_MetaData[] = {
				{ "Category", "Audio" },
				{ "ClampMax", "1.000000" },
				{ "ClampMin", "0.000000" },
				{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
				{ "ToolTip", "The amount of audio to send to reverb submixes if no reverb send is setup for the source through attenuation settings. Only used in audio mixer." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultReverbSendLevel = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultReverbSendLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, STRUCT_OFFSET(UAudioSettings, DefaultReverbSendLevel), METADATA_PARAMS(NewProp_DefaultReverbSendLevel_MetaData, ARRAY_COUNT(NewProp_DefaultReverbSendLevel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiPSoundClass_MetaData[] = {
				{ "AllowedClasses", "SoundClass" },
				{ "Category", "Audio" },
				{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
				{ "ToolTip", "Sound class to be used for the VOIP audio component" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VoiPSoundClass = { UE4CodeGen_Private::EPropertyClass::Struct, "VoiPSoundClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAudioSettings, VoiPSoundClass), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(NewProp_VoiPSoundClass_MetaData, ARRAY_COUNT(NewProp_VoiPSoundClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBaseSoundMix_MetaData[] = {
				{ "AllowedClasses", "SoundMix" },
				{ "Category", "Audio" },
				{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
				{ "ToolTip", "The SoundMix to use as base when no other system has specified a Base SoundMix" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultBaseSoundMix = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultBaseSoundMix", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAudioSettings, DefaultBaseSoundMix), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(NewProp_DefaultBaseSoundMix_MetaData, ARRAY_COUNT(NewProp_DefaultBaseSoundMix_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSoundConcurrencyName_MetaData[] = {
				{ "AllowedClasses", "SoundConcurrency" },
				{ "Category", "Audio" },
				{ "DisplayName", "Default Sound Concurrency" },
				{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
				{ "ToolTip", "The SoundConcurrency assigned to newly created sounds" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultSoundConcurrencyName = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultSoundConcurrencyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAudioSettings, DefaultSoundConcurrencyName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(NewProp_DefaultSoundConcurrencyName_MetaData, ARRAY_COUNT(NewProp_DefaultSoundConcurrencyName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSoundClassName_MetaData[] = {
				{ "AllowedClasses", "SoundClass" },
				{ "Category", "Audio" },
				{ "DisplayName", "Default Sound Class" },
				{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
				{ "ToolTip", "The SoundClass assigned to newly created sounds" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultSoundClassName = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultSoundClassName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAudioSettings, DefaultSoundClassName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(NewProp_DefaultSoundClassName_MetaData, ARRAY_COUNT(NewProp_DefaultSoundClassName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DialogueFilenameFormat,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowCenterChannel3DPanning,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisableMasterReverb,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisableMasterEQ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowVirtualizedSounds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QualityLevels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QualityLevels_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaximumConcurrentStreams,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LowPassFilterResonance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultReverbSendLevel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VoiPSoundClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultBaseSoundMix,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultSoundConcurrencyName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultSoundClassName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAudioSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAudioSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100086u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAudioSettings, 3565130752);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAudioSettings(Z_Construct_UClass_UAudioSettings, &UAudioSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UAudioSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
