// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Sections/MovieSceneActorReferenceSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneActorReferenceSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneActorReferenceSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneActorReferenceSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIntegralCurve();
// End Cross Module References
	void UMovieSceneActorReferenceSection::StaticRegisterNativesUMovieSceneActorReferenceSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneActorReferenceSection_NoRegister()
	{
		return UMovieSceneActorReferenceSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneActorReferenceSection()
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
				{ "IncludePath", "Sections/MovieSceneActorReferenceSection.h" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
				{ "ToolTip", "A single actor reference point section" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorGuidStrings_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorGuidStrings = { UE4CodeGen_Private::EPropertyClass::Array, "ActorGuidStrings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneActorReferenceSection, ActorGuidStrings), METADATA_PARAMS(NewProp_ActorGuidStrings_MetaData, ARRAY_COUNT(NewProp_ActorGuidStrings_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActorGuidStrings_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "ActorGuidStrings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorGuidIndexCurve_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
				{ "ToolTip", "Curve data" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorGuidIndexCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "ActorGuidIndexCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneActorReferenceSection, ActorGuidIndexCurve), Z_Construct_UScriptStruct_FIntegralCurve, METADATA_PARAMS(NewProp_ActorGuidIndexCurve_MetaData, ARRAY_COUNT(NewProp_ActorGuidIndexCurve_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorGuidStrings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorGuidStrings_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorGuidIndexCurve,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneActorReferenceSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneActorReferenceSection::StaticClass,
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
	IMPLEMENT_CLASS(UMovieSceneActorReferenceSection, 1265170852);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneActorReferenceSection(Z_Construct_UClass_UMovieSceneActorReferenceSection, &UMovieSceneActorReferenceSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneActorReferenceSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneActorReferenceSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
