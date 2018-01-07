// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Protocols/CompositionGraphCaptureProtocol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositionGraphCaptureProtocol() {}
// Cross Module References
	MOVIESCENECAPTURE_API UEnum* Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut();
	UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
	MOVIESCENECAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FCompositionGraphCapturePasses();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UCompositionGraphCaptureSettings_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UCompositionGraphCaptureSettings();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCaptureProtocolSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	static UEnum* EHDRCaptureGamut_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut, Z_Construct_UPackage__Script_MovieSceneCapture(), TEXT("EHDRCaptureGamut"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHDRCaptureGamut(EHDRCaptureGamut_StaticEnum, TEXT("/Script/MovieSceneCapture"), TEXT("EHDRCaptureGamut"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut_CRC() { return 4033927855U; }
	UEnum* Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneCapture();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHDRCaptureGamut"), 0, Get_Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "HCGM_Rec709", (int64)HCGM_Rec709 },
				{ "HCGM_P3DCI", (int64)HCGM_P3DCI },
				{ "HCGM_Rec2020", (int64)HCGM_Rec2020 },
				{ "HCGM_ACES", (int64)HCGM_ACES },
				{ "HCGM_ACEScg", (int64)HCGM_ACEScg },
				{ "HCGM_MAX", (int64)HCGM_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "HCGM_ACES.DisplayName", "ACES" },
				{ "HCGM_ACEScg.DisplayName", "ACEScg" },
				{ "HCGM_P3DCI.DisplayName", "P3 D65" },
				{ "HCGM_Rec2020.DisplayName", "Rec.2020" },
				{ "HCGM_Rec709.DisplayName", "Rec.709 / sRGB" },
				{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
				{ "ToolTip", "Used by UCompositionGraphCaptureSettings. Matches gamut oreder in TonemapCommon.usf OuputGamutMappingMatrix()" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneCapture,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EHDRCaptureGamut",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EHDRCaptureGamut",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FCompositionGraphCapturePasses::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENECAPTURE_API uint32 Get_Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompositionGraphCapturePasses, Z_Construct_UPackage__Script_MovieSceneCapture(), TEXT("CompositionGraphCapturePasses"), sizeof(FCompositionGraphCapturePasses), Get_Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCompositionGraphCapturePasses(FCompositionGraphCapturePasses::StaticStruct, TEXT("/Script/MovieSceneCapture"), TEXT("CompositionGraphCapturePasses"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneCapture_StaticRegisterNativesFCompositionGraphCapturePasses
{
	FScriptStruct_MovieSceneCapture_StaticRegisterNativesFCompositionGraphCapturePasses()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CompositionGraphCapturePasses")),new UScriptStruct::TCppStructOps<FCompositionGraphCapturePasses>);
	}
} ScriptStruct_MovieSceneCapture_StaticRegisterNativesFCompositionGraphCapturePasses;
	UScriptStruct* Z_Construct_UScriptStruct_FCompositionGraphCapturePasses()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneCapture();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CompositionGraphCapturePasses"), sizeof(FCompositionGraphCapturePasses), Get_Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompositionGraphCapturePasses>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "Category", "Composition Graph Settings" },
				{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Array, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FCompositionGraphCapturePasses, Value), METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CompositionGraphCapturePasses",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FCompositionGraphCapturePasses),
				alignof(FCompositionGraphCapturePasses),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_CRC() { return 289216469U; }
	void UCompositionGraphCaptureSettings::StaticRegisterNativesUCompositionGraphCaptureSettings()
	{
	}
	UClass* Z_Construct_UClass_UCompositionGraphCaptureSettings_NoRegister()
	{
		return UCompositionGraphCaptureSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UCompositionGraphCaptureSettings()
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
				{ "DisplayName", "Composition Graph Options" },
				{ "IncludePath", "Protocols/CompositionGraphCaptureProtocol.h" },
				{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessingMaterial_MetaData[] = {
				{ "AllowedClasses", "" },
				{ "Category", "Composition Graph Options" },
				{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
				{ "ToolTip", "Custom post processing material to use for rendering" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostProcessingMaterial = { UE4CodeGen_Private::EPropertyClass::Struct, "PostProcessingMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UCompositionGraphCaptureSettings, PostProcessingMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(NewProp_PostProcessingMaterial_MetaData, ARRAY_COUNT(NewProp_PostProcessingMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureGamut_MetaData[] = {
				{ "Category", "Composition Graph Options" },
				{ "EditCondition", "bCaptureFramesInHDR" },
				{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
				{ "ToolTip", "The color gamut to use when storing HDR captured data. The gamut depends on whether the bCaptureFramesInHDR option is enabled." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CaptureGamut = { UE4CodeGen_Private::EPropertyClass::Byte, "CaptureGamut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UCompositionGraphCaptureSettings, CaptureGamut), Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut, METADATA_PARAMS(NewProp_CaptureGamut_MetaData, ARRAY_COUNT(NewProp_CaptureGamut_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HDRCompressionQuality_MetaData[] = {
				{ "Category", "Composition Graph Options" },
				{ "EditCondition", "bCaptureFramesInHDR" },
				{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
				{ "ToolTip", "Compression Quality for HDR Frames (0 for no compression, 1 for default compression which can be slow)" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_HDRCompressionQuality = { UE4CodeGen_Private::EPropertyClass::Int, "HDRCompressionQuality", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UCompositionGraphCaptureSettings, HDRCompressionQuality), METADATA_PARAMS(NewProp_HDRCompressionQuality_MetaData, ARRAY_COUNT(NewProp_HDRCompressionQuality_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCaptureFramesInHDR_MetaData[] = {
				{ "Category", "Composition Graph Options" },
				{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
				{ "ToolTip", "Whether to capture the frames as HDR textures (*.exr format)" },
			};
#endif
			auto NewProp_bCaptureFramesInHDR_SetBit = [](void* Obj){ ((UCompositionGraphCaptureSettings*)Obj)->bCaptureFramesInHDR = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCaptureFramesInHDR = { UE4CodeGen_Private::EPropertyClass::Bool, "bCaptureFramesInHDR", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCompositionGraphCaptureSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCaptureFramesInHDR_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCaptureFramesInHDR_MetaData, ARRAY_COUNT(NewProp_bCaptureFramesInHDR_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeRenderPasses_MetaData[] = {
				{ "Category", "Composition Graph Options" },
				{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
				{ "ToolTip", "A list of render passes to include in the capture. Leave empty to export all available passes." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_IncludeRenderPasses = { UE4CodeGen_Private::EPropertyClass::Struct, "IncludeRenderPasses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UCompositionGraphCaptureSettings, IncludeRenderPasses), Z_Construct_UScriptStruct_FCompositionGraphCapturePasses, METADATA_PARAMS(NewProp_IncludeRenderPasses_MetaData, ARRAY_COUNT(NewProp_IncludeRenderPasses_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PostProcessingMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CaptureGamut,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HDRCompressionQuality,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCaptureFramesInHDR,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IncludeRenderPasses,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCompositionGraphCaptureSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCompositionGraphCaptureSettings::StaticClass,
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
	IMPLEMENT_CLASS(UCompositionGraphCaptureSettings, 1247523886);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCompositionGraphCaptureSettings(Z_Construct_UClass_UCompositionGraphCaptureSettings, &UCompositionGraphCaptureSettings::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UCompositionGraphCaptureSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositionGraphCaptureSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
