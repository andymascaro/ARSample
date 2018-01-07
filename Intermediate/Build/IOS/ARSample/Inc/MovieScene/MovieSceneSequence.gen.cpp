// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieSceneSequence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSequence() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSignedObject();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedMovieSceneEvaluationTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackCompilationParams();
// End Cross Module References
	void UMovieSceneSequence::StaticRegisterNativesUMovieSceneSequence()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister()
	{
		return UMovieSceneSequence::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneSequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneSignedObject,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MovieSceneSequence.h" },
				{ "ModuleRelativePath", "Public/MovieSceneSequence.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "Abstract base class for movie scene animations (C++ version)." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bParentContextsAreSignificant_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSequence.h" },
				{ "ToolTip", "true if the result of GetParentObject is significant in object resolution for LocateBoundObjects.\nWhen true, if GetParentObject returns nullptr, the PlaybackContext will be used for LocateBoundObjects, other wise the object's parent will be used\nWhen false, the PlaybackContext will always be used for LocateBoundObjects" },
			};
#endif
			auto NewProp_bParentContextsAreSignificant_SetBit = [](void* Obj){ ((UMovieSceneSequence*)Obj)->bParentContextsAreSignificant = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bParentContextsAreSignificant = { UE4CodeGen_Private::EPropertyClass::Bool, "bParentContextsAreSignificant", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMovieSceneSequence), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bParentContextsAreSignificant_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bParentContextsAreSignificant_MetaData, ARRAY_COUNT(NewProp_bParentContextsAreSignificant_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancedSubSequenceEvaluationTemplates_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSequence.h" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_InstancedSubSequenceEvaluationTemplates = { UE4CodeGen_Private::EPropertyClass::Map, "InstancedSubSequenceEvaluationTemplates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSequence, InstancedSubSequenceEvaluationTemplates), METADATA_PARAMS(NewProp_InstancedSubSequenceEvaluationTemplates_MetaData, ARRAY_COUNT(NewProp_InstancedSubSequenceEvaluationTemplates_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstancedSubSequenceEvaluationTemplates_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Object, "InstancedSubSequenceEvaluationTemplates_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstancedSubSequenceEvaluationTemplates_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "InstancedSubSequenceEvaluationTemplates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FCachedMovieSceneEvaluationTemplate, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateParameters_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSequence.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TemplateParameters = { UE4CodeGen_Private::EPropertyClass::Struct, "TemplateParameters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSequence, TemplateParameters), Z_Construct_UScriptStruct_FMovieSceneTrackCompilationParams, METADATA_PARAMS(NewProp_TemplateParameters_MetaData, ARRAY_COUNT(NewProp_TemplateParameters_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvaluationTemplate_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSequence.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EvaluationTemplate = { UE4CodeGen_Private::EPropertyClass::Struct, "EvaluationTemplate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSequence, EvaluationTemplate), Z_Construct_UScriptStruct_FCachedMovieSceneEvaluationTemplate, METADATA_PARAMS(NewProp_EvaluationTemplate_MetaData, ARRAY_COUNT(NewProp_EvaluationTemplate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bParentContextsAreSignificant,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstancedSubSequenceEvaluationTemplates,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstancedSubSequenceEvaluationTemplates_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstancedSubSequenceEvaluationTemplates_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TemplateParameters,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EvaluationTemplate,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneSequence>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneSequence::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
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
	IMPLEMENT_CLASS(UMovieSceneSequence, 2674808818);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneSequence(Z_Construct_UClass_UMovieSceneSequence, &UMovieSceneSequence::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneSequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSequence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
