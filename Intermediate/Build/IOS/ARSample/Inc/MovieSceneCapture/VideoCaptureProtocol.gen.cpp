// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Protocols/VideoCaptureProtocol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVideoCaptureProtocol() {}
// Cross Module References
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UVideoCaptureSettings_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UVideoCaptureSettings();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UFrameGrabberProtocolSettings();
	UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
// End Cross Module References
	void UVideoCaptureSettings::StaticRegisterNativesUVideoCaptureSettings()
	{
	}
	UClass* Z_Construct_UClass_UVideoCaptureSettings_NoRegister()
	{
		return UVideoCaptureSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UVideoCaptureSettings()
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
				{ "DisplayName", "Video Encoding" },
				{ "IncludePath", "Protocols/VideoCaptureProtocol.h" },
				{ "ModuleRelativePath", "Public/Protocols/VideoCaptureProtocol.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoCodec_MetaData[] = {
				{ "Category", "VideoSettings" },
				{ "ModuleRelativePath", "Public/Protocols/VideoCaptureProtocol.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_VideoCodec = { UE4CodeGen_Private::EPropertyClass::Str, "VideoCodec", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, STRUCT_OFFSET(UVideoCaptureSettings, VideoCodec), METADATA_PARAMS(NewProp_VideoCodec_MetaData, ARRAY_COUNT(NewProp_VideoCodec_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionQuality_MetaData[] = {
				{ "Category", "VideoSettings" },
				{ "ClampMax", "100" },
				{ "ClampMin", "1" },
				{ "EditCondition", "bUseCompression" },
				{ "ModuleRelativePath", "Public/Protocols/VideoCaptureProtocol.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CompressionQuality = { UE4CodeGen_Private::EPropertyClass::Float, "CompressionQuality", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UVideoCaptureSettings, CompressionQuality), METADATA_PARAMS(NewProp_CompressionQuality_MetaData, ARRAY_COUNT(NewProp_CompressionQuality_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCompression_MetaData[] = {
				{ "Category", "VideoSettings" },
				{ "ModuleRelativePath", "Public/Protocols/VideoCaptureProtocol.h" },
			};
#endif
			auto NewProp_bUseCompression_SetBit = [](void* Obj){ ((UVideoCaptureSettings*)Obj)->bUseCompression = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCompression = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseCompression", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVideoCaptureSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseCompression_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseCompression_MetaData, ARRAY_COUNT(NewProp_bUseCompression_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VideoCodec,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressionQuality,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseCompression,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVideoCaptureSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVideoCaptureSettings::StaticClass,
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
	IMPLEMENT_CLASS(UVideoCaptureSettings, 1756865115);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVideoCaptureSettings(Z_Construct_UClass_UVideoCaptureSettings, &UVideoCaptureSettings::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UVideoCaptureSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVideoCaptureSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
