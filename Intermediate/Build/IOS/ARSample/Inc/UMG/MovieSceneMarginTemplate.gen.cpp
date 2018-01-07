// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/Animation/MovieSceneMarginTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMarginTemplate() {}
// Cross Module References
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMarginSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_UMG();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneBlendType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
// End Cross Module References
class UScriptStruct* FMovieSceneMarginSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneMarginSectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneMarginSectionTemplate, Z_Construct_UPackage__Script_UMG(), TEXT("MovieSceneMarginSectionTemplate"), sizeof(FMovieSceneMarginSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneMarginSectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneMarginSectionTemplate(FMovieSceneMarginSectionTemplate::StaticStruct, TEXT("/Script/UMG"), TEXT("MovieSceneMarginSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFMovieSceneMarginSectionTemplate
{
	FScriptStruct_UMG_StaticRegisterNativesFMovieSceneMarginSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneMarginSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneMarginSectionTemplate>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFMovieSceneMarginSectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMarginSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneMarginSectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneMarginSectionTemplate"), sizeof(FMovieSceneMarginSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneMarginSectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Animation/MovieSceneMarginTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneMarginSectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendType_MetaData[] = {
				{ "ModuleRelativePath", "Private/Animation/MovieSceneMarginTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendType = { UE4CodeGen_Private::EPropertyClass::Enum, "BlendType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneMarginSectionTemplate, BlendType), Z_Construct_UEnum_MovieScene_EMovieSceneBlendType, METADATA_PARAMS(NewProp_BlendType_MetaData, ARRAY_COUNT(NewProp_BlendType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BottomCurve_MetaData[] = {
				{ "ModuleRelativePath", "Private/Animation/MovieSceneMarginTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BottomCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "BottomCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneMarginSectionTemplate, BottomCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_BottomCurve_MetaData, ARRAY_COUNT(NewProp_BottomCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightCurve_MetaData[] = {
				{ "ModuleRelativePath", "Private/Animation/MovieSceneMarginTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "RightCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneMarginSectionTemplate, RightCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_RightCurve_MetaData, ARRAY_COUNT(NewProp_RightCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftCurve_MetaData[] = {
				{ "ModuleRelativePath", "Private/Animation/MovieSceneMarginTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "LeftCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneMarginSectionTemplate, LeftCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_LeftCurve_MetaData, ARRAY_COUNT(NewProp_LeftCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopCurve_MetaData[] = {
				{ "ModuleRelativePath", "Private/Animation/MovieSceneMarginTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TopCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "TopCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneMarginSectionTemplate, TopCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_TopCurve_MetaData, ARRAY_COUNT(NewProp_TopCurve_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BottomCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RightCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeftCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TopCurve,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
				Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneMarginSectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneMarginSectionTemplate),
				alignof(FMovieSceneMarginSectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneMarginSectionTemplate_CRC() { return 3727395204U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
