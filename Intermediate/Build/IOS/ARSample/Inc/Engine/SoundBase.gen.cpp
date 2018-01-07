// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSourceBusSendInfo();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSendInfo();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundConcurrencySettings();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
// End Cross Module References
	void USoundBase::StaticRegisterNativesUSoundBase()
	{
	}
	UClass* Z_Construct_UClass_USoundBase_NoRegister()
	{
		return USoundBase::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundBase()
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
				{ "IncludePath", "Sound/SoundBase.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BusSends_MetaData[] = {
				{ "Category", "Effects" },
				{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
				{ "ToolTip", "This sound will send it's audio output to this list of buses if there are bus instances playing." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BusSends = { UE4CodeGen_Private::EPropertyClass::Array, "BusSends", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USoundBase, BusSends), METADATA_PARAMS(NewProp_BusSends_MetaData, ARRAY_COUNT(NewProp_BusSends_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BusSends_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BusSends", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSoundSourceBusSendInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceEffectChain_MetaData[] = {
				{ "Category", "Effects" },
				{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
				{ "ToolTip", "The source effect chain to use for this sound." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceEffectChain = { UE4CodeGen_Private::EPropertyClass::Object, "SourceEffectChain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USoundBase, SourceEffectChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(NewProp_SourceEffectChain_MetaData, ARRAY_COUNT(NewProp_SourceEffectChain_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundSubmixSends_MetaData[] = {
				{ "Category", "Effects" },
				{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
				{ "ToolTip", "An array of submix sends. Audio from this sound will send a portion of its audio to these effects." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SoundSubmixSends = { UE4CodeGen_Private::EPropertyClass::Array, "SoundSubmixSends", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USoundBase, SoundSubmixSends), METADATA_PARAMS(NewProp_SoundSubmixSends_MetaData, ARRAY_COUNT(NewProp_SoundSubmixSends_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoundSubmixSends_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SoundSubmixSends", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSoundSubmixSendInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundSubmixObject_MetaData[] = {
				{ "Category", "Effects" },
				{ "DisplayName", "Sound Submix" },
				{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
				{ "ToolTip", "Sound submix this sound belongs to.\nAudio will play here and traverse through the submix graph.\nA null entry will make the sound obey the default master effects graph." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundSubmixObject = { UE4CodeGen_Private::EPropertyClass::Object, "SoundSubmixObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USoundBase, SoundSubmixObject), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(NewProp_SoundSubmixObject_MetaData, ARRAY_COUNT(NewProp_SoundSubmixObject_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
				{ "Category", "Concurrency" },
				{ "ClampMax", "100.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
				{ "ToolTip", "Sound priority (higher value is higher priority) used for concurrency resolution. This priority value is weighted against the final volume of the sound." },
				{ "UIMax", "100.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Priority = { UE4CodeGen_Private::EPropertyClass::Float, "Priority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USoundBase, Priority), METADATA_PARAMS(NewProp_Priority_MetaData, ARRAY_COUNT(NewProp_Priority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[] = {
				{ "Category", "Attenuation" },
				{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
				{ "ToolTip", "Attenuation settings package for the sound" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings = { UE4CodeGen_Private::EPropertyClass::Object, "AttenuationSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundBase, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(NewProp_AttenuationSettings_MetaData, ARRAY_COUNT(NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
				{ "Category", "Info" },
				{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
				{ "ToolTip", "Duration of sound in seconds." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration = { UE4CodeGen_Private::EPropertyClass::Float, "Duration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000020015, 1, nullptr, STRUCT_OFFSET(USoundBase, Duration), METADATA_PARAMS(NewProp_Duration_MetaData, ARRAY_COUNT(NewProp_Duration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxConcurrentPlayCount_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
				{ "ToolTip", "Maximum number of times this sound can be played concurrently." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxConcurrentPlayCount = { UE4CodeGen_Private::EPropertyClass::Int, "MaxConcurrentPlayCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(USoundBase, MaxConcurrentPlayCount_DEPRECATED), METADATA_PARAMS(NewProp_MaxConcurrentPlayCount_MetaData, ARRAY_COUNT(NewProp_MaxConcurrentPlayCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxConcurrentResolutionRule_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxConcurrentResolutionRule = { UE4CodeGen_Private::EPropertyClass::Byte, "MaxConcurrentResolutionRule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(USoundBase, MaxConcurrentResolutionRule_DEPRECATED), Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule, METADATA_PARAMS(NewProp_MaxConcurrentResolutionRule_MetaData, ARRAY_COUNT(NewProp_MaxConcurrentResolutionRule_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConcurrencyOverrides_MetaData[] = {
				{ "Category", "Concurrency" },
				{ "EditCondition", "bOverrideConcurrency" },
				{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
				{ "ToolTip", "If Override Concurrency is true, concurrency settings to use." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConcurrencyOverrides = { UE4CodeGen_Private::EPropertyClass::Struct, "ConcurrencyOverrides", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USoundBase, ConcurrencyOverrides), Z_Construct_UScriptStruct_FSoundConcurrencySettings, METADATA_PARAMS(NewProp_ConcurrencyOverrides_MetaData, ARRAY_COUNT(NewProp_ConcurrencyOverrides_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundConcurrencySettings_MetaData[] = {
				{ "Category", "Concurrency" },
				{ "EditCondition", "!bOverrideConcurrency" },
				{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
				{ "ToolTip", "If Override Concurrency is false, the sound concurrency settings to use for this sound." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundConcurrencySettings = { UE4CodeGen_Private::EPropertyClass::Object, "SoundConcurrencySettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USoundBase, SoundConcurrencySettings), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(NewProp_SoundConcurrencySettings_MetaData, ARRAY_COUNT(NewProp_SoundConcurrencySettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreFocus_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
			};
#endif
			auto NewProp_bIgnoreFocus_SetBit = [](void* Obj){ ((USoundBase*)Obj)->bIgnoreFocus_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreFocus = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreFocus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIgnoreFocus_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIgnoreFocus_MetaData, ARRAY_COUNT(NewProp_bIgnoreFocus_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOutputToBusOnly_MetaData[] = {
				{ "Category", "Effects" },
				{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
				{ "ToolTip", "Whether or not to only send this audio's output to a bus. If true, will not be this sound won't be audible except through bus sends." },
			};
#endif
			auto NewProp_bOutputToBusOnly_SetBit = [](void* Obj){ ((USoundBase*)Obj)->bOutputToBusOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutputToBusOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bOutputToBusOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOutputToBusOnly_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOutputToBusOnly_MetaData, ARRAY_COUNT(NewProp_bOutputToBusOnly_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideConcurrency_MetaData[] = {
				{ "Category", "Concurrency" },
				{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
				{ "ToolTip", "Whether or not to override the sound concurrency object with local concurrency settings." },
			};
#endif
			auto NewProp_bOverrideConcurrency_SetBit = [](void* Obj){ ((USoundBase*)Obj)->bOverrideConcurrency = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideConcurrency = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideConcurrency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideConcurrency_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideConcurrency_MetaData, ARRAY_COUNT(NewProp_bOverrideConcurrency_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[] = {
				{ "Category", "Debug" },
				{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
				{ "ToolTip", "When \"stat sounds -debug\" has been specified, draw this sound's attenuation shape when the sound is audible. For debugging purpose only." },
			};
#endif
			auto NewProp_bDebug_SetBit = [](void* Obj){ ((USoundBase*)Obj)->bDebug = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebug = { UE4CodeGen_Private::EPropertyClass::Bool, "bDebug", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDebug_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDebug_MetaData, ARRAY_COUNT(NewProp_bDebug_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundClassObject_MetaData[] = {
				{ "Category", "Sound" },
				{ "DisplayName", "Sound Class" },
				{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
				{ "ToolTip", "Sound class this sound belongs to" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundClassObject = { UE4CodeGen_Private::EPropertyClass::Object, "SoundClassObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020090000000001, 1, nullptr, STRUCT_OFFSET(USoundBase, SoundClassObject), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(NewProp_SoundClassObject_MetaData, ARRAY_COUNT(NewProp_SoundClassObject_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BusSends,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BusSends_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceEffectChain,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundSubmixSends,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundSubmixSends_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundSubmixObject,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Priority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttenuationSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Duration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxConcurrentPlayCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxConcurrentResolutionRule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConcurrencyOverrides,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundConcurrencySettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIgnoreFocus,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOutputToBusOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideConcurrency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDebug,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundClassObject,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00101081u,
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
	IMPLEMENT_CLASS(USoundBase, 806480951);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundBase(Z_Construct_UClass_USoundBase, &USoundBase::StaticClass, TEXT("/Script/Engine"), TEXT("USoundBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
