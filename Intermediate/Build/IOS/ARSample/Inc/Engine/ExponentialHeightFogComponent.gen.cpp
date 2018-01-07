// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/ExponentialHeightFogComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExponentialHeightFogComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UExponentialHeightFogComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution();
// End Cross Module References
	void UExponentialHeightFogComponent::StaticRegisterNativesUExponentialHeightFogComponent()
	{
		UClass* Class = UExponentialHeightFogComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDirectionalInscatteringColor", (Native)&UExponentialHeightFogComponent::execSetDirectionalInscatteringColor },
			{ "SetDirectionalInscatteringExponent", (Native)&UExponentialHeightFogComponent::execSetDirectionalInscatteringExponent },
			{ "SetDirectionalInscatteringStartDistance", (Native)&UExponentialHeightFogComponent::execSetDirectionalInscatteringStartDistance },
			{ "SetFogCutoffDistance", (Native)&UExponentialHeightFogComponent::execSetFogCutoffDistance },
			{ "SetFogDensity", (Native)&UExponentialHeightFogComponent::execSetFogDensity },
			{ "SetFogHeightFalloff", (Native)&UExponentialHeightFogComponent::execSetFogHeightFalloff },
			{ "SetFogInscatteringColor", (Native)&UExponentialHeightFogComponent::execSetFogInscatteringColor },
			{ "SetFogMaxOpacity", (Native)&UExponentialHeightFogComponent::execSetFogMaxOpacity },
			{ "SetFullyDirectionalInscatteringColorDistance", (Native)&UExponentialHeightFogComponent::execSetFullyDirectionalInscatteringColorDistance },
			{ "SetInscatteringColorCubemap", (Native)&UExponentialHeightFogComponent::execSetInscatteringColorCubemap },
			{ "SetInscatteringColorCubemapAngle", (Native)&UExponentialHeightFogComponent::execSetInscatteringColorCubemapAngle },
			{ "SetInscatteringTextureTint", (Native)&UExponentialHeightFogComponent::execSetInscatteringTextureTint },
			{ "SetNonDirectionalInscatteringColorDistance", (Native)&UExponentialHeightFogComponent::execSetNonDirectionalInscatteringColorDistance },
			{ "SetStartDistance", (Native)&UExponentialHeightFogComponent::execSetStartDistance },
			{ "SetVolumetricFog", (Native)&UExponentialHeightFogComponent::execSetVolumetricFog },
			{ "SetVolumetricFogAlbedo", (Native)&UExponentialHeightFogComponent::execSetVolumetricFogAlbedo },
			{ "SetVolumetricFogDistance", (Native)&UExponentialHeightFogComponent::execSetVolumetricFogDistance },
			{ "SetVolumetricFogEmissive", (Native)&UExponentialHeightFogComponent::execSetVolumetricFogEmissive },
			{ "SetVolumetricFogExtinctionScale", (Native)&UExponentialHeightFogComponent::execSetVolumetricFogExtinctionScale },
			{ "SetVolumetricFogScatteringDistribution", (Native)&UExponentialHeightFogComponent::execSetVolumetricFogScatteringDistribution },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor()
	{
		struct ExponentialHeightFogComponent_eventSetDirectionalInscatteringColor_Parms
		{
			FLinearColor Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Struct, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetDirectionalInscatteringColor_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|ExponentialHeightFog" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetDirectionalInscatteringColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(ExponentialHeightFogComponent_eventSetDirectionalInscatteringColor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent()
	{
		struct ExponentialHeightFogComponent_eventSetDirectionalInscatteringExponent_Parms
		{
			float Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetDirectionalInscatteringExponent_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|ExponentialHeightFog" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetDirectionalInscatteringExponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExponentialHeightFogComponent_eventSetDirectionalInscatteringExponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance()
	{
		struct ExponentialHeightFogComponent_eventSetDirectionalInscatteringStartDistance_Parms
		{
			float Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetDirectionalInscatteringStartDistance_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|ExponentialHeightFog" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetDirectionalInscatteringStartDistance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExponentialHeightFogComponent_eventSetDirectionalInscatteringStartDistance_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance()
	{
		struct ExponentialHeightFogComponent_eventSetFogCutoffDistance_Parms
		{
			float Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetFogCutoffDistance_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|ExponentialHeightFog" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetFogCutoffDistance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExponentialHeightFogComponent_eventSetFogCutoffDistance_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity()
	{
		struct ExponentialHeightFogComponent_eventSetFogDensity_Parms
		{
			float Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetFogDensity_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|ExponentialHeightFog" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetFogDensity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExponentialHeightFogComponent_eventSetFogDensity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff()
	{
		struct ExponentialHeightFogComponent_eventSetFogHeightFalloff_Parms
		{
			float Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetFogHeightFalloff_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|ExponentialHeightFog" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetFogHeightFalloff", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExponentialHeightFogComponent_eventSetFogHeightFalloff_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor()
	{
		struct ExponentialHeightFogComponent_eventSetFogInscatteringColor_Parms
		{
			FLinearColor Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Struct, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetFogInscatteringColor_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|ExponentialHeightFog" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetFogInscatteringColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(ExponentialHeightFogComponent_eventSetFogInscatteringColor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity()
	{
		struct ExponentialHeightFogComponent_eventSetFogMaxOpacity_Parms
		{
			float Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetFogMaxOpacity_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|ExponentialHeightFog" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetFogMaxOpacity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExponentialHeightFogComponent_eventSetFogMaxOpacity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance()
	{
		struct ExponentialHeightFogComponent_eventSetFullyDirectionalInscatteringColorDistance_Parms
		{
			float Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetFullyDirectionalInscatteringColorDistance_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|ExponentialHeightFog" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetFullyDirectionalInscatteringColorDistance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExponentialHeightFogComponent_eventSetFullyDirectionalInscatteringColorDistance_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap()
	{
		struct ExponentialHeightFogComponent_eventSetInscatteringColorCubemap_Parms
		{
			UTextureCube* Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Object, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetInscatteringColorCubemap_Parms, Value), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|ExponentialHeightFog" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetInscatteringColorCubemap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExponentialHeightFogComponent_eventSetInscatteringColorCubemap_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle()
	{
		struct ExponentialHeightFogComponent_eventSetInscatteringColorCubemapAngle_Parms
		{
			float Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetInscatteringColorCubemapAngle_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|ExponentialHeightFog" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetInscatteringColorCubemapAngle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExponentialHeightFogComponent_eventSetInscatteringColorCubemapAngle_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint()
	{
		struct ExponentialHeightFogComponent_eventSetInscatteringTextureTint_Parms
		{
			FLinearColor Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Struct, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetInscatteringTextureTint_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|ExponentialHeightFog" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetInscatteringTextureTint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(ExponentialHeightFogComponent_eventSetInscatteringTextureTint_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance()
	{
		struct ExponentialHeightFogComponent_eventSetNonDirectionalInscatteringColorDistance_Parms
		{
			float Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetNonDirectionalInscatteringColorDistance_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|ExponentialHeightFog" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetNonDirectionalInscatteringColorDistance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExponentialHeightFogComponent_eventSetNonDirectionalInscatteringColorDistance_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance()
	{
		struct ExponentialHeightFogComponent_eventSetStartDistance_Parms
		{
			float Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetStartDistance_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|ExponentialHeightFog" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetStartDistance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExponentialHeightFogComponent_eventSetStartDistance_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog()
	{
		struct ExponentialHeightFogComponent_eventSetVolumetricFog_Parms
		{
			bool bNewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bNewValue_SetBit = [](void* Obj){ ((ExponentialHeightFogComponent_eventSetVolumetricFog_Parms*)Obj)->bNewValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ExponentialHeightFogComponent_eventSetVolumetricFog_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|VolumetricFog" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetVolumetricFog", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExponentialHeightFogComponent_eventSetVolumetricFog_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo()
	{
		struct ExponentialHeightFogComponent_eventSetVolumetricFogAlbedo_Parms
		{
			FColor NewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Struct, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetVolumetricFogAlbedo_Parms, NewValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|VolumetricFog" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetVolumetricFogAlbedo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(ExponentialHeightFogComponent_eventSetVolumetricFogAlbedo_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance()
	{
		struct ExponentialHeightFogComponent_eventSetVolumetricFogDistance_Parms
		{
			float NewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetVolumetricFogDistance_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|VolumetricFog" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetVolumetricFogDistance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExponentialHeightFogComponent_eventSetVolumetricFogDistance_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive()
	{
		struct ExponentialHeightFogComponent_eventSetVolumetricFogEmissive_Parms
		{
			FLinearColor NewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Struct, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetVolumetricFogEmissive_Parms, NewValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|VolumetricFog" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetVolumetricFogEmissive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(ExponentialHeightFogComponent_eventSetVolumetricFogEmissive_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale()
	{
		struct ExponentialHeightFogComponent_eventSetVolumetricFogExtinctionScale_Parms
		{
			float NewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetVolumetricFogExtinctionScale_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|VolumetricFog" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetVolumetricFogExtinctionScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExponentialHeightFogComponent_eventSetVolumetricFogExtinctionScale_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution()
	{
		struct ExponentialHeightFogComponent_eventSetVolumetricFogScatteringDistribution_Parms
		{
			float NewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetVolumetricFogScatteringDistribution_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|VolumetricFog" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetVolumetricFogScatteringDistribution", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExponentialHeightFogComponent_eventSetVolumetricFogScatteringDistribution_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister()
	{
		return UExponentialHeightFogComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UExponentialHeightFogComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor, "SetDirectionalInscatteringColor" }, // 2431116174
				{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent, "SetDirectionalInscatteringExponent" }, // 4188504028
				{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance, "SetDirectionalInscatteringStartDistance" }, // 37900217
				{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance, "SetFogCutoffDistance" }, // 1792715456
				{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity, "SetFogDensity" }, // 2884348121
				{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff, "SetFogHeightFalloff" }, // 1639622259
				{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor, "SetFogInscatteringColor" }, // 256726593
				{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity, "SetFogMaxOpacity" }, // 772722701
				{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance, "SetFullyDirectionalInscatteringColorDistance" }, // 3615426975
				{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap, "SetInscatteringColorCubemap" }, // 1268830529
				{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle, "SetInscatteringColorCubemapAngle" }, // 269113176
				{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint, "SetInscatteringTextureTint" }, // 205955049
				{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance, "SetNonDirectionalInscatteringColorDistance" }, // 4193544214
				{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance, "SetStartDistance" }, // 3144134231
				{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog, "SetVolumetricFog" }, // 2188157488
				{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo, "SetVolumetricFogAlbedo" }, // 563681675
				{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance, "SetVolumetricFogDistance" }, // 1486284069
				{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive, "SetVolumetricFogEmissive" }, // 3755455295
				{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale, "SetVolumetricFogExtinctionScale" }, // 1206022466
				{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution, "SetVolumetricFogScatteringDistribution" }, // 3211747648
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Rendering" },
				{ "HideCategories", "Object Mobility Trigger PhysicsVolume" },
				{ "IncludePath", "Components/ExponentialHeightFogComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
				{ "ToolTip", "Used to create fogging effects such as clouds but with a density that is related to the height of the fog." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideLightColorsWithFogInscatteringColors_MetaData[] = {
				{ "Category", "VolumetricFog" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
				{ "ToolTip", "Whether to use FogInscatteringColor for the Sky Light volumetric scattering color and DirectionalInscatteringColor for the Directional Light scattering color.\nMake sure your directional light has 'Atmosphere Sun Light' enabled!\nEnabling this allows Volumetric fog to better match Height fog in the distance, but produces non-physical volumetric lighting that may not match surface lighting." },
			};
#endif
			auto NewProp_bOverrideLightColorsWithFogInscatteringColors_SetBit = [](void* Obj){ ((UExponentialHeightFogComponent*)Obj)->bOverrideLightColorsWithFogInscatteringColors = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideLightColorsWithFogInscatteringColors = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideLightColorsWithFogInscatteringColors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UExponentialHeightFogComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideLightColorsWithFogInscatteringColors_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideLightColorsWithFogInscatteringColors_MetaData, ARRAY_COUNT(NewProp_bOverrideLightColorsWithFogInscatteringColors_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogStaticLightingScatteringIntensity_MetaData[] = {
				{ "Category", "VolumetricFog" },
				{ "DisplayName", "Static Lighting Scattering Intensity" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
				{ "UIMax", "10" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumetricFogStaticLightingScatteringIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "VolumetricFogStaticLightingScatteringIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, VolumetricFogStaticLightingScatteringIntensity), METADATA_PARAMS(NewProp_VolumetricFogStaticLightingScatteringIntensity_MetaData, ARRAY_COUNT(NewProp_VolumetricFogStaticLightingScatteringIntensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogDistance_MetaData[] = {
				{ "Category", "VolumetricFog" },
				{ "DisplayName", "View Distance" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
				{ "ToolTip", "Distance over which volumetric fog should be computed.  Larger values extend the effect into the distance but expose under-sampling artifacts in details." },
				{ "UIMax", "10000" },
				{ "UIMin", "1000" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumetricFogDistance = { UE4CodeGen_Private::EPropertyClass::Float, "VolumetricFogDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, VolumetricFogDistance), METADATA_PARAMS(NewProp_VolumetricFogDistance_MetaData, ARRAY_COUNT(NewProp_VolumetricFogDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogExtinctionScale_MetaData[] = {
				{ "Category", "VolumetricFog" },
				{ "DisplayName", "Extinction Scale" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
				{ "ToolTip", "Scales the height fog particle extinction amount used by volumetric fog.  Values larger than 1 cause fog particles everywhere absorb more light." },
				{ "UIMax", "10" },
				{ "UIMin", ".1" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumetricFogExtinctionScale = { UE4CodeGen_Private::EPropertyClass::Float, "VolumetricFogExtinctionScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, VolumetricFogExtinctionScale), METADATA_PARAMS(NewProp_VolumetricFogExtinctionScale_MetaData, ARRAY_COUNT(NewProp_VolumetricFogExtinctionScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogEmissive_MetaData[] = {
				{ "Category", "VolumetricFog" },
				{ "DisplayName", "Emissive" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
				{ "ToolTip", "Light emitted by height fog.  This is a density so more light is emitted the further you are looking through the fog.\nIn most cases skylight is a better choice, however right now volumetric fog does not support precomputed lighting,\nSo stationary skylights are unshadowed and static skylights don't affect volumetric fog at all." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VolumetricFogEmissive = { UE4CodeGen_Private::EPropertyClass::Struct, "VolumetricFogEmissive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, VolumetricFogEmissive), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_VolumetricFogEmissive_MetaData, ARRAY_COUNT(NewProp_VolumetricFogEmissive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogAlbedo_MetaData[] = {
				{ "Category", "VolumetricFog" },
				{ "DisplayName", "Albedo" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
				{ "ToolTip", "The height fog particle reflectiveness used by volumetric fog.\nWater particles in air have an albedo near white, while dust has slightly darker value." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VolumetricFogAlbedo = { UE4CodeGen_Private::EPropertyClass::Struct, "VolumetricFogAlbedo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, VolumetricFogAlbedo), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_VolumetricFogAlbedo_MetaData, ARRAY_COUNT(NewProp_VolumetricFogAlbedo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogScatteringDistribution_MetaData[] = {
				{ "Category", "VolumetricFog" },
				{ "DisplayName", "Scattering Distribution" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
				{ "ToolTip", "Controls the scattering phase function - how much incoming light scatters in various directions.\nA distribution value of 0 scatters equally in all directions, while .9 scatters predominantly in the light direction.\nIn order to have visible volumetric fog light shafts from the side, the distribution will need to be closer to 0." },
				{ "UIMax", ".9" },
				{ "UIMin", "-.9" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumetricFogScatteringDistribution = { UE4CodeGen_Private::EPropertyClass::Float, "VolumetricFogScatteringDistribution", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, VolumetricFogScatteringDistribution), METADATA_PARAMS(NewProp_VolumetricFogScatteringDistribution_MetaData, ARRAY_COUNT(NewProp_VolumetricFogScatteringDistribution_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableVolumetricFog_MetaData[] = {
				{ "Category", "VolumetricFog" },
				{ "DisplayName", "Volumetric Fog" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
				{ "ToolTip", "Whether to enable Volumetric fog.  Scalability settings control the resolution of the fog simulation.\nNote that Volumetric fog currently does not support StartDistance, FogMaxOpacity and FogCutoffDistance.\nVolumetric fog also can't match exponential height fog in general as exponential height fog has non-physical behavior." },
			};
#endif
			auto NewProp_bEnableVolumetricFog_SetBit = [](void* Obj){ ((UExponentialHeightFogComponent*)Obj)->bEnableVolumetricFog = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableVolumetricFog = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableVolumetricFog", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UExponentialHeightFogComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableVolumetricFog_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableVolumetricFog_MetaData, ARRAY_COUNT(NewProp_bEnableVolumetricFog_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogCutoffDistance_MetaData[] = {
				{ "Category", "ExponentialHeightFogComponent" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
				{ "ToolTip", "Scene elements past this distance will not have fog applied.  This is useful for excluding skyboxes which already have fog baked in." },
				{ "UIMax", "20000000" },
				{ "UIMin", "100000" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogCutoffDistance = { UE4CodeGen_Private::EPropertyClass::Float, "FogCutoffDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, FogCutoffDistance), METADATA_PARAMS(NewProp_FogCutoffDistance_MetaData, ARRAY_COUNT(NewProp_FogCutoffDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDistance_MetaData[] = {
				{ "Category", "ExponentialHeightFogComponent" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
				{ "ToolTip", "Distance from the camera that the fog will start, in world units." },
				{ "UIMax", "5000" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartDistance = { UE4CodeGen_Private::EPropertyClass::Float, "StartDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, StartDistance), METADATA_PARAMS(NewProp_StartDistance_MetaData, ARRAY_COUNT(NewProp_StartDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogMaxOpacity_MetaData[] = {
				{ "Category", "ExponentialHeightFogComponent" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
				{ "ToolTip", "Maximum opacity of the fog.\nA value of 1 means the fog can become fully opaque at a distance and replace scene color completely,\nA value of 0 means the fog color will not be factored in at all." },
				{ "UIMax", "1" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogMaxOpacity = { UE4CodeGen_Private::EPropertyClass::Float, "FogMaxOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, FogMaxOpacity), METADATA_PARAMS(NewProp_FogMaxOpacity_MetaData, ARRAY_COUNT(NewProp_FogMaxOpacity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogHeightFalloff_MetaData[] = {
				{ "Category", "ExponentialHeightFogComponent" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
				{ "ToolTip", "Height density factor, controls how the density increases as height decreases.\nSmaller values make the visible transition larger." },
				{ "UIMax", "2" },
				{ "UIMin", "0.001" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogHeightFalloff = { UE4CodeGen_Private::EPropertyClass::Float, "FogHeightFalloff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, FogHeightFalloff), METADATA_PARAMS(NewProp_FogHeightFalloff_MetaData, ARRAY_COUNT(NewProp_FogHeightFalloff_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionalInscatteringColor_MetaData[] = {
				{ "Category", "DirectionalInscattering" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
				{ "ToolTip", "Controls the color of the directional inscattering, which is used to approximate inscattering from a directional light.\nNote: there must be a directional light with bUsedAsAtmosphereSunLight enabled for DirectionalInscattering to be used." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectionalInscatteringColor = { UE4CodeGen_Private::EPropertyClass::Struct, "DirectionalInscatteringColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, DirectionalInscatteringColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_DirectionalInscatteringColor_MetaData, ARRAY_COUNT(NewProp_DirectionalInscatteringColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionalInscatteringStartDistance_MetaData[] = {
				{ "Category", "DirectionalInscattering" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
				{ "ToolTip", "Controls the start distance from the viewer of the directional inscattering, which is used to approximate inscattering from a directional light.\nNote: there must be a directional light with bUsedAsAtmosphereSunLight enabled for DirectionalInscattering to be used." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirectionalInscatteringStartDistance = { UE4CodeGen_Private::EPropertyClass::Float, "DirectionalInscatteringStartDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, DirectionalInscatteringStartDistance), METADATA_PARAMS(NewProp_DirectionalInscatteringStartDistance_MetaData, ARRAY_COUNT(NewProp_DirectionalInscatteringStartDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionalInscatteringExponent_MetaData[] = {
				{ "Category", "DirectionalInscattering" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
				{ "ToolTip", "Controls the size of the directional inscattering cone, which is used to approximate inscattering from a directional light.\nNote: there must be a directional light with bUsedAsAtmosphereSunLight enabled for DirectionalInscattering to be used." },
				{ "UIMax", "64" },
				{ "UIMin", "2" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirectionalInscatteringExponent = { UE4CodeGen_Private::EPropertyClass::Float, "DirectionalInscatteringExponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, DirectionalInscatteringExponent), METADATA_PARAMS(NewProp_DirectionalInscatteringExponent_MetaData, ARRAY_COUNT(NewProp_DirectionalInscatteringExponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonDirectionalInscatteringColorDistance_MetaData[] = {
				{ "Category", "InscatteringTexture" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
				{ "ToolTip", "Distance at which only the average color of InscatteringColorCubemap should be used as Inscattering Color." },
				{ "UIMax", "1000000" },
				{ "UIMin", "1000" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NonDirectionalInscatteringColorDistance = { UE4CodeGen_Private::EPropertyClass::Float, "NonDirectionalInscatteringColorDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, NonDirectionalInscatteringColorDistance), METADATA_PARAMS(NewProp_NonDirectionalInscatteringColorDistance_MetaData, ARRAY_COUNT(NewProp_NonDirectionalInscatteringColorDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullyDirectionalInscatteringColorDistance_MetaData[] = {
				{ "Category", "InscatteringTexture" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
				{ "ToolTip", "Distance at which InscatteringColorCubemap should be used directly for the Inscattering Color." },
				{ "UIMax", "1000000" },
				{ "UIMin", "1000" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullyDirectionalInscatteringColorDistance = { UE4CodeGen_Private::EPropertyClass::Float, "FullyDirectionalInscatteringColorDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, FullyDirectionalInscatteringColorDistance), METADATA_PARAMS(NewProp_FullyDirectionalInscatteringColorDistance_MetaData, ARRAY_COUNT(NewProp_FullyDirectionalInscatteringColorDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InscatteringTextureTint_MetaData[] = {
				{ "Category", "InscatteringTexture" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
				{ "ToolTip", "Tint color used when InscatteringColorCubemap is specified, for quick edits without having to reimport InscatteringColorCubemap." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InscatteringTextureTint = { UE4CodeGen_Private::EPropertyClass::Struct, "InscatteringTextureTint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, InscatteringTextureTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_InscatteringTextureTint_MetaData, ARRAY_COUNT(NewProp_InscatteringTextureTint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InscatteringColorCubemapAngle_MetaData[] = {
				{ "Category", "InscatteringTexture" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
				{ "ToolTip", "Angle to rotate the InscatteringColorCubemap around the Z axis." },
				{ "UIMax", "360" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InscatteringColorCubemapAngle = { UE4CodeGen_Private::EPropertyClass::Float, "InscatteringColorCubemapAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, InscatteringColorCubemapAngle), METADATA_PARAMS(NewProp_InscatteringColorCubemapAngle_MetaData, ARRAY_COUNT(NewProp_InscatteringColorCubemapAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InscatteringColorCubemap_MetaData[] = {
				{ "Category", "InscatteringTexture" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
				{ "ToolTip", "Cubemap that can be specified for fog color, which is useful to make distant, heavily fogged scene elements match the sky.\nWhen the cubemap is specified, FogInscatteringColor is ignored and Directional inscattering is disabled." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InscatteringColorCubemap = { UE4CodeGen_Private::EPropertyClass::Object, "InscatteringColorCubemap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, InscatteringColorCubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(NewProp_InscatteringColorCubemap_MetaData, ARRAY_COUNT(NewProp_InscatteringColorCubemap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogInscatteringColor_MetaData[] = {
				{ "Category", "ExponentialHeightFogComponent" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FogInscatteringColor = { UE4CodeGen_Private::EPropertyClass::Struct, "FogInscatteringColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, FogInscatteringColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_FogInscatteringColor_MetaData, ARRAY_COUNT(NewProp_FogInscatteringColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogDensity_MetaData[] = {
				{ "Category", "ExponentialHeightFogComponent" },
				{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
				{ "ToolTip", "Global density factor." },
				{ "UIMax", ".05" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogDensity = { UE4CodeGen_Private::EPropertyClass::Float, "FogDensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, FogDensity), METADATA_PARAMS(NewProp_FogDensity_MetaData, ARRAY_COUNT(NewProp_FogDensity_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideLightColorsWithFogInscatteringColors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumetricFogStaticLightingScatteringIntensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumetricFogDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumetricFogExtinctionScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumetricFogEmissive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumetricFogAlbedo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumetricFogScatteringDistribution,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableVolumetricFog,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FogCutoffDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FogMaxOpacity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FogHeightFalloff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DirectionalInscatteringColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DirectionalInscatteringStartDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DirectionalInscatteringExponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NonDirectionalInscatteringColorDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FullyDirectionalInscatteringColorDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InscatteringTextureTint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InscatteringColorCubemapAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InscatteringColorCubemap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FogInscatteringColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FogDensity,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UExponentialHeightFogComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UExponentialHeightFogComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B03080u,
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
	IMPLEMENT_CLASS(UExponentialHeightFogComponent, 3121829691);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExponentialHeightFogComponent(Z_Construct_UClass_UExponentialHeightFogComponent, &UExponentialHeightFogComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UExponentialHeightFogComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExponentialHeightFogComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
