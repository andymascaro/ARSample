// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Tracks/MovieSceneParticleTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneParticleTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParticleTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParticleTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
// End Cross Module References
	void UMovieSceneParticleTrack::StaticRegisterNativesUMovieSceneParticleTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneParticleTrack_NoRegister()
	{
		return UMovieSceneParticleTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneParticleTrack()
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
				{ "IncludePath", "Tracks/MovieSceneParticleTrack.h" },
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneParticleTrack.h" },
				{ "ToolTip", "Handles triggering of particle emitters" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSections_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneParticleTrack.h" },
				{ "ToolTip", "List of all particle sections." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParticleSections = { UE4CodeGen_Private::EPropertyClass::Array, "ParticleSections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040008000000008, 1, nullptr, STRUCT_OFFSET(UMovieSceneParticleTrack, ParticleSections), METADATA_PARAMS(NewProp_ParticleSections_MetaData, ARRAY_COUNT(NewProp_ParticleSections_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSections_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ParticleSections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParticleSections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParticleSections_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneParticleTrack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneParticleTrack::StaticClass,
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
	IMPLEMENT_CLASS(UMovieSceneParticleTrack, 3396179155);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneParticleTrack(Z_Construct_UClass_UMovieSceneParticleTrack, &UMovieSceneParticleTrack::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneParticleTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneParticleTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
