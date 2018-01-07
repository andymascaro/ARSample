// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Tracks/MovieSceneCameraAnimTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraAnimTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraAnimTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraAnimTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
// End Cross Module References
	void UMovieSceneCameraAnimTrack::StaticRegisterNativesUMovieSceneCameraAnimTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneCameraAnimTrack_NoRegister()
	{
		return UMovieSceneCameraAnimTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneCameraAnimTrack()
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
				{ "IncludePath", "Tracks/MovieSceneCameraAnimTrack.h" },
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneCameraAnimTrack.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraAnimSections_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneCameraAnimTrack.h" },
				{ "ToolTip", "List of all sections" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CameraAnimSections = { UE4CodeGen_Private::EPropertyClass::Array, "CameraAnimSections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040008000000008, 1, nullptr, STRUCT_OFFSET(UMovieSceneCameraAnimTrack, CameraAnimSections), METADATA_PARAMS(NewProp_CameraAnimSections_MetaData, ARRAY_COUNT(NewProp_CameraAnimSections_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraAnimSections_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "CameraAnimSections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraAnimSections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraAnimSections_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneCameraAnimTrack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneCameraAnimTrack::StaticClass,
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
	IMPLEMENT_CLASS(UMovieSceneCameraAnimTrack, 4148045795);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneCameraAnimTrack(Z_Construct_UClass_UMovieSceneCameraAnimTrack, &UMovieSceneCameraAnimTrack::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneCameraAnimTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCameraAnimTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
