// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GeneralEngineSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneralEngineSettings() {}
// Cross Module References
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UGeneralEngineSettings_NoRegister();
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UGeneralEngineSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_EngineSettings();
// End Cross Module References
	void UGeneralEngineSettings::StaticRegisterNativesUGeneralEngineSettings()
	{
	}
	UClass* Z_Construct_UClass_UGeneralEngineSettings_NoRegister()
	{
		return UGeneralEngineSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UGeneralEngineSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_EngineSettings,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GeneralEngineSettings.h" },
				{ "ModuleRelativePath", "Classes/GeneralEngineSettings.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGeneralEngineSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGeneralEngineSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
				nullptr, 0,
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeneralEngineSettings, 3504897090);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeneralEngineSettings(Z_Construct_UClass_UGeneralEngineSettings, &UGeneralEngineSettings::StaticClass, TEXT("/Script/EngineSettings"), TEXT("UGeneralEngineSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeneralEngineSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
