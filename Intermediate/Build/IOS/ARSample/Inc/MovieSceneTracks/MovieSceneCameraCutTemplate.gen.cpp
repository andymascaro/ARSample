// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/Evaluation/MovieSceneCameraCutTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraCutTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FMovieSceneCameraCutSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneCameraCutSectionTemplate"), sizeof(FMovieSceneCameraCutSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneCameraCutSectionTemplate(FMovieSceneCameraCutSectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneCameraCutSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraCutSectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraCutSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneCameraCutSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneCameraCutSectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraCutSectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneCameraCutSectionTemplate"), sizeof(FMovieSceneCameraCutSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneCameraCutTemplate.h" },
				{ "ToolTip", "Camera cut track evaluation template" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneCameraCutSectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasCutTransform_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneCameraCutTemplate.h" },
			};
#endif
			auto NewProp_bHasCutTransform_SetBit = [](void* Obj){ ((FMovieSceneCameraCutSectionTemplate*)Obj)->bHasCutTransform = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasCutTransform = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasCutTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMovieSceneCameraCutSectionTemplate), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasCutTransform_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasCutTransform_MetaData, ARRAY_COUNT(NewProp_bHasCutTransform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CutTransform_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneCameraCutTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CutTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "CutTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneCameraCutSectionTemplate, CutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_CutTransform_MetaData, ARRAY_COUNT(NewProp_CutTransform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraGuid_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieSceneCameraCutTemplate.h" },
				{ "ToolTip", "GUID of the camera we should cut to in this sequence" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "CameraGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneCameraCutSectionTemplate, CameraGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_CameraGuid_MetaData, ARRAY_COUNT(NewProp_CameraGuid_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasCutTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CutTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraGuid,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneCameraCutSectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneCameraCutSectionTemplate),
				alignof(FMovieSceneCameraCutSectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_CRC() { return 1202382159U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
