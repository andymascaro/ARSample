// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieSceneSignedObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSignedObject() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSignedObject_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSignedObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UMovieSceneSignedObject::StaticRegisterNativesUMovieSceneSignedObject()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneSignedObject_NoRegister()
	{
		return UMovieSceneSignedObject::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneSignedObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MovieSceneSignedObject.h" },
				{ "ModuleRelativePath", "Public/MovieSceneSignedObject.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Signature_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSignedObject.h" },
				{ "ToolTip", "Unique generation signature" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Signature = { UE4CodeGen_Private::EPropertyClass::Struct, "Signature", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSignedObject, Signature), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_Signature_MetaData, ARRAY_COUNT(NewProp_Signature_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Signature,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneSignedObject>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneSignedObject::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UMovieSceneSignedObject, 2843833249);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneSignedObject(Z_Construct_UClass_UMovieSceneSignedObject, &UMovieSceneSignedObject::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneSignedObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSignedObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
