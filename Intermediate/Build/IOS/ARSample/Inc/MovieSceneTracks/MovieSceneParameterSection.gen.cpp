// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Sections/MovieSceneParameterSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneParameterSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FColorParameterNameAndCurves();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FVectorParameterNameAndCurves();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterNameAndCurve();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParameterSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParameterSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
// End Cross Module References
class UScriptStruct* FColorParameterNameAndCurves::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FColorParameterNameAndCurves_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FColorParameterNameAndCurves, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("ColorParameterNameAndCurves"), sizeof(FColorParameterNameAndCurves), Get_Z_Construct_UScriptStruct_FColorParameterNameAndCurves_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FColorParameterNameAndCurves(FColorParameterNameAndCurves::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("ColorParameterNameAndCurves"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFColorParameterNameAndCurves
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFColorParameterNameAndCurves()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ColorParameterNameAndCurves")),new UScriptStruct::TCppStructOps<FColorParameterNameAndCurves>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFColorParameterNameAndCurves;
	UScriptStruct* Z_Construct_UScriptStruct_FColorParameterNameAndCurves()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FColorParameterNameAndCurves_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ColorParameterNameAndCurves"), sizeof(FColorParameterNameAndCurves), Get_Z_Construct_UScriptStruct_FColorParameterNameAndCurves_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
				{ "ToolTip", "Structure representing an animated vector parameter and it's associated animation curve." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColorParameterNameAndCurves>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaCurve_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
				{ "ToolTip", "The curve which contains the animation data for the alpha component of the color parameter." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "AlphaCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FColorParameterNameAndCurves, AlphaCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_AlphaCurve_MetaData, ARRAY_COUNT(NewProp_AlphaCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueCurve_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
				{ "ToolTip", "The curve which contains the animation data for the blue component of the color parameter." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlueCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "BlueCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FColorParameterNameAndCurves, BlueCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_BlueCurve_MetaData, ARRAY_COUNT(NewProp_BlueCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GreenCurve_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
				{ "ToolTip", "The curve which contains the animation data for the green component of the color parameter." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GreenCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "GreenCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FColorParameterNameAndCurves, GreenCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_GreenCurve_MetaData, ARRAY_COUNT(NewProp_GreenCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedCurve_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
				{ "ToolTip", "The curve which contains the animation data for the red component of the color parameter." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RedCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "RedCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FColorParameterNameAndCurves, RedCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_RedCurve_MetaData, ARRAY_COUNT(NewProp_RedCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FColorParameterNameAndCurves, Index), METADATA_PARAMS(NewProp_Index_MetaData, ARRAY_COUNT(NewProp_Index_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
				{ "ToolTip", "The name of the vector parameter which is being animated." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FColorParameterNameAndCurves, ParameterName), METADATA_PARAMS(NewProp_ParameterName_MetaData, ARRAY_COUNT(NewProp_ParameterName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AlphaCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlueCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GreenCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RedCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ColorParameterNameAndCurves",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FColorParameterNameAndCurves),
				alignof(FColorParameterNameAndCurves),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FColorParameterNameAndCurves_CRC() { return 3996588725U; }
class UScriptStruct* FVectorParameterNameAndCurves::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("VectorParameterNameAndCurves"), sizeof(FVectorParameterNameAndCurves), Get_Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVectorParameterNameAndCurves(FVectorParameterNameAndCurves::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("VectorParameterNameAndCurves"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFVectorParameterNameAndCurves
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFVectorParameterNameAndCurves()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VectorParameterNameAndCurves")),new UScriptStruct::TCppStructOps<FVectorParameterNameAndCurves>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFVectorParameterNameAndCurves;
	UScriptStruct* Z_Construct_UScriptStruct_FVectorParameterNameAndCurves()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VectorParameterNameAndCurves"), sizeof(FVectorParameterNameAndCurves), Get_Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
				{ "ToolTip", "Structure representing an animated vector parameter and it's associated animation curve." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVectorParameterNameAndCurves>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZCurve_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
				{ "ToolTip", "The curve which contains the animation data for the z component of the vector parameter." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ZCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "ZCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVectorParameterNameAndCurves, ZCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_ZCurve_MetaData, ARRAY_COUNT(NewProp_ZCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YCurve_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
				{ "ToolTip", "The curve which contains the animation data for the y component of the vector parameter." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_YCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "YCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVectorParameterNameAndCurves, YCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_YCurve_MetaData, ARRAY_COUNT(NewProp_YCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XCurve_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
				{ "ToolTip", "The curve which contains the animation data for the x component of the vector parameter." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_XCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "XCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVectorParameterNameAndCurves, XCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_XCurve_MetaData, ARRAY_COUNT(NewProp_XCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVectorParameterNameAndCurves, Index), METADATA_PARAMS(NewProp_Index_MetaData, ARRAY_COUNT(NewProp_Index_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
				{ "ToolTip", "The name of the vector parameter which is being animated." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVectorParameterNameAndCurves, ParameterName), METADATA_PARAMS(NewProp_ParameterName_MetaData, ARRAY_COUNT(NewProp_ParameterName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ZCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_YCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_XCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"VectorParameterNameAndCurves",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FVectorParameterNameAndCurves),
				alignof(FVectorParameterNameAndCurves),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_CRC() { return 1936381140U; }
class UScriptStruct* FScalarParameterNameAndCurve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScalarParameterNameAndCurve, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("ScalarParameterNameAndCurve"), sizeof(FScalarParameterNameAndCurve), Get_Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScalarParameterNameAndCurve(FScalarParameterNameAndCurve::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("ScalarParameterNameAndCurve"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFScalarParameterNameAndCurve
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFScalarParameterNameAndCurve()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ScalarParameterNameAndCurve")),new UScriptStruct::TCppStructOps<FScalarParameterNameAndCurve>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFScalarParameterNameAndCurve;
	UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterNameAndCurve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScalarParameterNameAndCurve"), sizeof(FScalarParameterNameAndCurve), Get_Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
				{ "ToolTip", "Structure representing an animated scalar parameter and it's associated animation curve." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScalarParameterNameAndCurve>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterCurve_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
				{ "ToolTip", "The curve which contains the animation data for the scalar parameter." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "ParameterCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FScalarParameterNameAndCurve, ParameterCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_ParameterCurve_MetaData, ARRAY_COUNT(NewProp_ParameterCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FScalarParameterNameAndCurve, Index), METADATA_PARAMS(NewProp_Index_MetaData, ARRAY_COUNT(NewProp_Index_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
				{ "ToolTip", "The name of the scalar parameter which is being animated." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FScalarParameterNameAndCurve, ParameterName), METADATA_PARAMS(NewProp_ParameterName_MetaData, ARRAY_COUNT(NewProp_ParameterName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ScalarParameterNameAndCurve",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FScalarParameterNameAndCurve),
				alignof(FScalarParameterNameAndCurve),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_CRC() { return 65504908U; }
	void UMovieSceneParameterSection::StaticRegisterNativesUMovieSceneParameterSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneParameterSection_NoRegister()
	{
		return UMovieSceneParameterSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneParameterSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Sections/MovieSceneParameterSection.h" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
				{ "ToolTip", "A single movie scene section which can contain data for multiple named parameters." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorParameterNamesAndCurves_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
				{ "ToolTip", "The vector parameter names and their associated curves." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColorParameterNamesAndCurves = { UE4CodeGen_Private::EPropertyClass::Array, "ColorParameterNamesAndCurves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneParameterSection, ColorParameterNamesAndCurves), METADATA_PARAMS(NewProp_ColorParameterNamesAndCurves_MetaData, ARRAY_COUNT(NewProp_ColorParameterNamesAndCurves_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorParameterNamesAndCurves_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorParameterNamesAndCurves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FColorParameterNameAndCurves, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorParameterNamesAndCurves_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
				{ "ToolTip", "The vector parameter names and their associated curves." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VectorParameterNamesAndCurves = { UE4CodeGen_Private::EPropertyClass::Array, "VectorParameterNamesAndCurves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneParameterSection, VectorParameterNamesAndCurves), METADATA_PARAMS(NewProp_VectorParameterNamesAndCurves_MetaData, ARRAY_COUNT(NewProp_VectorParameterNamesAndCurves_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorParameterNamesAndCurves_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorParameterNamesAndCurves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVectorParameterNameAndCurves, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalarParameterNamesAndCurves_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
				{ "ToolTip", "The scalar parameter names and their associated curves." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScalarParameterNamesAndCurves = { UE4CodeGen_Private::EPropertyClass::Array, "ScalarParameterNamesAndCurves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneParameterSection, ScalarParameterNamesAndCurves), METADATA_PARAMS(NewProp_ScalarParameterNamesAndCurves_MetaData, ARRAY_COUNT(NewProp_ScalarParameterNamesAndCurves_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScalarParameterNamesAndCurves_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ScalarParameterNamesAndCurves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FScalarParameterNameAndCurve, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColorParameterNamesAndCurves,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColorParameterNamesAndCurves_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorParameterNamesAndCurves,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorParameterNamesAndCurves_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScalarParameterNamesAndCurves,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScalarParameterNamesAndCurves_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneParameterSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneParameterSection::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00280080u,
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
	IMPLEMENT_CLASS(UMovieSceneParameterSection, 4058485793);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneParameterSection(Z_Construct_UClass_UMovieSceneParameterSection, &UMovieSceneParameterSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneParameterSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneParameterSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
