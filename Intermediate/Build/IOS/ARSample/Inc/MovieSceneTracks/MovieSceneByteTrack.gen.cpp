// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Tracks/MovieSceneByteTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneByteTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneByteTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneByteTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
// End Cross Module References
	void UMovieSceneByteTrack::StaticRegisterNativesUMovieSceneByteTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneByteTrack_NoRegister()
	{
		return UMovieSceneByteTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneByteTrack()
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
				{ "IncludePath", "Tracks/MovieSceneByteTrack.h" },
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneByteTrack.h" },
				{ "ToolTip", "Handles manipulation of byte properties in a movie scene" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[] = {
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneByteTrack.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enum = { UE4CodeGen_Private::EPropertyClass::Object, "Enum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneByteTrack, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(NewProp_Enum_MetaData, ARRAY_COUNT(NewProp_Enum_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Enum,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneByteTrack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneByteTrack::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UMovieSceneByteTrack, 3601860549);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneByteTrack(Z_Construct_UClass_UMovieSceneByteTrack, &UMovieSceneByteTrack::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneByteTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneByteTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
