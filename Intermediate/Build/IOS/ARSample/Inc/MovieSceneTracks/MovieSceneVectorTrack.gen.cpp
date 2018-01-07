// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Tracks/MovieSceneVectorTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneVectorTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneVectorTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneVectorTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneVectorTrack::StaticRegisterNativesUMovieSceneVectorTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneVectorTrack_NoRegister()
	{
		return UMovieSceneVectorTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneVectorTrack()
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
				{ "IncludePath", "Tracks/MovieSceneVectorTrack.h" },
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneVectorTrack.h" },
				{ "ToolTip", "Handles manipulation of component transforms in a movie scene" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumChannelsUsed_MetaData[] = {
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneVectorTrack.h" },
				{ "ToolTip", "The number of channels used by the vector (2,3, or 4)" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumChannelsUsed = { UE4CodeGen_Private::EPropertyClass::Int, "NumChannelsUsed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneVectorTrack, NumChannelsUsed), METADATA_PARAMS(NewProp_NumChannelsUsed_MetaData, ARRAY_COUNT(NewProp_NumChannelsUsed_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumChannelsUsed,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneVectorTrack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneVectorTrack::StaticClass,
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
	IMPLEMENT_CLASS(UMovieSceneVectorTrack, 2320080202);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneVectorTrack(Z_Construct_UClass_UMovieSceneVectorTrack, &UMovieSceneVectorTrack::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneVectorTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneVectorTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
