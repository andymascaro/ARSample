// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Tracks/MovieSceneSlomoTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSlomoTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSlomoTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSlomoTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFloatTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneSlomoTrack::StaticRegisterNativesUMovieSceneSlomoTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneSlomoTrack_NoRegister()
	{
		return UMovieSceneSlomoTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneSlomoTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneFloatTrack,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Tracks/MovieSceneSlomoTrack.h" },
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneSlomoTrack.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "Implements a movie scene track that controls a movie scene's playback speed." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneSlomoTrack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneSlomoTrack::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A80080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneSlomoTrack, 3806129481);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneSlomoTrack(Z_Construct_UClass_UMovieSceneSlomoTrack, &UMovieSceneSlomoTrack::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneSlomoTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSlomoTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
