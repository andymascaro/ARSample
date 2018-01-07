// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/LightComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponent();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponentBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetBloomScale();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetBloomThreshold();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetBloomTint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetIESTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTextureLightProfile_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetIntensity();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetLightColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetLightFunctionScale();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetShadowBias();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetTemperature();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
// End Cross Module References
	void ULightComponent::StaticRegisterNativesULightComponent()
	{
		UClass* Class = ULightComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAffectDynamicIndirectLighting", (Native)&ULightComponent::execSetAffectDynamicIndirectLighting },
			{ "SetAffectTranslucentLighting", (Native)&ULightComponent::execSetAffectTranslucentLighting },
			{ "SetBloomScale", (Native)&ULightComponent::execSetBloomScale },
			{ "SetBloomThreshold", (Native)&ULightComponent::execSetBloomThreshold },
			{ "SetBloomTint", (Native)&ULightComponent::execSetBloomTint },
			{ "SetEnableLightShaftBloom", (Native)&ULightComponent::execSetEnableLightShaftBloom },
			{ "SetIESTexture", (Native)&ULightComponent::execSetIESTexture },
			{ "SetIndirectLightingIntensity", (Native)&ULightComponent::execSetIndirectLightingIntensity },
			{ "SetIntensity", (Native)&ULightComponent::execSetIntensity },
			{ "SetLightColor", (Native)&ULightComponent::execSetLightColor },
			{ "SetLightFunctionDisabledBrightness", (Native)&ULightComponent::execSetLightFunctionDisabledBrightness },
			{ "SetLightFunctionFadeDistance", (Native)&ULightComponent::execSetLightFunctionFadeDistance },
			{ "SetLightFunctionMaterial", (Native)&ULightComponent::execSetLightFunctionMaterial },
			{ "SetLightFunctionScale", (Native)&ULightComponent::execSetLightFunctionScale },
			{ "SetShadowBias", (Native)&ULightComponent::execSetShadowBias },
			{ "SetTemperature", (Native)&ULightComponent::execSetTemperature },
			{ "SetVolumetricScatteringIntensity", (Native)&ULightComponent::execSetVolumetricScatteringIntensity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting()
	{
		struct LightComponent_eventSetAffectDynamicIndirectLighting_Parms
		{
			bool bNewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bNewValue_SetBit = [](void* Obj){ ((LightComponent_eventSetAffectDynamicIndirectLighting_Parms*)Obj)->bNewValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LightComponent_eventSetAffectDynamicIndirectLighting_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetAffectDynamicIndirectLighting", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponent_eventSetAffectDynamicIndirectLighting_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting()
	{
		struct LightComponent_eventSetAffectTranslucentLighting_Parms
		{
			bool bNewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bNewValue_SetBit = [](void* Obj){ ((LightComponent_eventSetAffectTranslucentLighting_Parms*)Obj)->bNewValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LightComponent_eventSetAffectTranslucentLighting_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetAffectTranslucentLighting", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponent_eventSetAffectTranslucentLighting_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULightComponent_SetBloomScale()
	{
		struct LightComponent_eventSetBloomScale_Parms
		{
			float NewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LightComponent_eventSetBloomScale_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetBloomScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponent_eventSetBloomScale_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULightComponent_SetBloomThreshold()
	{
		struct LightComponent_eventSetBloomThreshold_Parms
		{
			float NewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LightComponent_eventSetBloomThreshold_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetBloomThreshold", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponent_eventSetBloomThreshold_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULightComponent_SetBloomTint()
	{
		struct LightComponent_eventSetBloomTint_Parms
		{
			FColor NewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Struct, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LightComponent_eventSetBloomTint_Parms, NewValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetBloomTint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(LightComponent_eventSetBloomTint_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom()
	{
		struct LightComponent_eventSetEnableLightShaftBloom_Parms
		{
			bool bNewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bNewValue_SetBit = [](void* Obj){ ((LightComponent_eventSetEnableLightShaftBloom_Parms*)Obj)->bNewValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LightComponent_eventSetEnableLightShaftBloom_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetEnableLightShaftBloom", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponent_eventSetEnableLightShaftBloom_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULightComponent_SetIESTexture()
	{
		struct LightComponent_eventSetIESTexture_Parms
		{
			UTextureLightProfile* NewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Object, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LightComponent_eventSetIESTexture_Parms, NewValue), Z_Construct_UClass_UTextureLightProfile_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|Light" },
				{ "DisplayName", "Set IES Texture" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetIESTexture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponent_eventSetIESTexture_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity()
	{
		struct LightComponent_eventSetIndirectLightingIntensity_Parms
		{
			float NewIntensity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "NewIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LightComponent_eventSetIndirectLightingIntensity_Parms, NewIntensity), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewIntensity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetIndirectLightingIntensity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponent_eventSetIndirectLightingIntensity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULightComponent_SetIntensity()
	{
		struct LightComponent_eventSetIntensity_Parms
		{
			float NewIntensity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "NewIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LightComponent_eventSetIntensity_Parms, NewIntensity), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewIntensity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
				{ "ToolTip", "Set intensity of the light" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetIntensity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponent_eventSetIntensity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULightComponent_SetLightColor()
	{
		struct LightComponent_eventSetLightColor_Parms
		{
			FLinearColor NewLightColor;
			bool bSRGB;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bSRGB_SetBit = [](void* Obj){ ((LightComponent_eventSetLightColor_Parms*)Obj)->bSRGB = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSRGB = { UE4CodeGen_Private::EPropertyClass::Bool, "bSRGB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LightComponent_eventSetLightColor_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSRGB_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLightColor = { UE4CodeGen_Private::EPropertyClass::Struct, "NewLightColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LightComponent_eventSetLightColor_Parms, NewLightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSRGB,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewLightColor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|Light" },
				{ "CPP_Default_bSRGB", "true" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
				{ "ToolTip", "Set color of the light" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetLightColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(LightComponent_eventSetLightColor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness()
	{
		struct LightComponent_eventSetLightFunctionDisabledBrightness_Parms
		{
			float NewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LightComponent_eventSetLightFunctionDisabledBrightness_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetLightFunctionDisabledBrightness", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponent_eventSetLightFunctionDisabledBrightness_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance()
	{
		struct LightComponent_eventSetLightFunctionFadeDistance_Parms
		{
			float NewLightFunctionFadeDistance;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewLightFunctionFadeDistance = { UE4CodeGen_Private::EPropertyClass::Float, "NewLightFunctionFadeDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LightComponent_eventSetLightFunctionFadeDistance_Parms, NewLightFunctionFadeDistance), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewLightFunctionFadeDistance,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetLightFunctionFadeDistance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponent_eventSetLightFunctionFadeDistance_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial()
	{
		struct LightComponent_eventSetLightFunctionMaterial_Parms
		{
			UMaterialInterface* NewLightFunctionMaterial;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewLightFunctionMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "NewLightFunctionMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LightComponent_eventSetLightFunctionMaterial_Parms, NewLightFunctionMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewLightFunctionMaterial,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetLightFunctionMaterial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponent_eventSetLightFunctionMaterial_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULightComponent_SetLightFunctionScale()
	{
		struct LightComponent_eventSetLightFunctionScale_Parms
		{
			FVector NewLightFunctionScale;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLightFunctionScale = { UE4CodeGen_Private::EPropertyClass::Struct, "NewLightFunctionScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LightComponent_eventSetLightFunctionScale_Parms, NewLightFunctionScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewLightFunctionScale,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetLightFunctionScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(LightComponent_eventSetLightFunctionScale_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULightComponent_SetShadowBias()
	{
		struct LightComponent_eventSetShadowBias_Parms
		{
			float NewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LightComponent_eventSetShadowBias_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetShadowBias", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponent_eventSetShadowBias_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULightComponent_SetTemperature()
	{
		struct LightComponent_eventSetTemperature_Parms
		{
			float NewTemperature;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewTemperature = { UE4CodeGen_Private::EPropertyClass::Float, "NewTemperature", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LightComponent_eventSetTemperature_Parms, NewTemperature), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewTemperature,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetTemperature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponent_eventSetTemperature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity()
	{
		struct LightComponent_eventSetVolumetricScatteringIntensity_Parms
		{
			float NewIntensity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "NewIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LightComponent_eventSetVolumetricScatteringIntensity_Parms, NewIntensity), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewIntensity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetVolumetricScatteringIntensity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponent_eventSetVolumetricScatteringIntensity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULightComponent_NoRegister()
	{
		return ULightComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_ULightComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ULightComponentBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting, "SetAffectDynamicIndirectLighting" }, // 4115078566
				{ &Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting, "SetAffectTranslucentLighting" }, // 543905999
				{ &Z_Construct_UFunction_ULightComponent_SetBloomScale, "SetBloomScale" }, // 520317258
				{ &Z_Construct_UFunction_ULightComponent_SetBloomThreshold, "SetBloomThreshold" }, // 3094914899
				{ &Z_Construct_UFunction_ULightComponent_SetBloomTint, "SetBloomTint" }, // 993621360
				{ &Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom, "SetEnableLightShaftBloom" }, // 3323607427
				{ &Z_Construct_UFunction_ULightComponent_SetIESTexture, "SetIESTexture" }, // 2240835954
				{ &Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity, "SetIndirectLightingIntensity" }, // 2592830997
				{ &Z_Construct_UFunction_ULightComponent_SetIntensity, "SetIntensity" }, // 1919010594
				{ &Z_Construct_UFunction_ULightComponent_SetLightColor, "SetLightColor" }, // 122314826
				{ &Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness, "SetLightFunctionDisabledBrightness" }, // 3600940096
				{ &Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance, "SetLightFunctionFadeDistance" }, // 2754794369
				{ &Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial, "SetLightFunctionMaterial" }, // 19452944
				{ &Z_Construct_UFunction_ULightComponent_SetLightFunctionScale, "SetLightFunctionScale" }, // 1665208300
				{ &Z_Construct_UFunction_ULightComponent_SetShadowBias, "SetShadowBias" }, // 1488723672
				{ &Z_Construct_UFunction_ULightComponent_SetTemperature, "SetTemperature" }, // 2404274733
				{ &Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity, "SetVolumetricScatteringIntensity" }, // 3411927262
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Trigger Activation Components|Activation Physics Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
				{ "IncludePath", "Components/LightComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayStartOffsetDepthScale_MetaData[] = {
				{ "Category", "DistanceFieldShadows" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
				{ "ToolTip", "Controls how large of an offset ray traced shadows have from the receiving surface as the camera gets further away.\nThis can be useful to hide self-shadowing artifacts from low resolution distance fields on huge static meshes." },
				{ "UIMax", ".1" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RayStartOffsetDepthScale = { UE4CodeGen_Private::EPropertyClass::Float, "RayStartOffsetDepthScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, RayStartOffsetDepthScale), METADATA_PARAMS(NewProp_RayStartOffsetDepthScale_MetaData, ARRAY_COUNT(NewProp_RayStartOffsetDepthScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRayTracedDistanceFieldShadows_MetaData[] = {
				{ "Category", "DistanceFieldShadows" },
				{ "DisplayName", "RayTraced DistanceField Shadows" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
				{ "ToolTip", "Whether to use ray traced distance field area shadows.  The project setting bGenerateMeshDistanceFields must be enabled for this to have effect.\nDistance field shadows support area lights so they create soft shadows with sharp contacts.\nThey have less aliasing artifacts than standard shadowmaps, but inherit all the limitations of distance field representations (only uniform scale, no deformation).\nThese shadows have a low per-object cost (and don't depend on triangle count) so they are effective for distant shadows from a dynamic sun." },
			};
#endif
			auto NewProp_bUseRayTracedDistanceFieldShadows_SetBit = [](void* Obj){ ((ULightComponent*)Obj)->bUseRayTracedDistanceFieldShadows = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRayTracedDistanceFieldShadows = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseRayTracedDistanceFieldShadows", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULightComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseRayTracedDistanceFieldShadows_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseRayTracedDistanceFieldShadows_MetaData, ARRAY_COUNT(NewProp_bUseRayTracedDistanceFieldShadows_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomTint_MetaData[] = {
				{ "Category", "LightShafts" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
				{ "ToolTip", "Multiplies against scene color to create the bloom color." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BloomTint = { UE4CodeGen_Private::EPropertyClass::Struct, "BloomTint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, BloomTint), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_BloomTint_MetaData, ARRAY_COUNT(NewProp_BloomTint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomThreshold_MetaData[] = {
				{ "Category", "LightShafts" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
				{ "ToolTip", "Scene color must be larger than this to create bloom in the light shafts." },
				{ "UIMax", "4" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloomThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "BloomThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, BloomThreshold), METADATA_PARAMS(NewProp_BloomThreshold_MetaData, ARRAY_COUNT(NewProp_BloomThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomScale_MetaData[] = {
				{ "Category", "LightShafts" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
				{ "ToolTip", "Scales the additive color." },
				{ "UIMax", "10" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloomScale = { UE4CodeGen_Private::EPropertyClass::Float, "BloomScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, BloomScale), METADATA_PARAMS(NewProp_BloomScale_MetaData, ARRAY_COUNT(NewProp_BloomScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLightShaftBloom_MetaData[] = {
				{ "Category", "LightShafts" },
				{ "DisplayName", "Light Shaft Bloom" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
				{ "ToolTip", "Whether to render light shaft bloom from this light.\nFor directional lights, the color around the light direction will be blurred radially and added back to the scene.\nfor point lights, the color on pixels closer than the light's SourceRadius will be blurred radially and added back to the scene." },
			};
#endif
			auto NewProp_bEnableLightShaftBloom_SetBit = [](void* Obj){ ((ULightComponent*)Obj)->bEnableLightShaftBloom = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLightShaftBloom = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableLightShaftBloom", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULightComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableLightShaftBloom_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableLightShaftBloom_MetaData, ARRAY_COUNT(NewProp_bEnableLightShaftBloom_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisabledBrightness_MetaData[] = {
				{ "Category", "LightFunction" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
				{ "ToolTip", "Brightness factor applied to the light when the light function is specified but disabled, for example in scene captures that use SceneCapView_LitNoShadows.\nThis should be set to the average brightness of the light function material's emissive input, which should be between 0 and 1." },
				{ "UIMax", "1.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisabledBrightness = { UE4CodeGen_Private::EPropertyClass::Float, "DisabledBrightness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, DisabledBrightness), METADATA_PARAMS(NewProp_DisabledBrightness_MetaData, ARRAY_COUNT(NewProp_DisabledBrightness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightFunctionFadeDistance_MetaData[] = {
				{ "Category", "LightFunction" },
				{ "DisplayName", "Fade Distance" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
				{ "ToolTip", "Distance at which the light function should be completely faded to DisabledBrightness.\nThis is useful for hiding aliasing from light functions applied in the distance." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightFunctionFadeDistance = { UE4CodeGen_Private::EPropertyClass::Float, "LightFunctionFadeDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, LightFunctionFadeDistance), METADATA_PARAMS(NewProp_LightFunctionFadeDistance_MetaData, ARRAY_COUNT(NewProp_LightFunctionFadeDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IESBrightnessScale_MetaData[] = {
				{ "Category", "LightProfiles" },
				{ "DisplayName", "IES Intensity Scale" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
				{ "ToolTip", "Global scale for IES brightness contribution. Only available when \"Use IES Brightness\" is selected, and a valid IES profile texture is set" },
				{ "UIMax", "10.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IESBrightnessScale = { UE4CodeGen_Private::EPropertyClass::Float, "IESBrightnessScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, IESBrightnessScale), METADATA_PARAMS(NewProp_IESBrightnessScale_MetaData, ARRAY_COUNT(NewProp_IESBrightnessScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseIESBrightness_MetaData[] = {
				{ "Category", "LightProfiles" },
				{ "DisplayName", "Use IES Intensity" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
				{ "ToolTip", "true: take light brightness from IES profile, false: use the light brightness - the maximum light in one direction is used to define no masking. Use with InverseSquareFalloff. Will be disabled if a valid IES profile texture is not supplied." },
			};
#endif
			auto NewProp_bUseIESBrightness_SetBit = [](void* Obj){ ((ULightComponent*)Obj)->bUseIESBrightness = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseIESBrightness = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseIESBrightness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULightComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseIESBrightness_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseIESBrightness_MetaData, ARRAY_COUNT(NewProp_bUseIESBrightness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IESTexture_MetaData[] = {
				{ "Category", "LightProfiles" },
				{ "DisplayName", "IES Texture" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
				{ "ToolTip", "IES texture (light profiles from real world measured data)" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IESTexture = { UE4CodeGen_Private::EPropertyClass::Object, "IESTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, IESTexture), Z_Construct_UClass_UTextureLightProfile_NoRegister, METADATA_PARAMS(NewProp_IESTexture_MetaData, ARRAY_COUNT(NewProp_IESTexture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightFunctionScale_MetaData[] = {
				{ "AllowPreserveRatio", "true" },
				{ "Category", "LightFunction" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
				{ "ToolTip", "Scales the light function projection.  X and Y scale in the directions perpendicular to the light's direction, Z scales along the light direction." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightFunctionScale = { UE4CodeGen_Private::EPropertyClass::Struct, "LightFunctionScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, LightFunctionScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LightFunctionScale_MetaData, ARRAY_COUNT(NewProp_LightFunctionScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightFunctionMaterial_MetaData[] = {
				{ "Category", "LightFunction" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
				{ "ToolTip", "The light function material to be applied to this light.\nNote that only non-lightmapped lights (UseDirectLightMap=False) can have a light function." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightFunctionMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "LightFunctionMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, LightFunctionMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_LightFunctionMaterial_MetaData, ARRAY_COUNT(NewProp_LightFunctionMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingChannels_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
				{ "ToolTip", "Channels that this light should affect.\nThese channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightingChannels = { UE4CodeGen_Private::EPropertyClass::Struct, "LightingChannels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, LightingChannels), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(NewProp_LightingChannels_MetaData, ARRAY_COUNT(NewProp_LightingChannels_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectDynamicIndirectLighting_MetaData[] = {
				{ "Category", "Light" },
				{ "DisplayName", "Dynamic Indirect Lighting" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
				{ "ToolTip", "Whether the light should be injected into the Light Propagation Volume" },
			};
#endif
			auto NewProp_bAffectDynamicIndirectLighting_SetBit = [](void* Obj){ ((ULightComponent*)Obj)->bAffectDynamicIndirectLighting = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectDynamicIndirectLighting = { UE4CodeGen_Private::EPropertyClass::Bool, "bAffectDynamicIndirectLighting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULightComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAffectDynamicIndirectLighting_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAffectDynamicIndirectLighting_MetaData, ARRAY_COUNT(NewProp_bAffectDynamicIndirectLighting_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastShadowsFromCinematicObjectsOnly_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
				{ "ToolTip", "Whether the light should only cast shadows from components marked as bCastCinematicShadows.\nThis is useful for setting up cinematic Movable spotlights aimed at characters and avoiding the shadow depth rendering costs of the background.\nNote: this only works with dynamic shadow maps, not with static shadowing or Ray Traced Distance Field shadows." },
			};
#endif
			auto NewProp_bCastShadowsFromCinematicObjectsOnly_SetBit = [](void* Obj){ ((ULightComponent*)Obj)->bCastShadowsFromCinematicObjectsOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastShadowsFromCinematicObjectsOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bCastShadowsFromCinematicObjectsOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULightComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCastShadowsFromCinematicObjectsOnly_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCastShadowsFromCinematicObjectsOnly_MetaData, ARRAY_COUNT(NewProp_bCastShadowsFromCinematicObjectsOnly_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastTranslucentShadows_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
				{ "ToolTip", "Whether the light is allowed to cast dynamic shadows from translucency." },
			};
#endif
			auto NewProp_CastTranslucentShadows_SetBit = [](void* Obj){ ((ULightComponent*)Obj)->CastTranslucentShadows = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CastTranslucentShadows = { UE4CodeGen_Private::EPropertyClass::Bool, "CastTranslucentShadows", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULightComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_CastTranslucentShadows_SetBit)>::SetBit, METADATA_PARAMS(NewProp_CastTranslucentShadows_MetaData, ARRAY_COUNT(NewProp_CastTranslucentShadows_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InverseSquaredFalloff_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
			};
#endif
			auto NewProp_InverseSquaredFalloff_SetBit = [](void* Obj){ ((ULightComponent*)Obj)->InverseSquaredFalloff_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InverseSquaredFalloff = { UE4CodeGen_Private::EPropertyClass::Bool, "InverseSquaredFalloff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULightComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_InverseSquaredFalloff_SetBit)>::SetBit, METADATA_PARAMS(NewProp_InverseSquaredFalloff_MetaData, ARRAY_COUNT(NewProp_InverseSquaredFalloff_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContactShadowLength_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
				{ "ToolTip", "Length of screen space ray trace for sharp contact shadows. Zero is disabled." },
				{ "UIMax", "1.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ContactShadowLength = { UE4CodeGen_Private::EPropertyClass::Float, "ContactShadowLength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, ContactShadowLength), METADATA_PARAMS(NewProp_ContactShadowLength_MetaData, ARRAY_COUNT(NewProp_ContactShadowLength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowSharpen_MetaData[] = {
				{ "Category", "Light" },
				{ "DisplayName", "Shadow Filter Sharpen" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
				{ "ToolTip", "Amount to sharpen shadow filtering" },
				{ "UIMax", "1.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShadowSharpen = { UE4CodeGen_Private::EPropertyClass::Float, "ShadowSharpen", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, ShadowSharpen), METADATA_PARAMS(NewProp_ShadowSharpen_MetaData, ARRAY_COUNT(NewProp_ShadowSharpen_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowBias_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
				{ "ToolTip", "Controls how accurate self shadowing of whole scene shadows from this light are.\nAt 0, shadows will start at the their caster surface, but there will be many self shadowing artifacts.\nlarger values, shadows will start further from their caster, and there won't be self shadowing artifacts but object might appear to fly.\naround 0.5 seems to be a good tradeoff. This also affects the soft transition of shadows" },
				{ "UIMax", "1" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShadowBias = { UE4CodeGen_Private::EPropertyClass::Float, "ShadowBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, ShadowBias), METADATA_PARAMS(NewProp_ShadowBias_MetaData, ARRAY_COUNT(NewProp_ShadowBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowResolutionScale_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
				{ "ToolTip", "Scales the resolution of shadowmaps used to shadow this light.  By default shadowmap resolution is chosen based on screen size of the caster.\nNote: shadowmap resolution is still clamped by 'r.Shadow.MaxResolution'" },
				{ "UIMax", "8" },
				{ "UIMin", ".125" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShadowResolutionScale = { UE4CodeGen_Private::EPropertyClass::Float, "ShadowResolutionScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, ShadowResolutionScale), METADATA_PARAMS(NewProp_ShadowResolutionScale_MetaData, ARRAY_COUNT(NewProp_ShadowResolutionScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRoughness_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
				{ "ToolTip", "Min roughness effective for this light. Used for softening specular highlights." },
				{ "UIMax", "1.0" },
				{ "UIMin", "0.08" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinRoughness = { UE4CodeGen_Private::EPropertyClass::Float, "MinRoughness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, MinRoughness), METADATA_PARAMS(NewProp_MinRoughness_MetaData, ARRAY_COUNT(NewProp_MinRoughness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowMapChannel_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
				{ "ToolTip", "Legacy shadowmap channel from the lighting build, now stored in FLightComponentMapBuildData." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShadowMapChannel = { UE4CodeGen_Private::EPropertyClass::Int, "ShadowMapChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(ULightComponent, ShadowMapChannel_DEPRECATED), METADATA_PARAMS(NewProp_ShadowMapChannel_MetaData, ARRAY_COUNT(NewProp_ShadowMapChannel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseTemperature_MetaData[] = {
				{ "Category", "Light" },
				{ "DisplayName", "Use Temperature" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
				{ "ToolTip", "false: use white (D65) as illuminant." },
			};
#endif
			auto NewProp_bUseTemperature_SetBit = [](void* Obj){ ((ULightComponent*)Obj)->bUseTemperature = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseTemperature = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseTemperature", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULightComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseTemperature_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseTemperature_MetaData, ARRAY_COUNT(NewProp_bUseTemperature_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceFadeRange_MetaData[] = {
				{ "Category", "Performance" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceFadeRange = { UE4CodeGen_Private::EPropertyClass::Float, "MaxDistanceFadeRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULightComponent, MaxDistanceFadeRange), METADATA_PARAMS(NewProp_MaxDistanceFadeRange_MetaData, ARRAY_COUNT(NewProp_MaxDistanceFadeRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDrawDistance_MetaData[] = {
				{ "Category", "Performance" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDrawDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MaxDrawDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULightComponent, MaxDrawDistance), METADATA_PARAMS(NewProp_MaxDrawDistance_MetaData, ARRAY_COUNT(NewProp_MaxDrawDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
				{ "ToolTip", "Color temperature in Kelvin of the blackbody illuminant.\nWhite (D65) is 6500K." },
				{ "UIMax", "12000.0" },
				{ "UIMin", "1700.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Temperature = { UE4CodeGen_Private::EPropertyClass::Float, "Temperature", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, Temperature), METADATA_PARAMS(NewProp_Temperature_MetaData, ARRAY_COUNT(NewProp_Temperature_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RayStartOffsetDepthScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseRayTracedDistanceFieldShadows,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BloomTint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BloomThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BloomScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableLightShaftBloom,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DisabledBrightness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightFunctionFadeDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IESBrightnessScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseIESBrightness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IESTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightFunctionScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightFunctionMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightingChannels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAffectDynamicIndirectLighting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCastShadowsFromCinematicObjectsOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CastTranslucentShadows,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InverseSquaredFalloff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContactShadowLength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShadowSharpen,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShadowBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShadowResolutionScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinRoughness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShadowMapChannel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseTemperature,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxDistanceFadeRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxDrawDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Temperature,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULightComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULightComponent::StaticClass,
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
	IMPLEMENT_CLASS(ULightComponent, 3448341424);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightComponent(Z_Construct_UClass_ULightComponent, &ULightComponent::StaticClass, TEXT("/Script/Engine"), TEXT("ULightComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
