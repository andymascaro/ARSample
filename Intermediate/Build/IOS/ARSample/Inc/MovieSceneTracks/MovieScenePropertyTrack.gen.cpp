// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Tracks/MovieScenePropertyTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePropertyTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
// End Cross Module References
	void UMovieScenePropertyTrack::StaticRegisterNativesUMovieScenePropertyTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister()
	{
		return UMovieScenePropertyTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieScenePropertyTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Tracks/MovieScenePropertyTrack.h" },
				{ "ModuleRelativePath", "Public/Tracks/MovieScenePropertyTrack.h" },
				{ "ToolTip", "Base class for tracks that animate an object property" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Tracks/MovieScenePropertyTrack.h" },
				{ "ToolTip", "All the sections in this list" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sections = { UE4CodeGen_Private::EPropertyClass::Array, "Sections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020088000000008, 1, nullptr, STRUCT_OFFSET(UMovieScenePropertyTrack, Sections), METADATA_PARAMS(NewProp_Sections_MetaData, ARRAY_COUNT(NewProp_Sections_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sections_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Sections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyPath_MetaData[] = {
				{ "ModuleRelativePath", "Public/Tracks/MovieScenePropertyTrack.h" },
				{ "ToolTip", "Path to the property from the source object being changed" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_PropertyPath = { UE4CodeGen_Private::EPropertyClass::Str, "PropertyPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UMovieScenePropertyTrack, PropertyPath), METADATA_PARAMS(NewProp_PropertyPath_MetaData, ARRAY_COUNT(NewProp_PropertyPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
				{ "ModuleRelativePath", "Public/Tracks/MovieScenePropertyTrack.h" },
				{ "ToolTip", "Name of the property being changed" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName = { UE4CodeGen_Private::EPropertyClass::Name, "PropertyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UMovieScenePropertyTrack, PropertyName), METADATA_PARAMS(NewProp_PropertyName_MetaData, ARRAY_COUNT(NewProp_PropertyName_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueTrackName_MetaData[] = {
				{ "ModuleRelativePath", "Public/Tracks/MovieScenePropertyTrack.h" },
				{ "ToolTip", "Unique name for this track to afford multiple tracks on a given object (i.e. for array properties)" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_UniqueTrackName = { UE4CodeGen_Private::EPropertyClass::Name, "UniqueTrackName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UMovieScenePropertyTrack, UniqueTrackName), METADATA_PARAMS(NewProp_UniqueTrackName_MetaData, ARRAY_COUNT(NewProp_UniqueTrackName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sections_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyName,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UniqueTrackName,
#endif // WITH_EDITORONLY_DATA
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieScenePropertyTrack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieScenePropertyTrack::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00081u,
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
	IMPLEMENT_CLASS(UMovieScenePropertyTrack, 3315850013);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScenePropertyTrack(Z_Construct_UClass_UMovieScenePropertyTrack, &UMovieScenePropertyTrack::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieScenePropertyTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePropertyTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
