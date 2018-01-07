// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundMix.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundMix() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundClassAdjuster();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioEQEffect();
	ENGINE_API UClass* Z_Construct_UClass_USoundMix_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundMix();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FSoundClassAdjuster::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundClassAdjuster_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundClassAdjuster, Z_Construct_UPackage__Script_Engine(), TEXT("SoundClassAdjuster"), sizeof(FSoundClassAdjuster), Get_Z_Construct_UScriptStruct_FSoundClassAdjuster_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundClassAdjuster(FSoundClassAdjuster::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundClassAdjuster"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundClassAdjuster
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundClassAdjuster()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundClassAdjuster")),new UScriptStruct::TCppStructOps<FSoundClassAdjuster>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundClassAdjuster;
	UScriptStruct* Z_Construct_UScriptStruct_FSoundClassAdjuster()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundClassAdjuster_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundClassAdjuster"), sizeof(FSoundClassAdjuster), Get_Z_Construct_UScriptStruct_FSoundClassAdjuster_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
				{ "ToolTip", "Elements of data for sound group volume control" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundClassAdjuster>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceCenterChannelVolumeAdjuster_MetaData[] = {
				{ "Category", "SoundClassAdjuster" },
				{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
				{ "ToolTip", "A multiplier applied to VoiceCenterChannelVolume." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VoiceCenterChannelVolumeAdjuster = { UE4CodeGen_Private::EPropertyClass::Float, "VoiceCenterChannelVolumeAdjuster", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSoundClassAdjuster, VoiceCenterChannelVolumeAdjuster), METADATA_PARAMS(NewProp_VoiceCenterChannelVolumeAdjuster_MetaData, ARRAY_COUNT(NewProp_VoiceCenterChannelVolumeAdjuster_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyToChildren_MetaData[] = {
				{ "Category", "SoundClassAdjuster" },
				{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
				{ "ToolTip", "Set to true to apply this adjuster to all children of the sound class." },
			};
#endif
			auto NewProp_bApplyToChildren_SetBit = [](void* Obj){ ((FSoundClassAdjuster*)Obj)->bApplyToChildren = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyToChildren = { UE4CodeGen_Private::EPropertyClass::Bool, "bApplyToChildren", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSoundClassAdjuster), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bApplyToChildren_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bApplyToChildren_MetaData, ARRAY_COUNT(NewProp_bApplyToChildren_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchAdjuster_MetaData[] = {
				{ "Category", "SoundClassAdjuster" },
				{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
				{ "ToolTip", "A multiplier applied to the pitch." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchAdjuster = { UE4CodeGen_Private::EPropertyClass::Float, "PitchAdjuster", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSoundClassAdjuster, PitchAdjuster), METADATA_PARAMS(NewProp_PitchAdjuster_MetaData, ARRAY_COUNT(NewProp_PitchAdjuster_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeAdjuster_MetaData[] = {
				{ "Category", "SoundClassAdjuster" },
				{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
				{ "ToolTip", "A multiplier applied to the volume." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeAdjuster = { UE4CodeGen_Private::EPropertyClass::Float, "VolumeAdjuster", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSoundClassAdjuster, VolumeAdjuster), METADATA_PARAMS(NewProp_VolumeAdjuster_MetaData, ARRAY_COUNT(NewProp_VolumeAdjuster_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundClassObject_MetaData[] = {
				{ "Category", "SoundClassAdjuster" },
				{ "DisplayName", "Sound Class" },
				{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
				{ "ToolTip", "The sound class this adjuster affects." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundClassObject = { UE4CodeGen_Private::EPropertyClass::Object, "SoundClassObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSoundClassAdjuster, SoundClassObject), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(NewProp_SoundClassObject_MetaData, ARRAY_COUNT(NewProp_SoundClassObject_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VoiceCenterChannelVolumeAdjuster,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bApplyToChildren,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PitchAdjuster,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumeAdjuster,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundClassObject,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SoundClassAdjuster",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSoundClassAdjuster),
				alignof(FSoundClassAdjuster),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundClassAdjuster_CRC() { return 3805610133U; }
class UScriptStruct* FAudioEQEffect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAudioEQEffect_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioEQEffect, Z_Construct_UPackage__Script_Engine(), TEXT("AudioEQEffect"), sizeof(FAudioEQEffect), Get_Z_Construct_UScriptStruct_FAudioEQEffect_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAudioEQEffect(FAudioEQEffect::StaticStruct, TEXT("/Script/Engine"), TEXT("AudioEQEffect"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAudioEQEffect
{
	FScriptStruct_Engine_StaticRegisterNativesFAudioEQEffect()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AudioEQEffect")),new UScriptStruct::TCppStructOps<FAudioEQEffect>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAudioEQEffect;
	UScriptStruct* Z_Construct_UScriptStruct_FAudioEQEffect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAudioEQEffect_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AudioEQEffect"), sizeof(FAudioEQEffect), Get_Z_Construct_UScriptStruct_FAudioEQEffect_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioEQEffect>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bandwidth3_MetaData[] = {
				{ "Category", "Band0" },
				{ "ClampMax", "2.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
				{ "ToolTip", "Bandwidth of band 3. Region is center frequency +/- Bandwidth /2" },
				{ "UIMax", "2.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bandwidth3 = { UE4CodeGen_Private::EPropertyClass::Float, "Bandwidth3", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAudioEQEffect, Bandwidth3), METADATA_PARAMS(NewProp_Bandwidth3_MetaData, ARRAY_COUNT(NewProp_Bandwidth3_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gain3_MetaData[] = {
				{ "Category", "Band0" },
				{ "ClampMax", "10.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
				{ "ToolTip", "Boost/cut of band 3" },
				{ "UIMax", "10.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gain3 = { UE4CodeGen_Private::EPropertyClass::Float, "Gain3", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAudioEQEffect, Gain3), METADATA_PARAMS(NewProp_Gain3_MetaData, ARRAY_COUNT(NewProp_Gain3_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrequencyCenter3_MetaData[] = {
				{ "Category", "Band0" },
				{ "ClampMax", "20000.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
				{ "ToolTip", "Center frequency in Hz for band 3" },
				{ "UIMax", "20000.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrequencyCenter3 = { UE4CodeGen_Private::EPropertyClass::Float, "FrequencyCenter3", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAudioEQEffect, FrequencyCenter3), METADATA_PARAMS(NewProp_FrequencyCenter3_MetaData, ARRAY_COUNT(NewProp_FrequencyCenter3_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bandwidth2_MetaData[] = {
				{ "Category", "Band0" },
				{ "ClampMax", "2.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
				{ "ToolTip", "Bandwidth of band 2. Region is center frequency +/- Bandwidth /2" },
				{ "UIMax", "2.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bandwidth2 = { UE4CodeGen_Private::EPropertyClass::Float, "Bandwidth2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAudioEQEffect, Bandwidth2), METADATA_PARAMS(NewProp_Bandwidth2_MetaData, ARRAY_COUNT(NewProp_Bandwidth2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gain2_MetaData[] = {
				{ "Category", "Band0" },
				{ "ClampMax", "10.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
				{ "ToolTip", "Boost/cut of band 2" },
				{ "UIMax", "10.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gain2 = { UE4CodeGen_Private::EPropertyClass::Float, "Gain2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAudioEQEffect, Gain2), METADATA_PARAMS(NewProp_Gain2_MetaData, ARRAY_COUNT(NewProp_Gain2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrequencyCenter2_MetaData[] = {
				{ "Category", "Band0" },
				{ "ClampMax", "20000.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
				{ "ToolTip", "Center frequency in Hz for band 2" },
				{ "UIMax", "20000.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrequencyCenter2 = { UE4CodeGen_Private::EPropertyClass::Float, "FrequencyCenter2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAudioEQEffect, FrequencyCenter2), METADATA_PARAMS(NewProp_FrequencyCenter2_MetaData, ARRAY_COUNT(NewProp_FrequencyCenter2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bandwidth1_MetaData[] = {
				{ "Category", "Band0" },
				{ "ClampMax", "2.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
				{ "ToolTip", "Bandwidth of band 1. Region is center frequency +/- Bandwidth /2" },
				{ "UIMax", "2.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bandwidth1 = { UE4CodeGen_Private::EPropertyClass::Float, "Bandwidth1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAudioEQEffect, Bandwidth1), METADATA_PARAMS(NewProp_Bandwidth1_MetaData, ARRAY_COUNT(NewProp_Bandwidth1_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gain1_MetaData[] = {
				{ "Category", "Band0" },
				{ "ClampMax", "10.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
				{ "ToolTip", "Boost/cut of band 1" },
				{ "UIMax", "10.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gain1 = { UE4CodeGen_Private::EPropertyClass::Float, "Gain1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAudioEQEffect, Gain1), METADATA_PARAMS(NewProp_Gain1_MetaData, ARRAY_COUNT(NewProp_Gain1_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrequencyCenter1_MetaData[] = {
				{ "Category", "Band0" },
				{ "ClampMax", "20000.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
				{ "ToolTip", "Center frequency in Hz for band 1" },
				{ "UIMax", "20000.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrequencyCenter1 = { UE4CodeGen_Private::EPropertyClass::Float, "FrequencyCenter1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAudioEQEffect, FrequencyCenter1), METADATA_PARAMS(NewProp_FrequencyCenter1_MetaData, ARRAY_COUNT(NewProp_FrequencyCenter1_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bandwidth0_MetaData[] = {
				{ "Category", "Band0" },
				{ "ClampMax", "2.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
				{ "ToolTip", "Bandwidth of band 0. Region is center frequency +/- Bandwidth /2" },
				{ "UIMax", "2.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bandwidth0 = { UE4CodeGen_Private::EPropertyClass::Float, "Bandwidth0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAudioEQEffect, Bandwidth0), METADATA_PARAMS(NewProp_Bandwidth0_MetaData, ARRAY_COUNT(NewProp_Bandwidth0_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gain0_MetaData[] = {
				{ "Category", "Band0" },
				{ "ClampMax", "10.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
				{ "ToolTip", "Boost/cut of band 0" },
				{ "UIMax", "10.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gain0 = { UE4CodeGen_Private::EPropertyClass::Float, "Gain0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAudioEQEffect, Gain0), METADATA_PARAMS(NewProp_Gain0_MetaData, ARRAY_COUNT(NewProp_Gain0_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrequencyCenter0_MetaData[] = {
				{ "Category", "Band0" },
				{ "ClampMax", "20000.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
				{ "ToolTip", "Center frequency in Hz for band 0" },
				{ "UIMax", "20000.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrequencyCenter0 = { UE4CodeGen_Private::EPropertyClass::Float, "FrequencyCenter0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAudioEQEffect, FrequencyCenter0), METADATA_PARAMS(NewProp_FrequencyCenter0_MetaData, ARRAY_COUNT(NewProp_FrequencyCenter0_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bandwidth3,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Gain3,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrequencyCenter3,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bandwidth2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Gain2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrequencyCenter2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bandwidth1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Gain1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrequencyCenter1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bandwidth0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Gain0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrequencyCenter0,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AudioEQEffect",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAudioEQEffect),
				alignof(FAudioEQEffect),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAudioEQEffect_CRC() { return 301074775U; }
	void USoundMix::StaticRegisterNativesUSoundMix()
	{
	}
	UClass* Z_Construct_UClass_USoundMix_NoRegister()
	{
		return USoundMix::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundMix()
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
				{ "IncludePath", "Sound/SoundMix.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChanged_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
				{ "ToolTip", "Transient property used to trigger real-time updates of the active EQ filter for editor previewing" },
			};
#endif
			auto NewProp_bChanged_SetBit = [](void* Obj){ ((USoundMix*)Obj)->bChanged = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChanged = { UE4CodeGen_Private::EPropertyClass::Bool, "bChanged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundMix), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bChanged_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bChanged_MetaData, ARRAY_COUNT(NewProp_bChanged_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeOutTime_MetaData[] = {
				{ "Category", "SoundMix" },
				{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
				{ "ToolTip", "Time taken in seconds for the mix to fade out." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutTime = { UE4CodeGen_Private::EPropertyClass::Float, "FadeOutTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundMix, FadeOutTime), METADATA_PARAMS(NewProp_FadeOutTime_MetaData, ARRAY_COUNT(NewProp_FadeOutTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
				{ "Category", "SoundMix" },
				{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
				{ "ToolTip", "Duration of mix, negative means it will be applied until another mix is set." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration = { UE4CodeGen_Private::EPropertyClass::Float, "Duration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundMix, Duration), METADATA_PARAMS(NewProp_Duration_MetaData, ARRAY_COUNT(NewProp_Duration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeInTime_MetaData[] = {
				{ "Category", "SoundMix" },
				{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
				{ "ToolTip", "Time taken in seconds for the mix to fade in." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInTime = { UE4CodeGen_Private::EPropertyClass::Float, "FadeInTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundMix, FadeInTime), METADATA_PARAMS(NewProp_FadeInTime_MetaData, ARRAY_COUNT(NewProp_FadeInTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialDelay_MetaData[] = {
				{ "Category", "SoundMix" },
				{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
				{ "ToolTip", "Initial delay in seconds before the the mix is applied." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialDelay = { UE4CodeGen_Private::EPropertyClass::Float, "InitialDelay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundMix, InitialDelay), METADATA_PARAMS(NewProp_InitialDelay_MetaData, ARRAY_COUNT(NewProp_InitialDelay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundClassEffects_MetaData[] = {
				{ "Category", "SoundClasses" },
				{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
				{ "ToolTip", "Array of changes to be applied to groups." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SoundClassEffects = { UE4CodeGen_Private::EPropertyClass::Array, "SoundClassEffects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundMix, SoundClassEffects), METADATA_PARAMS(NewProp_SoundClassEffects_MetaData, ARRAY_COUNT(NewProp_SoundClassEffects_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoundClassEffects_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SoundClassEffects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSoundClassAdjuster, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EQSettings_MetaData[] = {
				{ "Category", "EQ" },
				{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EQSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "EQSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundMix, EQSettings), Z_Construct_UScriptStruct_FAudioEQEffect, METADATA_PARAMS(NewProp_EQSettings_MetaData, ARRAY_COUNT(NewProp_EQSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EQPriority_MetaData[] = {
				{ "Category", "EQ" },
				{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EQPriority = { UE4CodeGen_Private::EPropertyClass::Float, "EQPriority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundMix, EQPriority), METADATA_PARAMS(NewProp_EQPriority_MetaData, ARRAY_COUNT(NewProp_EQPriority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyEQ_MetaData[] = {
				{ "Category", "EQ" },
				{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
				{ "ToolTip", "Whether to apply the EQ effect" },
			};
#endif
			auto NewProp_bApplyEQ_SetBit = [](void* Obj){ ((USoundMix*)Obj)->bApplyEQ = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyEQ = { UE4CodeGen_Private::EPropertyClass::Bool, "bApplyEQ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundMix), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bApplyEQ_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bApplyEQ_MetaData, ARRAY_COUNT(NewProp_bApplyEQ_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bChanged,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FadeOutTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Duration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FadeInTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitialDelay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundClassEffects,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundClassEffects_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EQSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EQPriority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bApplyEQ,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundMix>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundMix::StaticClass,
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
	IMPLEMENT_CLASS(USoundMix, 1640791606);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundMix(Z_Construct_UClass_USoundMix, &USoundMix::StaticClass, TEXT("/Script/Engine"), TEXT("USoundMix"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundMix);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
