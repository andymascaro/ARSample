// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Sections/MovieSceneColorSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneColorSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneColorSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneColorSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
// End Cross Module References
class UScriptStruct* FMovieSceneColorKeyStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneColorKeyStruct"), sizeof(FMovieSceneColorKeyStruct), Get_Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneColorKeyStruct(FMovieSceneColorKeyStruct::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneColorKeyStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneColorKeyStruct
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneColorKeyStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneColorKeyStruct")),new UScriptStruct::TCppStructOps<FMovieSceneColorKeyStruct>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneColorKeyStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneColorKeyStruct"), sizeof(FMovieSceneColorKeyStruct), Get_Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneColorSection.h" },
				{ "ToolTip", "Proxy structure for color section key data." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneColorKeyStruct>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "Category", "Key" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneColorSection.h" },
				{ "ToolTip", "The key's time." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneColorKeyStruct, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
				{ "Category", "Key" },
				{ "InlineColorPicker", "" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneColorSection.h" },
				{ "ToolTip", "The key's color value." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color = { UE4CodeGen_Private::EPropertyClass::Struct, "Color", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneColorKeyStruct, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_Color_MetaData, ARRAY_COUNT(NewProp_Color_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Color,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieSceneKeyStruct,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneColorKeyStruct",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneColorKeyStruct),
				alignof(FMovieSceneColorKeyStruct),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_CRC() { return 1909316696U; }
	void UMovieSceneColorSection::StaticRegisterNativesUMovieSceneColorSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneColorSection_NoRegister()
	{
		return UMovieSceneColorSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneColorSection()
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
				{ "IncludePath", "Sections/MovieSceneColorSection.h" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneColorSection.h" },
				{ "ToolTip", "A single floating point section" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaCurve_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneColorSection.h" },
				{ "ToolTip", "Alpha curve data" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "AlphaCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneColorSection, AlphaCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_AlphaCurve_MetaData, ARRAY_COUNT(NewProp_AlphaCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueCurve_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneColorSection.h" },
				{ "ToolTip", "Blue curve data" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlueCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "BlueCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneColorSection, BlueCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_BlueCurve_MetaData, ARRAY_COUNT(NewProp_BlueCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GreenCurve_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneColorSection.h" },
				{ "ToolTip", "Green curve data" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GreenCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "GreenCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneColorSection, GreenCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_GreenCurve_MetaData, ARRAY_COUNT(NewProp_GreenCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedCurve_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneColorSection.h" },
				{ "ToolTip", "Red curve data" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RedCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "RedCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneColorSection, RedCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_RedCurve_MetaData, ARRAY_COUNT(NewProp_RedCurve_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AlphaCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlueCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GreenCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RedCurve,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneColorSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneColorSection::StaticClass,
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
	IMPLEMENT_CLASS(UMovieSceneColorSection, 2440267112);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneColorSection(Z_Construct_UClass_UMovieSceneColorSection, &UMovieSceneColorSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneColorSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneColorSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
