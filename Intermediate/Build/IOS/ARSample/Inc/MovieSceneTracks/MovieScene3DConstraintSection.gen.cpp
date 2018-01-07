// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Sections/MovieScene3DConstraintSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DConstraintSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DConstraintSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DConstraintSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UMovieScene3DConstraintSection::StaticRegisterNativesUMovieScene3DConstraintSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieScene3DConstraintSection_NoRegister()
	{
		return UMovieScene3DConstraintSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieScene3DConstraintSection()
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
				{ "IncludePath", "Sections/MovieScene3DConstraintSection.h" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DConstraintSection.h" },
				{ "ToolTip", "Base class for 3D constraint section" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintId_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DConstraintSection.h" },
				{ "ToolTip", "The possessable guid that this constraint uses" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstraintId = { UE4CodeGen_Private::EPropertyClass::Struct, "ConstraintId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UMovieScene3DConstraintSection, ConstraintId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_ConstraintId_MetaData, ARRAY_COUNT(NewProp_ConstraintId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstraintId,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieScene3DConstraintSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieScene3DConstraintSection::StaticClass,
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
	IMPLEMENT_CLASS(UMovieScene3DConstraintSection, 1000006913);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScene3DConstraintSection(Z_Construct_UClass_UMovieScene3DConstraintSection, &UMovieScene3DConstraintSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieScene3DConstraintSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DConstraintSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
