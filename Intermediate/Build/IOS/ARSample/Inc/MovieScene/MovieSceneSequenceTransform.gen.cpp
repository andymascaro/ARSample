// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Evaluation/MovieSceneSequenceTransform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceTransform() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceTransform();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
class UScriptStruct* FMovieSceneSequenceTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceTransform, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceTransform"), sizeof(FMovieSceneSequenceTransform), Get_Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSequenceTransform(FMovieSceneSequenceTransform::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSequenceTransform"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceTransform
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceTransform()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSequenceTransform")),new UScriptStruct::TCppStructOps<FMovieSceneSequenceTransform>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceTransform;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSequenceTransform"), sizeof(FMovieSceneSequenceTransform), Get_Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
				{ "ToolTip", "Movie scene sequence transform class that transforms from one time-space to another.\n\n@note The transform can be thought of as the top row of a 2x2 matrix, where the bottom row is the identity:\n                    | TimeScale     Offset  |\n                    | 0                     1               |\n\nAs such, traditional matrix mathematics can be applied to transform between different sequence's time-spaces.\nTransforms apply offset first, then time scale." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceTransform>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
				{ "ToolTip", "Scalar time offset applied before the scale" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Offset = { UE4CodeGen_Private::EPropertyClass::Float, "Offset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSequenceTransform, Offset), METADATA_PARAMS(NewProp_Offset_MetaData, ARRAY_COUNT(NewProp_Offset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeScale_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
				{ "ToolTip", "The sequence's time scale (or play rate)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale = { UE4CodeGen_Private::EPropertyClass::Float, "TimeScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSequenceTransform, TimeScale), METADATA_PARAMS(NewProp_TimeScale_MetaData, ARRAY_COUNT(NewProp_TimeScale_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Offset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeScale,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneSequenceTransform",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneSequenceTransform),
				alignof(FMovieSceneSequenceTransform),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_CRC() { return 1930583826U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
