// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/LightComponentBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightComponentBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULightComponentBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponentBase();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponentBase_GetLightColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponentBase_SetCastShadows();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void ULightComponentBase::StaticRegisterNativesULightComponentBase()
	{
		UClass* Class = ULightComponentBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLightColor", (Native)&ULightComponentBase::execGetLightColor },
			{ "SetCastShadows", (Native)&ULightComponentBase::execSetCastShadows },
			{ "SetCastVolumetricShadow", (Native)&ULightComponentBase::execSetCastVolumetricShadow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ULightComponentBase_GetLightColor()
	{
		struct LightComponentBase_eventGetLightColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(LightComponentBase_eventGetLightColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
				{ "ToolTip", "Gets the light color as a linear color" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponentBase, "GetLightColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(LightComponentBase_eventGetLightColor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULightComponentBase_SetCastShadows()
	{
		struct LightComponentBase_eventSetCastShadows_Parms
		{
			bool bNewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bNewValue_SetBit = [](void* Obj){ ((LightComponentBase_eventSetCastShadows_Parms*)Obj)->bNewValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LightComponentBase_eventSetCastShadows_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
				{ "ToolTip", "Sets whether this light casts shadows" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponentBase, "SetCastShadows", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponentBase_eventSetCastShadows_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow()
	{
		struct LightComponentBase_eventSetCastVolumetricShadow_Parms
		{
			bool bNewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bNewValue_SetBit = [](void* Obj){ ((LightComponentBase_eventSetCastVolumetricShadow_Parms*)Obj)->bNewValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LightComponentBase_eventSetCastVolumetricShadow_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponentBase, "SetCastVolumetricShadow", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponentBase_eventSetCastVolumetricShadow_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULightComponentBase_NoRegister()
	{
		return ULightComponentBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ULightComponentBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ULightComponentBase_GetLightColor, "GetLightColor" }, // 4278348556
				{ &Z_Construct_UFunction_ULightComponentBase_SetCastShadows, "SetCastShadows" }, // 310054432
				{ &Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow, "SetCastVolumetricShadow" }, // 3367609726
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
				{ "IncludePath", "Components/LightComponentBase.h" },
				{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicEditorTextureScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
				{ "ToolTip", "Sprite scaling for dynamic light in the editor." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DynamicEditorTextureScale = { UE4CodeGen_Private::EPropertyClass::Float, "DynamicEditorTextureScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(ULightComponentBase, DynamicEditorTextureScale), METADATA_PARAMS(NewProp_DynamicEditorTextureScale_MetaData, ARRAY_COUNT(NewProp_DynamicEditorTextureScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicEditorTexture_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
				{ "ToolTip", "Sprite for dynamic light in the editor." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DynamicEditorTexture = { UE4CodeGen_Private::EPropertyClass::Object, "DynamicEditorTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(ULightComponentBase, DynamicEditorTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_DynamicEditorTexture_MetaData, ARRAY_COUNT(NewProp_DynamicEditorTexture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticEditorTextureScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
				{ "ToolTip", "Sprite scaling for static light in the editor." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaticEditorTextureScale = { UE4CodeGen_Private::EPropertyClass::Float, "StaticEditorTextureScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(ULightComponentBase, StaticEditorTextureScale), METADATA_PARAMS(NewProp_StaticEditorTextureScale_MetaData, ARRAY_COUNT(NewProp_StaticEditorTextureScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticEditorTexture_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
				{ "ToolTip", "Sprite for static light in the editor." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticEditorTexture = { UE4CodeGen_Private::EPropertyClass::Object, "StaticEditorTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(ULightComponentBase, StaticEditorTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_StaticEditorTexture_MetaData, ARRAY_COUNT(NewProp_StaticEditorTexture_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricScatteringIntensity_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
				{ "ToolTip", "Intensity of the volumetric scattering from this light.  This scales Intensity and LightColor." },
				{ "UIMax", "4.0" },
				{ "UIMin", "0.25" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumetricScatteringIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "VolumetricScatteringIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000015, 1, nullptr, STRUCT_OFFSET(ULightComponentBase, VolumetricScatteringIntensity), METADATA_PARAMS(NewProp_VolumetricScatteringIntensity_MetaData, ARRAY_COUNT(NewProp_VolumetricScatteringIntensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndirectLightingIntensity_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
				{ "ToolTip", "Scales the indirect lighting contribution from this light.\nA value of 0 disables any GI from this light. Default is 1." },
				{ "UIMax", "6.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IndirectLightingIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "IndirectLightingIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000015, 1, nullptr, STRUCT_OFFSET(ULightComponentBase, IndirectLightingIntensity), METADATA_PARAMS(NewProp_IndirectLightingIntensity_MetaData, ARRAY_COUNT(NewProp_IndirectLightingIntensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastVolumetricShadow_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
				{ "ToolTip", "Whether the light shadows volumetric fog.  Disabling this can save GPU time." },
			};
#endif
			auto NewProp_bCastVolumetricShadow_SetBit = [](void* Obj){ ((ULightComponentBase*)Obj)->bCastVolumetricShadow = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastVolumetricShadow = { UE4CodeGen_Private::EPropertyClass::Bool, "bCastVolumetricShadow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULightComponentBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCastVolumetricShadow_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCastVolumetricShadow_MetaData, ARRAY_COUNT(NewProp_bCastVolumetricShadow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectTranslucentLighting_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
				{ "ToolTip", "Whether the light affects translucency or not.  Disabling this can save GPU time when there are many small lights." },
			};
#endif
			auto NewProp_bAffectTranslucentLighting_SetBit = [](void* Obj){ ((ULightComponentBase*)Obj)->bAffectTranslucentLighting = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectTranslucentLighting = { UE4CodeGen_Private::EPropertyClass::Bool, "bAffectTranslucentLighting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULightComponentBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAffectTranslucentLighting_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAffectTranslucentLighting_MetaData, ARRAY_COUNT(NewProp_bAffectTranslucentLighting_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastDynamicShadows_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
				{ "ToolTip", "Whether the light should cast shadows from dynamic objects.  Also requires Cast Shadows to be set to True." },
			};
#endif
			auto NewProp_CastDynamicShadows_SetBit = [](void* Obj){ ((ULightComponentBase*)Obj)->CastDynamicShadows = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CastDynamicShadows = { UE4CodeGen_Private::EPropertyClass::Bool, "CastDynamicShadows", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULightComponentBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_CastDynamicShadows_SetBit)>::SetBit, METADATA_PARAMS(NewProp_CastDynamicShadows_MetaData, ARRAY_COUNT(NewProp_CastDynamicShadows_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastStaticShadows_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
				{ "ToolTip", "Whether the light should cast shadows from static objects.  Also requires Cast Shadows to be set to True." },
			};
#endif
			auto NewProp_CastStaticShadows_SetBit = [](void* Obj){ ((ULightComponentBase*)Obj)->CastStaticShadows = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CastStaticShadows = { UE4CodeGen_Private::EPropertyClass::Bool, "CastStaticShadows", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULightComponentBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_CastStaticShadows_SetBit)>::SetBit, METADATA_PARAMS(NewProp_CastStaticShadows_MetaData, ARRAY_COUNT(NewProp_CastStaticShadows_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastShadows_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
				{ "ToolTip", "Whether the light should cast any shadows." },
			};
#endif
			auto NewProp_CastShadows_SetBit = [](void* Obj){ ((ULightComponentBase*)Obj)->CastShadows = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CastShadows = { UE4CodeGen_Private::EPropertyClass::Bool, "CastShadows", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULightComponentBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_CastShadows_SetBit)>::SetBit, METADATA_PARAMS(NewProp_CastShadows_MetaData, ARRAY_COUNT(NewProp_CastShadows_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectsWorld_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
				{ "ToolTip", "Whether the light can affect the world, or whether it is disabled.\nA disabled light will not contribute to the scene in any way.  This setting cannot be changed at runtime and unbuilds lighting when changed.\nSetting this to false has the same effect as deleting the light, so it is useful for non-destructive experiments." },
			};
#endif
			auto NewProp_bAffectsWorld_SetBit = [](void* Obj){ ((ULightComponentBase*)Obj)->bAffectsWorld = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectsWorld = { UE4CodeGen_Private::EPropertyClass::Bool, "bAffectsWorld", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULightComponentBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAffectsWorld_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAffectsWorld_MetaData, ARRAY_COUNT(NewProp_bAffectsWorld_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightColor_MetaData[] = {
				{ "Category", "Light" },
				{ "HideAlphaChannel", "" },
				{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
				{ "ToolTip", "Filter color of the light.\nNote that this can change the light's effective intensity." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightColor = { UE4CodeGen_Private::EPropertyClass::Struct, "LightColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000015, 1, nullptr, STRUCT_OFFSET(ULightComponentBase, LightColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_LightColor_MetaData, ARRAY_COUNT(NewProp_LightColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[] = {
				{ "Category", "Light" },
				{ "DisplayName", "Intensity" },
				{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
				{ "ToolTip", "Total energy that the light emits.\nFor point/spot lights with inverse squared falloff, this is in units of lumens.  1700 lumens corresponds to a 100W lightbulb.\nFor other lights, this is just a brightness multiplier." },
				{ "UIMax", "20.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity = { UE4CodeGen_Private::EPropertyClass::Float, "Intensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000015, 1, nullptr, STRUCT_OFFSET(ULightComponentBase, Intensity), METADATA_PARAMS(NewProp_Intensity_MetaData, ARRAY_COUNT(NewProp_Intensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Brightness = { UE4CodeGen_Private::EPropertyClass::Float, "Brightness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(ULightComponentBase, Brightness_DEPRECATED), METADATA_PARAMS(NewProp_Brightness_MetaData, ARRAY_COUNT(NewProp_Brightness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightGuid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
				{ "ToolTip", "GUID used to associate a light component with precomputed shadowing information across levels.\nThe GUID changes whenever the light position changes." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "LightGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULightComponentBase, LightGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_LightGuid_MetaData, ARRAY_COUNT(NewProp_LightGuid_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DynamicEditorTextureScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DynamicEditorTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticEditorTextureScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticEditorTexture,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumetricScatteringIntensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IndirectLightingIntensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCastVolumetricShadow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAffectTranslucentLighting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CastDynamicShadows,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CastStaticShadows,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CastShadows,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAffectsWorld,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Intensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Brightness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightGuid,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULightComponentBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULightComponentBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00081u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ULightComponentBase, 678678535);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightComponentBase(Z_Construct_UClass_ULightComponentBase, &ULightComponentBase::StaticClass, TEXT("/Script/Engine"), TEXT("ULightComponentBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightComponentBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
