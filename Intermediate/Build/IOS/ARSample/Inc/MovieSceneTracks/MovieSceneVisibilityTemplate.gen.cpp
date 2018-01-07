// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/Evaluation/MovieSceneVisibilityTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneVisibilityTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVisibilitySectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate();
// End Cross Module References
class UScriptStruct* FMovieSceneVisibilitySectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVisibilitySectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneVisibilitySectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneVisibilitySectionTemplate"), sizeof(FMovieSceneVisibilitySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneVisibilitySectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneVisibilitySectionTemplate(FMovieSceneVisibilitySectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneVisibilitySectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVisibilitySectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVisibilitySectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneVisibilitySectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneVisibilitySectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVisibilitySectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVisibilitySectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVisibilitySectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneVisibilitySectionTemplate"), sizeof(FMovieSceneVisibilitySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneVisibilitySectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneVisibilityTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneVisibilitySectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTemporarilyHiddenInGame_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneVisibilityTemplate.h" },
				{ "ToolTip", "Temporarily hidden in game" },
			};
#endif
			auto NewProp_bTemporarilyHiddenInGame_SetBit = [](void* Obj){ ((FMovieSceneVisibilitySectionTemplate*)Obj)->bTemporarilyHiddenInGame = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTemporarilyHiddenInGame = { UE4CodeGen_Private::EPropertyClass::Bool, "bTemporarilyHiddenInGame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMovieSceneVisibilitySectionTemplate), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTemporarilyHiddenInGame_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTemporarilyHiddenInGame_MetaData, ARRAY_COUNT(NewProp_bTemporarilyHiddenInGame_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTemporarilyHiddenInGame,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneVisibilitySectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneVisibilitySectionTemplate),
				alignof(FMovieSceneVisibilitySectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVisibilitySectionTemplate_CRC() { return 3177778079U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
