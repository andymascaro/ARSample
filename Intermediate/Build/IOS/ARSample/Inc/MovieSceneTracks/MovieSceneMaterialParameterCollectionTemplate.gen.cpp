// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/Evaluation/MovieSceneMaterialParameterCollectionTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMaterialParameterCollectionTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
// End Cross Module References
class UScriptStruct* FMovieSceneMaterialParameterCollectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneMaterialParameterCollectionTemplate"), sizeof(FMovieSceneMaterialParameterCollectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate(FMovieSceneMaterialParameterCollectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneMaterialParameterCollectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneMaterialParameterCollectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneMaterialParameterCollectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneMaterialParameterCollectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneMaterialParameterCollectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneMaterialParameterCollectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneMaterialParameterCollectionTemplate"), sizeof(FMovieSceneMaterialParameterCollectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneMaterialParameterCollectionTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneMaterialParameterCollectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MPC_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneMaterialParameterCollectionTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MPC = { UE4CodeGen_Private::EPropertyClass::Object, "MPC", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneMaterialParameterCollectionTemplate, MPC), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(NewProp_MPC_MetaData, ARRAY_COUNT(NewProp_MPC_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MPC,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneMaterialParameterCollectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneMaterialParameterCollectionTemplate),
				alignof(FMovieSceneMaterialParameterCollectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_CRC() { return 3513754876U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
