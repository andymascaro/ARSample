// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Evaluation/MovieScene3DTransformTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DTransformTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTransformMask();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneBlendType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
// End Cross Module References
class UScriptStruct* FMovieSceneComponentTransformSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneComponentTransformSectionTemplate"), sizeof(FMovieSceneComponentTransformSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate(FMovieSceneComponentTransformSectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneComponentTransformSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneComponentTransformSectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneComponentTransformSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneComponentTransformSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneComponentTransformSectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneComponentTransformSectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneComponentTransformSectionTemplate"), sizeof(FMovieSceneComponentTransformSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieScene3DTransformTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneComponentTransformSectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateData_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieScene3DTransformTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TemplateData = { UE4CodeGen_Private::EPropertyClass::Struct, "TemplateData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneComponentTransformSectionTemplate, TemplateData), Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData, METADATA_PARAMS(NewProp_TemplateData_MetaData, ARRAY_COUNT(NewProp_TemplateData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TemplateData,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneComponentTransformSectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneComponentTransformSectionTemplate),
				alignof(FMovieSceneComponentTransformSectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate_CRC() { return 3311497195U; }
class UScriptStruct* FMovieScene3DTransformTemplateData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieScene3DTransformTemplateData"), sizeof(FMovieScene3DTransformTemplateData), Get_Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieScene3DTransformTemplateData(FMovieScene3DTransformTemplateData::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieScene3DTransformTemplateData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DTransformTemplateData
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DTransformTemplateData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieScene3DTransformTemplateData")),new UScriptStruct::TCppStructOps<FMovieScene3DTransformTemplateData>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DTransformTemplateData;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieScene3DTransformTemplateData"), sizeof(FMovieScene3DTransformTemplateData), Get_Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieScene3DTransformTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScene3DTransformTemplateData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieScene3DTransformTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Mask = { UE4CodeGen_Private::EPropertyClass::Struct, "Mask", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieScene3DTransformTemplateData, Mask), Z_Construct_UScriptStruct_FMovieSceneTransformMask, METADATA_PARAMS(NewProp_Mask_MetaData, ARRAY_COUNT(NewProp_Mask_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendType_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieScene3DTransformTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendType = { UE4CodeGen_Private::EPropertyClass::Enum, "BlendType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieScene3DTransformTemplateData, BlendType), Z_Construct_UEnum_MovieScene_EMovieSceneBlendType, METADATA_PARAMS(NewProp_BlendType_MetaData, ARRAY_COUNT(NewProp_BlendType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManualWeight_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieScene3DTransformTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ManualWeight = { UE4CodeGen_Private::EPropertyClass::Struct, "ManualWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieScene3DTransformTemplateData, ManualWeight), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_ManualWeight_MetaData, ARRAY_COUNT(NewProp_ManualWeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleCurve_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieScene3DTransformTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "ScaleCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, CPP_ARRAY_DIM(ScaleCurve, FMovieScene3DTransformTemplateData), nullptr, STRUCT_OFFSET(FMovieScene3DTransformTemplateData, ScaleCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_ScaleCurve_MetaData, ARRAY_COUNT(NewProp_ScaleCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationCurve_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieScene3DTransformTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "RotationCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, CPP_ARRAY_DIM(RotationCurve, FMovieScene3DTransformTemplateData), nullptr, STRUCT_OFFSET(FMovieScene3DTransformTemplateData, RotationCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_RotationCurve_MetaData, ARRAY_COUNT(NewProp_RotationCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationCurve_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieScene3DTransformTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TranslationCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "TranslationCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, CPP_ARRAY_DIM(TranslationCurve, FMovieScene3DTransformTemplateData), nullptr, STRUCT_OFFSET(FMovieScene3DTransformTemplateData, TranslationCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_TranslationCurve_MetaData, ARRAY_COUNT(NewProp_TranslationCurve_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mask,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ManualWeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotationCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TranslationCurve,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieScene3DTransformTemplateData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieScene3DTransformTemplateData),
				alignof(FMovieScene3DTransformTemplateData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_CRC() { return 154319911U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
