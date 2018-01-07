// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Tracks/MovieSceneMaterialParameterCollectionTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMaterialParameterCollectionTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMaterialTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
// End Cross Module References
	void UMovieSceneMaterialParameterCollectionTrack::StaticRegisterNativesUMovieSceneMaterialParameterCollectionTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_NoRegister()
	{
		return UMovieSceneMaterialParameterCollectionTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneMaterialTrack,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Tracks/MovieSceneMaterialParameterCollectionTrack.h" },
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneMaterialParameterCollectionTrack.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "Handles manipulation of material parameter collections in a movie scene." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MPC_MetaData[] = {
				{ "Category", "General" },
				{ "DisplayName", "Material Parameter Collection" },
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneMaterialParameterCollectionTrack.h" },
				{ "ToolTip", "The material parameter collection to manipulate" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MPC = { UE4CodeGen_Private::EPropertyClass::Object, "MPC", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneMaterialParameterCollectionTrack, MPC), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(NewProp_MPC_MetaData, ARRAY_COUNT(NewProp_MPC_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MPC,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneMaterialParameterCollectionTrack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneMaterialParameterCollectionTrack::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UMovieSceneMaterialParameterCollectionTrack, 2675813821);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneMaterialParameterCollectionTrack(Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack, &UMovieSceneMaterialParameterCollectionTrack::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneMaterialParameterCollectionTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMaterialParameterCollectionTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
