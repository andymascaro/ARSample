// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MediaSoundComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaSoundComponent() {}
// Cross Module References
	MEDIAASSETS_API UEnum* Z_Construct_UEnum_MediaAssets_EMediaSoundChannels();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSoundComponent_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSoundComponent();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
// End Cross Module References
	static UEnum* EMediaSoundChannels_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaSoundChannels, Z_Construct_UPackage__Script_MediaAssets(), TEXT("EMediaSoundChannels"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMediaSoundChannels(EMediaSoundChannels_StaticEnum, TEXT("/Script/MediaAssets"), TEXT("EMediaSoundChannels"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MediaAssets_EMediaSoundChannels_CRC() { return 1514927311U; }
	UEnum* Z_Construct_UEnum_MediaAssets_EMediaSoundChannels()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MediaAssets();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMediaSoundChannels"), 0, Get_Z_Construct_UEnum_MediaAssets_EMediaSoundChannels_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMediaSoundChannels::Mono", (int64)EMediaSoundChannels::Mono },
				{ "EMediaSoundChannels::Stereo", (int64)EMediaSoundChannels::Stereo },
				{ "EMediaSoundChannels::Surround", (int64)EMediaSoundChannels::Surround },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
				{ "Mono.ToolTip", "Mono (1 channel)." },
				{ "Stereo.ToolTip", "Stereo (2 channels)." },
				{ "Surround.ToolTip", "Surround sound (7.1 channels; for UI)." },
				{ "ToolTip", "Available media sound channel types." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MediaAssets,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMediaSoundChannels",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMediaSoundChannels",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMediaSoundComponent::StaticRegisterNativesUMediaSoundComponent()
	{
	}
	UClass* Z_Construct_UClass_UMediaSoundComponent_NoRegister()
	{
		return UMediaSoundComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UMediaSoundComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USynthComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Media" },
				{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
				{ "IncludePath", "MediaSoundComponent.h" },
				{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "Implements a sound component for playing a media player's audio output." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[] = {
				{ "Category", "Media" },
				{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
				{ "ToolTip", "The media player asset associated with this component." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "MediaPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMediaSoundComponent, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(NewProp_MediaPlayer_MetaData, ARRAY_COUNT(NewProp_MediaPlayer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Channels_MetaData[] = {
				{ "Category", "UMediaSoundComponent" },
				{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
				{ "ToolTip", "Media sound channel type." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Channels = { UE4CodeGen_Private::EPropertyClass::Enum, "Channels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMediaSoundComponent, Channels), Z_Construct_UEnum_MediaAssets_EMediaSoundChannels, METADATA_PARAMS(NewProp_Channels_MetaData, ARRAY_COUNT(NewProp_Channels_MetaData)) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Channels_Underlying = { UE4CodeGen_Private::EPropertyClass::Int, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MediaPlayer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Channels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Channels_Underlying,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMediaSoundComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMediaSoundComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
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
	IMPLEMENT_CLASS(UMediaSoundComponent, 3338165295);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMediaSoundComponent(Z_Construct_UClass_UMediaSoundComponent, &UMediaSoundComponent::StaticClass, TEXT("/Script/MediaAssets"), TEXT("UMediaSoundComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaSoundComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
