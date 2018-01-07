// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/Animation/MovieScene2DTransformTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene2DTransformTemplate() {}
// Cross Module References
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_UMG();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneBlendType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
// End Cross Module References
class UScriptStruct* FMovieScene2DTransformSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate, Z_Construct_UPackage__Script_UMG(), TEXT("MovieScene2DTransformSectionTemplate"), sizeof(FMovieScene2DTransformSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieScene2DTransformSectionTemplate(FMovieScene2DTransformSectionTemplate::StaticStruct, TEXT("/Script/UMG"), TEXT("MovieScene2DTransformSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFMovieScene2DTransformSectionTemplate
{
	FScriptStruct_UMG_StaticRegisterNativesFMovieScene2DTransformSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieScene2DTransformSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieScene2DTransformSectionTemplate>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFMovieScene2DTransformSectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieScene2DTransformSectionTemplate"), sizeof(FMovieScene2DTransformSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Animation/MovieScene2DTransformTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScene2DTransformSectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendType_MetaData[] = {
				{ "ModuleRelativePath", "Private/Animation/MovieScene2DTransformTemplate.h" },
				{ "ToolTip", "Blending method" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendType = { UE4CodeGen_Private::EPropertyClass::Enum, "BlendType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieScene2DTransformSectionTemplate, BlendType), Z_Construct_UEnum_MovieScene_EMovieSceneBlendType, METADATA_PARAMS(NewProp_BlendType_MetaData, ARRAY_COUNT(NewProp_BlendType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shear_MetaData[] = {
				{ "ModuleRelativePath", "Private/Animation/MovieScene2DTransformTemplate.h" },
				{ "ToolTip", "Shear curve" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Shear = { UE4CodeGen_Private::EPropertyClass::Struct, "Shear", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, CPP_ARRAY_DIM(Shear, FMovieScene2DTransformSectionTemplate), nullptr, STRUCT_OFFSET(FMovieScene2DTransformSectionTemplate, Shear), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_Shear_MetaData, ARRAY_COUNT(NewProp_Shear_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
				{ "ModuleRelativePath", "Private/Animation/MovieScene2DTransformTemplate.h" },
				{ "ToolTip", "Scale curves" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Struct, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, CPP_ARRAY_DIM(Scale, FMovieScene2DTransformSectionTemplate), nullptr, STRUCT_OFFSET(FMovieScene2DTransformSectionTemplate, Scale), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_Scale_MetaData, ARRAY_COUNT(NewProp_Scale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
				{ "ModuleRelativePath", "Private/Animation/MovieScene2DTransformTemplate.h" },
				{ "ToolTip", "Rotation curve" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieScene2DTransformSectionTemplate, Rotation), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_Rotation_MetaData, ARRAY_COUNT(NewProp_Rotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[] = {
				{ "ModuleRelativePath", "Private/Animation/MovieScene2DTransformTemplate.h" },
				{ "ToolTip", "Translation curves" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Translation = { UE4CodeGen_Private::EPropertyClass::Struct, "Translation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, CPP_ARRAY_DIM(Translation, FMovieScene2DTransformSectionTemplate), nullptr, STRUCT_OFFSET(FMovieScene2DTransformSectionTemplate, Translation), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_Translation_MetaData, ARRAY_COUNT(NewProp_Translation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Shear,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Translation,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
				Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieScene2DTransformSectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieScene2DTransformSectionTemplate),
				alignof(FMovieScene2DTransformSectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_CRC() { return 684746271U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
