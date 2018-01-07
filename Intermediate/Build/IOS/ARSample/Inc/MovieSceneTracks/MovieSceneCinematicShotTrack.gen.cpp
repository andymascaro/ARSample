// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Tracks/MovieSceneCinematicShotTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCinematicShotTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCinematicShotTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCinematicShotTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSubTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneCinematicShotTrack::StaticRegisterNativesUMovieSceneCinematicShotTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneCinematicShotTrack_NoRegister()
	{
		return UMovieSceneCinematicShotTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneCinematicShotTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneSubTrack,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Tracks/MovieSceneCinematicShotTrack.h" },
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneCinematicShotTrack.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "A track that holds consecutive sub sequences." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneCinematicShotTrack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneCinematicShotTrack::StaticClass,
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
	IMPLEMENT_CLASS(UMovieSceneCinematicShotTrack, 740124851);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneCinematicShotTrack(Z_Construct_UClass_UMovieSceneCinematicShotTrack, &UMovieSceneCinematicShotTrack::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneCinematicShotTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCinematicShotTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
