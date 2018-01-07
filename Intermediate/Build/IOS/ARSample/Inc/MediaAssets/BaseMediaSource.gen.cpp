// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BaseMediaSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseMediaSource() {}
// Cross Module References
	MEDIAASSETS_API UClass* Z_Construct_UClass_UBaseMediaSource_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UBaseMediaSource();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
// End Cross Module References
	void UBaseMediaSource::StaticRegisterNativesUBaseMediaSource()
	{
	}
	UClass* Z_Construct_UClass_UBaseMediaSource_NoRegister()
	{
		return UBaseMediaSource::StaticClass();
	}
	UClass* Z_Construct_UClass_UBaseMediaSource()
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
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "BaseMediaSource.h" },
				{ "ModuleRelativePath", "Public/BaseMediaSource.h" },
				{ "ToolTip", "Base class for concrete media sources." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[] = {
				{ "ModuleRelativePath", "Public/BaseMediaSource.h" },
				{ "ToolTip", "Name of the desired native media player (Empty = find one automatically)." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PlayerName = { UE4CodeGen_Private::EPropertyClass::Name, "PlayerName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UBaseMediaSource, PlayerName), METADATA_PARAMS(NewProp_PlayerName_MetaData, ARRAY_COUNT(NewProp_PlayerName_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformPlayerNames_MetaData[] = {
				{ "Category", "Platforms" },
				{ "DisplayName", "Player Overrides" },
				{ "ModuleRelativePath", "Public/BaseMediaSource.h" },
				{ "ToolTip", "Override native media player plug-ins per platform (Empty = find one automatically)." },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_PlatformPlayerNames = { UE4CodeGen_Private::EPropertyClass::Map, "PlatformPlayerNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002005, 1, nullptr, STRUCT_OFFSET(UBaseMediaSource, PlatformPlayerNames), METADATA_PARAMS(NewProp_PlatformPlayerNames_MetaData, ARRAY_COUNT(NewProp_PlatformPlayerNames_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformPlayerNames_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "PlatformPlayerNames_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PlatformPlayerNames_ValueProp = { UE4CodeGen_Private::EPropertyClass::Name, "PlatformPlayerNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000001, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerName,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlatformPlayerNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlatformPlayerNames_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlatformPlayerNames_ValueProp,
#endif // WITH_EDITORONLY_DATA
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBaseMediaSource>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBaseMediaSource::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100081u,
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
	IMPLEMENT_CLASS(UBaseMediaSource, 2356413299);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseMediaSource(Z_Construct_UClass_UBaseMediaSource, &UBaseMediaSource::StaticClass, TEXT("/Script/MediaAssets"), TEXT("UBaseMediaSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseMediaSource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
