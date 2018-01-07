// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundConcurrency.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundConcurrency() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundConcurrencySettings();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EMaxConcurrentResolutionRule_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule, Z_Construct_UPackage__Script_Engine(), TEXT("EMaxConcurrentResolutionRule"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMaxConcurrentResolutionRule(EMaxConcurrentResolutionRule_StaticEnum, TEXT("/Script/Engine"), TEXT("EMaxConcurrentResolutionRule"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule_CRC() { return 3175583368U; }
	UEnum* Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMaxConcurrentResolutionRule"), 0, Get_Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMaxConcurrentResolutionRule::PreventNew", (int64)EMaxConcurrentResolutionRule::PreventNew },
				{ "EMaxConcurrentResolutionRule::StopOldest", (int64)EMaxConcurrentResolutionRule::StopOldest },
				{ "EMaxConcurrentResolutionRule::StopFarthestThenPreventNew", (int64)EMaxConcurrentResolutionRule::StopFarthestThenPreventNew },
				{ "EMaxConcurrentResolutionRule::StopFarthestThenOldest", (int64)EMaxConcurrentResolutionRule::StopFarthestThenOldest },
				{ "EMaxConcurrentResolutionRule::StopLowestPriority", (int64)EMaxConcurrentResolutionRule::StopLowestPriority },
				{ "EMaxConcurrentResolutionRule::StopQuietest", (int64)EMaxConcurrentResolutionRule::StopQuietest },
				{ "EMaxConcurrentResolutionRule::StopLowestPriorityThenPreventNew", (int64)EMaxConcurrentResolutionRule::StopLowestPriorityThenPreventNew },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
				{ "PreventNew.ToolTip", "When Max Concurrent sounds are active do not start a new sound." },
				{ "StopFarthestThenOldest.ToolTip", "When Max Concurrent sounds are active stop the furthest sound.  If all sounds are the same distance then stop the oldest." },
				{ "StopFarthestThenPreventNew.ToolTip", "When Max Concurrent sounds are active stop the furthest sound.  If all sounds are the same distance then do not start a new sound." },
				{ "StopLowestPriority.ToolTip", "Stop the lowest priority sound in the group. If all sounds are the same priority, then it will stop the oldest sound in the group." },
				{ "StopLowestPriorityThenPreventNew.ToolTip", "Stop the lowest priority sound in the group. If all sounds are the same priority, then it won't play a new sound." },
				{ "StopOldest.ToolTip", "When Max Concurrent sounds are active stop the oldest and start a new one." },
				{ "StopQuietest.ToolTip", "Stop the sound that is quietest in the group." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMaxConcurrentResolutionRule",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EMaxConcurrentResolutionRule::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSoundConcurrencySettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundConcurrencySettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundConcurrencySettings, Z_Construct_UPackage__Script_Engine(), TEXT("SoundConcurrencySettings"), sizeof(FSoundConcurrencySettings), Get_Z_Construct_UScriptStruct_FSoundConcurrencySettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundConcurrencySettings(FSoundConcurrencySettings::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundConcurrencySettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundConcurrencySettings
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundConcurrencySettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundConcurrencySettings")),new UScriptStruct::TCppStructOps<FSoundConcurrencySettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundConcurrencySettings;
	UScriptStruct* Z_Construct_UScriptStruct_FSoundConcurrencySettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundConcurrencySettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundConcurrencySettings"), sizeof(FSoundConcurrencySettings), Get_Z_Construct_UScriptStruct_FSoundConcurrencySettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundConcurrencySettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeScale_MetaData[] = {
				{ "Category", "Concurrency" },
				{ "ClampMax", "1" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
				{ "ToolTip", "The amount of attenuation to apply to older voice instances in this concurrency group. This reduces volume of older voices in a concurrency group as new voices play.\n\nAppliedVolumeScale = Math.Pow(DuckingScale, VoiceGeneration)" },
				{ "UIMax", "1" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeScale = { UE4CodeGen_Private::EPropertyClass::Float, "VolumeScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundConcurrencySettings, VolumeScale), METADATA_PARAMS(NewProp_VolumeScale_MetaData, ARRAY_COUNT(NewProp_VolumeScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResolutionRule_MetaData[] = {
				{ "Category", "Concurrency" },
				{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
				{ "ToolTip", "Which concurrency resolution policy to use if max voice count is reached." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ResolutionRule = { UE4CodeGen_Private::EPropertyClass::Byte, "ResolutionRule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundConcurrencySettings, ResolutionRule), Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule, METADATA_PARAMS(NewProp_ResolutionRule_MetaData, ARRAY_COUNT(NewProp_ResolutionRule_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLimitToOwner_MetaData[] = {
				{ "Category", "Concurrency" },
				{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
				{ "ToolTip", "Whether or not to limit the concurrency to per sound owner (i.e. the actor that plays the sound). If the sound doesn't have an owner, it falls back to global concurrency." },
			};
#endif
			auto NewProp_bLimitToOwner_SetBit = [](void* Obj){ ((FSoundConcurrencySettings*)Obj)->bLimitToOwner = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLimitToOwner = { UE4CodeGen_Private::EPropertyClass::Bool, "bLimitToOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSoundConcurrencySettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLimitToOwner_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLimitToOwner_MetaData, ARRAY_COUNT(NewProp_bLimitToOwner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCount_MetaData[] = {
				{ "Category", "Concurrency" },
				{ "ClampMin", "1" },
				{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
				{ "ToolTip", "The max number of allowable concurrent active voices for voices playing in this concurrency group." },
				{ "UIMin", "1" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCount = { UE4CodeGen_Private::EPropertyClass::Int, "MaxCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSoundConcurrencySettings, MaxCount), METADATA_PARAMS(NewProp_MaxCount_MetaData, ARRAY_COUNT(NewProp_MaxCount_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumeScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResolutionRule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLimitToOwner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxCount,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SoundConcurrencySettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FSoundConcurrencySettings),
				alignof(FSoundConcurrencySettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundConcurrencySettings_CRC() { return 1347604371U; }
	void USoundConcurrency::StaticRegisterNativesUSoundConcurrency()
	{
	}
	UClass* Z_Construct_UClass_USoundConcurrency_NoRegister()
	{
		return USoundConcurrency::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundConcurrency()
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
				{ "IncludePath", "Sound/SoundConcurrency.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Concurrency_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/Sound/SoundConcurrency.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Concurrency = { UE4CodeGen_Private::EPropertyClass::Struct, "Concurrency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(USoundConcurrency, Concurrency), Z_Construct_UScriptStruct_FSoundConcurrencySettings, METADATA_PARAMS(NewProp_Concurrency_MetaData, ARRAY_COUNT(NewProp_Concurrency_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Concurrency,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundConcurrency>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundConcurrency::StaticClass,
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
	IMPLEMENT_CLASS(USoundConcurrency, 1850499851);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundConcurrency(Z_Construct_UClass_USoundConcurrency, &USoundConcurrency::StaticClass, TEXT("/Script/Engine"), TEXT("USoundConcurrency"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundConcurrency);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
