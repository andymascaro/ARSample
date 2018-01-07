// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Tracks/MovieSceneLevelVisibilityTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLevelVisibilityTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneLevelVisibilityTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneLevelVisibilityTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
// End Cross Module References
	void UMovieSceneLevelVisibilityTrack::StaticRegisterNativesUMovieSceneLevelVisibilityTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneLevelVisibilityTrack_NoRegister()
	{
		return UMovieSceneLevelVisibilityTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneLevelVisibilityTrack()
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
				{ "IncludePath", "Tracks/MovieSceneLevelVisibilityTrack.h" },
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneLevelVisibilityTrack.h" },
				{ "ToolTip", "A track for controlling the visibility of streamed levels." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneLevelVisibilityTrack.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sections = { UE4CodeGen_Private::EPropertyClass::Array, "Sections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040008000000008, 1, nullptr, STRUCT_OFFSET(UMovieSceneLevelVisibilityTrack, Sections), METADATA_PARAMS(NewProp_Sections_MetaData, ARRAY_COUNT(NewProp_Sections_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sections_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Sections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sections_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneLevelVisibilityTrack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneLevelVisibilityTrack::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A80080u,
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
	IMPLEMENT_CLASS(UMovieSceneLevelVisibilityTrack, 548802195);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneLevelVisibilityTrack(Z_Construct_UClass_UMovieSceneLevelVisibilityTrack, &UMovieSceneLevelVisibilityTrack::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneLevelVisibilityTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneLevelVisibilityTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
