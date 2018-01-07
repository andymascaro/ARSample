// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/Evaluation/MovieSceneLevelVisibilityTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLevelVisibilityTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENETRACKS_API UEnum* Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility();
// End Cross Module References
class UScriptStruct* FMovieSceneLevelVisibilitySectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneLevelVisibilitySectionTemplate"), sizeof(FMovieSceneLevelVisibilitySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate(FMovieSceneLevelVisibilitySectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneLevelVisibilitySectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneLevelVisibilitySectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneLevelVisibilitySectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneLevelVisibilitySectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneLevelVisibilitySectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneLevelVisibilitySectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneLevelVisibilitySectionTemplate"), sizeof(FMovieSceneLevelVisibilitySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneLevelVisibilityTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneLevelVisibilitySectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelNames_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneLevelVisibilityTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LevelNames = { UE4CodeGen_Private::EPropertyClass::Array, "LevelNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneLevelVisibilitySectionTemplate, LevelNames), METADATA_PARAMS(NewProp_LevelNames_MetaData, ARRAY_COUNT(NewProp_LevelNames_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_LevelNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "LevelNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Visibility_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneLevelVisibilityTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Visibility = { UE4CodeGen_Private::EPropertyClass::Enum, "Visibility", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneLevelVisibilitySectionTemplate, Visibility), Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility, METADATA_PARAMS(NewProp_Visibility_MetaData, ARRAY_COUNT(NewProp_Visibility_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Visibility_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LevelNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LevelNames_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Visibility,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Visibility_Underlying,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneLevelVisibilitySectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneLevelVisibilitySectionTemplate),
				alignof(FMovieSceneLevelVisibilitySectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_CRC() { return 3988620573U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
