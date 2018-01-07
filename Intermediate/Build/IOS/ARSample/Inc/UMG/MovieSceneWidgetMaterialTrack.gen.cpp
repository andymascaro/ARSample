// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Animation/MovieSceneWidgetMaterialTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneWidgetMaterialTrack() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UMovieSceneWidgetMaterialTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMaterialTrack();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UMovieSceneWidgetMaterialTrack::StaticRegisterNativesUMovieSceneWidgetMaterialTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_NoRegister()
	{
		return UMovieSceneWidgetMaterialTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneWidgetMaterialTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneMaterialTrack,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Animation/MovieSceneWidgetMaterialTrack.h" },
				{ "ModuleRelativePath", "Public/Animation/MovieSceneWidgetMaterialTrack.h" },
				{ "ToolTip", "A material track which is specialized for materials which are owned by widget brushes." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/MovieSceneWidgetMaterialTrack.h" },
				{ "ToolTip", "The name of this track, generated from the property name path." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TrackName = { UE4CodeGen_Private::EPropertyClass::Name, "TrackName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneWidgetMaterialTrack, TrackName), METADATA_PARAMS(NewProp_TrackName_MetaData, ARRAY_COUNT(NewProp_TrackName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushPropertyNamePath_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/MovieSceneWidgetMaterialTrack.h" },
				{ "ToolTip", "The name of the brush property which will be animated by this track." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BrushPropertyNamePath = { UE4CodeGen_Private::EPropertyClass::Array, "BrushPropertyNamePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneWidgetMaterialTrack, BrushPropertyNamePath), METADATA_PARAMS(NewProp_BrushPropertyNamePath_MetaData, ARRAY_COUNT(NewProp_BrushPropertyNamePath_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BrushPropertyNamePath_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "BrushPropertyNamePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BrushPropertyNamePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BrushPropertyNamePath_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneWidgetMaterialTrack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneWidgetMaterialTrack::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A80080u,
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
	IMPLEMENT_CLASS(UMovieSceneWidgetMaterialTrack, 1901402730);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneWidgetMaterialTrack(Z_Construct_UClass_UMovieSceneWidgetMaterialTrack, &UMovieSceneWidgetMaterialTrack::StaticClass, TEXT("/Script/UMG"), TEXT("UMovieSceneWidgetMaterialTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneWidgetMaterialTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
