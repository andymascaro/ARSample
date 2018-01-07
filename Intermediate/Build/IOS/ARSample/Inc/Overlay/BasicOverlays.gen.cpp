// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BasicOverlays.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicOverlays() {}
// Cross Module References
	OVERLAY_API UClass* Z_Construct_UClass_UBasicOverlays_NoRegister();
	OVERLAY_API UClass* Z_Construct_UClass_UBasicOverlays();
	OVERLAY_API UClass* Z_Construct_UClass_UOverlays();
	UPackage* Z_Construct_UPackage__Script_Overlay();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	OVERLAY_API UScriptStruct* Z_Construct_UScriptStruct_FOverlayItem();
// End Cross Module References
	void UBasicOverlays::StaticRegisterNativesUBasicOverlays()
	{
	}
	UClass* Z_Construct_UClass_UBasicOverlays_NoRegister()
	{
		return UBasicOverlays::StaticClass();
	}
	UClass* Z_Construct_UClass_UBasicOverlays()
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
				{ "IncludePath", "BasicOverlays.h" },
				{ "ModuleRelativePath", "Public/BasicOverlays.h" },
				{ "ToolTip", "Implements an asset that contains a set of overlay data (which includes timing, text, and position) to be displayed for any\ngiven source (including, but not limited to, audio, dialog, and movies)" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
				{ "Category", "Import Settings" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BasicOverlays.h" },
				{ "ToolTip", "The import data used to make this overlays asset" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData = { UE4CodeGen_Private::EPropertyClass::Object, "AssetImportData", RF_Public|RF_Transient|RF_MarkAsNative, 0x00120008000a0009, 1, nullptr, STRUCT_OFFSET(UBasicOverlays, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(NewProp_AssetImportData_MetaData, ARRAY_COUNT(NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Overlays_MetaData[] = {
				{ "Category", "Overlay Data" },
				{ "ModuleRelativePath", "Public/BasicOverlays.h" },
				{ "ToolTip", "The overlay data held by this asset. Contains info on timing, position, and the subtitle to display" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Overlays = { UE4CodeGen_Private::EPropertyClass::Array, "Overlays", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBasicOverlays, Overlays), METADATA_PARAMS(NewProp_Overlays_MetaData, ARRAY_COUNT(NewProp_Overlays_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Overlays_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Overlays", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOverlayItem, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Overlays,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Overlays_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBasicOverlays>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBasicOverlays::StaticClass,
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
	IMPLEMENT_CLASS(UBasicOverlays, 3434416396);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBasicOverlays(Z_Construct_UClass_UBasicOverlays, &UBasicOverlays::StaticClass, TEXT("/Script/Overlay"), TEXT("UBasicOverlays"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasicOverlays);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
