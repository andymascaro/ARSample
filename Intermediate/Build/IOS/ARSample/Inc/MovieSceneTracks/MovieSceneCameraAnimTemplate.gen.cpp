// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/Evaluation/MovieSceneCameraAnimTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraAnimTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAdditiveCameraAnimationTrackTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAdditiveCameraAnimationTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData();
// End Cross Module References
class UScriptStruct* FMovieSceneAdditiveCameraAnimationTrackTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAdditiveCameraAnimationTrackTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAdditiveCameraAnimationTrackTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneAdditiveCameraAnimationTrackTemplate"), sizeof(FMovieSceneAdditiveCameraAnimationTrackTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneAdditiveCameraAnimationTrackTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneAdditiveCameraAnimationTrackTemplate(FMovieSceneAdditiveCameraAnimationTrackTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneAdditiveCameraAnimationTrackTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneAdditiveCameraAnimationTrackTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneAdditiveCameraAnimationTrackTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneAdditiveCameraAnimationTrackTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneAdditiveCameraAnimationTrackTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneAdditiveCameraAnimationTrackTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAdditiveCameraAnimationTrackTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAdditiveCameraAnimationTrackTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneAdditiveCameraAnimationTrackTemplate"), sizeof(FMovieSceneAdditiveCameraAnimationTrackTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneAdditiveCameraAnimationTrackTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneCameraAnimTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneAdditiveCameraAnimationTrackTemplate>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneAdditiveCameraAnimationTrackTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneAdditiveCameraAnimationTrackTemplate),
				alignof(FMovieSceneAdditiveCameraAnimationTrackTemplate),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAdditiveCameraAnimationTrackTemplate_CRC() { return 113715650U; }
class UScriptStruct* FMovieSceneCameraShakeSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneCameraShakeSectionTemplate"), sizeof(FMovieSceneCameraShakeSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate(FMovieSceneCameraShakeSectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneCameraShakeSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraShakeSectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraShakeSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneCameraShakeSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneCameraShakeSectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraShakeSectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneCameraShakeSectionTemplate"), sizeof(FMovieSceneCameraShakeSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneCameraAnimTemplate.h" },
				{ "ToolTip", "Section template for a camera anim" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneCameraShakeSectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionStartTime_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneCameraAnimTemplate.h" },
				{ "ToolTip", "Cached section start time" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SectionStartTime = { UE4CodeGen_Private::EPropertyClass::Float, "SectionStartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneCameraShakeSectionTemplate, SectionStartTime), METADATA_PARAMS(NewProp_SectionStartTime_MetaData, ARRAY_COUNT(NewProp_SectionStartTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceData_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneCameraAnimTemplate.h" },
				{ "ToolTip", "Source data taken from the section" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceData = { UE4CodeGen_Private::EPropertyClass::Struct, "SourceData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneCameraShakeSectionTemplate, SourceData), Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData, METADATA_PARAMS(NewProp_SourceData_MetaData, ARRAY_COUNT(NewProp_SourceData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionStartTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceData,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieSceneAdditiveCameraAnimationTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneCameraShakeSectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneCameraShakeSectionTemplate),
				alignof(FMovieSceneCameraShakeSectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_CRC() { return 258910414U; }
class UScriptStruct* FMovieSceneCameraAnimSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneCameraAnimSectionTemplate"), sizeof(FMovieSceneCameraAnimSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate(FMovieSceneCameraAnimSectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneCameraAnimSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraAnimSectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraAnimSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneCameraAnimSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneCameraAnimSectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraAnimSectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneCameraAnimSectionTemplate"), sizeof(FMovieSceneCameraAnimSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneCameraAnimTemplate.h" },
				{ "ToolTip", "Section template for a camera anim" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneCameraAnimSectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionStartTime_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneCameraAnimTemplate.h" },
				{ "ToolTip", "Cached section start time" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SectionStartTime = { UE4CodeGen_Private::EPropertyClass::Float, "SectionStartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneCameraAnimSectionTemplate, SectionStartTime), METADATA_PARAMS(NewProp_SectionStartTime_MetaData, ARRAY_COUNT(NewProp_SectionStartTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceData_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneCameraAnimTemplate.h" },
				{ "ToolTip", "Source data taken from the section" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceData = { UE4CodeGen_Private::EPropertyClass::Struct, "SourceData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneCameraAnimSectionTemplate, SourceData), Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData, METADATA_PARAMS(NewProp_SourceData_MetaData, ARRAY_COUNT(NewProp_SourceData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionStartTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceData,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieSceneAdditiveCameraAnimationTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneCameraAnimSectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneCameraAnimSectionTemplate),
				alignof(FMovieSceneCameraAnimSectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_CRC() { return 2716575544U; }
class UScriptStruct* FMovieSceneAdditiveCameraAnimationTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAdditiveCameraAnimationTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAdditiveCameraAnimationTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneAdditiveCameraAnimationTemplate"), sizeof(FMovieSceneAdditiveCameraAnimationTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneAdditiveCameraAnimationTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneAdditiveCameraAnimationTemplate(FMovieSceneAdditiveCameraAnimationTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneAdditiveCameraAnimationTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneAdditiveCameraAnimationTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneAdditiveCameraAnimationTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneAdditiveCameraAnimationTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneAdditiveCameraAnimationTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneAdditiveCameraAnimationTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAdditiveCameraAnimationTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAdditiveCameraAnimationTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneAdditiveCameraAnimationTemplate"), sizeof(FMovieSceneAdditiveCameraAnimationTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneAdditiveCameraAnimationTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneCameraAnimTemplate.h" },
				{ "ToolTip", "Generic section template for any additive camera animation effects" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneAdditiveCameraAnimationTemplate>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneAdditiveCameraAnimationTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneAdditiveCameraAnimationTemplate),
				alignof(FMovieSceneAdditiveCameraAnimationTemplate),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAdditiveCameraAnimationTemplate_CRC() { return 1143718372U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
