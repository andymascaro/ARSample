// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Tracks/MovieSceneColorTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneColorTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneColorTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneColorTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneColorTrack::StaticRegisterNativesUMovieSceneColorTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneColorTrack_NoRegister()
	{
		return UMovieSceneColorTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneColorTrack()
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
				{ "IncludePath", "Tracks/MovieSceneColorTrack.h" },
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneColorTrack.h" },
				{ "ToolTip", "Handles manipulation of float properties in a movie scene" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSlateColor_MetaData[] = {
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneColorTrack.h" },
			};
#endif
			auto NewProp_bIsSlateColor_SetBit = [](void* Obj){ ((UMovieSceneColorTrack*)Obj)->bIsSlateColor_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSlateColor = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsSlateColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMovieSceneColorTrack), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsSlateColor_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsSlateColor_MetaData, ARRAY_COUNT(NewProp_bIsSlateColor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsSlateColor,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneColorTrack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneColorTrack::StaticClass,
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
	IMPLEMENT_CLASS(UMovieSceneColorTrack, 1585746403);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneColorTrack(Z_Construct_UClass_UMovieSceneColorTrack, &UMovieSceneColorTrack::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneColorTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneColorTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
