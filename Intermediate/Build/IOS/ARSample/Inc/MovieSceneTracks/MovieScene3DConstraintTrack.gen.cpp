// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Tracks/MovieScene3DConstraintTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DConstraintTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DConstraintTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DConstraintTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
// End Cross Module References
	void UMovieScene3DConstraintTrack::StaticRegisterNativesUMovieScene3DConstraintTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieScene3DConstraintTrack_NoRegister()
	{
		return UMovieScene3DConstraintTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieScene3DConstraintTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneTrack,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Tracks/MovieScene3DConstraintTrack.h" },
				{ "ModuleRelativePath", "Public/Tracks/MovieScene3DConstraintTrack.h" },
				{ "ToolTip", "Base class for constraint tracks (tracks that are dependent upon other objects)." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintSections_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Tracks/MovieScene3DConstraintTrack.h" },
				{ "ToolTip", "List of all constraint sections." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConstraintSections = { UE4CodeGen_Private::EPropertyClass::Array, "ConstraintSections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020088000000008, 1, nullptr, STRUCT_OFFSET(UMovieScene3DConstraintTrack, ConstraintSections), METADATA_PARAMS(NewProp_ConstraintSections_MetaData, ARRAY_COUNT(NewProp_ConstraintSections_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConstraintSections_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ConstraintSections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstraintSections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstraintSections_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieScene3DConstraintTrack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieScene3DConstraintTrack::StaticClass,
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
	IMPLEMENT_CLASS(UMovieScene3DConstraintTrack, 2857861928);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScene3DConstraintTrack(Z_Construct_UClass_UMovieScene3DConstraintTrack, &UMovieScene3DConstraintTrack::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieScene3DConstraintTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DConstraintTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
