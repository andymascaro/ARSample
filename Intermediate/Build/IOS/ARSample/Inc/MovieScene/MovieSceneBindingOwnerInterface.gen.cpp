// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieSceneBindingOwnerInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBindingOwnerInterface() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingOwnerInterface_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingOwnerInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UMovieSceneBindingOwnerInterface::StaticRegisterNativesUMovieSceneBindingOwnerInterface()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneBindingOwnerInterface_NoRegister()
	{
		return UMovieSceneBindingOwnerInterface::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneBindingOwnerInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterface,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MovieSceneBindingOwnerInterface.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<IMovieSceneBindingOwnerInterface>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneBindingOwnerInterface::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00104081u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneBindingOwnerInterface, 2898976090);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneBindingOwnerInterface(Z_Construct_UClass_UMovieSceneBindingOwnerInterface, &UMovieSceneBindingOwnerInterface::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneBindingOwnerInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBindingOwnerInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
