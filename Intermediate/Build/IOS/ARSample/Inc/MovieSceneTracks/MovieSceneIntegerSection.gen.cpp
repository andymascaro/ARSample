// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Sections/MovieSceneIntegerSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneIntegerSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneIntegerSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneIntegerSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIntegralCurve();
// End Cross Module References
	void UMovieSceneIntegerSection::StaticRegisterNativesUMovieSceneIntegerSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneIntegerSection_NoRegister()
	{
		return UMovieSceneIntegerSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneIntegerSection()
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
				{ "IncludePath", "Sections/MovieSceneIntegerSection.h" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneIntegerSection.h" },
				{ "ToolTip", "A single integer section." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntegerCurve_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneIntegerSection.h" },
				{ "ToolTip", "Ordered curve data" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_IntegerCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "IntegerCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneIntegerSection, IntegerCurve), Z_Construct_UScriptStruct_FIntegralCurve, METADATA_PARAMS(NewProp_IntegerCurve_MetaData, ARRAY_COUNT(NewProp_IntegerCurve_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IntegerCurve,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneIntegerSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneIntegerSection::StaticClass,
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
	IMPLEMENT_CLASS(UMovieSceneIntegerSection, 1312198125);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneIntegerSection(Z_Construct_UClass_UMovieSceneIntegerSection, &UMovieSceneIntegerSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneIntegerSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneIntegerSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
