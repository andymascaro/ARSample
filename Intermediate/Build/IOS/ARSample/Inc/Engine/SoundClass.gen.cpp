// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundClass() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioOutputTarget();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPassiveSoundMixModifier();
	ENGINE_API UClass* Z_Construct_UClass_USoundMix_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundClassProperties();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundClassEditorData();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EAudioOutputTarget_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAudioOutputTarget, Z_Construct_UPackage__Script_Engine(), TEXT("EAudioOutputTarget"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAudioOutputTarget(EAudioOutputTarget_StaticEnum, TEXT("/Script/Engine"), TEXT("EAudioOutputTarget"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAudioOutputTarget_CRC() { return 2495987870U; }
	UEnum* Z_Construct_UEnum_Engine_EAudioOutputTarget()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAudioOutputTarget"), 0, Get_Z_Construct_UEnum_Engine_EAudioOutputTarget_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAudioOutputTarget::Speaker", (int64)EAudioOutputTarget::Speaker },
				{ "EAudioOutputTarget::Controller", (int64)EAudioOutputTarget::Controller },
				{ "EAudioOutputTarget::ControllerFallbackToSpeaker", (int64)EAudioOutputTarget::ControllerFallbackToSpeaker },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Controller.ToolTip", "Sound plays only from controller if present." },
				{ "ControllerFallbackToSpeaker.ToolTip", "Sound plays on the controller if present. If not present, it plays from speakers." },
				{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
				{ "Speaker.ToolTip", "Sound plays only from speakers." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAudioOutputTarget",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EAudioOutputTarget::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPassiveSoundMixModifier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPassiveSoundMixModifier_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPassiveSoundMixModifier, Z_Construct_UPackage__Script_Engine(), TEXT("PassiveSoundMixModifier"), sizeof(FPassiveSoundMixModifier), Get_Z_Construct_UScriptStruct_FPassiveSoundMixModifier_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPassiveSoundMixModifier(FPassiveSoundMixModifier::StaticStruct, TEXT("/Script/Engine"), TEXT("PassiveSoundMixModifier"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPassiveSoundMixModifier
{
	FScriptStruct_Engine_StaticRegisterNativesFPassiveSoundMixModifier()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PassiveSoundMixModifier")),new UScriptStruct::TCppStructOps<FPassiveSoundMixModifier>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPassiveSoundMixModifier;
	UScriptStruct* Z_Construct_UScriptStruct_FPassiveSoundMixModifier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPassiveSoundMixModifier_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PassiveSoundMixModifier"), sizeof(FPassiveSoundMixModifier), Get_Z_Construct_UScriptStruct_FPassiveSoundMixModifier_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
				{ "ToolTip", "Structure containing information on a SoundMix to activate passively." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPassiveSoundMixModifier>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxVolumeThreshold_MetaData[] = {
				{ "Category", "PassiveSoundMixModifier" },
				{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
				{ "ToolTip", "Maximum volume level required to activate SoundMix. Above this value the SoundMix will not be active." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxVolumeThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "MaxVolumeThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FPassiveSoundMixModifier, MaxVolumeThreshold), METADATA_PARAMS(NewProp_MaxVolumeThreshold_MetaData, ARRAY_COUNT(NewProp_MaxVolumeThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinVolumeThreshold_MetaData[] = {
				{ "Category", "PassiveSoundMixModifier" },
				{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
				{ "ToolTip", "Minimum volume level required to activate SoundMix. Below this value the SoundMix will not be active." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinVolumeThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "MinVolumeThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FPassiveSoundMixModifier, MinVolumeThreshold), METADATA_PARAMS(NewProp_MinVolumeThreshold_MetaData, ARRAY_COUNT(NewProp_MinVolumeThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundMix_MetaData[] = {
				{ "Category", "PassiveSoundMixModifier" },
				{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
				{ "ToolTip", "The SoundMix to activate" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundMix = { UE4CodeGen_Private::EPropertyClass::Object, "SoundMix", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FPassiveSoundMixModifier, SoundMix), Z_Construct_UClass_USoundMix_NoRegister, METADATA_PARAMS(NewProp_SoundMix_MetaData, ARRAY_COUNT(NewProp_SoundMix_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxVolumeThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinVolumeThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundMix,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PassiveSoundMixModifier",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FPassiveSoundMixModifier),
				alignof(FPassiveSoundMixModifier),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPassiveSoundMixModifier_CRC() { return 1618433061U; }
class UScriptStruct* FSoundClassProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundClassProperties_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundClassProperties, Z_Construct_UPackage__Script_Engine(), TEXT("SoundClassProperties"), sizeof(FSoundClassProperties), Get_Z_Construct_UScriptStruct_FSoundClassProperties_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundClassProperties(FSoundClassProperties::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundClassProperties"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundClassProperties
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundClassProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundClassProperties")),new UScriptStruct::TCppStructOps<FSoundClassProperties>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundClassProperties;
	UScriptStruct* Z_Construct_UScriptStruct_FSoundClassProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundClassProperties_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundClassProperties"), sizeof(FSoundClassProperties), Get_Z_Construct_UScriptStruct_FSoundClassProperties_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
				{ "ToolTip", "Structure containing configurable properties of a sound class." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundClassProperties>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputTarget_MetaData[] = {
				{ "Category", "SoundClassProperties" },
				{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
				{ "ToolTip", "Which output target the sound should be played through" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputTarget = { UE4CodeGen_Private::EPropertyClass::Byte, "OutputTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSoundClassProperties, OutputTarget), Z_Construct_UEnum_Engine_EAudioOutputTarget, METADATA_PARAMS(NewProp_OutputTarget_MetaData, ARRAY_COUNT(NewProp_OutputTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyAmbientVolumes_MetaData[] = {
				{ "Category", "SoundClassProperties" },
				{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
				{ "ToolTip", "Whether the Interior/Exterior volume and LPF modifiers should be applied" },
			};
#endif
			auto NewProp_bApplyAmbientVolumes_SetBit = [](void* Obj){ ((FSoundClassProperties*)Obj)->bApplyAmbientVolumes = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyAmbientVolumes = { UE4CodeGen_Private::EPropertyClass::Bool, "bApplyAmbientVolumes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSoundClassProperties), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bApplyAmbientVolumes_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bApplyAmbientVolumes_MetaData, ARRAY_COUNT(NewProp_bApplyAmbientVolumes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCenterChannelOnly_MetaData[] = {
				{ "Category", "SoundClassProperties" },
				{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
				{ "ToolTip", "Whether or not this sound class forces sounds to the center channel" },
			};
#endif
			auto NewProp_bCenterChannelOnly_SetBit = [](void* Obj){ ((FSoundClassProperties*)Obj)->bCenterChannelOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCenterChannelOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bCenterChannelOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSoundClassProperties), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCenterChannelOnly_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCenterChannelOnly_MetaData, ARRAY_COUNT(NewProp_bCenterChannelOnly_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Default2DReverbSendAmount_MetaData[] = {
				{ "Category", "SoundClassProperties" },
				{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
				{ "ToolTip", "Amount of audio to send to master reverb effect for 2D sounds played with this sound class." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Default2DReverbSendAmount = { UE4CodeGen_Private::EPropertyClass::Float, "Default2DReverbSendAmount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSoundClassProperties, Default2DReverbSendAmount), METADATA_PARAMS(NewProp_Default2DReverbSendAmount_MetaData, ARRAY_COUNT(NewProp_Default2DReverbSendAmount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReverb_MetaData[] = {
				{ "Category", "SoundClassProperties" },
				{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
				{ "ToolTip", "Whether or not this sound class has reverb applied" },
			};
#endif
			auto NewProp_bReverb_SetBit = [](void* Obj){ ((FSoundClassProperties*)Obj)->bReverb = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReverb = { UE4CodeGen_Private::EPropertyClass::Bool, "bReverb", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSoundClassProperties), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReverb_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bReverb_MetaData, ARRAY_COUNT(NewProp_bReverb_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMusic_MetaData[] = {
				{ "Category", "SoundClassProperties" },
				{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
				{ "ToolTip", "Whether or not this is music (propagates only if parent is true)" },
			};
#endif
			auto NewProp_bIsMusic_SetBit = [](void* Obj){ ((FSoundClassProperties*)Obj)->bIsMusic = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMusic = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsMusic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSoundClassProperties), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsMusic_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsMusic_MetaData, ARRAY_COUNT(NewProp_bIsMusic_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUISound_MetaData[] = {
				{ "Category", "SoundClassProperties" },
				{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
				{ "ToolTip", "Whether or not this sound plays when the game is paused in the UI" },
			};
#endif
			auto NewProp_bIsUISound_SetBit = [](void* Obj){ ((FSoundClassProperties*)Obj)->bIsUISound = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUISound = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsUISound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSoundClassProperties), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsUISound_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsUISound_MetaData, ARRAY_COUNT(NewProp_bIsUISound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysPlay_MetaData[] = {
				{ "Category", "SoundClassProperties" },
				{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
				{ "ToolTip", "Whether to artificially prioritise the component to play" },
			};
#endif
			auto NewProp_bAlwaysPlay_SetBit = [](void* Obj){ ((FSoundClassProperties*)Obj)->bAlwaysPlay = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysPlay = { UE4CodeGen_Private::EPropertyClass::Bool, "bAlwaysPlay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSoundClassProperties), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAlwaysPlay_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAlwaysPlay_MetaData, ARRAY_COUNT(NewProp_bAlwaysPlay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyEffects_MetaData[] = {
				{ "Category", "SoundClassProperties" },
				{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
				{ "ToolTip", "Sound mix voice - whether to apply audio effects" },
			};
#endif
			auto NewProp_bApplyEffects_SetBit = [](void* Obj){ ((FSoundClassProperties*)Obj)->bApplyEffects = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyEffects = { UE4CodeGen_Private::EPropertyClass::Bool, "bApplyEffects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSoundClassProperties), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bApplyEffects_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bApplyEffects_MetaData, ARRAY_COUNT(NewProp_bApplyEffects_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadioFilterVolumeThreshold_MetaData[] = {
				{ "Category", "SoundClassProperties" },
				{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
				{ "ToolTip", "Volume at which the radio filter kicks in" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadioFilterVolumeThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "RadioFilterVolumeThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSoundClassProperties, RadioFilterVolumeThreshold), METADATA_PARAMS(NewProp_RadioFilterVolumeThreshold_MetaData, ARRAY_COUNT(NewProp_RadioFilterVolumeThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadioFilterVolume_MetaData[] = {
				{ "Category", "SoundClassProperties" },
				{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
				{ "ToolTip", "Volume of the radio filter effect" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadioFilterVolume = { UE4CodeGen_Private::EPropertyClass::Float, "RadioFilterVolume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSoundClassProperties, RadioFilterVolume), METADATA_PARAMS(NewProp_RadioFilterVolume_MetaData, ARRAY_COUNT(NewProp_RadioFilterVolume_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceCenterChannelVolume_MetaData[] = {
				{ "Category", "SoundClassProperties" },
				{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
				{ "ToolTip", "Voice center channel volume - Not a multiplier (no propagation)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VoiceCenterChannelVolume = { UE4CodeGen_Private::EPropertyClass::Float, "VoiceCenterChannelVolume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSoundClassProperties, VoiceCenterChannelVolume), METADATA_PARAMS(NewProp_VoiceCenterChannelVolume_MetaData, ARRAY_COUNT(NewProp_VoiceCenterChannelVolume_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LFEBleed_MetaData[] = {
				{ "Category", "SoundClassProperties" },
				{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
				{ "ToolTip", "The amount of a sound to bleed to the LFE channel" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LFEBleed = { UE4CodeGen_Private::EPropertyClass::Float, "LFEBleed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSoundClassProperties, LFEBleed), METADATA_PARAMS(NewProp_LFEBleed_MetaData, ARRAY_COUNT(NewProp_LFEBleed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StereoBleed_MetaData[] = {
				{ "Category", "SoundClassProperties" },
				{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
				{ "ToolTip", "The amount of stereo sounds to bleed to the rear speakers" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StereoBleed = { UE4CodeGen_Private::EPropertyClass::Float, "StereoBleed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSoundClassProperties, StereoBleed), METADATA_PARAMS(NewProp_StereoBleed_MetaData, ARRAY_COUNT(NewProp_StereoBleed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[] = {
				{ "Category", "SoundClassProperties" },
				{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
				{ "ToolTip", "Pitch multiplier." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pitch = { UE4CodeGen_Private::EPropertyClass::Float, "Pitch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSoundClassProperties, Pitch), METADATA_PARAMS(NewProp_Pitch_MetaData, ARRAY_COUNT(NewProp_Pitch_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[] = {
				{ "Category", "SoundClassProperties" },
				{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
				{ "ToolTip", "Volume multiplier." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume = { UE4CodeGen_Private::EPropertyClass::Float, "Volume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSoundClassProperties, Volume), METADATA_PARAMS(NewProp_Volume_MetaData, ARRAY_COUNT(NewProp_Volume_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutputTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bApplyAmbientVolumes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCenterChannelOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Default2DReverbSendAmount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReverb,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsMusic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsUISound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAlwaysPlay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bApplyEffects,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RadioFilterVolumeThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RadioFilterVolume,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VoiceCenterChannelVolume,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LFEBleed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StereoBleed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pitch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Volume,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SoundClassProperties",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSoundClassProperties),
				alignof(FSoundClassProperties),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundClassProperties_CRC() { return 2496263638U; }
class UScriptStruct* FSoundClassEditorData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundClassEditorData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundClassEditorData, Z_Construct_UPackage__Script_Engine(), TEXT("SoundClassEditorData"), sizeof(FSoundClassEditorData), Get_Z_Construct_UScriptStruct_FSoundClassEditorData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundClassEditorData(FSoundClassEditorData::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundClassEditorData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundClassEditorData
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundClassEditorData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundClassEditorData")),new UScriptStruct::TCppStructOps<FSoundClassEditorData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundClassEditorData;
	UScriptStruct* Z_Construct_UScriptStruct_FSoundClassEditorData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundClassEditorData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundClassEditorData"), sizeof(FSoundClassEditorData), Get_Z_Construct_UScriptStruct_FSoundClassEditorData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundClassEditorData>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SoundClassEditorData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSoundClassEditorData),
				alignof(FSoundClassEditorData),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundClassEditorData_CRC() { return 3453023521U; }
	void USoundClass::StaticRegisterNativesUSoundClass()
	{
	}
	UClass* Z_Construct_UClass_USoundClass_NoRegister()
	{
		return USoundClass::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundClass()
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
				{ "HideCategories", "object" },
				{ "IncludePath", "Sound/SoundClass.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentClass = { UE4CodeGen_Private::EPropertyClass::Object, "ParentClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(USoundClass, ParentClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(NewProp_ParentClass_MetaData, ARRAY_COUNT(NewProp_ParentClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassiveSoundMixModifiers_MetaData[] = {
				{ "Category", "SoundClass" },
				{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
				{ "ToolTip", "SoundMix Modifiers to activate automatically when a sound of this class is playing." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PassiveSoundMixModifiers = { UE4CodeGen_Private::EPropertyClass::Array, "PassiveSoundMixModifiers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundClass, PassiveSoundMixModifiers), METADATA_PARAMS(NewProp_PassiveSoundMixModifiers_MetaData, ARRAY_COUNT(NewProp_PassiveSoundMixModifiers_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PassiveSoundMixModifiers_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PassiveSoundMixModifiers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPassiveSoundMixModifier, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildClasses_MetaData[] = {
				{ "Category", "SoundClass" },
				{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildClasses = { UE4CodeGen_Private::EPropertyClass::Array, "ChildClasses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundClass, ChildClasses), METADATA_PARAMS(NewProp_ChildClasses_MetaData, ARRAY_COUNT(NewProp_ChildClasses_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildClasses_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ChildClasses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[] = {
				{ "Category", "SoundClass" },
				{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
				{ "ToolTip", "Configurable properties like volume and priority." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Properties = { UE4CodeGen_Private::EPropertyClass::Struct, "Properties", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundClass, Properties), Z_Construct_UScriptStruct_FSoundClassProperties, METADATA_PARAMS(NewProp_Properties_MetaData, ARRAY_COUNT(NewProp_Properties_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PassiveSoundMixModifiers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PassiveSoundMixModifiers_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChildClasses,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChildClasses_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Properties,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundClass>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundClass::StaticClass,
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
	IMPLEMENT_CLASS(USoundClass, 2986426311);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundClass(Z_Construct_UClass_USoundClass, &USoundClass::StaticClass, TEXT("/Script/Engine"), TEXT("USoundClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
