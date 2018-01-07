// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LevelSequence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequence() {}
// Cross Module References
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObject();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReferences();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
// End Cross Module References
	void ULevelSequence::StaticRegisterNativesULevelSequence()
	{
	}
	UClass* Z_Construct_UClass_ULevelSequence_NoRegister()
	{
		return ULevelSequence::StaticClass();
	}
	UClass* Z_Construct_UClass_ULevelSequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneSequence,
				(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "LevelSequence.h" },
				{ "ModuleRelativePath", "Public/LevelSequence.h" },
				{ "ToolTip", "Movie scene animation for Actors." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PossessedObjects_MetaData[] = {
				{ "ModuleRelativePath", "Public/LevelSequence.h" },
				{ "ToolTip", "Deprecated property housing old possessed object bindings" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_PossessedObjects = { UE4CodeGen_Private::EPropertyClass::Map, "PossessedObjects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080020000000, 1, nullptr, STRUCT_OFFSET(ULevelSequence, PossessedObjects_DEPRECATED), METADATA_PARAMS(NewProp_PossessedObjects_MetaData, ARRAY_COUNT(NewProp_PossessedObjects_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_PossessedObjects_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "PossessedObjects_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PossessedObjects_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "PossessedObjects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000020000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FLevelSequenceObject, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BindingReferences_MetaData[] = {
				{ "ModuleRelativePath", "Public/LevelSequence.h" },
				{ "ToolTip", "References to bound objects." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BindingReferences = { UE4CodeGen_Private::EPropertyClass::Struct, "BindingReferences", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(ULevelSequence, BindingReferences), Z_Construct_UScriptStruct_FLevelSequenceBindingReferences, METADATA_PARAMS(NewProp_BindingReferences_MetaData, ARRAY_COUNT(NewProp_BindingReferences_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectReferences_MetaData[] = {
				{ "ModuleRelativePath", "Public/LevelSequence.h" },
				{ "ToolTip", "Legacy object references - should be read-only. Not deprecated because they need to still be saved" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectReferences = { UE4CodeGen_Private::EPropertyClass::Struct, "ObjectReferences", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(ULevelSequence, ObjectReferences), Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap, METADATA_PARAMS(NewProp_ObjectReferences_MetaData, ARRAY_COUNT(NewProp_ObjectReferences_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieScene_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LevelSequence.h" },
				{ "ToolTip", "Pointer to the movie scene that controls this animation." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovieScene = { UE4CodeGen_Private::EPropertyClass::Object, "MovieScene", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(ULevelSequence, MovieScene), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(NewProp_MovieScene_MetaData, ARRAY_COUNT(NewProp_MovieScene_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PossessedObjects,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PossessedObjects_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PossessedObjects_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BindingReferences,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectReferences,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovieScene,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULevelSequence>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULevelSequence::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(ULevelSequence, 4043806558);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelSequence(Z_Construct_UClass_ULevelSequence, &ULevelSequence::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ULevelSequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
