// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Sections/MovieSceneByteSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneByteSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneByteSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneByteSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIntegralCurve();
// End Cross Module References
	void UMovieSceneByteSection::StaticRegisterNativesUMovieSceneByteSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneByteSection_NoRegister()
	{
		return UMovieSceneByteSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneByteSection()
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
				{ "IncludePath", "Sections/MovieSceneByteSection.h" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneByteSection.h" },
				{ "ToolTip", "A single byte section." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ByteCurve_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneByteSection.h" },
				{ "ToolTip", "Ordered curve data // @todo Sequencer This could be optimized by packing the bytes separately\n// but that may not be worth the effort" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ByteCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "ByteCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneByteSection, ByteCurve), Z_Construct_UScriptStruct_FIntegralCurve, METADATA_PARAMS(NewProp_ByteCurve_MetaData, ARRAY_COUNT(NewProp_ByteCurve_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ByteCurve,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneByteSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneByteSection::StaticClass,
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
	IMPLEMENT_CLASS(UMovieSceneByteSection, 1934190522);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneByteSection(Z_Construct_UClass_UMovieSceneByteSection, &UMovieSceneByteSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneByteSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneByteSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
