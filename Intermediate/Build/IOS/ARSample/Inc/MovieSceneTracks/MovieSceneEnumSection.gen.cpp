// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Sections/MovieSceneEnumSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEnumSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEnumSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEnumSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIntegralCurve();
// End Cross Module References
	void UMovieSceneEnumSection::StaticRegisterNativesUMovieSceneEnumSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneEnumSection_NoRegister()
	{
		return UMovieSceneEnumSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneEnumSection()
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
				{ "IncludePath", "Sections/MovieSceneEnumSection.h" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneEnumSection.h" },
				{ "ToolTip", "A single enum section." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnumCurve_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneEnumSection.h" },
				{ "ToolTip", "Ordered curve data // @todo Sequencer This could be optimized by packing the enums separately\n// but that may not be worth the effort" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnumCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "EnumCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneEnumSection, EnumCurve), Z_Construct_UScriptStruct_FIntegralCurve, METADATA_PARAMS(NewProp_EnumCurve_MetaData, ARRAY_COUNT(NewProp_EnumCurve_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnumCurve,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneEnumSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneEnumSection::StaticClass,
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
	IMPLEMENT_CLASS(UMovieSceneEnumSection, 3366207010);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneEnumSection(Z_Construct_UClass_UMovieSceneEnumSection, &UMovieSceneEnumSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneEnumSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEnumSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
