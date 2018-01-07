// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LightPropagationVolumeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightPropagationVolumeSettings() {}
// Cross Module References
	RENDERER_API UScriptStruct* Z_Construct_UScriptStruct_FLightPropagationVolumeSettings();
	UPackage* Z_Construct_UPackage__Script_Renderer();
// End Cross Module References
class UScriptStruct* FLightPropagationVolumeSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RENDERER_API uint32 Get_Z_Construct_UScriptStruct_FLightPropagationVolumeSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLightPropagationVolumeSettings, Z_Construct_UPackage__Script_Renderer(), TEXT("LightPropagationVolumeSettings"), sizeof(FLightPropagationVolumeSettings), Get_Z_Construct_UScriptStruct_FLightPropagationVolumeSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLightPropagationVolumeSettings(FLightPropagationVolumeSettings::StaticStruct, TEXT("/Script/Renderer"), TEXT("LightPropagationVolumeSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Renderer_StaticRegisterNativesFLightPropagationVolumeSettings
{
	FScriptStruct_Renderer_StaticRegisterNativesFLightPropagationVolumeSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LightPropagationVolumeSettings")),new UScriptStruct::TCppStructOps<FLightPropagationVolumeSettings>);
	}
} ScriptStruct_Renderer_StaticRegisterNativesFLightPropagationVolumeSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FLightPropagationVolumeSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLightPropagationVolumeSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Renderer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LightPropagationVolumeSettings"), sizeof(FLightPropagationVolumeSettings), Get_Z_Construct_UScriptStruct_FLightPropagationVolumeSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/LightPropagationVolumeSettings.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLightPropagationVolumeSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVDirectionalOcclusionFadeRange_MetaData[] = {
				{ "Category", "LightPropagationVolume" },
				{ "DisplayName", "DO Fade range" },
				{ "editcondition", "bOverride_LPVDirectionalOcclusionFadeRange" },
				{ "ModuleRelativePath", "Public/LightPropagationVolumeSettings.h" },
				{ "ToolTip", "LPV Directional Occlusion Fade range - increase to fade more gradually towards the LPV edges." },
				{ "UIMax", "9" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVDirectionalOcclusionFadeRange = { UE4CodeGen_Private::EPropertyClass::Float, "LPVDirectionalOcclusionFadeRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FLightPropagationVolumeSettings, LPVDirectionalOcclusionFadeRange), METADATA_PARAMS(NewProp_LPVDirectionalOcclusionFadeRange_MetaData, ARRAY_COUNT(NewProp_LPVDirectionalOcclusionFadeRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVFadeRange_MetaData[] = {
				{ "Category", "LightPropagationVolume" },
				{ "DisplayName", "Fade range" },
				{ "editcondition", "bOverride_LPVFadeRange" },
				{ "ModuleRelativePath", "Public/LightPropagationVolumeSettings.h" },
				{ "ToolTip", "LPV Fade range - increase to fade more gradually towards the LPV edges." },
				{ "UIMax", "9" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVFadeRange = { UE4CodeGen_Private::EPropertyClass::Float, "LPVFadeRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FLightPropagationVolumeSettings, LPVFadeRange), METADATA_PARAMS(NewProp_LPVFadeRange_MetaData, ARRAY_COUNT(NewProp_LPVFadeRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVSpecularOcclusionIntensity_MetaData[] = {
				{ "Category", "LightPropagationVolume" },
				{ "DisplayName", "Specular occlusion intensity" },
				{ "editcondition", "bOverride_LPVSpecularOcclusionIntensity" },
				{ "ModuleRelativePath", "Public/LightPropagationVolumeSettings.h" },
				{ "ToolTip", "Specular occlusion intensity - higher values provide increased specular occlusion." },
				{ "UIMax", "4" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVSpecularOcclusionIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "LPVSpecularOcclusionIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FLightPropagationVolumeSettings, LPVSpecularOcclusionIntensity), METADATA_PARAMS(NewProp_LPVSpecularOcclusionIntensity_MetaData, ARRAY_COUNT(NewProp_LPVSpecularOcclusionIntensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVDiffuseOcclusionIntensity_MetaData[] = {
				{ "Category", "LightPropagationVolume" },
				{ "DisplayName", "Diffuse occlusion intensity" },
				{ "editcondition", "bOverride_LPVDiffuseOcclusionIntensity" },
				{ "ModuleRelativePath", "Public/LightPropagationVolumeSettings.h" },
				{ "ToolTip", "Diffuse occlusion intensity - higher values provide increased diffuse occlusion." },
				{ "UIMax", "4" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVDiffuseOcclusionIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "LPVDiffuseOcclusionIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FLightPropagationVolumeSettings, LPVDiffuseOcclusionIntensity), METADATA_PARAMS(NewProp_LPVDiffuseOcclusionIntensity_MetaData, ARRAY_COUNT(NewProp_LPVDiffuseOcclusionIntensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVSpecularOcclusionExponent_MetaData[] = {
				{ "Category", "LightPropagationVolume" },
				{ "DisplayName", "Specular occlusion exponent" },
				{ "editcondition", "bOverride_LPVSpecularOcclusionExponent" },
				{ "ModuleRelativePath", "Public/LightPropagationVolumeSettings.h" },
				{ "ToolTip", "Specular occlusion exponent - increase for more contrast. 6 to 9 is recommended" },
				{ "UIMax", "16" },
				{ "UIMin", "1" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVSpecularOcclusionExponent = { UE4CodeGen_Private::EPropertyClass::Float, "LPVSpecularOcclusionExponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FLightPropagationVolumeSettings, LPVSpecularOcclusionExponent), METADATA_PARAMS(NewProp_LPVSpecularOcclusionExponent_MetaData, ARRAY_COUNT(NewProp_LPVSpecularOcclusionExponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVDiffuseOcclusionExponent_MetaData[] = {
				{ "Category", "LightPropagationVolume" },
				{ "DisplayName", "Diffuse occlusion exponent" },
				{ "editcondition", "bOverride_LPVDiffuseOcclusionExponent" },
				{ "ModuleRelativePath", "Public/LightPropagationVolumeSettings.h" },
				{ "ToolTip", "Diffuse occlusion exponent - increase for more contrast. 1 to 2 is recommended" },
				{ "UIMax", "5" },
				{ "UIMin", "0.5" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVDiffuseOcclusionExponent = { UE4CodeGen_Private::EPropertyClass::Float, "LPVDiffuseOcclusionExponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FLightPropagationVolumeSettings, LPVDiffuseOcclusionExponent), METADATA_PARAMS(NewProp_LPVDiffuseOcclusionExponent_MetaData, ARRAY_COUNT(NewProp_LPVDiffuseOcclusionExponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVDirectionalOcclusionRadius_MetaData[] = {
				{ "Category", "LightPropagationVolume" },
				{ "DisplayName", "Occlusion Radius" },
				{ "editcondition", "bOverride_LPVDirectionalOcclusionRadius" },
				{ "ModuleRelativePath", "Public/LightPropagationVolumeSettings.h" },
				{ "ToolTip", "Occlusion Radius - 16 is recommended for most scenes" },
				{ "UIMax", "16" },
				{ "UIMin", "1" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVDirectionalOcclusionRadius = { UE4CodeGen_Private::EPropertyClass::Float, "LPVDirectionalOcclusionRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FLightPropagationVolumeSettings, LPVDirectionalOcclusionRadius), METADATA_PARAMS(NewProp_LPVDirectionalOcclusionRadius_MetaData, ARRAY_COUNT(NewProp_LPVDirectionalOcclusionRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVDirectionalOcclusionIntensity_MetaData[] = {
				{ "Category", "LightPropagationVolume" },
				{ "DisplayName", "Occlusion Intensity" },
				{ "editcondition", "bOverride_LPVDirectionalOcclusionIntensity" },
				{ "ModuleRelativePath", "Public/LightPropagationVolumeSettings.h" },
				{ "ToolTip", "Controls the amount of directional occlusion. Requires LPV. Values very close to 1.0 are recommended" },
				{ "UIMax", "1" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVDirectionalOcclusionIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "LPVDirectionalOcclusionIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FLightPropagationVolumeSettings, LPVDirectionalOcclusionIntensity), METADATA_PARAMS(NewProp_LPVDirectionalOcclusionIntensity_MetaData, ARRAY_COUNT(NewProp_LPVDirectionalOcclusionIntensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVEmissiveInjectionIntensity_MetaData[] = {
				{ "Category", "LightPropagationVolume" },
				{ "DisplayName", "Emissive Injection Intensity" },
				{ "editcondition", "bOverride_LPVEmissiveInjectionIntensity" },
				{ "ModuleRelativePath", "Public/LightPropagationVolumeSettings.h" },
				{ "UIMax", "20" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVEmissiveInjectionIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "LPVEmissiveInjectionIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FLightPropagationVolumeSettings, LPVEmissiveInjectionIntensity), METADATA_PARAMS(NewProp_LPVEmissiveInjectionIntensity_MetaData, ARRAY_COUNT(NewProp_LPVEmissiveInjectionIntensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVGeometryVolumeBias_MetaData[] = {
				{ "Category", "LightPropagationVolume" },
				{ "DisplayName", "Geometry Volume Bias" },
				{ "editcondition", "bOverride_LPVGeometryVolumeBias" },
				{ "ModuleRelativePath", "Public/LightPropagationVolumeSettings.h" },
				{ "ToolTip", "Bias applied to the geometry volume in cell units. Increase to reduce darkening due to secondary occlusion" },
				{ "UIMax", "2" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVGeometryVolumeBias = { UE4CodeGen_Private::EPropertyClass::Float, "LPVGeometryVolumeBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FLightPropagationVolumeSettings, LPVGeometryVolumeBias), METADATA_PARAMS(NewProp_LPVGeometryVolumeBias_MetaData, ARRAY_COUNT(NewProp_LPVGeometryVolumeBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVSecondaryBounceIntensity_MetaData[] = {
				{ "Category", "LightPropagationVolume" },
				{ "DisplayName", "Secondary Bounce Intensity" },
				{ "editcondition", "bOverride_LPVSecondaryBounceIntensity" },
				{ "ModuleRelativePath", "Public/LightPropagationVolumeSettings.h" },
				{ "ToolTip", "Secondary bounce light strength (bounce light shadows). Set to 0 to disable" },
				{ "UIMax", "1" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVSecondaryBounceIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "LPVSecondaryBounceIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FLightPropagationVolumeSettings, LPVSecondaryBounceIntensity), METADATA_PARAMS(NewProp_LPVSecondaryBounceIntensity_MetaData, ARRAY_COUNT(NewProp_LPVSecondaryBounceIntensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVSecondaryOcclusionIntensity_MetaData[] = {
				{ "Category", "LightPropagationVolume" },
				{ "DisplayName", "Secondary Occlusion Intensity" },
				{ "editcondition", "bOverride_LPVSecondaryOcclusionIntensity" },
				{ "ModuleRelativePath", "Public/LightPropagationVolumeSettings.h" },
				{ "ToolTip", "Secondary occlusion strength (bounce light shadows). Set to 0 to disable" },
				{ "UIMax", "1" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVSecondaryOcclusionIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "LPVSecondaryOcclusionIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FLightPropagationVolumeSettings, LPVSecondaryOcclusionIntensity), METADATA_PARAMS(NewProp_LPVSecondaryOcclusionIntensity_MetaData, ARRAY_COUNT(NewProp_LPVSecondaryOcclusionIntensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVSize_MetaData[] = {
				{ "Category", "LightPropagationVolume" },
				{ "DisplayName", "Size" },
				{ "editcondition", "bOverride_LPVSize" },
				{ "ModuleRelativePath", "Public/LightPropagationVolumeSettings.h" },
				{ "ToolTip", "The size of the LPV volume, in Unreal units" },
				{ "UIMax", "20000" },
				{ "UIMin", "100" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVSize = { UE4CodeGen_Private::EPropertyClass::Float, "LPVSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FLightPropagationVolumeSettings, LPVSize), METADATA_PARAMS(NewProp_LPVSize_MetaData, ARRAY_COUNT(NewProp_LPVSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVVplInjectionBias_MetaData[] = {
				{ "Category", "LightPropagationVolume" },
				{ "DisplayName", "Light Injection Bias" },
				{ "editcondition", "bOverride_LPVVplInjectionBias" },
				{ "ModuleRelativePath", "Public/LightPropagationVolumeSettings.h" },
				{ "ToolTip", "Bias applied to light injected into the LPV in cell units. Increase to reduce bleeding through thin walls" },
				{ "UIMax", "2" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVVplInjectionBias = { UE4CodeGen_Private::EPropertyClass::Float, "LPVVplInjectionBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FLightPropagationVolumeSettings, LPVVplInjectionBias), METADATA_PARAMS(NewProp_LPVVplInjectionBias_MetaData, ARRAY_COUNT(NewProp_LPVVplInjectionBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVIntensity_MetaData[] = {
				{ "Category", "LightPropagationVolume" },
				{ "DisplayName", "Intensity" },
				{ "editcondition", "bOverride_LPVIntensity" },
				{ "ModuleRelativePath", "Public/LightPropagationVolumeSettings.h" },
				{ "ToolTip", "How strong the dynamic GI from the LPV should be. 0.0 is off, 1.0 is the \"normal\" value, but higher values can be used to boost the effect" },
				{ "UIMax", "20" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "LPVIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FLightPropagationVolumeSettings, LPVIntensity), METADATA_PARAMS(NewProp_LPVIntensity_MetaData, ARRAY_COUNT(NewProp_LPVIntensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVEmissiveInjectionIntensity_MetaData[] = {
				{ "Category", "Overrides" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Public/LightPropagationVolumeSettings.h" },
				{ "PinHiddenByDefault", "" },
			};
#endif
			auto NewProp_bOverride_LPVEmissiveInjectionIntensity_SetBit = [](void* Obj){ ((FLightPropagationVolumeSettings*)Obj)->bOverride_LPVEmissiveInjectionIntensity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVEmissiveInjectionIntensity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LPVEmissiveInjectionIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLightPropagationVolumeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverride_LPVEmissiveInjectionIntensity_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverride_LPVEmissiveInjectionIntensity_MetaData, ARRAY_COUNT(NewProp_bOverride_LPVEmissiveInjectionIntensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVVplInjectionBias_MetaData[] = {
				{ "Category", "Overrides" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Public/LightPropagationVolumeSettings.h" },
				{ "PinHiddenByDefault", "" },
			};
#endif
			auto NewProp_bOverride_LPVVplInjectionBias_SetBit = [](void* Obj){ ((FLightPropagationVolumeSettings*)Obj)->bOverride_LPVVplInjectionBias = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVVplInjectionBias = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LPVVplInjectionBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLightPropagationVolumeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverride_LPVVplInjectionBias_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverride_LPVVplInjectionBias_MetaData, ARRAY_COUNT(NewProp_bOverride_LPVVplInjectionBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVGeometryVolumeBias_MetaData[] = {
				{ "Category", "Overrides" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Public/LightPropagationVolumeSettings.h" },
				{ "PinHiddenByDefault", "" },
			};
#endif
			auto NewProp_bOverride_LPVGeometryVolumeBias_SetBit = [](void* Obj){ ((FLightPropagationVolumeSettings*)Obj)->bOverride_LPVGeometryVolumeBias = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVGeometryVolumeBias = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LPVGeometryVolumeBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLightPropagationVolumeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverride_LPVGeometryVolumeBias_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverride_LPVGeometryVolumeBias_MetaData, ARRAY_COUNT(NewProp_bOverride_LPVGeometryVolumeBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVSecondaryBounceIntensity_MetaData[] = {
				{ "Category", "Overrides" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Public/LightPropagationVolumeSettings.h" },
				{ "PinHiddenByDefault", "" },
			};
#endif
			auto NewProp_bOverride_LPVSecondaryBounceIntensity_SetBit = [](void* Obj){ ((FLightPropagationVolumeSettings*)Obj)->bOverride_LPVSecondaryBounceIntensity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVSecondaryBounceIntensity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LPVSecondaryBounceIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLightPropagationVolumeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverride_LPVSecondaryBounceIntensity_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverride_LPVSecondaryBounceIntensity_MetaData, ARRAY_COUNT(NewProp_bOverride_LPVSecondaryBounceIntensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVSecondaryOcclusionIntensity_MetaData[] = {
				{ "Category", "Overrides" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Public/LightPropagationVolumeSettings.h" },
				{ "PinHiddenByDefault", "" },
			};
#endif
			auto NewProp_bOverride_LPVSecondaryOcclusionIntensity_SetBit = [](void* Obj){ ((FLightPropagationVolumeSettings*)Obj)->bOverride_LPVSecondaryOcclusionIntensity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVSecondaryOcclusionIntensity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LPVSecondaryOcclusionIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLightPropagationVolumeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverride_LPVSecondaryOcclusionIntensity_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverride_LPVSecondaryOcclusionIntensity_MetaData, ARRAY_COUNT(NewProp_bOverride_LPVSecondaryOcclusionIntensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVSize_MetaData[] = {
				{ "Category", "Overrides" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Public/LightPropagationVolumeSettings.h" },
				{ "PinHiddenByDefault", "" },
			};
#endif
			auto NewProp_bOverride_LPVSize_SetBit = [](void* Obj){ ((FLightPropagationVolumeSettings*)Obj)->bOverride_LPVSize = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVSize = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LPVSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLightPropagationVolumeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverride_LPVSize_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverride_LPVSize_MetaData, ARRAY_COUNT(NewProp_bOverride_LPVSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVSpecularOcclusionIntensity_MetaData[] = {
				{ "Category", "Overrides" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Public/LightPropagationVolumeSettings.h" },
				{ "PinHiddenByDefault", "" },
			};
#endif
			auto NewProp_bOverride_LPVSpecularOcclusionIntensity_SetBit = [](void* Obj){ ((FLightPropagationVolumeSettings*)Obj)->bOverride_LPVSpecularOcclusionIntensity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVSpecularOcclusionIntensity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LPVSpecularOcclusionIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLightPropagationVolumeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverride_LPVSpecularOcclusionIntensity_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverride_LPVSpecularOcclusionIntensity_MetaData, ARRAY_COUNT(NewProp_bOverride_LPVSpecularOcclusionIntensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVDiffuseOcclusionIntensity_MetaData[] = {
				{ "Category", "Overrides" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Public/LightPropagationVolumeSettings.h" },
				{ "PinHiddenByDefault", "" },
			};
#endif
			auto NewProp_bOverride_LPVDiffuseOcclusionIntensity_SetBit = [](void* Obj){ ((FLightPropagationVolumeSettings*)Obj)->bOverride_LPVDiffuseOcclusionIntensity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVDiffuseOcclusionIntensity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LPVDiffuseOcclusionIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLightPropagationVolumeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverride_LPVDiffuseOcclusionIntensity_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverride_LPVDiffuseOcclusionIntensity_MetaData, ARRAY_COUNT(NewProp_bOverride_LPVDiffuseOcclusionIntensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVSpecularOcclusionExponent_MetaData[] = {
				{ "Category", "Overrides" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Public/LightPropagationVolumeSettings.h" },
				{ "PinHiddenByDefault", "" },
			};
#endif
			auto NewProp_bOverride_LPVSpecularOcclusionExponent_SetBit = [](void* Obj){ ((FLightPropagationVolumeSettings*)Obj)->bOverride_LPVSpecularOcclusionExponent = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVSpecularOcclusionExponent = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LPVSpecularOcclusionExponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLightPropagationVolumeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverride_LPVSpecularOcclusionExponent_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverride_LPVSpecularOcclusionExponent_MetaData, ARRAY_COUNT(NewProp_bOverride_LPVSpecularOcclusionExponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVDiffuseOcclusionExponent_MetaData[] = {
				{ "Category", "Overrides" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Public/LightPropagationVolumeSettings.h" },
				{ "PinHiddenByDefault", "" },
			};
#endif
			auto NewProp_bOverride_LPVDiffuseOcclusionExponent_SetBit = [](void* Obj){ ((FLightPropagationVolumeSettings*)Obj)->bOverride_LPVDiffuseOcclusionExponent = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVDiffuseOcclusionExponent = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LPVDiffuseOcclusionExponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLightPropagationVolumeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverride_LPVDiffuseOcclusionExponent_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverride_LPVDiffuseOcclusionExponent_MetaData, ARRAY_COUNT(NewProp_bOverride_LPVDiffuseOcclusionExponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVDirectionalOcclusionRadius_MetaData[] = {
				{ "Category", "Overrides" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Public/LightPropagationVolumeSettings.h" },
				{ "PinHiddenByDefault", "" },
			};
#endif
			auto NewProp_bOverride_LPVDirectionalOcclusionRadius_SetBit = [](void* Obj){ ((FLightPropagationVolumeSettings*)Obj)->bOverride_LPVDirectionalOcclusionRadius = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVDirectionalOcclusionRadius = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LPVDirectionalOcclusionRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLightPropagationVolumeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverride_LPVDirectionalOcclusionRadius_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverride_LPVDirectionalOcclusionRadius_MetaData, ARRAY_COUNT(NewProp_bOverride_LPVDirectionalOcclusionRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVDirectionalOcclusionIntensity_MetaData[] = {
				{ "Category", "Overrides" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Public/LightPropagationVolumeSettings.h" },
				{ "PinHiddenByDefault", "" },
			};
#endif
			auto NewProp_bOverride_LPVDirectionalOcclusionIntensity_SetBit = [](void* Obj){ ((FLightPropagationVolumeSettings*)Obj)->bOverride_LPVDirectionalOcclusionIntensity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVDirectionalOcclusionIntensity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LPVDirectionalOcclusionIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLightPropagationVolumeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverride_LPVDirectionalOcclusionIntensity_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverride_LPVDirectionalOcclusionIntensity_MetaData, ARRAY_COUNT(NewProp_bOverride_LPVDirectionalOcclusionIntensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVIntensity_MetaData[] = {
				{ "Category", "Overrides" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Public/LightPropagationVolumeSettings.h" },
				{ "PinHiddenByDefault", "" },
			};
#endif
			auto NewProp_bOverride_LPVIntensity_SetBit = [](void* Obj){ ((FLightPropagationVolumeSettings*)Obj)->bOverride_LPVIntensity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVIntensity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LPVIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLightPropagationVolumeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverride_LPVIntensity_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverride_LPVIntensity_MetaData, ARRAY_COUNT(NewProp_bOverride_LPVIntensity_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LPVDirectionalOcclusionFadeRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LPVFadeRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LPVSpecularOcclusionIntensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LPVDiffuseOcclusionIntensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LPVSpecularOcclusionExponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LPVDiffuseOcclusionExponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LPVDirectionalOcclusionRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LPVDirectionalOcclusionIntensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LPVEmissiveInjectionIntensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LPVGeometryVolumeBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LPVSecondaryBounceIntensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LPVSecondaryOcclusionIntensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LPVSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LPVVplInjectionBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LPVIntensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverride_LPVEmissiveInjectionIntensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverride_LPVVplInjectionBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverride_LPVGeometryVolumeBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverride_LPVSecondaryBounceIntensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverride_LPVSecondaryOcclusionIntensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverride_LPVSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverride_LPVSpecularOcclusionIntensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverride_LPVDiffuseOcclusionIntensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverride_LPVSpecularOcclusionExponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverride_LPVDiffuseOcclusionExponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverride_LPVDirectionalOcclusionRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverride_LPVDirectionalOcclusionIntensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverride_LPVIntensity,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Renderer,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LightPropagationVolumeSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FLightPropagationVolumeSettings),
				alignof(FLightPropagationVolumeSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLightPropagationVolumeSettings_CRC() { return 2174649724U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
