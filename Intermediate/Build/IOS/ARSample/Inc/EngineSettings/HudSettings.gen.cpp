// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/HudSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudSettings() {}
// Cross Module References
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UHudSettings_NoRegister();
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UHudSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_EngineSettings();
// End Cross Module References
	void UHudSettings::StaticRegisterNativesUHudSettings()
	{
	}
	UClass* Z_Construct_UClass_UHudSettings_NoRegister()
	{
		return UHudSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UHudSettings()
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
				{ "IncludePath", "HudSettings.h" },
				{ "ModuleRelativePath", "Classes/HudSettings.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugDisplay_MetaData[] = {
				{ "Category", "HudSettings" },
				{ "ModuleRelativePath", "Classes/HudSettings.h" },
				{ "ToolTip", "Collection of names specifying what debug info to display for ViewTarget actor." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DebugDisplay = { UE4CodeGen_Private::EPropertyClass::Array, "DebugDisplay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UHudSettings, DebugDisplay), METADATA_PARAMS(NewProp_DebugDisplay_MetaData, ARRAY_COUNT(NewProp_DebugDisplay_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_DebugDisplay_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "DebugDisplay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowHUD_MetaData[] = {
				{ "Category", "HudSettings" },
				{ "ModuleRelativePath", "Classes/HudSettings.h" },
				{ "ToolTip", "Whether the HUD is visible at all." },
			};
#endif
			auto NewProp_bShowHUD_SetBit = [](void* Obj){ ((UHudSettings*)Obj)->bShowHUD = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowHUD = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowHUD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UHudSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowHUD_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowHUD_MetaData, ARRAY_COUNT(NewProp_bShowHUD_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugDisplay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugDisplay_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowHUD,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UHudSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UHudSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100084u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHudSettings, 2885798714);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHudSettings(Z_Construct_UClass_UHudSettings, &UHudSettings::StaticClass, TEXT("/Script/EngineSettings"), TEXT("UHudSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHudSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
