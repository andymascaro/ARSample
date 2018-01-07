// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMixerSubmixEffectEQ() {}
// Cross Module References
	AUDIOMIXER_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings();
	UPackage* Z_Construct_UPackage__Script_AudioMixer();
	AUDIOMIXER_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectEQBand();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USubmixEffectSubmixEQPreset_NoRegister();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USubmixEffectSubmixEQPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings();
// End Cross Module References
class UScriptStruct* FSubmixEffectSubmixEQSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUDIOMIXER_API uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings, Z_Construct_UPackage__Script_AudioMixer(), TEXT("SubmixEffectSubmixEQSettings"), sizeof(FSubmixEffectSubmixEQSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubmixEffectSubmixEQSettings(FSubmixEffectSubmixEQSettings::StaticStruct, TEXT("/Script/AudioMixer"), TEXT("SubmixEffectSubmixEQSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectSubmixEQSettings
{
	FScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectSubmixEQSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubmixEffectSubmixEQSettings")),new UScriptStruct::TCppStructOps<FSubmixEffectSubmixEQSettings>);
	}
} ScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectSubmixEQSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AudioMixer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubmixEffectSubmixEQSettings"), sizeof(FSubmixEffectSubmixEQSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
				{ "ToolTip", "EQ submix effect" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectSubmixEQSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EQBands_MetaData[] = {
				{ "Category", "SubmixEffect|Preset" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
				{ "ToolTip", "The EQ bands to use." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EQBands = { UE4CodeGen_Private::EPropertyClass::Array, "EQBands", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSubmixEffectSubmixEQSettings, EQBands), METADATA_PARAMS(NewProp_EQBands_MetaData, ARRAY_COUNT(NewProp_EQBands_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EQBands_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "EQBands", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSubmixEffectEQBand, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EQBands,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EQBands_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SubmixEffectSubmixEQSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSubmixEffectSubmixEQSettings),
				alignof(FSubmixEffectSubmixEQSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_CRC() { return 1041087901U; }
class UScriptStruct* FSubmixEffectEQBand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUDIOMIXER_API uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectEQBand_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectEQBand, Z_Construct_UPackage__Script_AudioMixer(), TEXT("SubmixEffectEQBand"), sizeof(FSubmixEffectEQBand), Get_Z_Construct_UScriptStruct_FSubmixEffectEQBand_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubmixEffectEQBand(FSubmixEffectEQBand::StaticStruct, TEXT("/Script/AudioMixer"), TEXT("SubmixEffectEQBand"), false, nullptr, nullptr);
static struct FScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectEQBand
{
	FScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectEQBand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubmixEffectEQBand")),new UScriptStruct::TCppStructOps<FSubmixEffectEQBand>);
	}
} ScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectEQBand;
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectEQBand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectEQBand_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AudioMixer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubmixEffectEQBand"), sizeof(FSubmixEffectEQBand), Get_Z_Construct_UScriptStruct_FSubmixEffectEQBand_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
				{ "ToolTip", "A multiband EQ submix effect." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectEQBand>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
				{ "Category", "SubmixEffect|Preset" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
			};
#endif
			auto NewProp_bEnabled_SetBit = [](void* Obj){ ((FSubmixEffectEQBand*)Obj)->bEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSubmixEffectEQBand), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnabled_MetaData, ARRAY_COUNT(NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GainDb_MetaData[] = {
				{ "Category", "SubmixEffect|Preset" },
				{ "ClampMax", "20.0" },
				{ "ClampMin", "-90.0" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
				{ "UIMax", "20.0" },
				{ "UIMin", "-90.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GainDb = { UE4CodeGen_Private::EPropertyClass::Float, "GainDb", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSubmixEffectEQBand, GainDb), METADATA_PARAMS(NewProp_GainDb_MetaData, ARRAY_COUNT(NewProp_GainDb_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bandwidth_MetaData[] = {
				{ "Category", "SubmixEffect|Preset" },
				{ "ClampMax", "10.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
				{ "UIMax", "10.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bandwidth = { UE4CodeGen_Private::EPropertyClass::Float, "Bandwidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSubmixEffectEQBand, Bandwidth), METADATA_PARAMS(NewProp_Bandwidth_MetaData, ARRAY_COUNT(NewProp_Bandwidth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
				{ "Category", "SubmixEffect|Preset" },
				{ "ClampMax", "20000.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
				{ "UIMax", "15000.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Frequency = { UE4CodeGen_Private::EPropertyClass::Float, "Frequency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSubmixEffectEQBand, Frequency), METADATA_PARAMS(NewProp_Frequency_MetaData, ARRAY_COUNT(NewProp_Frequency_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GainDb,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bandwidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Frequency,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SubmixEffectEQBand",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FSubmixEffectEQBand),
				alignof(FSubmixEffectEQBand),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectEQBand_CRC() { return 1844461792U; }
	void USubmixEffectSubmixEQPreset::StaticRegisterNativesUSubmixEffectSubmixEQPreset()
	{
		UClass* Class = USubmixEffectSubmixEQPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", (Native)&USubmixEffectSubmixEQPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings()
	{
		struct SubmixEffectSubmixEQPreset_eventSetSettings_Parms
		{
			FSubmixEffectSubmixEQSettings InSettings;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "InSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SubmixEffectSubmixEQPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings, METADATA_PARAMS(NewProp_InSettings_MetaData, ARRAY_COUNT(NewProp_InSettings_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSettings,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Effects" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectSubmixEQPreset, "SetSettings", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(SubmixEffectSubmixEQPreset_eventSetSettings_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubmixEffectSubmixEQPreset_NoRegister()
	{
		return USubmixEffectSubmixEQPreset::StaticClass();
	}
	UClass* Z_Construct_UClass_USubmixEffectSubmixEQPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
				(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings, "SetSettings" }, // 2100444712
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "AudioSourceEffect" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "SubmixEffects/AudioMixerSubmixEffectEQ.h" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
				{ "Category", "SubmixEffectPreset" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings = { UE4CodeGen_Private::EPropertyClass::Struct, "Settings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USubmixEffectSubmixEQPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings, METADATA_PARAMS(NewProp_Settings_MetaData, ARRAY_COUNT(NewProp_Settings_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Settings,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USubmixEffectSubmixEQPreset>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USubmixEffectSubmixEQPreset::StaticClass,
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
	IMPLEMENT_CLASS(USubmixEffectSubmixEQPreset, 4233362071);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubmixEffectSubmixEQPreset(Z_Construct_UClass_USubmixEffectSubmixEQPreset, &USubmixEffectSubmixEQPreset::StaticClass, TEXT("/Script/AudioMixer"), TEXT("USubmixEffectSubmixEQPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectSubmixEQPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
