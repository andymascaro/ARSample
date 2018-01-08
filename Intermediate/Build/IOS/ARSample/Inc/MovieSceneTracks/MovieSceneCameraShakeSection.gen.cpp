// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Sections/MovieSceneCameraShakeSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraShakeSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraAnimPlaySpace();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraShakeSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraShakeSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
// End Cross Module References
class UScriptStruct* FMovieSceneCameraShakeSectionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneCameraShakeSectionData"), sizeof(FMovieSceneCameraShakeSectionData), Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneCameraShakeSectionData(FMovieSceneCameraShakeSectionData::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneCameraShakeSectionData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraShakeSectionData
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraShakeSectionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneCameraShakeSectionData")),new UScriptStruct::TCppStructOps<FMovieSceneCameraShakeSectionData>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraShakeSectionData;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneCameraShakeSectionData"), sizeof(FMovieSceneCameraShakeSectionData), Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneCameraShakeSectionData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserDefinedPlaySpace_MetaData[] = {
				{ "Category", "Camera Shake" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserDefinedPlaySpace = { UE4CodeGen_Private::EPropertyClass::Struct, "UserDefinedPlaySpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneCameraShakeSectionData, UserDefinedPlaySpace), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_UserDefinedPlaySpace_MetaData, ARRAY_COUNT(NewProp_UserDefinedPlaySpace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaySpace_MetaData[] = {
				{ "Category", "Camera Shake" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlaySpace = { UE4CodeGen_Private::EPropertyClass::Byte, "PlaySpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneCameraShakeSectionData, PlaySpace), Z_Construct_UEnum_Engine_ECameraAnimPlaySpace, METADATA_PARAMS(NewProp_PlaySpace_MetaData, ARRAY_COUNT(NewProp_PlaySpace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayScale_MetaData[] = {
				{ "Category", "Camera Shake" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
				{ "ToolTip", "Scalar that affects shake intensity" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayScale = { UE4CodeGen_Private::EPropertyClass::Float, "PlayScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneCameraShakeSectionData, PlayScale), METADATA_PARAMS(NewProp_PlayScale_MetaData, ARRAY_COUNT(NewProp_PlayScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShakeClass_MetaData[] = {
				{ "Category", "Camera Shake" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
				{ "ToolTip", "Class of the camera shake to play" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ShakeClass = { UE4CodeGen_Private::EPropertyClass::Class, "ShakeClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneCameraShakeSectionData, ShakeClass), Z_Construct_UClass_UCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ShakeClass_MetaData, ARRAY_COUNT(NewProp_ShakeClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UserDefinedPlaySpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlaySpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShakeClass,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneCameraShakeSectionData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneCameraShakeSectionData),
				alignof(FMovieSceneCameraShakeSectionData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_CRC() { return 3727990820U; }
	void UMovieSceneCameraShakeSection::StaticRegisterNativesUMovieSceneCameraShakeSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneCameraShakeSection_NoRegister()
	{
		return UMovieSceneCameraShakeSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneCameraShakeSection()
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
				{ "IncludePath", "Sections/MovieSceneCameraShakeSection.h" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserDefinedPlaySpace_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserDefinedPlaySpace = { UE4CodeGen_Private::EPropertyClass::Struct, "UserDefinedPlaySpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneCameraShakeSection, UserDefinedPlaySpace_DEPRECATED), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_UserDefinedPlaySpace_MetaData, ARRAY_COUNT(NewProp_UserDefinedPlaySpace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaySpace_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlaySpace = { UE4CodeGen_Private::EPropertyClass::Byte, "PlaySpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneCameraShakeSection, PlaySpace_DEPRECATED), Z_Construct_UEnum_Engine_ECameraAnimPlaySpace, METADATA_PARAMS(NewProp_PlaySpace_MetaData, ARRAY_COUNT(NewProp_PlaySpace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayScale_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayScale = { UE4CodeGen_Private::EPropertyClass::Float, "PlayScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneCameraShakeSection, PlayScale_DEPRECATED), METADATA_PARAMS(NewProp_PlayScale_MetaData, ARRAY_COUNT(NewProp_PlayScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShakeClass_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ShakeClass = { UE4CodeGen_Private::EPropertyClass::Class, "ShakeClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneCameraShakeSection, ShakeClass_DEPRECATED), Z_Construct_UClass_UCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ShakeClass_MetaData, ARRAY_COUNT(NewProp_ShakeClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShakeData_MetaData[] = {
				{ "Category", "Cmaera Shake" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
				{ "ShowOnlyInnerProperties", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShakeData = { UE4CodeGen_Private::EPropertyClass::Struct, "ShakeData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneCameraShakeSection, ShakeData), Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData, METADATA_PARAMS(NewProp_ShakeData_MetaData, ARRAY_COUNT(NewProp_ShakeData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UserDefinedPlaySpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlaySpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShakeClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShakeData,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneCameraShakeSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneCameraShakeSection::StaticClass,
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
	IMPLEMENT_CLASS(UMovieSceneCameraShakeSection, 2285901591);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneCameraShakeSection(Z_Construct_UClass_UMovieSceneCameraShakeSection, &UMovieSceneCameraShakeSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneCameraShakeSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCameraShakeSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
