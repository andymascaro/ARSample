// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/Tests/MovieSceneSegmentCompilerTests.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSegmentCompilerTests() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSegmentCompilerTestTrack_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSegmentCompilerTestTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSegmentCompilerTestSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSegmentCompilerTestSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
// End Cross Module References
	void UMovieSceneSegmentCompilerTestTrack::StaticRegisterNativesUMovieSceneSegmentCompilerTestTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneSegmentCompilerTestTrack_NoRegister()
	{
		return UMovieSceneSegmentCompilerTestTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneSegmentCompilerTestTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneTrack,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Tests/MovieSceneSegmentCompilerTests.h" },
				{ "ModuleRelativePath", "Private/Tests/MovieSceneSegmentCompilerTests.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionArray_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Private/Tests/MovieSceneSegmentCompilerTests.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SectionArray = { UE4CodeGen_Private::EPropertyClass::Array, "SectionArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000008, 1, nullptr, STRUCT_OFFSET(UMovieSceneSegmentCompilerTestTrack, SectionArray), METADATA_PARAMS(NewProp_SectionArray_MetaData, ARRAY_COUNT(NewProp_SectionArray_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SectionArray_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SectionArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHighPassFilter_MetaData[] = {
				{ "ModuleRelativePath", "Private/Tests/MovieSceneSegmentCompilerTests.h" },
			};
#endif
			auto NewProp_bHighPassFilter_SetBit = [](void* Obj){ ((UMovieSceneSegmentCompilerTestTrack*)Obj)->bHighPassFilter = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHighPassFilter = { UE4CodeGen_Private::EPropertyClass::Bool, "bHighPassFilter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMovieSceneSegmentCompilerTestTrack), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHighPassFilter_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHighPassFilter_MetaData, ARRAY_COUNT(NewProp_bHighPassFilter_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionArray_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHighPassFilter,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneSegmentCompilerTestTrack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneSegmentCompilerTestTrack::StaticClass,
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
	IMPLEMENT_CLASS(UMovieSceneSegmentCompilerTestTrack, 2325681439);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneSegmentCompilerTestTrack(Z_Construct_UClass_UMovieSceneSegmentCompilerTestTrack, &UMovieSceneSegmentCompilerTestTrack::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneSegmentCompilerTestTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSegmentCompilerTestTrack);
	void UMovieSceneSegmentCompilerTestSection::StaticRegisterNativesUMovieSceneSegmentCompilerTestSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneSegmentCompilerTestSection_NoRegister()
	{
		return UMovieSceneSegmentCompilerTestSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneSegmentCompilerTestSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Tests/MovieSceneSegmentCompilerTests.h" },
				{ "ModuleRelativePath", "Private/Tests/MovieSceneSegmentCompilerTests.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneSegmentCompilerTestSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneSegmentCompilerTestSection::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00280080u,
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
	IMPLEMENT_CLASS(UMovieSceneSegmentCompilerTestSection, 314330141);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneSegmentCompilerTestSection(Z_Construct_UClass_UMovieSceneSegmentCompilerTestSection, &UMovieSceneSegmentCompilerTestSection::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneSegmentCompilerTestSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSegmentCompilerTestSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
