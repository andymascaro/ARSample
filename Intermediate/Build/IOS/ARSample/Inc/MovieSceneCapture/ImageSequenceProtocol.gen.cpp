// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Protocols/ImageSequenceProtocol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImageSequenceProtocol() {}
// Cross Module References
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UBmpImageCaptureSettings_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UBmpImageCaptureSettings();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCaptureProtocolSettings();
	UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageCaptureSettings_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageCaptureSettings();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UFrameGrabberProtocolSettings();
// End Cross Module References
	void UBmpImageCaptureSettings::StaticRegisterNativesUBmpImageCaptureSettings()
	{
	}
	UClass* Z_Construct_UClass_UBmpImageCaptureSettings_NoRegister()
	{
		return UBmpImageCaptureSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UBmpImageCaptureSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneCaptureProtocolSettings,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Image Encoding" },
				{ "IncludePath", "Protocols/ImageSequenceProtocol.h" },
				{ "ModuleRelativePath", "Public/Protocols/ImageSequenceProtocol.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBmpImageCaptureSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBmpImageCaptureSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
				nullptr, 0,
				"EditorPerProjectUserSettings",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBmpImageCaptureSettings, 3949786146);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBmpImageCaptureSettings(Z_Construct_UClass_UBmpImageCaptureSettings, &UBmpImageCaptureSettings::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UBmpImageCaptureSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBmpImageCaptureSettings);
	void UImageCaptureSettings::StaticRegisterNativesUImageCaptureSettings()
	{
	}
	UClass* Z_Construct_UClass_UImageCaptureSettings_NoRegister()
	{
		return UImageCaptureSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UImageCaptureSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UFrameGrabberProtocolSettings,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Image Encoding" },
				{ "IncludePath", "Protocols/ImageSequenceProtocol.h" },
				{ "ModuleRelativePath", "Public/Protocols/ImageSequenceProtocol.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionQuality_MetaData[] = {
				{ "Category", "ImageSettings" },
				{ "ClampMax", "100" },
				{ "ClampMin", "1" },
				{ "ModuleRelativePath", "Public/Protocols/ImageSequenceProtocol.h" },
				{ "ToolTip", "Level of compression to apply to the image, between 1 (worst quality, best compression) and 100 (best quality, worst compression)" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompressionQuality = { UE4CodeGen_Private::EPropertyClass::Int, "CompressionQuality", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UImageCaptureSettings, CompressionQuality), METADATA_PARAMS(NewProp_CompressionQuality_MetaData, ARRAY_COUNT(NewProp_CompressionQuality_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressionQuality,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UImageCaptureSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UImageCaptureSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100084u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"EditorPerProjectUserSettings",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UImageCaptureSettings, 2923365439);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UImageCaptureSettings(Z_Construct_UClass_UImageCaptureSettings, &UImageCaptureSettings::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UImageCaptureSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImageCaptureSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
