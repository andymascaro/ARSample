// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/Evaluation/MovieSceneEventTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEventTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventSectionData();
// End Cross Module References
class UScriptStruct* FMovieSceneEventSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEventSectionTemplate"), sizeof(FMovieSceneEventSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEventSectionTemplate(FMovieSceneEventSectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneEventSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventSectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEventSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneEventSectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventSectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEventSectionTemplate"), sizeof(FMovieSceneEventSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEventSectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenBackwards_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
			};
#endif
			auto NewProp_bFireEventsWhenBackwards_SetBit = [](void* Obj){ ((FMovieSceneEventSectionTemplate*)Obj)->bFireEventsWhenBackwards = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenBackwards = { UE4CodeGen_Private::EPropertyClass::Bool, "bFireEventsWhenBackwards", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FMovieSceneEventSectionTemplate), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFireEventsWhenBackwards_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFireEventsWhenBackwards_MetaData, ARRAY_COUNT(NewProp_bFireEventsWhenBackwards_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenForwards_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
			};
#endif
			auto NewProp_bFireEventsWhenForwards_SetBit = [](void* Obj){ ((FMovieSceneEventSectionTemplate*)Obj)->bFireEventsWhenForwards = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenForwards = { UE4CodeGen_Private::EPropertyClass::Bool, "bFireEventsWhenForwards", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FMovieSceneEventSectionTemplate), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFireEventsWhenForwards_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFireEventsWhenForwards_MetaData, ARRAY_COUNT(NewProp_bFireEventsWhenForwards_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventReceivers_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventReceivers = { UE4CodeGen_Private::EPropertyClass::Array, "EventReceivers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEventSectionTemplate, EventReceivers), METADATA_PARAMS(NewProp_EventReceivers_MetaData, ARRAY_COUNT(NewProp_EventReceivers_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventReceivers_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "EventReceivers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventData = { UE4CodeGen_Private::EPropertyClass::Struct, "EventData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEventSectionTemplate, EventData), Z_Construct_UScriptStruct_FMovieSceneEventSectionData, METADATA_PARAMS(NewProp_EventData_MetaData, ARRAY_COUNT(NewProp_EventData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFireEventsWhenBackwards,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFireEventsWhenForwards,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventReceivers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventReceivers_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventData,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneEventSectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneEventSectionTemplate),
				alignof(FMovieSceneEventSectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_CRC() { return 933055655U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
