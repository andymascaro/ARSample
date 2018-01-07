// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Sections/MovieSceneSkeletalAnimationSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSkeletalAnimationSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
class UScriptStruct* FMovieSceneSkeletalAnimationParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneSkeletalAnimationParams"), sizeof(FMovieSceneSkeletalAnimationParams), Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSkeletalAnimationParams(FMovieSceneSkeletalAnimationParams::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneSkeletalAnimationParams"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneSkeletalAnimationParams
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneSkeletalAnimationParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSkeletalAnimationParams")),new UScriptStruct::TCppStructOps<FMovieSceneSkeletalAnimationParams>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneSkeletalAnimationParams;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSkeletalAnimationParams"), sizeof(FMovieSceneSkeletalAnimationParams), Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSkeletalAnimationParams>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
				{ "ToolTip", "The weight curve for this animation section" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Weight = { UE4CodeGen_Private::EPropertyClass::Struct, "Weight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, Weight), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_Weight_MetaData, ARRAY_COUNT(NewProp_Weight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
				{ "ToolTip", "The slot name to use for the animation" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName = { UE4CodeGen_Private::EPropertyClass::Name, "SlotName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, SlotName), METADATA_PARAMS(NewProp_SlotName_MetaData, ARRAY_COUNT(NewProp_SlotName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
				{ "ToolTip", "Reverse the playback of the animation clip" },
			};
#endif
			auto NewProp_bReverse_SetBit = [](void* Obj){ ((FMovieSceneSkeletalAnimationParams*)Obj)->bReverse = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReverse = { UE4CodeGen_Private::EPropertyClass::Bool, "bReverse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FMovieSceneSkeletalAnimationParams), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReverse_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bReverse_MetaData, ARRAY_COUNT(NewProp_bReverse_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
				{ "ToolTip", "The playback rate of the animation clip" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "PlayRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, PlayRate), METADATA_PARAMS(NewProp_PlayRate_MetaData, ARRAY_COUNT(NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndOffset_MetaData[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
				{ "ToolTip", "The offset into the end of the animation clip" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndOffset = { UE4CodeGen_Private::EPropertyClass::Float, "EndOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, EndOffset), METADATA_PARAMS(NewProp_EndOffset_MetaData, ARRAY_COUNT(NewProp_EndOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
				{ "ToolTip", "The offset into the beginning of the animation clip" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartOffset = { UE4CodeGen_Private::EPropertyClass::Float, "StartOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, StartOffset), METADATA_PARAMS(NewProp_StartOffset_MetaData, ARRAY_COUNT(NewProp_StartOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[] = {
				{ "AllowedClasses", "AnimSequence, AnimComposite" },
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
				{ "ToolTip", "The animation this section plays" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation = { UE4CodeGen_Private::EPropertyClass::Object, "Animation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(NewProp_Animation_MetaData, ARRAY_COUNT(NewProp_Animation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Weight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SlotName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReverse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Animation,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneSkeletalAnimationParams",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneSkeletalAnimationParams),
				alignof(FMovieSceneSkeletalAnimationParams),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_CRC() { return 3231431418U; }
	void UMovieSceneSkeletalAnimationSection::StaticRegisterNativesUMovieSceneSkeletalAnimationSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_NoRegister()
	{
		return UMovieSceneSkeletalAnimationSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationSection()
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
				{ "IncludePath", "Sections/MovieSceneSkeletalAnimationSection.h" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
				{ "ToolTip", "Movie scene section that control skeletal animation" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName = { UE4CodeGen_Private::EPropertyClass::Name, "SlotName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, SlotName_DEPRECATED), METADATA_PARAMS(NewProp_SlotName_MetaData, ARRAY_COUNT(NewProp_SlotName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
			};
#endif
			auto NewProp_bReverse_SetBit = [](void* Obj){ ((UMovieSceneSkeletalAnimationSection*)Obj)->bReverse_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReverse = { UE4CodeGen_Private::EPropertyClass::Bool, "bReverse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMovieSceneSkeletalAnimationSection), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReverse_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bReverse_MetaData, ARRAY_COUNT(NewProp_bReverse_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "PlayRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, PlayRate_DEPRECATED), METADATA_PARAMS(NewProp_PlayRate_MetaData, ARRAY_COUNT(NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndOffset_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndOffset = { UE4CodeGen_Private::EPropertyClass::Float, "EndOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, EndOffset_DEPRECATED), METADATA_PARAMS(NewProp_EndOffset_MetaData, ARRAY_COUNT(NewProp_EndOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartOffset = { UE4CodeGen_Private::EPropertyClass::Float, "StartOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, StartOffset_DEPRECATED), METADATA_PARAMS(NewProp_StartOffset_MetaData, ARRAY_COUNT(NewProp_StartOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation = { UE4CodeGen_Private::EPropertyClass::Object, "Animation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, Animation_DEPRECATED), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(NewProp_Animation_MetaData, ARRAY_COUNT(NewProp_Animation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimSequence = { UE4CodeGen_Private::EPropertyClass::Object, "AnimSequence", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, AnimSequence_DEPRECATED), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(NewProp_AnimSequence_MetaData, ARRAY_COUNT(NewProp_AnimSequence_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
				{ "ShowOnlyInnerProperties", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params = { UE4CodeGen_Private::EPropertyClass::Struct, "Params", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, Params), Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams, METADATA_PARAMS(NewProp_Params_MetaData, ARRAY_COUNT(NewProp_Params_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SlotName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReverse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Animation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimSequence,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Params,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneSkeletalAnimationSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneSkeletalAnimationSection::StaticClass,
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
	IMPLEMENT_CLASS(UMovieSceneSkeletalAnimationSection, 1440955477);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneSkeletalAnimationSection(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection, &UMovieSceneSkeletalAnimationSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneSkeletalAnimationSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSkeletalAnimationSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
