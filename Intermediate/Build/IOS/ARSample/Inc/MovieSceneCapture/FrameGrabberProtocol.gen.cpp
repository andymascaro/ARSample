// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Protocols/FrameGrabberProtocol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFrameGrabberProtocol() {}
// Cross Module References
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UFrameGrabberProtocolSettings_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UFrameGrabberProtocolSettings();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCaptureProtocolSettings();
	UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
// End Cross Module References
	void UFrameGrabberProtocolSettings::StaticRegisterNativesUFrameGrabberProtocolSettings()
	{
	}
	UClass* Z_Construct_UClass_UFrameGrabberProtocolSettings_NoRegister()
	{
		return UFrameGrabberProtocolSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UFrameGrabberProtocolSettings()
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
				{ "IncludePath", "Protocols/FrameGrabberProtocol.h" },
				{ "ModuleRelativePath", "Public/Protocols/FrameGrabberProtocol.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UFrameGrabberProtocolSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UFrameGrabberProtocolSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UFrameGrabberProtocolSettings, 1907223955);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFrameGrabberProtocolSettings(Z_Construct_UClass_UFrameGrabberProtocolSettings, &UFrameGrabberProtocolSettings::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UFrameGrabberProtocolSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFrameGrabberProtocolSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
