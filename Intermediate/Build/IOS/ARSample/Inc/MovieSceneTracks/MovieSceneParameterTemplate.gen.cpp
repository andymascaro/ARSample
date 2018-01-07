// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Evaluation/MovieSceneParameterTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneParameterTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FColorParameterNameAndCurves();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FVectorParameterNameAndCurves();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterNameAndCurve();
// End Cross Module References
class UScriptStruct* FMovieSceneComponentMaterialSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneComponentMaterialSectionTemplate"), sizeof(FMovieSceneComponentMaterialSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate(FMovieSceneComponentMaterialSectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneComponentMaterialSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneComponentMaterialSectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneComponentMaterialSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneComponentMaterialSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneComponentMaterialSectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneComponentMaterialSectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneComponentMaterialSectionTemplate"), sizeof(FMovieSceneComponentMaterialSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneParameterTemplate.h" },
				{ "ToolTip", "Evaluation template for primitive component materials" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneComponentMaterialSectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneParameterTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialIndex = { UE4CodeGen_Private::EPropertyClass::Int, "MaterialIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneComponentMaterialSectionTemplate, MaterialIndex), METADATA_PARAMS(NewProp_MaterialIndex_MetaData, ARRAY_COUNT(NewProp_MaterialIndex_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialIndex,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneComponentMaterialSectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneComponentMaterialSectionTemplate),
				alignof(FMovieSceneComponentMaterialSectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate_CRC() { return 1338230403U; }
class UScriptStruct* FMovieSceneParameterSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneParameterSectionTemplate"), sizeof(FMovieSceneParameterSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneParameterSectionTemplate(FMovieSceneParameterSectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneParameterSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneParameterSectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneParameterSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneParameterSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneParameterSectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneParameterSectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneParameterSectionTemplate"), sizeof(FMovieSceneParameterSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneParameterTemplate.h" },
				{ "ToolTip", "Template that performs evaluation of parameter sections" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneParameterSectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneParameterTemplate.h" },
				{ "ToolTip", "The color parameter names and their associated curves." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Colors = { UE4CodeGen_Private::EPropertyClass::Array, "Colors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneParameterSectionTemplate, Colors), METADATA_PARAMS(NewProp_Colors_MetaData, ARRAY_COUNT(NewProp_Colors_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Colors_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Colors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FColorParameterNameAndCurves, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vectors_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneParameterTemplate.h" },
				{ "ToolTip", "The vector parameter names and their associated curves." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vectors = { UE4CodeGen_Private::EPropertyClass::Array, "Vectors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneParameterSectionTemplate, Vectors), METADATA_PARAMS(NewProp_Vectors_MetaData, ARRAY_COUNT(NewProp_Vectors_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vectors_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Vectors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVectorParameterNameAndCurves, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scalars_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneParameterTemplate.h" },
				{ "ToolTip", "The scalar parameter names and their associated curves." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Scalars = { UE4CodeGen_Private::EPropertyClass::Array, "Scalars", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneParameterSectionTemplate, Scalars), METADATA_PARAMS(NewProp_Scalars_MetaData, ARRAY_COUNT(NewProp_Scalars_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scalars_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Scalars", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FScalarParameterNameAndCurve, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Colors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Colors_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vectors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vectors_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scalars,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scalars_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneParameterSectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneParameterSectionTemplate),
				alignof(FMovieSceneParameterSectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_CRC() { return 882040115U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
