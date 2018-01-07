// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/SkyLightComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyLightComponent() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESkyLightSourceType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USkyLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkyLightComponent();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponentBase();
	ENGINE_API UFunction* Z_Construct_UFunction_USkyLightComponent_RecaptureSky();
	ENGINE_API UFunction* Z_Construct_UFunction_USkyLightComponent_SetCubemap();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend();
	ENGINE_API UFunction* Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity();
	ENGINE_API UFunction* Z_Construct_UFunction_USkyLightComponent_SetIntensity();
	ENGINE_API UFunction* Z_Construct_UFunction_USkyLightComponent_SetLightColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion();
	ENGINE_API UFunction* Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast();
	ENGINE_API UFunction* Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent();
	ENGINE_API UFunction* Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UFunction* Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EOcclusionCombineMode();
// End Cross Module References
	static UEnum* ESkyLightSourceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESkyLightSourceType, Z_Construct_UPackage__Script_Engine(), TEXT("ESkyLightSourceType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESkyLightSourceType(ESkyLightSourceType_StaticEnum, TEXT("/Script/Engine"), TEXT("ESkyLightSourceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESkyLightSourceType_CRC() { return 387128780U; }
	UEnum* Z_Construct_UEnum_Engine_ESkyLightSourceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESkyLightSourceType"), 0, Get_Z_Construct_UEnum_Engine_ESkyLightSourceType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SLS_CapturedScene", (int64)SLS_CapturedScene },
				{ "SLS_SpecifiedCubemap", (int64)SLS_SpecifiedCubemap },
				{ "SLS_MAX", (int64)SLS_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
				{ "SLS_CapturedScene.ToolTip", "Construct the sky light from the captured scene, anything further than SkyDistanceThreshold from the sky light position will be included." },
				{ "SLS_SpecifiedCubemap.ToolTip", "Construct the sky light from the specified cubemap." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESkyLightSourceType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ESkyLightSourceType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void USkyLightComponent::StaticRegisterNativesUSkyLightComponent()
	{
		UClass* Class = USkyLightComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RecaptureSky", (Native)&USkyLightComponent::execRecaptureSky },
			{ "SetCubemap", (Native)&USkyLightComponent::execSetCubemap },
			{ "SetCubemapBlend", (Native)&USkyLightComponent::execSetCubemapBlend },
			{ "SetIndirectLightingIntensity", (Native)&USkyLightComponent::execSetIndirectLightingIntensity },
			{ "SetIntensity", (Native)&USkyLightComponent::execSetIntensity },
			{ "SetLightColor", (Native)&USkyLightComponent::execSetLightColor },
			{ "SetMinOcclusion", (Native)&USkyLightComponent::execSetMinOcclusion },
			{ "SetOcclusionContrast", (Native)&USkyLightComponent::execSetOcclusionContrast },
			{ "SetOcclusionExponent", (Native)&USkyLightComponent::execSetOcclusionExponent },
			{ "SetOcclusionTint", (Native)&USkyLightComponent::execSetOcclusionTint },
			{ "SetVolumetricScatteringIntensity", (Native)&USkyLightComponent::execSetVolumetricScatteringIntensity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USkyLightComponent_RecaptureSky()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|SkyLight" },
				{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
				{ "ToolTip", "Recaptures the scene for the skylight.\nThis is useful for making sure the sky light is up to date after changing something in the world that it would capture.\nWarning: this is very costly and will definitely cause a hitch." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, "RecaptureSky", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkyLightComponent_SetCubemap()
	{
		struct SkyLightComponent_eventSetCubemap_Parms
		{
			UTextureCube* NewCubemap;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewCubemap = { UE4CodeGen_Private::EPropertyClass::Object, "NewCubemap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkyLightComponent_eventSetCubemap_Parms, NewCubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewCubemap,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SkyLight" },
				{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
				{ "ToolTip", "Sets the cubemap used when SourceType is set to SpecifiedCubemap, and causes a skylight update on the next tick." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, "SetCubemap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SkyLightComponent_eventSetCubemap_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend()
	{
		struct SkyLightComponent_eventSetCubemapBlend_Parms
		{
			UTextureCube* SourceCubemap;
			UTextureCube* DestinationCubemap;
			float InBlendFraction;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InBlendFraction = { UE4CodeGen_Private::EPropertyClass::Float, "InBlendFraction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkyLightComponent_eventSetCubemapBlend_Parms, InBlendFraction), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestinationCubemap = { UE4CodeGen_Private::EPropertyClass::Object, "DestinationCubemap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkyLightComponent_eventSetCubemapBlend_Parms, DestinationCubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceCubemap = { UE4CodeGen_Private::EPropertyClass::Object, "SourceCubemap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkyLightComponent_eventSetCubemapBlend_Parms, SourceCubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InBlendFraction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DestinationCubemap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceCubemap,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SkyLight" },
				{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
				{ "ToolTip", "Creates sky lighting from a blend between two cubemaps, which is only valid when SourceType is set to SpecifiedCubemap.\nThis can be used to seamlessly transition sky lighting between different times of day.\nThe caller should continue to update the blend until BlendFraction is 0 or 1 to reduce rendering cost.\nThe caller is responsible for avoiding pops due to changing the source or destination." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, "SetCubemapBlend", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SkyLightComponent_eventSetCubemapBlend_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity()
	{
		struct SkyLightComponent_eventSetIndirectLightingIntensity_Parms
		{
			float NewIntensity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "NewIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkyLightComponent_eventSetIndirectLightingIntensity_Parms, NewIntensity), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewIntensity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|Light" },
				{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, "SetIndirectLightingIntensity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SkyLightComponent_eventSetIndirectLightingIntensity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkyLightComponent_SetIntensity()
	{
		struct SkyLightComponent_eventSetIntensity_Parms
		{
			float NewIntensity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "NewIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkyLightComponent_eventSetIntensity_Parms, NewIntensity), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewIntensity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|SkyLight" },
				{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, "SetIntensity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SkyLightComponent_eventSetIntensity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkyLightComponent_SetLightColor()
	{
		struct SkyLightComponent_eventSetLightColor_Parms
		{
			FLinearColor NewLightColor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLightColor = { UE4CodeGen_Private::EPropertyClass::Struct, "NewLightColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkyLightComponent_eventSetLightColor_Parms, NewLightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewLightColor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|SkyLight" },
				{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
				{ "ToolTip", "Set color of the light" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, "SetLightColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(SkyLightComponent_eventSetLightColor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion()
	{
		struct SkyLightComponent_eventSetMinOcclusion_Parms
		{
			float InMinOcclusion;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMinOcclusion = { UE4CodeGen_Private::EPropertyClass::Float, "InMinOcclusion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkyLightComponent_eventSetMinOcclusion_Parms, InMinOcclusion), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InMinOcclusion,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|SkyLight" },
				{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, "SetMinOcclusion", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SkyLightComponent_eventSetMinOcclusion_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast()
	{
		struct SkyLightComponent_eventSetOcclusionContrast_Parms
		{
			float InOcclusionContrast;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InOcclusionContrast = { UE4CodeGen_Private::EPropertyClass::Float, "InOcclusionContrast", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkyLightComponent_eventSetOcclusionContrast_Parms, InOcclusionContrast), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InOcclusionContrast,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|SkyLight" },
				{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, "SetOcclusionContrast", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SkyLightComponent_eventSetOcclusionContrast_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent()
	{
		struct SkyLightComponent_eventSetOcclusionExponent_Parms
		{
			float InOcclusionExponent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InOcclusionExponent = { UE4CodeGen_Private::EPropertyClass::Float, "InOcclusionExponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkyLightComponent_eventSetOcclusionExponent_Parms, InOcclusionExponent), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InOcclusionExponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|SkyLight" },
				{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, "SetOcclusionExponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SkyLightComponent_eventSetOcclusionExponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint()
	{
		struct SkyLightComponent_eventSetOcclusionTint_Parms
		{
			FColor InTint;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTint_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTint = { UE4CodeGen_Private::EPropertyClass::Struct, "InTint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SkyLightComponent_eventSetOcclusionTint_Parms, InTint), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_InTint_MetaData, ARRAY_COUNT(NewProp_InTint_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InTint,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|SkyLight" },
				{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, "SetOcclusionTint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(SkyLightComponent_eventSetOcclusionTint_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity()
	{
		struct SkyLightComponent_eventSetVolumetricScatteringIntensity_Parms
		{
			float NewIntensity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "NewIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkyLightComponent_eventSetVolumetricScatteringIntensity_Parms, NewIntensity), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewIntensity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|Light" },
				{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, "SetVolumetricScatteringIntensity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SkyLightComponent_eventSetVolumetricScatteringIntensity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USkyLightComponent_NoRegister()
	{
		return USkyLightComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_USkyLightComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ULightComponentBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USkyLightComponent_RecaptureSky, "RecaptureSky" }, // 3483253868
				{ &Z_Construct_UFunction_USkyLightComponent_SetCubemap, "SetCubemap" }, // 46903745
				{ &Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend, "SetCubemapBlend" }, // 3110532314
				{ &Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity, "SetIndirectLightingIntensity" }, // 2043815756
				{ &Z_Construct_UFunction_USkyLightComponent_SetIntensity, "SetIntensity" }, // 1372717805
				{ &Z_Construct_UFunction_USkyLightComponent_SetLightColor, "SetLightColor" }, // 3346529589
				{ &Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion, "SetMinOcclusion" }, // 252694081
				{ &Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast, "SetOcclusionContrast" }, // 3649742516
				{ &Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent, "SetOcclusionExponent" }, // 3117421575
				{ &Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint, "SetOcclusionTint" }, // 401691875
				{ &Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity, "SetVolumetricScatteringIntensity" }, // 2615842512
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Lights" },
				{ "HideCategories", "Trigger Activation Components|Activation Physics Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
				{ "IncludePath", "Components/SkyLightComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendDestinationCubemap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlendDestinationCubemap = { UE4CodeGen_Private::EPropertyClass::Object, "BlendDestinationCubemap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(USkyLightComponent, BlendDestinationCubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(NewProp_BlendDestinationCubemap_MetaData, ARRAY_COUNT(NewProp_BlendDestinationCubemap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionCombineMode_MetaData[] = {
				{ "Category", "DistanceFieldAmbientOcclusion" },
				{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
				{ "ToolTip", "Controls how occlusion from Distance Field Ambient Occlusion is combined with Screen Space Ambient Occlusion." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_OcclusionCombineMode = { UE4CodeGen_Private::EPropertyClass::Byte, "OcclusionCombineMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(USkyLightComponent, OcclusionCombineMode), Z_Construct_UEnum_Engine_EOcclusionCombineMode, METADATA_PARAMS(NewProp_OcclusionCombineMode_MetaData, ARRAY_COUNT(NewProp_OcclusionCombineMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionTint_MetaData[] = {
				{ "Category", "DistanceFieldAmbientOcclusion" },
				{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
				{ "ToolTip", "Tint color on occluded areas, artistic control." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OcclusionTint = { UE4CodeGen_Private::EPropertyClass::Struct, "OcclusionTint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(USkyLightComponent, OcclusionTint), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_OcclusionTint_MetaData, ARRAY_COUNT(NewProp_OcclusionTint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinOcclusion_MetaData[] = {
				{ "Category", "DistanceFieldAmbientOcclusion" },
				{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
				{ "ToolTip", "Controls the darkest that a fully occluded area can get.  This tends to destroy contact shadows, use Contrast or OcclusionExponent instead." },
				{ "UIMax", "1" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinOcclusion = { UE4CodeGen_Private::EPropertyClass::Float, "MinOcclusion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(USkyLightComponent, MinOcclusion), METADATA_PARAMS(NewProp_MinOcclusion_MetaData, ARRAY_COUNT(NewProp_MinOcclusion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionExponent_MetaData[] = {
				{ "Category", "DistanceFieldAmbientOcclusion" },
				{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
				{ "ToolTip", "Exponent applied to the computed AO.  Values lower than 1 brighten occlusion overall without losing contact shadows." },
				{ "UIMax", "1.6" },
				{ "UIMin", ".6" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionExponent = { UE4CodeGen_Private::EPropertyClass::Float, "OcclusionExponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(USkyLightComponent, OcclusionExponent), METADATA_PARAMS(NewProp_OcclusionExponent_MetaData, ARRAY_COUNT(NewProp_OcclusionExponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contrast_MetaData[] = {
				{ "Category", "DistanceFieldAmbientOcclusion" },
				{ "DisplayName", "Occlusion Contrast" },
				{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
				{ "ToolTip", "Contrast S-curve applied to the computed AO.  A value of 0 means no contrast increase, 1 is a significant contrast increase." },
				{ "UIMax", "1" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Contrast = { UE4CodeGen_Private::EPropertyClass::Float, "Contrast", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(USkyLightComponent, Contrast), METADATA_PARAMS(NewProp_Contrast_MetaData, ARRAY_COUNT(NewProp_Contrast_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionMaxDistance_MetaData[] = {
				{ "Category", "DistanceFieldAmbientOcclusion" },
				{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
				{ "ToolTip", "Max distance that the occlusion of one point will affect another.\nHigher values increase the cost of Distance Field AO exponentially." },
				{ "UIMax", "1500" },
				{ "UIMin", "200" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionMaxDistance = { UE4CodeGen_Private::EPropertyClass::Float, "OcclusionMaxDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(USkyLightComponent, OcclusionMaxDistance), METADATA_PARAMS(NewProp_OcclusionMaxDistance_MetaData, ARRAY_COUNT(NewProp_OcclusionMaxDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerHemisphereColor_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LowerHemisphereColor = { UE4CodeGen_Private::EPropertyClass::Struct, "LowerHemisphereColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(USkyLightComponent, LowerHemisphereColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_LowerHemisphereColor_MetaData, ARRAY_COUNT(NewProp_LowerHemisphereColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLowerHemisphereIsBlack_MetaData[] = {
				{ "Category", "Light" },
				{ "DisplayName", "Lower Hemisphere Is Solid Color" },
				{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
				{ "ToolTip", "Whether all distant lighting from the lower hemisphere should be set to LowerHemisphereColor.\nEnabling this is accurate when lighting a scene on a planet where the ground blocks the sky,\nHowever disabling it can be useful to approximate skylight bounce lighting (eg Movable light)." },
			};
#endif
			auto NewProp_bLowerHemisphereIsBlack_SetBit = [](void* Obj){ ((USkyLightComponent*)Obj)->bLowerHemisphereIsBlack = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLowerHemisphereIsBlack = { UE4CodeGen_Private::EPropertyClass::Bool, "bLowerHemisphereIsBlack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USkyLightComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLowerHemisphereIsBlack_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLowerHemisphereIsBlack_MetaData, ARRAY_COUNT(NewProp_bLowerHemisphereIsBlack_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCaptureEmissiveOnly_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
				{ "ToolTip", "Only capture emissive materials. Skips all lighting making the capture cheaper. Recomended when using CaptureEveryFrame" },
			};
#endif
			auto NewProp_bCaptureEmissiveOnly_SetBit = [](void* Obj){ ((USkyLightComponent*)Obj)->bCaptureEmissiveOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCaptureEmissiveOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bCaptureEmissiveOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USkyLightComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCaptureEmissiveOnly_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCaptureEmissiveOnly_MetaData, ARRAY_COUNT(NewProp_bCaptureEmissiveOnly_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkyDistanceThreshold_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
				{ "ToolTip", "Distance from the sky light at which any geometry should be treated as part of the sky.\nThis is also used by reflection captures, so update reflection captures to see the impact." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SkyDistanceThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "SkyDistanceThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(USkyLightComponent, SkyDistanceThreshold), METADATA_PARAMS(NewProp_SkyDistanceThreshold_MetaData, ARRAY_COUNT(NewProp_SkyDistanceThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CubemapResolution_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
				{ "ToolTip", "Maximum resolution for the very top processed cubemap mip. Must be a power of 2." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CubemapResolution = { UE4CodeGen_Private::EPropertyClass::Int, "CubemapResolution", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(USkyLightComponent, CubemapResolution), METADATA_PARAMS(NewProp_CubemapResolution_MetaData, ARRAY_COUNT(NewProp_CubemapResolution_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceCubemapAngle_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
				{ "ToolTip", "Angle to rotate the source cubemap when SourceType is set to SLS_SpecifiedCubemap." },
				{ "UIMax", "360" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SourceCubemapAngle = { UE4CodeGen_Private::EPropertyClass::Float, "SourceCubemapAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(USkyLightComponent, SourceCubemapAngle), METADATA_PARAMS(NewProp_SourceCubemapAngle_MetaData, ARRAY_COUNT(NewProp_SourceCubemapAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cubemap_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
				{ "ToolTip", "Cubemap to use for sky lighting if SourceType is set to SLS_SpecifiedCubemap." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Cubemap = { UE4CodeGen_Private::EPropertyClass::Object, "Cubemap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(USkyLightComponent, Cubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(NewProp_Cubemap_MetaData, ARRAY_COUNT(NewProp_Cubemap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
				{ "ToolTip", "Indicates where to get the light contribution from." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceType = { UE4CodeGen_Private::EPropertyClass::Byte, "SourceType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(USkyLightComponent, SourceType), Z_Construct_UEnum_Engine_ESkyLightSourceType, METADATA_PARAMS(NewProp_SourceType_MetaData, ARRAY_COUNT(NewProp_SourceType_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendDestinationCubemap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OcclusionCombineMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OcclusionTint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinOcclusion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OcclusionExponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Contrast,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OcclusionMaxDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LowerHemisphereColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLowerHemisphereIsBlack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCaptureEmissiveOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkyDistanceThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CubemapResolution,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceCubemapAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Cubemap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceType,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USkyLightComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USkyLightComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(USkyLightComponent, 3283199035);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkyLightComponent(Z_Construct_UClass_USkyLightComponent, &USkyLightComponent::StaticClass, TEXT("/Script/Engine"), TEXT("USkyLightComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkyLightComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
