// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Animation/MovieScene2DTransformTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene2DTransformTrack() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UMovieScene2DTransformTrack_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UMovieScene2DTransformTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UMovieScene2DTransformTrack::StaticRegisterNativesUMovieScene2DTransformTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieScene2DTransformTrack_NoRegister()
	{
		return UMovieScene2DTransformTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieScene2DTransformTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Animation/MovieScene2DTransformTrack.h" },
				{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformTrack.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "Handles manipulation of 2D transforms in a movie scene" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieScene2DTransformTrack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieScene2DTransformTrack::StaticClass,
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
	IMPLEMENT_CLASS(UMovieScene2DTransformTrack, 3277247813);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScene2DTransformTrack(Z_Construct_UClass_UMovieScene2DTransformTrack, &UMovieScene2DTransformTrack::StaticClass, TEXT("/Script/UMG"), TEXT("UMovieScene2DTransformTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene2DTransformTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
