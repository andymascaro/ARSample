// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/Evaluation/MovieScene3DPathTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DPathTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENETRACKS_API UEnum* Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FMovieScene3DPathSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieScene3DPathSectionTemplate"), sizeof(FMovieScene3DPathSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieScene3DPathSectionTemplate(FMovieScene3DPathSectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieScene3DPathSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DPathSectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DPathSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieScene3DPathSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieScene3DPathSectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DPathSectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieScene3DPathSectionTemplate"), sizeof(FMovieScene3DPathSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DPathTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScene3DPathSectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceUpright_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DPathTemplate.h" },
				{ "ToolTip", "Force Upright" },
			};
#endif
			auto NewProp_bForceUpright_SetBit = [](void* Obj){ ((FMovieScene3DPathSectionTemplate*)Obj)->bForceUpright = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceUpright = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceUpright", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FMovieScene3DPathSectionTemplate), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForceUpright_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bForceUpright_MetaData, ARRAY_COUNT(NewProp_bForceUpright_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DPathTemplate.h" },
				{ "ToolTip", "Reverse Timing" },
			};
#endif
			auto NewProp_bReverse_SetBit = [](void* Obj){ ((FMovieScene3DPathSectionTemplate*)Obj)->bReverse = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReverse = { UE4CodeGen_Private::EPropertyClass::Bool, "bReverse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FMovieScene3DPathSectionTemplate), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReverse_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bReverse_MetaData, ARRAY_COUNT(NewProp_bReverse_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFollow_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DPathTemplate.h" },
				{ "ToolTip", "Follow Curve" },
			};
#endif
			auto NewProp_bFollow_SetBit = [](void* Obj){ ((FMovieScene3DPathSectionTemplate*)Obj)->bFollow = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFollow = { UE4CodeGen_Private::EPropertyClass::Bool, "bFollow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FMovieScene3DPathSectionTemplate), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFollow_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFollow_MetaData, ARRAY_COUNT(NewProp_bFollow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpAxisEnum_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DPathTemplate.h" },
				{ "ToolTip", "Up Axis" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UpAxisEnum = { UE4CodeGen_Private::EPropertyClass::Enum, "UpAxisEnum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieScene3DPathSectionTemplate, UpAxisEnum), Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis, METADATA_PARAMS(NewProp_UpAxisEnum_MetaData, ARRAY_COUNT(NewProp_UpAxisEnum_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_UpAxisEnum_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontAxisEnum_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DPathTemplate.h" },
				{ "ToolTip", "Front Axis" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FrontAxisEnum = { UE4CodeGen_Private::EPropertyClass::Enum, "FrontAxisEnum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieScene3DPathSectionTemplate, FrontAxisEnum), Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis, METADATA_PARAMS(NewProp_FrontAxisEnum_MetaData, ARRAY_COUNT(NewProp_FrontAxisEnum_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_FrontAxisEnum_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimingCurve_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DPathTemplate.h" },
				{ "ToolTip", "The timing curve" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimingCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "TimingCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieScene3DPathSectionTemplate, TimingCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_TimingCurve_MetaData, ARRAY_COUNT(NewProp_TimingCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathGuid_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DPathTemplate.h" },
				{ "ToolTip", "GUID of the path we should attach to" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "PathGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieScene3DPathSectionTemplate, PathGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_PathGuid_MetaData, ARRAY_COUNT(NewProp_PathGuid_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForceUpright,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReverse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFollow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UpAxisEnum,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UpAxisEnum_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrontAxisEnum,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrontAxisEnum_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimingCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathGuid,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieScene3DPathSectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieScene3DPathSectionTemplate),
				alignof(FMovieScene3DPathSectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_CRC() { return 3458935299U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
