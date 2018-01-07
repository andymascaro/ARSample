// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieSceneTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTrack() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackCompilationParams();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSignedObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
class UScriptStruct* FMovieSceneTrackEvalOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackEvalOptions"), sizeof(FMovieSceneTrackEvalOptions), Get_Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneTrackEvalOptions(FMovieSceneTrackEvalOptions::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneTrackEvalOptions"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackEvalOptions
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackEvalOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneTrackEvalOptions")),new UScriptStruct::TCppStructOps<FMovieSceneTrackEvalOptions>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackEvalOptions;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneTrackEvalOptions"), sizeof(FMovieSceneTrackEvalOptions), Get_Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
				{ "ToolTip", "Generic evaluation options for any track" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackEvalOptions>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEvaluateNearestSection_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
			};
#endif
			auto NewProp_bEvaluateNearestSection_SetBit = [](void* Obj){ ((FMovieSceneTrackEvalOptions*)Obj)->bEvaluateNearestSection_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvaluateNearestSection = { UE4CodeGen_Private::EPropertyClass::Bool, "bEvaluateNearestSection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FMovieSceneTrackEvalOptions), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEvaluateNearestSection_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEvaluateNearestSection_MetaData, ARRAY_COUNT(NewProp_bEvaluateNearestSection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEvaluateInPostroll_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
				{ "ToolTip", "Evaluate this track as part of its parent sub-section's post-roll, if applicable" },
			};
#endif
			auto NewProp_bEvaluateInPostroll_SetBit = [](void* Obj){ ((FMovieSceneTrackEvalOptions*)Obj)->bEvaluateInPostroll = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvaluateInPostroll = { UE4CodeGen_Private::EPropertyClass::Bool, "bEvaluateInPostroll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FMovieSceneTrackEvalOptions), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEvaluateInPostroll_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEvaluateInPostroll_MetaData, ARRAY_COUNT(NewProp_bEvaluateInPostroll_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEvaluateInPreroll_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
				{ "ToolTip", "Evaluate this track as part of its parent sub-section's pre-roll, if applicable" },
			};
#endif
			auto NewProp_bEvaluateInPreroll_SetBit = [](void* Obj){ ((FMovieSceneTrackEvalOptions*)Obj)->bEvaluateInPreroll = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvaluateInPreroll = { UE4CodeGen_Private::EPropertyClass::Bool, "bEvaluateInPreroll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FMovieSceneTrackEvalOptions), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEvaluateInPreroll_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEvaluateInPreroll_MetaData, ARRAY_COUNT(NewProp_bEvaluateInPreroll_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEvalNearestSection_MetaData[] = {
				{ "Category", "General" },
				{ "DisplayName", "Evaluate Nearest Section" },
				{ "EditCondition", "bCanEvaluateNearestSection" },
				{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
				{ "ToolTip", "When evaluating empty space on a track, will evaluate the last position of the previous section (if possible), or the first position of the next section, in that order of preference." },
			};
#endif
			auto NewProp_bEvalNearestSection_SetBit = [](void* Obj){ ((FMovieSceneTrackEvalOptions*)Obj)->bEvalNearestSection = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvalNearestSection = { UE4CodeGen_Private::EPropertyClass::Bool, "bEvalNearestSection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FMovieSceneTrackEvalOptions), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEvalNearestSection_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEvalNearestSection_MetaData, ARRAY_COUNT(NewProp_bEvalNearestSection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanEvaluateNearestSection_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
				{ "ToolTip", "true when the value of bEvalNearestSection is to be considered for the track" },
			};
#endif
			auto NewProp_bCanEvaluateNearestSection_SetBit = [](void* Obj){ ((FMovieSceneTrackEvalOptions*)Obj)->bCanEvaluateNearestSection = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanEvaluateNearestSection = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanEvaluateNearestSection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FMovieSceneTrackEvalOptions), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanEvaluateNearestSection_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCanEvaluateNearestSection_MetaData, ARRAY_COUNT(NewProp_bCanEvaluateNearestSection_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEvaluateNearestSection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEvaluateInPostroll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEvaluateInPreroll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEvalNearestSection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanEvaluateNearestSection,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneTrackEvalOptions",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneTrackEvalOptions),
				alignof(FMovieSceneTrackEvalOptions),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_CRC() { return 2717794993U; }
class UScriptStruct* FMovieSceneTrackCompilationParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackCompilationParams_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackCompilationParams, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackCompilationParams"), sizeof(FMovieSceneTrackCompilationParams), Get_Z_Construct_UScriptStruct_FMovieSceneTrackCompilationParams_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneTrackCompilationParams(FMovieSceneTrackCompilationParams::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneTrackCompilationParams"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackCompilationParams
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackCompilationParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneTrackCompilationParams")),new UScriptStruct::TCppStructOps<FMovieSceneTrackCompilationParams>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackCompilationParams;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackCompilationParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackCompilationParams_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneTrackCompilationParams"), sizeof(FMovieSceneTrackCompilationParams), Get_Z_Construct_UScriptStruct_FMovieSceneTrackCompilationParams_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
				{ "ToolTip", "Movie scene compilation parameters. Serialized items contribute to a compiled template's cached hash" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackCompilationParams>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDuringBlueprintCompile_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
				{ "ToolTip", "Whether we're generating during a blueprint compile. As such, UObject types may not have been fully loaded." },
			};
#endif
			auto NewProp_bDuringBlueprintCompile_SetBit = [](void* Obj){ ((FMovieSceneTrackCompilationParams*)Obj)->bDuringBlueprintCompile = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDuringBlueprintCompile = { UE4CodeGen_Private::EPropertyClass::Bool, "bDuringBlueprintCompile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMovieSceneTrackCompilationParams), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDuringBlueprintCompile_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDuringBlueprintCompile_MetaData, ARRAY_COUNT(NewProp_bDuringBlueprintCompile_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForEditorPreview_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
				{ "ToolTip", "Whether we're generating for an editor preview, or for efficient runtime evaluation" },
			};
#endif
			auto NewProp_bForEditorPreview_SetBit = [](void* Obj){ ((FMovieSceneTrackCompilationParams*)Obj)->bForEditorPreview = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForEditorPreview = { UE4CodeGen_Private::EPropertyClass::Bool, "bForEditorPreview", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMovieSceneTrackCompilationParams), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForEditorPreview_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bForEditorPreview_MetaData, ARRAY_COUNT(NewProp_bForEditorPreview_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDuringBlueprintCompile,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForEditorPreview,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneTrackCompilationParams",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneTrackCompilationParams),
				alignof(FMovieSceneTrackCompilationParams),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackCompilationParams_CRC() { return 3746947218U; }
	void UMovieSceneTrack::StaticRegisterNativesUMovieSceneTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister()
	{
		return UMovieSceneTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneSignedObject,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MovieSceneTrack.h" },
				{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "Base class for a track in a Movie Scene" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackTint_MetaData[] = {
				{ "Category", "General" },
				{ "DisplayName", "Color" },
				{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
				{ "ToolTip", "This track's tint color" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackTint = { UE4CodeGen_Private::EPropertyClass::Struct, "TrackTint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080800000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneTrack, TrackTint), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_TrackTint_MetaData, ARRAY_COUNT(NewProp_TrackTint_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvalOptions_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
				{ "ShowOnlyInnerProperties", "" },
				{ "ToolTip", "General evaluation options for a given track" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EvalOptions = { UE4CodeGen_Private::EPropertyClass::Struct, "EvalOptions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneTrack, EvalOptions), Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions, METADATA_PARAMS(NewProp_EvalOptions_MetaData, ARRAY_COUNT(NewProp_EvalOptions_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackTint,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EvalOptions,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneTrack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneTrack::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00280081u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneTrack, 1986552940);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneTrack(Z_Construct_UClass_UMovieSceneTrack, &UMovieSceneTrack::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
