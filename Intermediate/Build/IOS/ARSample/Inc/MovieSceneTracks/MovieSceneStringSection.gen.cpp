// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Sections/MovieSceneStringSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneStringSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneStringSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneStringSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStringCurve();
// End Cross Module References
	void UMovieSceneStringSection::StaticRegisterNativesUMovieSceneStringSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneStringSection_NoRegister()
	{
		return UMovieSceneStringSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneStringSection()
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
				{ "IncludePath", "Sections/MovieSceneStringSection.h" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneStringSection.h" },
				{ "ToolTip", "A single string section" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringCurve_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneStringSection.h" },
				{ "ToolTip", "Curve data" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StringCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "StringCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneStringSection, StringCurve), Z_Construct_UScriptStruct_FStringCurve, METADATA_PARAMS(NewProp_StringCurve_MetaData, ARRAY_COUNT(NewProp_StringCurve_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StringCurve,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneStringSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneStringSection::StaticClass,
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
	IMPLEMENT_CLASS(UMovieSceneStringSection, 1482995784);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneStringSection(Z_Construct_UClass_UMovieSceneStringSection, &UMovieSceneStringSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneStringSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneStringSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
