// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Sections/MovieSceneCameraAnimSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraAnimSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnim_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraAnimSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraAnimSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
// End Cross Module References
class UScriptStruct* FMovieSceneCameraAnimSectionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneCameraAnimSectionData"), sizeof(FMovieSceneCameraAnimSectionData), Get_Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneCameraAnimSectionData(FMovieSceneCameraAnimSectionData::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneCameraAnimSectionData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraAnimSectionData
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraAnimSectionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneCameraAnimSectionData")),new UScriptStruct::TCppStructOps<FMovieSceneCameraAnimSectionData>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraAnimSectionData;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneCameraAnimSectionData"), sizeof(FMovieSceneCameraAnimSectionData), Get_Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneCameraAnimSectionData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
				{ "Category", "Camera Anim" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
			};
#endif
			auto NewProp_bLooping_SetBit = [](void* Obj){ ((FMovieSceneCameraAnimSectionData*)Obj)->bLooping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping = { UE4CodeGen_Private::EPropertyClass::Bool, "bLooping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMovieSceneCameraAnimSectionData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLooping_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLooping_MetaData, ARRAY_COUNT(NewProp_bLooping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOutTime_MetaData[] = {
				{ "Category", "Camera Anim" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime = { UE4CodeGen_Private::EPropertyClass::Float, "BlendOutTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneCameraAnimSectionData, BlendOutTime), METADATA_PARAMS(NewProp_BlendOutTime_MetaData, ARRAY_COUNT(NewProp_BlendOutTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendInTime_MetaData[] = {
				{ "Category", "Camera Anim" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendInTime = { UE4CodeGen_Private::EPropertyClass::Float, "BlendInTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneCameraAnimSectionData, BlendInTime), METADATA_PARAMS(NewProp_BlendInTime_MetaData, ARRAY_COUNT(NewProp_BlendInTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayScale_MetaData[] = {
				{ "Category", "Camera Anim" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
				{ "ToolTip", "Scalar to control intensity of the animation." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayScale = { UE4CodeGen_Private::EPropertyClass::Float, "PlayScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneCameraAnimSectionData, PlayScale), METADATA_PARAMS(NewProp_PlayScale_MetaData, ARRAY_COUNT(NewProp_PlayScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
				{ "Category", "Camera Anim" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
				{ "ToolTip", "How fast to play back the animation." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "PlayRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneCameraAnimSectionData, PlayRate), METADATA_PARAMS(NewProp_PlayRate_MetaData, ARRAY_COUNT(NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraAnim_MetaData[] = {
				{ "Category", "Camera Anim" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
				{ "ToolTip", "The camera anim to play" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraAnim = { UE4CodeGen_Private::EPropertyClass::Object, "CameraAnim", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneCameraAnimSectionData, CameraAnim), Z_Construct_UClass_UCameraAnim_NoRegister, METADATA_PARAMS(NewProp_CameraAnim_MetaData, ARRAY_COUNT(NewProp_CameraAnim_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLooping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendOutTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendInTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraAnim,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneCameraAnimSectionData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneCameraAnimSectionData),
				alignof(FMovieSceneCameraAnimSectionData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_CRC() { return 3589646352U; }
	void UMovieSceneCameraAnimSection::StaticRegisterNativesUMovieSceneCameraAnimSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneCameraAnimSection_NoRegister()
	{
		return UMovieSceneCameraAnimSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneCameraAnimSection()
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
				{ "IncludePath", "Sections/MovieSceneCameraAnimSection.h" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
			};
#endif
			auto NewProp_bLooping_SetBit = [](void* Obj){ ((UMovieSceneCameraAnimSection*)Obj)->bLooping_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping = { UE4CodeGen_Private::EPropertyClass::Bool, "bLooping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMovieSceneCameraAnimSection), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLooping_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLooping_MetaData, ARRAY_COUNT(NewProp_bLooping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOutTime_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime = { UE4CodeGen_Private::EPropertyClass::Float, "BlendOutTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneCameraAnimSection, BlendOutTime_DEPRECATED), METADATA_PARAMS(NewProp_BlendOutTime_MetaData, ARRAY_COUNT(NewProp_BlendOutTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendInTime_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendInTime = { UE4CodeGen_Private::EPropertyClass::Float, "BlendInTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneCameraAnimSection, BlendInTime_DEPRECATED), METADATA_PARAMS(NewProp_BlendInTime_MetaData, ARRAY_COUNT(NewProp_BlendInTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayScale_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayScale = { UE4CodeGen_Private::EPropertyClass::Float, "PlayScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneCameraAnimSection, PlayScale_DEPRECATED), METADATA_PARAMS(NewProp_PlayScale_MetaData, ARRAY_COUNT(NewProp_PlayScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "PlayRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneCameraAnimSection, PlayRate_DEPRECATED), METADATA_PARAMS(NewProp_PlayRate_MetaData, ARRAY_COUNT(NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraAnim_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
				{ "ToolTip", "Deprecated members" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraAnim = { UE4CodeGen_Private::EPropertyClass::Object, "CameraAnim", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneCameraAnimSection, CameraAnim_DEPRECATED), Z_Construct_UClass_UCameraAnim_NoRegister, METADATA_PARAMS(NewProp_CameraAnim_MetaData, ARRAY_COUNT(NewProp_CameraAnim_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimData_MetaData[] = {
				{ "Category", "Camera Anim" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
				{ "ShowOnlyInnerProperties", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimData = { UE4CodeGen_Private::EPropertyClass::Struct, "AnimData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneCameraAnimSection, AnimData), Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData, METADATA_PARAMS(NewProp_AnimData_MetaData, ARRAY_COUNT(NewProp_AnimData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLooping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendOutTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendInTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraAnim,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimData,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneCameraAnimSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneCameraAnimSection::StaticClass,
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
	IMPLEMENT_CLASS(UMovieSceneCameraAnimSection, 2039413786);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneCameraAnimSection(Z_Construct_UClass_UMovieSceneCameraAnimSection, &UMovieSceneCameraAnimSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneCameraAnimSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCameraAnimSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
