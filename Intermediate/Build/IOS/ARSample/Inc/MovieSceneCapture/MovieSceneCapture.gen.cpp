// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieSceneCapture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCapture() {}
// Cross Module References
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCapture_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCapture();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
	MOVIESCENECAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCaptureSettings();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCaptureProtocolSettings_NoRegister();
	MOVIESCENECAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FCaptureProtocolID();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCaptureInterface_NoRegister();
// End Cross Module References
	void UMovieSceneCapture::StaticRegisterNativesUMovieSceneCapture()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneCapture_NoRegister()
	{
		return UMovieSceneCapture::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneCapture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MovieSceneCapture.h" },
				{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "Class responsible for capturing scene data" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InheritedCommandLineArguments_MetaData[] = {
				{ "Category", "General" },
				{ "EditCondition", "bUseSeparateProcess" },
				{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
				{ "ToolTip", "Command line arguments inherited from this process" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InheritedCommandLineArguments = { UE4CodeGen_Private::EPropertyClass::Str, "InheritedCommandLineArguments", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000002001, 1, nullptr, STRUCT_OFFSET(UMovieSceneCapture, InheritedCommandLineArguments), METADATA_PARAMS(NewProp_InheritedCommandLineArguments_MetaData, ARRAY_COUNT(NewProp_InheritedCommandLineArguments_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalCommandLineArguments_MetaData[] = {
				{ "Category", "General" },
				{ "EditCondition", "bUseSeparateProcess" },
				{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
				{ "ToolTip", "Additional command line arguments to pass to the external process when capturing" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdditionalCommandLineArguments = { UE4CodeGen_Private::EPropertyClass::Str, "AdditionalCommandLineArguments", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, STRUCT_OFFSET(UMovieSceneCapture, AdditionalCommandLineArguments), METADATA_PARAMS(NewProp_AdditionalCommandLineArguments_MetaData, ARRAY_COUNT(NewProp_AdditionalCommandLineArguments_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCloseEditorWhenCaptureStarts_MetaData[] = {
				{ "Category", "General" },
				{ "EditCondition", "bUseSeparateProcess" },
				{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
				{ "ToolTip", "When enabled, the editor will shutdown when the capture starts" },
			};
#endif
			auto NewProp_bCloseEditorWhenCaptureStarts_SetBit = [](void* Obj){ ((UMovieSceneCapture*)Obj)->bCloseEditorWhenCaptureStarts = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCloseEditorWhenCaptureStarts = { UE4CodeGen_Private::EPropertyClass::Bool, "bCloseEditorWhenCaptureStarts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMovieSceneCapture), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCloseEditorWhenCaptureStarts_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCloseEditorWhenCaptureStarts_MetaData, ARRAY_COUNT(NewProp_bCloseEditorWhenCaptureStarts_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSeparateProcess_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
				{ "ToolTip", "Whether to capture the movie in a separate process or not" },
			};
#endif
			auto NewProp_bUseSeparateProcess_SetBit = [](void* Obj){ ((UMovieSceneCapture*)Obj)->bUseSeparateProcess = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSeparateProcess = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseSeparateProcess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMovieSceneCapture), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseSeparateProcess_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseSeparateProcess_MetaData, ARRAY_COUNT(NewProp_bUseSeparateProcess_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
				{ "Category", "CaptureSettings" },
				{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
				{ "ShowOnlyInnerProperties", "" },
				{ "ToolTip", "Settings that define how to capture" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings = { UE4CodeGen_Private::EPropertyClass::Struct, "Settings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UMovieSceneCapture, Settings), Z_Construct_UScriptStruct_FMovieSceneCaptureSettings, METADATA_PARAMS(NewProp_Settings_MetaData, ARRAY_COUNT(NewProp_Settings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProtocolSettings_MetaData[] = {
				{ "Category", "CaptureSettings" },
				{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
				{ "ToolTip", "Settings specific to the capture protocol" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProtocolSettings = { UE4CodeGen_Private::EPropertyClass::Object, "ProtocolSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneCapture, ProtocolSettings), Z_Construct_UClass_UMovieSceneCaptureProtocolSettings_NoRegister, METADATA_PARAMS(NewProp_ProtocolSettings_MetaData, ARRAY_COUNT(NewProp_ProtocolSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureType_MetaData[] = {
				{ "Category", "CaptureSettings" },
				{ "DisplayName", "Output Format" },
				{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
				{ "ToolTip", "The type of capture protocol to use" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CaptureType = { UE4CodeGen_Private::EPropertyClass::Struct, "CaptureType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UMovieSceneCapture, CaptureType), Z_Construct_UScriptStruct_FCaptureProtocolID, METADATA_PARAMS(NewProp_CaptureType_MetaData, ARRAY_COUNT(NewProp_CaptureType_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InheritedCommandLineArguments,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdditionalCommandLineArguments,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCloseEditorWhenCaptureStarts,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseSeparateProcess,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Settings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProtocolSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CaptureType,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UMovieSceneCaptureInterface_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneCapture, IMovieSceneCaptureInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneCapture>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneCapture::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100084u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"EditorPerProjectUserSettings",
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneCapture, 717532794);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneCapture(Z_Construct_UClass_UMovieSceneCapture, &UMovieSceneCapture::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UMovieSceneCapture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCapture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
