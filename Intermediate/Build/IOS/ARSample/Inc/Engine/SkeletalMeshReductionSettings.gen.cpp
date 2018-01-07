// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/SkeletalMeshReductionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshReductionSettings() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshReductionSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshReductionSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FSkeletalMeshLODGroupSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshLODGroupSettings"), sizeof(FSkeletalMeshLODGroupSettings), Get_Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletalMeshLODGroupSettings(FSkeletalMeshLODGroupSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("SkeletalMeshLODGroupSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshLODGroupSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshLODGroupSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkeletalMeshLODGroupSettings")),new UScriptStruct::TCppStructOps<FSkeletalMeshLODGroupSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshLODGroupSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshLODGroupSettings"), sizeof(FSkeletalMeshLODGroupSettings), Get_Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshReductionSettings.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshLODGroupSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptimizationSettings_MetaData[] = {
				{ "Category", "Reduction" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshReductionSettings.h" },
				{ "ToolTip", "The optimization settings to use for the respective LOD level" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OptimizationSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "OptimizationSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshLODGroupSettings, OptimizationSettings), Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings, METADATA_PARAMS(NewProp_OptimizationSettings_MetaData, ARRAY_COUNT(NewProp_OptimizationSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[] = {
				{ "Category", "Reduction" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshReductionSettings.h" },
				{ "ToolTip", "The screen sizes to use for the respective LOD level" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenSize = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshLODGroupSettings, ScreenSize), METADATA_PARAMS(NewProp_ScreenSize_MetaData, ARRAY_COUNT(NewProp_ScreenSize_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OptimizationSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenSize,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SkeletalMeshLODGroupSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSkeletalMeshLODGroupSettings),
				alignof(FSkeletalMeshLODGroupSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_CRC() { return 1270723100U; }
	void USkeletalMeshReductionSettings::StaticRegisterNativesUSkeletalMeshReductionSettings()
	{
	}
	UClass* Z_Construct_UClass_USkeletalMeshReductionSettings_NoRegister()
	{
		return USkeletalMeshReductionSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_USkeletalMeshReductionSettings()
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
				{ "IncludePath", "Engine/SkeletalMeshReductionSettings.h" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshReductionSettings.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshReductionSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Settings = { UE4CodeGen_Private::EPropertyClass::Array, "Settings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000044000, 1, nullptr, STRUCT_OFFSET(USkeletalMeshReductionSettings, Settings), METADATA_PARAMS(NewProp_Settings_MetaData, ARRAY_COUNT(NewProp_Settings_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Settings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Settings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Settings_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USkeletalMeshReductionSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USkeletalMeshReductionSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080086u,
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
	IMPLEMENT_CLASS(USkeletalMeshReductionSettings, 2393291306);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkeletalMeshReductionSettings(Z_Construct_UClass_USkeletalMeshReductionSettings, &USkeletalMeshReductionSettings::StaticClass, TEXT("/Script/Engine"), TEXT("USkeletalMeshReductionSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshReductionSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
