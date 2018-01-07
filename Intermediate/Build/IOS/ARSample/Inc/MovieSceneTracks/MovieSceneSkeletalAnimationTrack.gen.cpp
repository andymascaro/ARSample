// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Tracks/MovieSceneSkeletalAnimationTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSkeletalAnimationTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
// End Cross Module References
	void UMovieSceneSkeletalAnimationTrack::StaticRegisterNativesUMovieSceneSkeletalAnimationTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_NoRegister()
	{
		return UMovieSceneSkeletalAnimationTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack()
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
				{ "IncludePath", "Tracks/MovieSceneSkeletalAnimationTrack.h" },
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneSkeletalAnimationTrack.h" },
				{ "ToolTip", "Handles animation of skeletal mesh actors" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLegacySectionIndexBlend_MetaData[] = {
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneSkeletalAnimationTrack.h" },
			};
#endif
			auto NewProp_bUseLegacySectionIndexBlend_SetBit = [](void* Obj){ ((UMovieSceneSkeletalAnimationTrack*)Obj)->bUseLegacySectionIndexBlend = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLegacySectionIndexBlend = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseLegacySectionIndexBlend", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMovieSceneSkeletalAnimationTrack), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseLegacySectionIndexBlend_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseLegacySectionIndexBlend_MetaData, ARRAY_COUNT(NewProp_bUseLegacySectionIndexBlend_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationSections_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneSkeletalAnimationTrack.h" },
				{ "ToolTip", "List of all animation sections" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationSections = { UE4CodeGen_Private::EPropertyClass::Array, "AnimationSections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040008000000008, 1, nullptr, STRUCT_OFFSET(UMovieSceneSkeletalAnimationTrack, AnimationSections), METADATA_PARAMS(NewProp_AnimationSections_MetaData, ARRAY_COUNT(NewProp_AnimationSections_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationSections_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AnimationSections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseLegacySectionIndexBlend,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimationSections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimationSections_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneSkeletalAnimationTrack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneSkeletalAnimationTrack::StaticClass,
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
	IMPLEMENT_CLASS(UMovieSceneSkeletalAnimationTrack, 395771003);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneSkeletalAnimationTrack(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack, &UMovieSceneSkeletalAnimationTrack::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneSkeletalAnimationTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSkeletalAnimationTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
