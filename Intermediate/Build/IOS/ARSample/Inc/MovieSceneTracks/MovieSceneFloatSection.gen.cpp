// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Sections/MovieSceneFloatSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFloatSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFloatSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFloatSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
// End Cross Module References
	void UMovieSceneFloatSection::StaticRegisterNativesUMovieSceneFloatSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneFloatSection_NoRegister()
	{
		return UMovieSceneFloatSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneFloatSection()
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
				{ "IncludePath", "Sections/MovieSceneFloatSection.h" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneFloatSection.h" },
				{ "ToolTip", "A single floating point section" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatCurve_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneFloatSection.h" },
				{ "ToolTip", "Curve data" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "FloatCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneFloatSection, FloatCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_FloatCurve_MetaData, ARRAY_COUNT(NewProp_FloatCurve_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloatCurve,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneFloatSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneFloatSection::StaticClass,
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
	IMPLEMENT_CLASS(UMovieSceneFloatSection, 1392356376);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneFloatSection(Z_Construct_UClass_UMovieSceneFloatSection, &UMovieSceneFloatSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneFloatSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneFloatSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
