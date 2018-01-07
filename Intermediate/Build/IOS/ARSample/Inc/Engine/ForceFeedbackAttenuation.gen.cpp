// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/ForceFeedbackAttenuation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForceFeedbackAttenuation() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBaseAttenuationSettings();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackAttenuation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FForceFeedbackAttenuationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings, Z_Construct_UPackage__Script_Engine(), TEXT("ForceFeedbackAttenuationSettings"), sizeof(FForceFeedbackAttenuationSettings), Get_Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FForceFeedbackAttenuationSettings(FForceFeedbackAttenuationSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("ForceFeedbackAttenuationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFForceFeedbackAttenuationSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFForceFeedbackAttenuationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ForceFeedbackAttenuationSettings")),new UScriptStruct::TCppStructOps<FForceFeedbackAttenuationSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFForceFeedbackAttenuationSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ForceFeedbackAttenuationSettings"), sizeof(FForceFeedbackAttenuationSettings), Get_Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackAttenuation.h" },
				{ "ToolTip", "The struct for defining the properties used when determining attenuation for a force feedback effect" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FForceFeedbackAttenuationSettings>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FBaseAttenuationSettings,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ForceFeedbackAttenuationSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FForceFeedbackAttenuationSettings),
				alignof(FForceFeedbackAttenuationSettings),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_CRC() { return 4085466845U; }
	void UForceFeedbackAttenuation::StaticRegisterNativesUForceFeedbackAttenuation()
	{
	}
	UClass* Z_Construct_UClass_UForceFeedbackAttenuation_NoRegister()
	{
		return UForceFeedbackAttenuation::StaticClass();
	}
	UClass* Z_Construct_UClass_UForceFeedbackAttenuation()
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
				{ "IncludePath", "GameFramework/ForceFeedbackAttenuation.h" },
				{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackAttenuation.h" },
				{ "ToolTip", "Wrapper class that can be created as an asset for force feedback attenuation properties which allows reuse\nof the properties for multiple attenuation components" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attenuation_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackAttenuation.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attenuation = { UE4CodeGen_Private::EPropertyClass::Struct, "Attenuation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UForceFeedbackAttenuation, Attenuation), Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings, METADATA_PARAMS(NewProp_Attenuation_MetaData, ARRAY_COUNT(NewProp_Attenuation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Attenuation,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UForceFeedbackAttenuation>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UForceFeedbackAttenuation::StaticClass,
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
	IMPLEMENT_CLASS(UForceFeedbackAttenuation, 1868328181);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UForceFeedbackAttenuation(Z_Construct_UClass_UForceFeedbackAttenuation, &UForceFeedbackAttenuation::StaticClass, TEXT("/Script/Engine"), TEXT("UForceFeedbackAttenuation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UForceFeedbackAttenuation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
