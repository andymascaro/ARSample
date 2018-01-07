// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LocalizedOverlays.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalizedOverlays() {}
// Cross Module References
	OVERLAY_API UClass* Z_Construct_UClass_ULocalizedOverlays_NoRegister();
	OVERLAY_API UClass* Z_Construct_UClass_ULocalizedOverlays();
	OVERLAY_API UClass* Z_Construct_UClass_UOverlays();
	UPackage* Z_Construct_UPackage__Script_Overlay();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	OVERLAY_API UClass* Z_Construct_UClass_UBasicOverlays_NoRegister();
// End Cross Module References
	void ULocalizedOverlays::StaticRegisterNativesULocalizedOverlays()
	{
	}
	UClass* Z_Construct_UClass_ULocalizedOverlays_NoRegister()
	{
		return ULocalizedOverlays::StaticClass();
	}
	UClass* Z_Construct_UClass_ULocalizedOverlays()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UOverlays,
				(UObject* (*)())Z_Construct_UPackage__Script_Overlay,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "LocalizedOverlays.h" },
				{ "ModuleRelativePath", "Public/LocalizedOverlays.h" },
				{ "ToolTip", "Implements an asset that contains a set of Basic Overlays that will be displayed in accordance with\nthe current locale, or a default set if an appropriate locale is not found" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
				{ "Category", "Import Settings" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LocalizedOverlays.h" },
				{ "ToolTip", "The import data used to make this overlays asset" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData = { UE4CodeGen_Private::EPropertyClass::Object, "AssetImportData", RF_Public|RF_Transient|RF_MarkAsNative, 0x00120008000a0009, 1, nullptr, STRUCT_OFFSET(ULocalizedOverlays, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(NewProp_AssetImportData_MetaData, ARRAY_COUNT(NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocaleToOverlaysMap_MetaData[] = {
				{ "Category", "Overlay Data" },
				{ "ModuleRelativePath", "Public/LocalizedOverlays.h" },
				{ "ToolTip", "Maps a set of cultures to specific BasicOverlays assets.\nCultures are comprised of three hyphen-separated parts:\n             A two-letter ISO 639-1 language code (e.g., \"zh\")\n             An optional four-letter ISO 15924 script code (e.g., \"Hans\")\n             An optional two-letter ISO 3166-1 country code  (e.g., \"CN\")" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_LocaleToOverlaysMap = { UE4CodeGen_Private::EPropertyClass::Map, "LocaleToOverlaysMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULocalizedOverlays, LocaleToOverlaysMap), METADATA_PARAMS(NewProp_LocaleToOverlaysMap_MetaData, ARRAY_COUNT(NewProp_LocaleToOverlaysMap_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocaleToOverlaysMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "LocaleToOverlaysMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocaleToOverlaysMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Object, "LocaleToOverlaysMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000001, 1, nullptr, 1, Z_Construct_UClass_UBasicOverlays_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultOverlays_MetaData[] = {
				{ "Category", "Overlay Data" },
				{ "ModuleRelativePath", "Public/LocalizedOverlays.h" },
				{ "ToolTip", "The overlays to use if no overlays are found for the current culture" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultOverlays = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultOverlays", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULocalizedOverlays, DefaultOverlays), Z_Construct_UClass_UBasicOverlays_NoRegister, METADATA_PARAMS(NewProp_DefaultOverlays_MetaData, ARRAY_COUNT(NewProp_DefaultOverlays_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocaleToOverlaysMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocaleToOverlaysMap_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocaleToOverlaysMap_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultOverlays,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULocalizedOverlays>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULocalizedOverlays::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(ULocalizedOverlays, 3379512601);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalizedOverlays(Z_Construct_UClass_ULocalizedOverlays, &ULocalizedOverlays::StaticClass, TEXT("/Script/Overlay"), TEXT("ULocalizedOverlays"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalizedOverlays);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
