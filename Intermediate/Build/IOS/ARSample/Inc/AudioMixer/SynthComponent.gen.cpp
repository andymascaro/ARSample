// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/SynthComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynthComponent() {}
// Cross Module References
	AUDIOMIXER_API UClass* Z_Construct_UClass_USynthSound_NoRegister();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USynthSound();
	ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural();
	UPackage* Z_Construct_UPackage__Script_AudioMixer();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent_NoRegister();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_USynthComponent_IsPlaying();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_USynthComponent_SetSubmixSend();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_USynthComponent_Start();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_USynthComponent_Stop();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSendInfo();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
// End Cross Module References
	void USynthSound::StaticRegisterNativesUSynthSound()
	{
	}
	UClass* Z_Construct_UClass_USynthSound_NoRegister()
	{
		return USynthSound::StaticClass();
	}
	UClass* Z_Construct_UClass_USynthSound()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USoundWaveProcedural,
				(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Components/SynthComponent.h" },
				{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USynthSound>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USynthSound::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00901080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USynthSound, 2440050722);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USynthSound(Z_Construct_UClass_USynthSound, &USynthSound::StaticClass, TEXT("/Script/AudioMixer"), TEXT("USynthSound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USynthSound);
	void USynthComponent::StaticRegisterNativesUSynthComponent()
	{
		UClass* Class = USynthComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsPlaying", (Native)&USynthComponent::execIsPlaying },
			{ "SetSubmixSend", (Native)&USynthComponent::execSetSubmixSend },
			{ "Start", (Native)&USynthComponent::execStart },
			{ "Stop", (Native)&USynthComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USynthComponent_IsPlaying()
	{
		struct SynthComponent_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SynthComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SynthComponent_eventIsPlaying_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Synth|Components|Audio" },
				{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
				{ "ToolTip", "Returns true if this component is currently playing." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, "IsPlaying", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SynthComponent_eventIsPlaying_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USynthComponent_SetSubmixSend()
	{
		struct SynthComponent_eventSetSubmixSend_Parms
		{
			USoundSubmix* Submix;
			float SendLevel;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SendLevel = { UE4CodeGen_Private::EPropertyClass::Float, "SendLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SynthComponent_eventSetSubmixSend_Parms, SendLevel), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Submix = { UE4CodeGen_Private::EPropertyClass::Object, "Submix", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SynthComponent_eventSetSubmixSend_Parms, Submix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SendLevel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Submix,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Components|Audio" },
				{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
				{ "ToolTip", "Sets how much audio the sound should send to the given submix." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, "SetSubmixSend", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SynthComponent_eventSetSubmixSend_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USynthComponent_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Synth|Components|Audio" },
				{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
				{ "ToolTip", "Starts the synth generating audio." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, "Start", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USynthComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Synth|Components|Audio" },
				{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
				{ "ToolTip", "Stops the synth generating audio." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, "Stop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USynthComponent_NoRegister()
	{
		return USynthComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_USynthComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USynthComponent_IsPlaying, "IsPlaying" }, // 3710754424
				{ &Z_Construct_UFunction_USynthComponent_SetSubmixSend, "SetSubmixSend" }, // 2135609941
				{ &Z_Construct_UFunction_USynthComponent_Start, "Start" }, // 2070186732
				{ &Z_Construct_UFunction_USynthComponent_Stop, "Stop" }, // 1213370332
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ClassGroupNames", "Synth" },
				{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
				{ "IncludePath", "Components/SynthComponent.h" },
				{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent = { UE4CodeGen_Private::EPropertyClass::Object, "AudioComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000082008, 1, nullptr, STRUCT_OFFSET(USynthComponent, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(NewProp_AudioComponent_MetaData, ARRAY_COUNT(NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Synth_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Synth = { UE4CodeGen_Private::EPropertyClass::Object, "Synth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(USynthComponent, Synth), Z_Construct_UClass_USynthSound_NoRegister, METADATA_PARAMS(NewProp_Synth_MetaData, ARRAY_COUNT(NewProp_Synth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUISound_MetaData[] = {
				{ "Category", "Sound" },
				{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
				{ "ToolTip", "Whether or not this sound plays when the game is paused in the UI" },
			};
#endif
			auto NewProp_bIsUISound_SetBit = [](void* Obj){ ((USynthComponent*)Obj)->bIsUISound = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUISound = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsUISound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USynthComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsUISound_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsUISound_MetaData, ARRAY_COUNT(NewProp_bIsUISound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundSubmixSends_MetaData[] = {
				{ "Category", "Effects" },
				{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
				{ "ToolTip", "An array of submix sends. Audio from this sound will send a portion of its audio to these effects." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SoundSubmixSends = { UE4CodeGen_Private::EPropertyClass::Array, "SoundSubmixSends", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USynthComponent, SoundSubmixSends), METADATA_PARAMS(NewProp_SoundSubmixSends_MetaData, ARRAY_COUNT(NewProp_SoundSubmixSends_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoundSubmixSends_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SoundSubmixSends", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSoundSubmixSendInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundSubmix_MetaData[] = {
				{ "Category", "Effects" },
				{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
				{ "ToolTip", "Submix this sound belongs to" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundSubmix = { UE4CodeGen_Private::EPropertyClass::Object, "SoundSubmix", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USynthComponent, SoundSubmix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(NewProp_SoundSubmix_MetaData, ARRAY_COUNT(NewProp_SoundSubmix_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceEffectChain_MetaData[] = {
				{ "Category", "Effects" },
				{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
				{ "ToolTip", "The source effect chain to use for this sound." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceEffectChain = { UE4CodeGen_Private::EPropertyClass::Object, "SourceEffectChain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USynthComponent, SourceEffectChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(NewProp_SourceEffectChain_MetaData, ARRAY_COUNT(NewProp_SourceEffectChain_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundClass_MetaData[] = {
				{ "Category", "SoundClass" },
				{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
				{ "ToolTip", "Sound class this sound belongs to" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundClass = { UE4CodeGen_Private::EPropertyClass::Object, "SoundClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USynthComponent, SoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(NewProp_SoundClass_MetaData, ARRAY_COUNT(NewProp_SoundClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConcurrencySettings_MetaData[] = {
				{ "Category", "Concurrency" },
				{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
				{ "ToolTip", "What sound concurrency to use for sounds generated by this audio component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings = { UE4CodeGen_Private::EPropertyClass::Object, "ConcurrencySettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USynthComponent, ConcurrencySettings), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(NewProp_ConcurrencySettings_MetaData, ARRAY_COUNT(NewProp_ConcurrencySettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationOverrides_MetaData[] = {
				{ "Category", "Attenuation" },
				{ "EditCondition", "bOverrideAttenuation" },
				{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
				{ "ToolTip", "If bOverrideSettings is true, the attenuation properties to use for sounds generated by this component" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttenuationOverrides = { UE4CodeGen_Private::EPropertyClass::Struct, "AttenuationOverrides", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USynthComponent, AttenuationOverrides), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(NewProp_AttenuationOverrides_MetaData, ARRAY_COUNT(NewProp_AttenuationOverrides_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[] = {
				{ "Category", "Attenuation" },
				{ "EditCondition", "!bOverrideAttenuation" },
				{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
				{ "ToolTip", "If bOverrideSettings is false, the asset to use to determine attenuation properties for sounds generated by this component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings = { UE4CodeGen_Private::EPropertyClass::Object, "AttenuationSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USynthComponent, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(NewProp_AttenuationSettings_MetaData, ARRAY_COUNT(NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[] = {
				{ "Category", "Attenuation" },
				{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
				{ "ToolTip", "Should the Attenuation Settings asset be used (false) or should the properties set directly on the component be used for attenuation properties" },
			};
#endif
			auto NewProp_bOverrideAttenuation_SetBit = [](void* Obj){ ((USynthComponent*)Obj)->bOverrideAttenuation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideAttenuation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USynthComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideAttenuation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideAttenuation_MetaData, ARRAY_COUNT(NewProp_bOverrideAttenuation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowSpatialization_MetaData[] = {
				{ "Category", "Attenuation" },
				{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
				{ "ToolTip", "Is this audio component allowed to be spatialized?" },
			};
#endif
			auto NewProp_bAllowSpatialization_SetBit = [](void* Obj){ ((USynthComponent*)Obj)->bAllowSpatialization = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowSpatialization = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowSpatialization", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USynthComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowSpatialization_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowSpatialization_MetaData, ARRAY_COUNT(NewProp_bAllowSpatialization_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopWhenOwnerDestroyed_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
				{ "ToolTip", "Stop sound when owner is destroyed" },
			};
#endif
			auto NewProp_bStopWhenOwnerDestroyed_SetBit = [](void* Obj){ ((USynthComponent*)Obj)->bStopWhenOwnerDestroyed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenOwnerDestroyed = { UE4CodeGen_Private::EPropertyClass::Bool, "bStopWhenOwnerDestroyed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USynthComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStopWhenOwnerDestroyed_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bStopWhenOwnerDestroyed_MetaData, ARRAY_COUNT(NewProp_bStopWhenOwnerDestroyed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroy_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
				{ "ToolTip", "Auto destroy this component on completion" },
			};
#endif
			auto NewProp_bAutoDestroy_SetBit = [](void* Obj){ ((USynthComponent*)Obj)->bAutoDestroy = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoDestroy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USynthComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoDestroy_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutoDestroy_MetaData, ARRAY_COUNT(NewProp_bAutoDestroy_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AudioComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Synth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsUISound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundSubmixSends,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundSubmixSends_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundSubmix,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceEffectChain,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConcurrencySettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttenuationOverrides,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttenuationSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideAttenuation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowSpatialization,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStopWhenOwnerDestroyed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoDestroy,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USynthComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USynthComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(USynthComponent, 460928230);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USynthComponent(Z_Construct_UClass_USynthComponent, &USynthComponent::StaticClass, TEXT("/Script/AudioMixer"), TEXT("USynthComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USynthComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
