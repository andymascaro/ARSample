// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Tracks/MovieSceneAudioTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAudioTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneAudioTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneAudioTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
// End Cross Module References
	void UMovieSceneAudioTrack::StaticRegisterNativesUMovieSceneAudioTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneAudioTrack_NoRegister()
	{
		return UMovieSceneAudioTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneAudioTrack()
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
				{ "IncludePath", "Tracks/MovieSceneAudioTrack.h" },
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneAudioTrack.h" },
				{ "ToolTip", "Handles manipulation of audio." },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowHeight_MetaData[] = {
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneAudioTrack.h" },
				{ "ToolTip", "The height for each row of this track" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RowHeight = { UE4CodeGen_Private::EPropertyClass::Int, "RowHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneAudioTrack, RowHeight), METADATA_PARAMS(NewProp_RowHeight_MetaData, ARRAY_COUNT(NewProp_RowHeight_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioSections_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneAudioTrack.h" },
				{ "ToolTip", "List of all master audio sections" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AudioSections = { UE4CodeGen_Private::EPropertyClass::Array, "AudioSections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040008000000008, 1, nullptr, STRUCT_OFFSET(UMovieSceneAudioTrack, AudioSections), METADATA_PARAMS(NewProp_AudioSections_MetaData, ARRAY_COUNT(NewProp_AudioSections_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioSections_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AudioSections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RowHeight,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AudioSections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AudioSections_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneAudioTrack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneAudioTrack::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UMovieSceneAudioTrack, 3343383199);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneAudioTrack(Z_Construct_UClass_UMovieSceneAudioTrack, &UMovieSceneAudioTrack::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneAudioTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAudioTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
