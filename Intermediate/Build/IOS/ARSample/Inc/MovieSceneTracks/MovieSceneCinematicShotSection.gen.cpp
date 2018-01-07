// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Sections/MovieSceneCinematicShotSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCinematicShotSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCinematicShotSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCinematicShotSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSubSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneCinematicShotSection::StaticRegisterNativesUMovieSceneCinematicShotSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneCinematicShotSection_NoRegister()
	{
		return UMovieSceneCinematicShotSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneCinematicShotSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneSubSection,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Sections/MovieSceneCinematicShotSection.h" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCinematicShotSection.h" },
				{ "ToolTip", "Implements a cinematic shot section." },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailReferenceOffset_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCinematicShotSection.h" },
				{ "ToolTip", "The shot's reference frame offset for single thumbnail rendering" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThumbnailReferenceOffset = { UE4CodeGen_Private::EPropertyClass::Float, "ThumbnailReferenceOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneCinematicShotSection, ThumbnailReferenceOffset), METADATA_PARAMS(NewProp_ThumbnailReferenceOffset_MetaData, ARRAY_COUNT(NewProp_ThumbnailReferenceOffset_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCinematicShotSection.h" },
				{ "ToolTip", "The Shot's display name" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName = { UE4CodeGen_Private::EPropertyClass::Text, "DisplayName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneCinematicShotSection, DisplayName), METADATA_PARAMS(NewProp_DisplayName_MetaData, ARRAY_COUNT(NewProp_DisplayName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThumbnailReferenceOffset,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DisplayName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneCinematicShotSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneCinematicShotSection::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00300080u,
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
	IMPLEMENT_CLASS(UMovieSceneCinematicShotSection, 3459933856);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneCinematicShotSection(Z_Construct_UClass_UMovieSceneCinematicShotSection, &UMovieSceneCinematicShotSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneCinematicShotSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCinematicShotSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
