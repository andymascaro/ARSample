// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Sections/MovieSceneSubSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSubSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSubSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSubSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSectionParameters();
// End Cross Module References
	void UMovieSceneSubSection::StaticRegisterNativesUMovieSceneSubSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneSubSection_NoRegister()
	{
		return UMovieSceneSubSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneSubSection()
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
				{ "IncludePath", "Sections/MovieSceneSubSection.h" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
				{ "ToolTip", "Implements a section in sub-sequence tracks." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPathToRecordTo_MetaData[] = {
				{ "Category", "Sequence Recording" },
				{ "ContentDir", "" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
				{ "ToolTip", "Target path of sequence to record to" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetPathToRecordTo = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetPathToRecordTo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneSubSection, TargetPathToRecordTo), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(NewProp_TargetPathToRecordTo_MetaData, ARRAY_COUNT(NewProp_TargetPathToRecordTo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSequenceName_MetaData[] = {
				{ "Category", "Sequence Recording" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
				{ "ToolTip", "Target name of sequence to try to record to (will record automatically to another if this already exists)" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetSequenceName = { UE4CodeGen_Private::EPropertyClass::Str, "TargetSequenceName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneSubSection, TargetSequenceName), METADATA_PARAMS(NewProp_TargetSequenceName_MetaData, ARRAY_COUNT(NewProp_TargetSequenceName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorToRecord_MetaData[] = {
				{ "Category", "Sequence Recording" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
				{ "ToolTip", "Target actor to record" },
			};
#endif
			static const UE4CodeGen_Private::FLazyObjectPropertyParams NewProp_ActorToRecord = { UE4CodeGen_Private::EPropertyClass::LazyObject, "ActorToRecord", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneSubSection, ActorToRecord), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_ActorToRecord_MetaData, ARRAY_COUNT(NewProp_ActorToRecord_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubSequence_MetaData[] = {
				{ "Category", "Sequence" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
				{ "ToolTip", "Movie scene being played by this section.\n\n@todo Sequencer: Should this be lazy loaded?" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubSequence = { UE4CodeGen_Private::EPropertyClass::Object, "SubSequence", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneSubSection, SubSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(NewProp_SubSequence_MetaData, ARRAY_COUNT(NewProp_SubSequence_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrerollTime_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PrerollTime = { UE4CodeGen_Private::EPropertyClass::Float, "PrerollTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSubSection, PrerollTime_DEPRECATED), METADATA_PARAMS(NewProp_PrerollTime_MetaData, ARRAY_COUNT(NewProp_PrerollTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeScale_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale = { UE4CodeGen_Private::EPropertyClass::Float, "TimeScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSubSection, TimeScale_DEPRECATED), METADATA_PARAMS(NewProp_TimeScale_MetaData, ARRAY_COUNT(NewProp_TimeScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartOffset = { UE4CodeGen_Private::EPropertyClass::Float, "StartOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSubSection, StartOffset_DEPRECATED), METADATA_PARAMS(NewProp_StartOffset_MetaData, ARRAY_COUNT(NewProp_StartOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
				{ "ShowOnlyInnerProperties", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parameters = { UE4CodeGen_Private::EPropertyClass::Struct, "Parameters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneSubSection, Parameters), Z_Construct_UScriptStruct_FMovieSceneSectionParameters, METADATA_PARAMS(NewProp_Parameters_MetaData, ARRAY_COUNT(NewProp_Parameters_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetPathToRecordTo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetSequenceName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorToRecord,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubSequence,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrerollTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Parameters,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneSubSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneSubSection::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00300080u,
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
	IMPLEMENT_CLASS(UMovieSceneSubSection, 2568727747);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneSubSection(Z_Construct_UClass_UMovieSceneSubSection, &UMovieSceneSubSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneSubSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSubSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
