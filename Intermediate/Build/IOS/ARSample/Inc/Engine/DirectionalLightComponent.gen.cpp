// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/DirectionalLightComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectionalLightComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDirectionalLightComponent();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction();
	ENGINE_API UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades();
	ENGINE_API UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight();
	ENGINE_API UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight();
	ENGINE_API UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion();
	ENGINE_API UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness();
	ENGINE_API UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassDirectionalLightSettings();
// End Cross Module References
	void UDirectionalLightComponent::StaticRegisterNativesUDirectionalLightComponent()
	{
		UClass* Class = UDirectionalLightComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCascadeDistributionExponent", (Native)&UDirectionalLightComponent::execSetCascadeDistributionExponent },
			{ "SetCascadeTransitionFraction", (Native)&UDirectionalLightComponent::execSetCascadeTransitionFraction },
			{ "SetDynamicShadowCascades", (Native)&UDirectionalLightComponent::execSetDynamicShadowCascades },
			{ "SetDynamicShadowDistanceMovableLight", (Native)&UDirectionalLightComponent::execSetDynamicShadowDistanceMovableLight },
			{ "SetDynamicShadowDistanceStationaryLight", (Native)&UDirectionalLightComponent::execSetDynamicShadowDistanceStationaryLight },
			{ "SetEnableLightShaftOcclusion", (Native)&UDirectionalLightComponent::execSetEnableLightShaftOcclusion },
			{ "SetLightShaftOverrideDirection", (Native)&UDirectionalLightComponent::execSetLightShaftOverrideDirection },
			{ "SetOcclusionMaskDarkness", (Native)&UDirectionalLightComponent::execSetOcclusionMaskDarkness },
			{ "SetShadowDistanceFadeoutFraction", (Native)&UDirectionalLightComponent::execSetShadowDistanceFadeoutFraction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent()
	{
		struct DirectionalLightComponent_eventSetCascadeDistributionExponent_Parms
		{
			float NewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DirectionalLightComponent_eventSetCascadeDistributionExponent_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, "SetCascadeDistributionExponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(DirectionalLightComponent_eventSetCascadeDistributionExponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction()
	{
		struct DirectionalLightComponent_eventSetCascadeTransitionFraction_Parms
		{
			float NewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DirectionalLightComponent_eventSetCascadeTransitionFraction_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, "SetCascadeTransitionFraction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(DirectionalLightComponent_eventSetCascadeTransitionFraction_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades()
	{
		struct DirectionalLightComponent_eventSetDynamicShadowCascades_Parms
		{
			int32 NewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Int, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DirectionalLightComponent_eventSetDynamicShadowCascades_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, "SetDynamicShadowCascades", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(DirectionalLightComponent_eventSetDynamicShadowCascades_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight()
	{
		struct DirectionalLightComponent_eventSetDynamicShadowDistanceMovableLight_Parms
		{
			float NewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DirectionalLightComponent_eventSetDynamicShadowDistanceMovableLight_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, "SetDynamicShadowDistanceMovableLight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(DirectionalLightComponent_eventSetDynamicShadowDistanceMovableLight_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight()
	{
		struct DirectionalLightComponent_eventSetDynamicShadowDistanceStationaryLight_Parms
		{
			float NewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DirectionalLightComponent_eventSetDynamicShadowDistanceStationaryLight_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, "SetDynamicShadowDistanceStationaryLight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(DirectionalLightComponent_eventSetDynamicShadowDistanceStationaryLight_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion()
	{
		struct DirectionalLightComponent_eventSetEnableLightShaftOcclusion_Parms
		{
			bool bNewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bNewValue_SetBit = [](void* Obj){ ((DirectionalLightComponent_eventSetEnableLightShaftOcclusion_Parms*)Obj)->bNewValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(DirectionalLightComponent_eventSetEnableLightShaftOcclusion_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, "SetEnableLightShaftOcclusion", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(DirectionalLightComponent_eventSetEnableLightShaftOcclusion_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection()
	{
		struct DirectionalLightComponent_eventSetLightShaftOverrideDirection_Parms
		{
			FVector NewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Struct, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DirectionalLightComponent_eventSetLightShaftOverrideDirection_Parms, NewValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, "SetLightShaftOverrideDirection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(DirectionalLightComponent_eventSetLightShaftOverrideDirection_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness()
	{
		struct DirectionalLightComponent_eventSetOcclusionMaskDarkness_Parms
		{
			float NewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DirectionalLightComponent_eventSetOcclusionMaskDarkness_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, "SetOcclusionMaskDarkness", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(DirectionalLightComponent_eventSetOcclusionMaskDarkness_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction()
	{
		struct DirectionalLightComponent_eventSetShadowDistanceFadeoutFraction_Parms
		{
			float NewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DirectionalLightComponent_eventSetShadowDistanceFadeoutFraction_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, "SetShadowDistanceFadeoutFraction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(DirectionalLightComponent_eventSetShadowDistanceFadeoutFraction_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDirectionalLightComponent_NoRegister()
	{
		return UDirectionalLightComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UDirectionalLightComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ULightComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent, "SetCascadeDistributionExponent" }, // 2967049450
				{ &Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction, "SetCascadeTransitionFraction" }, // 1054836387
				{ &Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades, "SetDynamicShadowCascades" }, // 3504437144
				{ &Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight, "SetDynamicShadowDistanceMovableLight" }, // 3422198023
				{ &Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight, "SetDynamicShadowDistanceStationaryLight" }, // 2394972736
				{ &Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion, "SetEnableLightShaftOcclusion" }, // 1189542673
				{ &Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection, "SetLightShaftOverrideDirection" }, // 392996687
				{ &Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness, "SetOcclusionMaskDarkness" }, // 622800309
				{ &Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction, "SetShadowDistanceFadeoutFraction" }, // 1609500102
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Lights" },
				{ "HideCategories", "Object LightProfiles Trigger Activation Components|Activation Physics Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
				{ "IncludePath", "Components/DirectionalLightComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
				{ "ToolTip", "A light component that has parallel rays. Will provide a uniform lighting across any affected surface (eg. The Sun). This will affect all objects in the defined light-mass importance volume." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedAsAtmosphereSunLight_MetaData[] = {
				{ "Category", "Light" },
				{ "DisplayName", "Atmosphere / Fog Sun Light" },
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
			};
#endif
			auto NewProp_bUsedAsAtmosphereSunLight_SetBit = [](void* Obj){ ((UDirectionalLightComponent*)Obj)->bUsedAsAtmosphereSunLight = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedAsAtmosphereSunLight = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsedAsAtmosphereSunLight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UDirectionalLightComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsedAsAtmosphereSunLight_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUsedAsAtmosphereSunLight_MetaData, ARRAY_COUNT(NewProp_bUsedAsAtmosphereSunLight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModulatedShadowColor_MetaData[] = {
				{ "Category", "Light" },
				{ "HideAlphaChannel", "" },
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
				{ "ToolTip", "Color to modulate against the scene color when rendering modulated shadows. (mobile only)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModulatedShadowColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ModulatedShadowColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040200000015, 1, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, ModulatedShadowColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_ModulatedShadowColor_MetaData, ARRAY_COUNT(NewProp_ModulatedShadowColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastModulatedShadows_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
				{ "ToolTip", "Whether the light should cast modulated shadows from dynamic objects (mobile only).  Also requires Cast Shadows to be set to True." },
			};
#endif
			auto NewProp_bCastModulatedShadows_SetBit = [](void* Obj){ ((UDirectionalLightComponent*)Obj)->bCastModulatedShadows = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastModulatedShadows = { UE4CodeGen_Private::EPropertyClass::Bool, "bCastModulatedShadows", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UDirectionalLightComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCastModulatedShadows_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCastModulatedShadows_MetaData, ARRAY_COUNT(NewProp_bCastModulatedShadows_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightmassSettings_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
				{ "ShowOnlyInnerProperties", "" },
				{ "ToolTip", "The Lightmass settings for this object." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightmassSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "LightmassSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, LightmassSettings), Z_Construct_UScriptStruct_FLightmassDirectionalLightSettings, METADATA_PARAMS(NewProp_LightmassSettings_MetaData, ARRAY_COUNT(NewProp_LightmassSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[] = {
				{ "Category", "DistanceFieldShadows" },
				{ "DisplayName", "DistanceField Trace Distance" },
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
				{ "ToolTip", "Determines how far shadows can be cast, in world units.  Larger values increase the shadowing cost." },
				{ "UIMax", "100000" },
				{ "UIMin", "1000" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceDistance = { UE4CodeGen_Private::EPropertyClass::Float, "TraceDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, TraceDistance), METADATA_PARAMS(NewProp_TraceDistance_MetaData, ARRAY_COUNT(NewProp_TraceDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightSourceAngle_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
				{ "ToolTip", "Light source angle in degrees, used for dynamic shadowing methods.\nCurrently only Ray Traced Distance Field shadows and Capsule shadows support area shadows, and therefore make use of LightSourceAngle." },
				{ "UIMax", "5" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightSourceAngle = { UE4CodeGen_Private::EPropertyClass::Float, "LightSourceAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, LightSourceAngle), METADATA_PARAMS(NewProp_LightSourceAngle_MetaData, ARRAY_COUNT(NewProp_LightSourceAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldShadowDistance_MetaData[] = {
				{ "Category", "DistanceFieldShadows" },
				{ "DisplayName", "DistanceField Shadow Distance" },
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
				{ "ToolTip", "Distance at which the ray traced shadow cascade should end.  Distance field shadows will cover the range between 'Dynamic Shadow Distance' this distance." },
				{ "UIMax", "100000" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldShadowDistance = { UE4CodeGen_Private::EPropertyClass::Float, "DistanceFieldShadowDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, DistanceFieldShadowDistance), METADATA_PARAMS(NewProp_DistanceFieldShadowDistance_MetaData, ARRAY_COUNT(NewProp_DistanceFieldShadowDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FarShadowDistance_MetaData[] = {
				{ "Category", "CascadedShadowMaps" },
				{ "DisplayName", "Far Shadow Distance" },
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
				{ "ToolTip", "Distance at which the far shadow cascade should end.  Far shadows will cover the range between 'Dynamic Shadow Distance' and this distance." },
				{ "UIMax", "800000" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FarShadowDistance = { UE4CodeGen_Private::EPropertyClass::Float, "FarShadowDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, FarShadowDistance), METADATA_PARAMS(NewProp_FarShadowDistance_MetaData, ARRAY_COUNT(NewProp_FarShadowDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FarShadowCascadeCount_MetaData[] = {
				{ "Category", "CascadedShadowMaps" },
				{ "DisplayName", "Far Shadow Cascade Count" },
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
				{ "ToolTip", "0: no DistantShadowCascades, otherwise the count of cascades between WholeSceneDynamicShadowRadius and DistantShadowDistance that are covered by distant shadow cascades." },
				{ "UIMax", "4" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_FarShadowCascadeCount = { UE4CodeGen_Private::EPropertyClass::Int, "FarShadowCascadeCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, FarShadowCascadeCount), METADATA_PARAMS(NewProp_FarShadowCascadeCount_MetaData, ARRAY_COUNT(NewProp_FarShadowCascadeCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseInsetShadowsForMovableObjects_MetaData[] = {
				{ "Category", "CascadedShadowMaps" },
				{ "DisplayName", "Inset Shadows For Movable Objects" },
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
				{ "ToolTip", "Stationary lights only: Whether to use per-object inset shadows for movable components, even though cascaded shadow maps are enabled.\nThis allows dynamic objects to have a shadow even when they are outside of the cascaded shadow map, which is important when DynamicShadowDistanceStationaryLight is small.\nIf DynamicShadowDistanceStationaryLight is large (currently > 8000), this will be forced off.\nDisabling this can reduce shadowing cost significantly with many movable objects." },
			};
#endif
			auto NewProp_bUseInsetShadowsForMovableObjects_SetBit = [](void* Obj){ ((UDirectionalLightComponent*)Obj)->bUseInsetShadowsForMovableObjects = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseInsetShadowsForMovableObjects = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseInsetShadowsForMovableObjects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UDirectionalLightComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseInsetShadowsForMovableObjects_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseInsetShadowsForMovableObjects_MetaData, ARRAY_COUNT(NewProp_bUseInsetShadowsForMovableObjects_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowDistanceFadeoutFraction_MetaData[] = {
				{ "Category", "CascadedShadowMaps" },
				{ "DisplayName", "Distance Fadeout Fraction" },
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
				{ "ToolTip", "Controls the size of the fade out region at the far extent of the dynamic shadow's influence.\nThis is specified as a fraction of DynamicShadowDistance." },
				{ "UIMax", "1.0" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShadowDistanceFadeoutFraction = { UE4CodeGen_Private::EPropertyClass::Float, "ShadowDistanceFadeoutFraction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, ShadowDistanceFadeoutFraction), METADATA_PARAMS(NewProp_ShadowDistanceFadeoutFraction_MetaData, ARRAY_COUNT(NewProp_ShadowDistanceFadeoutFraction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CascadeTransitionFraction_MetaData[] = {
				{ "Category", "CascadedShadowMaps" },
				{ "DisplayName", "Transition Fraction" },
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
				{ "ToolTip", "Proportion of the fade region between cascades.\nPixels within the fade region of two cascades have their shadows blended to avoid hard transitions between quality levels.\nA value of zero eliminates the fade region, creating hard transitions.\nHigher values increase the size of the fade region, creating a more gradual transition between cascades.\nThe value is expressed as a percentage proportion (i.e. 0.1 = 10% overlap).\nIdeal values are the smallest possible which still hide the transition.\nAn increased fade region size causes an increase in shadow rendering cost." },
				{ "UIMax", "0.3" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CascadeTransitionFraction = { UE4CodeGen_Private::EPropertyClass::Float, "CascadeTransitionFraction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, CascadeTransitionFraction), METADATA_PARAMS(NewProp_CascadeTransitionFraction_MetaData, ARRAY_COUNT(NewProp_CascadeTransitionFraction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CascadeDistributionExponent_MetaData[] = {
				{ "Category", "CascadedShadowMaps" },
				{ "DisplayName", "Distribution Exponent" },
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
				{ "ToolTip", "Controls whether the cascades are distributed closer to the camera (larger exponent) or further from the camera (smaller exponent).\nAn exponent of 1 means that cascade transitions will happen at a distance proportional to their resolution." },
				{ "UIMax", "4" },
				{ "UIMin", "1" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CascadeDistributionExponent = { UE4CodeGen_Private::EPropertyClass::Float, "CascadeDistributionExponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, CascadeDistributionExponent), METADATA_PARAMS(NewProp_CascadeDistributionExponent_MetaData, ARRAY_COUNT(NewProp_CascadeDistributionExponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicShadowCascades_MetaData[] = {
				{ "Category", "CascadedShadowMaps" },
				{ "DisplayName", "Num Dynamic Shadow Cascades" },
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
				{ "ToolTip", "Number of cascades to split the view frustum into for the whole scene dynamic shadow.\nMore cascades result in better shadow resolution, but adds significant rendering cost." },
				{ "UIMax", "4" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_DynamicShadowCascades = { UE4CodeGen_Private::EPropertyClass::Int, "DynamicShadowCascades", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, DynamicShadowCascades), METADATA_PARAMS(NewProp_DynamicShadowCascades_MetaData, ARRAY_COUNT(NewProp_DynamicShadowCascades_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicShadowDistanceStationaryLight_MetaData[] = {
				{ "Category", "CascadedShadowMaps" },
				{ "DisplayName", "Dynamic Shadow Distance StationaryLight" },
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
				{ "ToolTip", "How far Cascaded Shadow Map dynamic shadows will cover for a stationary light, measured from the camera.\nA value of 0 disables the dynamic shadow." },
				{ "UIMax", "20000" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DynamicShadowDistanceStationaryLight = { UE4CodeGen_Private::EPropertyClass::Float, "DynamicShadowDistanceStationaryLight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, DynamicShadowDistanceStationaryLight), METADATA_PARAMS(NewProp_DynamicShadowDistanceStationaryLight_MetaData, ARRAY_COUNT(NewProp_DynamicShadowDistanceStationaryLight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicShadowDistanceMovableLight_MetaData[] = {
				{ "Category", "CascadedShadowMaps" },
				{ "DisplayName", "Dynamic Shadow Distance MovableLight" },
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
				{ "ToolTip", "How far Cascaded Shadow Map dynamic shadows will cover for a movable light, measured from the camera.\nA value of 0 disables the dynamic shadow." },
				{ "UIMax", "20000" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DynamicShadowDistanceMovableLight = { UE4CodeGen_Private::EPropertyClass::Float, "DynamicShadowDistanceMovableLight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, DynamicShadowDistanceMovableLight), METADATA_PARAMS(NewProp_DynamicShadowDistanceMovableLight_MetaData, ARRAY_COUNT(NewProp_DynamicShadowDistanceMovableLight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WholeSceneDynamicShadowRadius_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WholeSceneDynamicShadowRadius = { UE4CodeGen_Private::EPropertyClass::Float, "WholeSceneDynamicShadowRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, WholeSceneDynamicShadowRadius_DEPRECATED), METADATA_PARAMS(NewProp_WholeSceneDynamicShadowRadius_MetaData, ARRAY_COUNT(NewProp_WholeSceneDynamicShadowRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightShaftOverrideDirection_MetaData[] = {
				{ "Category", "LightShafts" },
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
				{ "ToolTip", "Can be used to make light shafts come from somewhere other than the light's actual direction.\nThis will only be used when non-zero.  It does not have to be normalized." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightShaftOverrideDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "LightShaftOverrideDirection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, LightShaftOverrideDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LightShaftOverrideDirection_MetaData, ARRAY_COUNT(NewProp_LightShaftOverrideDirection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionDepthRange_MetaData[] = {
				{ "Category", "LightShafts" },
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
				{ "ToolTip", "Everything closer to the camera than this distance will occlude light shafts." },
				{ "UIMax", "500000" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionDepthRange = { UE4CodeGen_Private::EPropertyClass::Float, "OcclusionDepthRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, OcclusionDepthRange), METADATA_PARAMS(NewProp_OcclusionDepthRange_MetaData, ARRAY_COUNT(NewProp_OcclusionDepthRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionMaskDarkness_MetaData[] = {
				{ "Category", "LightShafts" },
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
				{ "ToolTip", "Controls how dark the occlusion masking is, a value of 1 results in no darkening term." },
				{ "UIMax", "1" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionMaskDarkness = { UE4CodeGen_Private::EPropertyClass::Float, "OcclusionMaskDarkness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, OcclusionMaskDarkness), METADATA_PARAMS(NewProp_OcclusionMaskDarkness_MetaData, ARRAY_COUNT(NewProp_OcclusionMaskDarkness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLightShaftOcclusion_MetaData[] = {
				{ "Category", "LightShafts" },
				{ "DisplayName", "Light Shaft Occlusion" },
				{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
				{ "ToolTip", "Whether to occlude fog and atmosphere inscattering with screenspace blurred occlusion from this light." },
			};
#endif
			auto NewProp_bEnableLightShaftOcclusion_SetBit = [](void* Obj){ ((UDirectionalLightComponent*)Obj)->bEnableLightShaftOcclusion = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLightShaftOcclusion = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableLightShaftOcclusion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UDirectionalLightComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableLightShaftOcclusion_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableLightShaftOcclusion_MetaData, ARRAY_COUNT(NewProp_bEnableLightShaftOcclusion_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsedAsAtmosphereSunLight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ModulatedShadowColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCastModulatedShadows,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightmassSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TraceDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightSourceAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistanceFieldShadowDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FarShadowDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FarShadowCascadeCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseInsetShadowsForMovableObjects,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShadowDistanceFadeoutFraction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CascadeTransitionFraction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CascadeDistributionExponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DynamicShadowCascades,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DynamicShadowDistanceStationaryLight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DynamicShadowDistanceMovableLight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WholeSceneDynamicShadowRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightShaftOverrideDirection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OcclusionDepthRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OcclusionMaskDarkness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableLightShaftOcclusion,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDirectionalLightComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDirectionalLightComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
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
	IMPLEMENT_CLASS(UDirectionalLightComponent, 2620185691);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDirectionalLightComponent(Z_Construct_UClass_UDirectionalLightComponent, &UDirectionalLightComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UDirectionalLightComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDirectionalLightComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
