// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Sections/MovieSceneFadeSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFadeSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFadeSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFadeSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFloatSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UMovieSceneFadeSection::StaticRegisterNativesUMovieSceneFadeSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneFadeSection_NoRegister()
	{
		return UMovieSceneFadeSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneFadeSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneFloatSection,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Sections/MovieSceneFadeSection.h" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneFadeSection.h" },
				{ "ToolTip", "A single floating point section." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFadeAudio_MetaData[] = {
				{ "Category", "Fade" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneFadeSection.h" },
				{ "ToolTip", "Fade audio." },
			};
#endif
			auto NewProp_bFadeAudio_SetBit = [](void* Obj){ ((UMovieSceneFadeSection*)Obj)->bFadeAudio = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFadeAudio = { UE4CodeGen_Private::EPropertyClass::Bool, "bFadeAudio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMovieSceneFadeSection), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFadeAudio_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFadeAudio_MetaData, ARRAY_COUNT(NewProp_bFadeAudio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeColor_MetaData[] = {
				{ "Category", "Fade" },
				{ "InlineColorPicker", "" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneFadeSection.h" },
				{ "ToolTip", "Fade color." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FadeColor = { UE4CodeGen_Private::EPropertyClass::Struct, "FadeColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneFadeSection, FadeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_FadeColor_MetaData, ARRAY_COUNT(NewProp_FadeColor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFadeAudio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FadeColor,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneFadeSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneFadeSection::StaticClass,
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
	IMPLEMENT_CLASS(UMovieSceneFadeSection, 3840437730);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneFadeSection(Z_Construct_UClass_UMovieSceneFadeSection, &UMovieSceneFadeSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneFadeSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneFadeSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif