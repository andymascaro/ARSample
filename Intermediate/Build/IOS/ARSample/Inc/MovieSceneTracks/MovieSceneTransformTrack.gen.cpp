// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Tracks/MovieSceneTransformTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTransformTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTransformTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTransformTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneTransformTrack::StaticRegisterNativesUMovieSceneTransformTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneTransformTrack_NoRegister()
	{
		return UMovieSceneTransformTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneTransformTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Tracks/MovieSceneTransformTrack.h" },
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneTransformTrack.h" },
				{ "ToolTip", "Handles manipulation of 3D transform properties in a movie scene" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneTransformTrack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneTransformTrack::StaticClass,
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
	IMPLEMENT_CLASS(UMovieSceneTransformTrack, 2131126222);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneTransformTrack(Z_Construct_UClass_UMovieSceneTransformTrack, &UMovieSceneTransformTrack::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneTransformTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTransformTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
