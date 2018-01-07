// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/PlatformMediaSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformMediaSource() {}
// Cross Module References
	MEDIAASSETS_API UClass* Z_Construct_UClass_UPlatformMediaSource_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UPlatformMediaSource();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
// End Cross Module References
	void UPlatformMediaSource::StaticRegisterNativesUPlatformMediaSource()
	{
	}
	UClass* Z_Construct_UClass_UPlatformMediaSource_NoRegister()
	{
		return UPlatformMediaSource::StaticClass();
	}
	UClass* Z_Construct_UClass_UPlatformMediaSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMediaSource,
				(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "PlatformMediaSource.h" },
				{ "ModuleRelativePath", "Public/PlatformMediaSource.h" },
				{ "ToolTip", "A media source that selects other media sources based on target platform.\n\nUse this asset to override media sources on a per-platform basis." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaSource_MetaData[] = {
				{ "ModuleRelativePath", "Public/PlatformMediaSource.h" },
				{ "ToolTip", "Default media source.\n\nThis media source will be used if no source was specified for a target platform." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaSource = { UE4CodeGen_Private::EPropertyClass::Object, "MediaSource", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UPlatformMediaSource, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(NewProp_MediaSource_MetaData, ARRAY_COUNT(NewProp_MediaSource_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformMediaSources_MetaData[] = {
				{ "Category", "Sources" },
				{ "DisplayName", "Media Sources" },
				{ "ModuleRelativePath", "Public/PlatformMediaSource.h" },
				{ "ToolTip", "Media sources per platform." },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_PlatformMediaSources = { UE4CodeGen_Private::EPropertyClass::Map, "PlatformMediaSources", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(UPlatformMediaSource, PlatformMediaSources), METADATA_PARAMS(NewProp_PlatformMediaSources_MetaData, ARRAY_COUNT(NewProp_PlatformMediaSources_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformMediaSources_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "PlatformMediaSources_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlatformMediaSources_ValueProp = { UE4CodeGen_Private::EPropertyClass::Object, "PlatformMediaSources", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000001, 1, nullptr, 1, Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MediaSource,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlatformMediaSources,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlatformMediaSources_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlatformMediaSources_ValueProp,
#endif // WITH_EDITORONLY_DATA
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPlatformMediaSource>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPlatformMediaSource::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UPlatformMediaSource, 383861955);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlatformMediaSource(Z_Construct_UClass_UPlatformMediaSource, &UPlatformMediaSource::StaticClass, TEXT("/Script/MediaAssets"), TEXT("UPlatformMediaSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformMediaSource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
