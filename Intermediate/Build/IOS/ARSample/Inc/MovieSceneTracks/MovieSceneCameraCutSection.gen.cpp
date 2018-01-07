// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Sections/MovieSceneCameraCutSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraCutSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraCutSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraCutSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UMovieSceneCameraCutSection::StaticRegisterNativesUMovieSceneCameraCutSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneCameraCutSection_NoRegister()
	{
		return UMovieSceneCameraCutSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneCameraCutSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Sections/MovieSceneCameraCutSection.h" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraCutSection.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "Movie CameraCuts are sections on the CameraCuts track, that show what the viewer \"sees\"" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailReferenceOffset_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraCutSection.h" },
				{ "ToolTip", "The reference frame offset for single thumbnail rendering" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThumbnailReferenceOffset = { UE4CodeGen_Private::EPropertyClass::Float, "ThumbnailReferenceOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneCameraCutSection, ThumbnailReferenceOffset), METADATA_PARAMS(NewProp_ThumbnailReferenceOffset_MetaData, ARRAY_COUNT(NewProp_ThumbnailReferenceOffset_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraGuid_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraCutSection.h" },
				{ "ToolTip", "The camera possessable or spawnable that this movie CameraCut uses" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "CameraGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneCameraCutSection, CameraGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_CameraGuid_MetaData, ARRAY_COUNT(NewProp_CameraGuid_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThumbnailReferenceOffset,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraGuid,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneCameraCutSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneCameraCutSection::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00280080u,
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
	IMPLEMENT_CLASS(UMovieSceneCameraCutSection, 1297857351);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneCameraCutSection(Z_Construct_UClass_UMovieSceneCameraCutSection, &UMovieSceneCameraCutSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneCameraCutSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCameraCutSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
