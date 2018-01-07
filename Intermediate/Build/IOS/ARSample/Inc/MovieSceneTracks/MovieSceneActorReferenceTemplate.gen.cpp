// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/Evaluation/MovieSceneActorReferenceTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneActorReferenceTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneActorReferenceSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIntegralCurve();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertySectionData();
// End Cross Module References
class UScriptStruct* FMovieSceneActorReferenceSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneActorReferenceSectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneActorReferenceSectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneActorReferenceSectionTemplate"), sizeof(FMovieSceneActorReferenceSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneActorReferenceSectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneActorReferenceSectionTemplate(FMovieSceneActorReferenceSectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneActorReferenceSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneActorReferenceSectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneActorReferenceSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneActorReferenceSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneActorReferenceSectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneActorReferenceSectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneActorReferenceSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneActorReferenceSectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneActorReferenceSectionTemplate"), sizeof(FMovieSceneActorReferenceSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneActorReferenceSectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneActorReferenceTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneActorReferenceSectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorGuids_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneActorReferenceTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorGuids = { UE4CodeGen_Private::EPropertyClass::Array, "ActorGuids", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneActorReferenceSectionTemplate, ActorGuids), METADATA_PARAMS(NewProp_ActorGuids_MetaData, ARRAY_COUNT(NewProp_ActorGuids_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorGuids_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ActorGuids", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorGuidIndexCurve_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneActorReferenceTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorGuidIndexCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "ActorGuidIndexCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneActorReferenceSectionTemplate, ActorGuidIndexCurve), Z_Construct_UScriptStruct_FIntegralCurve, METADATA_PARAMS(NewProp_ActorGuidIndexCurve_MetaData, ARRAY_COUNT(NewProp_ActorGuidIndexCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyData_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneActorReferenceTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PropertyData = { UE4CodeGen_Private::EPropertyClass::Struct, "PropertyData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneActorReferenceSectionTemplate, PropertyData), Z_Construct_UScriptStruct_FMovieScenePropertySectionData, METADATA_PARAMS(NewProp_PropertyData_MetaData, ARRAY_COUNT(NewProp_PropertyData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorGuids,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorGuids_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorGuidIndexCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyData,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneActorReferenceSectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneActorReferenceSectionTemplate),
				alignof(FMovieSceneActorReferenceSectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneActorReferenceSectionTemplate_CRC() { return 1633679771U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
