// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Animation/MovieSceneMarginSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMarginSection() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UMovieSceneMarginSection_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UMovieSceneMarginSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_UMG();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
// End Cross Module References
	void UMovieSceneMarginSection::StaticRegisterNativesUMovieSceneMarginSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneMarginSection_NoRegister()
	{
		return UMovieSceneMarginSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneMarginSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Animation/MovieSceneMarginSection.h" },
				{ "ModuleRelativePath", "Public/Animation/MovieSceneMarginSection.h" },
				{ "ToolTip", "A section in a Margin track" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BottomCurve_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/MovieSceneMarginSection.h" },
				{ "ToolTip", "Alpha curve data" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BottomCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "BottomCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneMarginSection, BottomCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_BottomCurve_MetaData, ARRAY_COUNT(NewProp_BottomCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightCurve_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/MovieSceneMarginSection.h" },
				{ "ToolTip", "Blue curve data" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "RightCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneMarginSection, RightCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_RightCurve_MetaData, ARRAY_COUNT(NewProp_RightCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftCurve_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/MovieSceneMarginSection.h" },
				{ "ToolTip", "Green curve data" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "LeftCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneMarginSection, LeftCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_LeftCurve_MetaData, ARRAY_COUNT(NewProp_LeftCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopCurve_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/MovieSceneMarginSection.h" },
				{ "ToolTip", "Red curve data" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TopCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "TopCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneMarginSection, TopCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_TopCurve_MetaData, ARRAY_COUNT(NewProp_TopCurve_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BottomCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RightCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeftCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TopCurve,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneMarginSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneMarginSection::StaticClass,
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
	IMPLEMENT_CLASS(UMovieSceneMarginSection, 3944754378);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneMarginSection(Z_Construct_UClass_UMovieSceneMarginSection, &UMovieSceneMarginSection::StaticClass, TEXT("/Script/UMG"), TEXT("UMovieSceneMarginSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMarginSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
