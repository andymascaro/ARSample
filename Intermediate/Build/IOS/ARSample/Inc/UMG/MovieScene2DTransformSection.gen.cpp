// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Animation/MovieScene2DTransformSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene2DTransformSection() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UMovieScene2DTransformSection_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UMovieScene2DTransformSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_UMG();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
// End Cross Module References
	void UMovieScene2DTransformSection::StaticRegisterNativesUMovieScene2DTransformSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieScene2DTransformSection_NoRegister()
	{
		return UMovieScene2DTransformSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieScene2DTransformSection()
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
				{ "IncludePath", "Animation/MovieScene2DTransformSection.h" },
				{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformSection.h" },
				{ "ToolTip", "A transform section" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shear_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformSection.h" },
				{ "ToolTip", "Shear curve" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Shear = { UE4CodeGen_Private::EPropertyClass::Struct, "Shear", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, CPP_ARRAY_DIM(Shear, UMovieScene2DTransformSection), nullptr, STRUCT_OFFSET(UMovieScene2DTransformSection, Shear), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_Shear_MetaData, ARRAY_COUNT(NewProp_Shear_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformSection.h" },
				{ "ToolTip", "Scale curves" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Struct, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, CPP_ARRAY_DIM(Scale, UMovieScene2DTransformSection), nullptr, STRUCT_OFFSET(UMovieScene2DTransformSection, Scale), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_Scale_MetaData, ARRAY_COUNT(NewProp_Scale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformSection.h" },
				{ "ToolTip", "Rotation curve" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieScene2DTransformSection, Rotation), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_Rotation_MetaData, ARRAY_COUNT(NewProp_Rotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformSection.h" },
				{ "ToolTip", "Translation curves" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Translation = { UE4CodeGen_Private::EPropertyClass::Struct, "Translation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, CPP_ARRAY_DIM(Translation, UMovieScene2DTransformSection), nullptr, STRUCT_OFFSET(UMovieScene2DTransformSection, Translation), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_Translation_MetaData, ARRAY_COUNT(NewProp_Translation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Shear,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Translation,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieScene2DTransformSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieScene2DTransformSection::StaticClass,
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
	IMPLEMENT_CLASS(UMovieScene2DTransformSection, 4184418801);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScene2DTransformSection(Z_Construct_UClass_UMovieScene2DTransformSection, &UMovieScene2DTransformSection::StaticClass, TEXT("/Script/UMG"), TEXT("UMovieScene2DTransformSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene2DTransformSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
