// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Sections/MovieSceneBoolSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBoolSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneBoolSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneBoolSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIntegralCurve();
// End Cross Module References
	void UMovieSceneBoolSection::StaticRegisterNativesUMovieSceneBoolSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneBoolSection_NoRegister()
	{
		return UMovieSceneBoolSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneBoolSection()
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
				{ "IncludePath", "Sections/MovieSceneBoolSection.h" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneBoolSection.h" },
				{ "ToolTip", "A single bool section." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolCurve_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneBoolSection.h" },
				{ "ToolTip", "Ordered curve data // @todo Sequencer This could be optimized by packing the bools separately\n// but that may not be worth the effort" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoolCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "BoolCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneBoolSection, BoolCurve), Z_Construct_UScriptStruct_FIntegralCurve, METADATA_PARAMS(NewProp_BoolCurve_MetaData, ARRAY_COUNT(NewProp_BoolCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneBoolSection.h" },
				{ "ToolTip", "The default value to use when no keys are present - use GetCurve().SetDefaultValue()" },
			};
#endif
			auto NewProp_DefaultValue_SetBit = [](void* Obj){ ((UMovieSceneBoolSection*)Obj)->DefaultValue_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultValue = { UE4CodeGen_Private::EPropertyClass::Bool, "DefaultValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMovieSceneBoolSection), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DefaultValue_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DefaultValue_MetaData, ARRAY_COUNT(NewProp_DefaultValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoolCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultValue,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneBoolSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneBoolSection::StaticClass,
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
	IMPLEMENT_CLASS(UMovieSceneBoolSection, 2576170155);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneBoolSection(Z_Construct_UClass_UMovieSceneBoolSection, &UMovieSceneBoolSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneBoolSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBoolSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
