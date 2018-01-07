// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Tracks/MovieScene3DPathTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DPathTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DPathTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DPathTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DConstraintTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieScene3DPathTrack::StaticRegisterNativesUMovieScene3DPathTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieScene3DPathTrack_NoRegister()
	{
		return UMovieScene3DPathTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieScene3DPathTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieScene3DConstraintTrack,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Tracks/MovieScene3DPathTrack.h" },
				{ "ModuleRelativePath", "Public/Tracks/MovieScene3DPathTrack.h" },
				{ "ToolTip", "Handles manipulation of path tracks in a movie scene" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieScene3DPathTrack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieScene3DPathTrack::StaticClass,
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
	IMPLEMENT_CLASS(UMovieScene3DPathTrack, 1707063624);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScene3DPathTrack(Z_Construct_UClass_UMovieScene3DPathTrack, &UMovieScene3DPathTrack::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieScene3DPathTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DPathTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
