// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/StreamMediaSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreamMediaSource() {}
// Cross Module References
	MEDIAASSETS_API UClass* Z_Construct_UClass_UStreamMediaSource_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UStreamMediaSource();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UBaseMediaSource();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
// End Cross Module References
	void UStreamMediaSource::StaticRegisterNativesUStreamMediaSource()
	{
	}
	UClass* Z_Construct_UClass_UStreamMediaSource_NoRegister()
	{
		return UStreamMediaSource::StaticClass();
	}
	UClass* Z_Construct_UClass_UStreamMediaSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBaseMediaSource,
				(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "StreamMediaSource.h" },
				{ "ModuleRelativePath", "Public/StreamMediaSource.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamUrl_MetaData[] = {
				{ "Category", "Stream" },
				{ "ModuleRelativePath", "Public/StreamMediaSource.h" },
				{ "ToolTip", "The URL to the media stream to be played." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_StreamUrl = { UE4CodeGen_Private::EPropertyClass::Str, "StreamUrl", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000005, 1, nullptr, STRUCT_OFFSET(UStreamMediaSource, StreamUrl), METADATA_PARAMS(NewProp_StreamUrl_MetaData, ARRAY_COUNT(NewProp_StreamUrl_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StreamUrl,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UStreamMediaSource>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UStreamMediaSource::StaticClass,
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
	IMPLEMENT_CLASS(UStreamMediaSource, 25681902);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStreamMediaSource(Z_Construct_UClass_UStreamMediaSource, &UStreamMediaSource::StaticClass, TEXT("/Script/MediaAssets"), TEXT("UStreamMediaSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreamMediaSource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
