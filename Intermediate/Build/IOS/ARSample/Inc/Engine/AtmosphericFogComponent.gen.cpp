// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Atmosphere/AtmosphericFogComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtmosphericFogComponent() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAtmosphericFogComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAtmosphericFogComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering();
	ENGINE_API UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk();
	ENGINE_API UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale();
	ENGINE_API UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness();
	ENGINE_API UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier();
	ENGINE_API UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset();
	ENGINE_API UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset();
	ENGINE_API UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale();
	ENGINE_API UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier();
	ENGINE_API UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams();
	ENGINE_API UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance();
	ENGINE_API UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier();
	ENGINE_API UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_StartPrecompute();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
class UScriptStruct* FAtmospherePrecomputeParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters, Z_Construct_UPackage__Script_Engine(), TEXT("AtmospherePrecomputeParameters"), sizeof(FAtmospherePrecomputeParameters), Get_Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtmospherePrecomputeParameters(FAtmospherePrecomputeParameters::StaticStruct, TEXT("/Script/Engine"), TEXT("AtmospherePrecomputeParameters"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAtmospherePrecomputeParameters
{
	FScriptStruct_Engine_StaticRegisterNativesFAtmospherePrecomputeParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtmospherePrecomputeParameters")),new UScriptStruct::TCppStructOps<FAtmospherePrecomputeParameters>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAtmospherePrecomputeParameters;
	UScriptStruct* Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtmospherePrecomputeParameters"), sizeof(FAtmospherePrecomputeParameters), Get_Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Structure storing Data for pre-computation" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtmospherePrecomputeParameters>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InscatterNuNum_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Inscatter Texture Width" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InscatterNuNum = { UE4CodeGen_Private::EPropertyClass::Int, "InscatterNuNum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAtmospherePrecomputeParameters, InscatterNuNum), METADATA_PARAMS(NewProp_InscatterNuNum_MetaData, ARRAY_COUNT(NewProp_InscatterNuNum_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InscatterMuSNum_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Inscatter Texture Width" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InscatterMuSNum = { UE4CodeGen_Private::EPropertyClass::Int, "InscatterMuSNum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAtmospherePrecomputeParameters, InscatterMuSNum), METADATA_PARAMS(NewProp_InscatterMuSNum_MetaData, ARRAY_COUNT(NewProp_InscatterMuSNum_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InscatterMuNum_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Inscatter Texture Height" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InscatterMuNum = { UE4CodeGen_Private::EPropertyClass::Int, "InscatterMuNum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAtmospherePrecomputeParameters, InscatterMuNum), METADATA_PARAMS(NewProp_InscatterMuNum_MetaData, ARRAY_COUNT(NewProp_InscatterMuNum_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InscatterAltitudeSampleNum_MetaData[] = {
				{ "Category", "AtmosphereParam" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Number of different altitudes at which to sample inscatter color (size of 3D texture Z dimension)" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InscatterAltitudeSampleNum = { UE4CodeGen_Private::EPropertyClass::Int, "InscatterAltitudeSampleNum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAtmospherePrecomputeParameters, InscatterAltitudeSampleNum), METADATA_PARAMS(NewProp_InscatterAltitudeSampleNum_MetaData, ARRAY_COUNT(NewProp_InscatterAltitudeSampleNum_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IrradianceTexHeight_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Irradiance Texture Height" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_IrradianceTexHeight = { UE4CodeGen_Private::EPropertyClass::Int, "IrradianceTexHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAtmospherePrecomputeParameters, IrradianceTexHeight), METADATA_PARAMS(NewProp_IrradianceTexHeight_MetaData, ARRAY_COUNT(NewProp_IrradianceTexHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IrradianceTexWidth_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Irradiance Texture Width" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_IrradianceTexWidth = { UE4CodeGen_Private::EPropertyClass::Int, "IrradianceTexWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAtmospherePrecomputeParameters, IrradianceTexWidth), METADATA_PARAMS(NewProp_IrradianceTexWidth_MetaData, ARRAY_COUNT(NewProp_IrradianceTexWidth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransmittanceTexHeight_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Transmittance Texture Height" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TransmittanceTexHeight = { UE4CodeGen_Private::EPropertyClass::Int, "TransmittanceTexHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAtmospherePrecomputeParameters, TransmittanceTexHeight), METADATA_PARAMS(NewProp_TransmittanceTexHeight_MetaData, ARRAY_COUNT(NewProp_TransmittanceTexHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransmittanceTexWidth_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Transmittance Texture Width" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TransmittanceTexWidth = { UE4CodeGen_Private::EPropertyClass::Int, "TransmittanceTexWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAtmospherePrecomputeParameters, TransmittanceTexWidth), METADATA_PARAMS(NewProp_TransmittanceTexWidth_MetaData, ARRAY_COUNT(NewProp_TransmittanceTexWidth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxScatteringOrder_MetaData[] = {
				{ "Category", "AtmosphereParam" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Maximum scattering order" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxScatteringOrder = { UE4CodeGen_Private::EPropertyClass::Int, "MaxScatteringOrder", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAtmospherePrecomputeParameters, MaxScatteringOrder), METADATA_PARAMS(NewProp_MaxScatteringOrder_MetaData, ARRAY_COUNT(NewProp_MaxScatteringOrder_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecayHeight_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecayHeight = { UE4CodeGen_Private::EPropertyClass::Float, "DecayHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FAtmospherePrecomputeParameters, DecayHeight_DEPRECATED), METADATA_PARAMS(NewProp_DecayHeight_MetaData, ARRAY_COUNT(NewProp_DecayHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DensityHeight_MetaData[] = {
				{ "Category", "AtmosphereParam" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Rayleigh scattering density height scale, ranges from [0...1]" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DensityHeight = { UE4CodeGen_Private::EPropertyClass::Float, "DensityHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAtmospherePrecomputeParameters, DensityHeight), METADATA_PARAMS(NewProp_DensityHeight_MetaData, ARRAY_COUNT(NewProp_DensityHeight_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InscatterNuNum,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InscatterMuSNum,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InscatterMuNum,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InscatterAltitudeSampleNum,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IrradianceTexHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IrradianceTexWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransmittanceTexHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransmittanceTexWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxScatteringOrder,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DecayHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DensityHeight,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AtmospherePrecomputeParameters",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAtmospherePrecomputeParameters),
				alignof(FAtmospherePrecomputeParameters),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_CRC() { return 532956109U; }
	void UAtmosphericFogComponent::StaticRegisterNativesUAtmosphericFogComponent()
	{
		UClass* Class = UAtmosphericFogComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableGroundScattering", (Native)&UAtmosphericFogComponent::execDisableGroundScattering },
			{ "DisableSunDisk", (Native)&UAtmosphericFogComponent::execDisableSunDisk },
			{ "SetAltitudeScale", (Native)&UAtmosphericFogComponent::execSetAltitudeScale },
			{ "SetDefaultBrightness", (Native)&UAtmosphericFogComponent::execSetDefaultBrightness },
			{ "SetDefaultLightColor", (Native)&UAtmosphericFogComponent::execSetDefaultLightColor },
			{ "SetDensityMultiplier", (Native)&UAtmosphericFogComponent::execSetDensityMultiplier },
			{ "SetDensityOffset", (Native)&UAtmosphericFogComponent::execSetDensityOffset },
			{ "SetDistanceOffset", (Native)&UAtmosphericFogComponent::execSetDistanceOffset },
			{ "SetDistanceScale", (Native)&UAtmosphericFogComponent::execSetDistanceScale },
			{ "SetFogMultiplier", (Native)&UAtmosphericFogComponent::execSetFogMultiplier },
			{ "SetPrecomputeParams", (Native)&UAtmosphericFogComponent::execSetPrecomputeParams },
			{ "SetStartDistance", (Native)&UAtmosphericFogComponent::execSetStartDistance },
			{ "SetSunMultiplier", (Native)&UAtmosphericFogComponent::execSetSunMultiplier },
			{ "StartPrecompute", (Native)&UAtmosphericFogComponent::execStartPrecompute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering()
	{
		struct AtmosphericFogComponent_eventDisableGroundScattering_Parms
		{
			bool NewGroundScattering;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_NewGroundScattering_SetBit = [](void* Obj){ ((AtmosphericFogComponent_eventDisableGroundScattering_Parms*)Obj)->NewGroundScattering = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewGroundScattering = { UE4CodeGen_Private::EPropertyClass::Bool, "NewGroundScattering", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AtmosphericFogComponent_eventDisableGroundScattering_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_NewGroundScattering_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewGroundScattering,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|AtmosphericFog" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Set DisableGroundScattering" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, "DisableGroundScattering", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(AtmosphericFogComponent_eventDisableGroundScattering_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk()
	{
		struct AtmosphericFogComponent_eventDisableSunDisk_Parms
		{
			bool NewSunDisk;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_NewSunDisk_SetBit = [](void* Obj){ ((AtmosphericFogComponent_eventDisableSunDisk_Parms*)Obj)->NewSunDisk = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewSunDisk = { UE4CodeGen_Private::EPropertyClass::Bool, "NewSunDisk", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AtmosphericFogComponent_eventDisableSunDisk_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_NewSunDisk_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewSunDisk,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|AtmosphericFog" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Set DisableSunDisk" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, "DisableSunDisk", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(AtmosphericFogComponent_eventDisableSunDisk_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale()
	{
		struct AtmosphericFogComponent_eventSetAltitudeScale_Parms
		{
			float NewAltitudeScale;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewAltitudeScale = { UE4CodeGen_Private::EPropertyClass::Float, "NewAltitudeScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtmosphericFogComponent_eventSetAltitudeScale_Parms, NewAltitudeScale), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewAltitudeScale,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|AtmosphericFog" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Set AltitudeScale" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, "SetAltitudeScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(AtmosphericFogComponent_eventSetAltitudeScale_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness()
	{
		struct AtmosphericFogComponent_eventSetDefaultBrightness_Parms
		{
			float NewBrightness;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewBrightness = { UE4CodeGen_Private::EPropertyClass::Float, "NewBrightness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtmosphericFogComponent_eventSetDefaultBrightness_Parms, NewBrightness), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewBrightness,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|AtmosphericFog" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Set brightness of the light" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, "SetDefaultBrightness", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(AtmosphericFogComponent_eventSetDefaultBrightness_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor()
	{
		struct AtmosphericFogComponent_eventSetDefaultLightColor_Parms
		{
			FLinearColor NewLightColor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLightColor = { UE4CodeGen_Private::EPropertyClass::Struct, "NewLightColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtmosphericFogComponent_eventSetDefaultLightColor_Parms, NewLightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewLightColor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|AtmosphericFog" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Set color of the light" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, "SetDefaultLightColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820403, sizeof(AtmosphericFogComponent_eventSetDefaultLightColor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier()
	{
		struct AtmosphericFogComponent_eventSetDensityMultiplier_Parms
		{
			float NewDensityMultiplier;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewDensityMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "NewDensityMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtmosphericFogComponent_eventSetDensityMultiplier_Parms, NewDensityMultiplier), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewDensityMultiplier,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|AtmosphericFog" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Set DensityMultiplier" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, "SetDensityMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(AtmosphericFogComponent_eventSetDensityMultiplier_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset()
	{
		struct AtmosphericFogComponent_eventSetDensityOffset_Parms
		{
			float NewDensityOffset;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewDensityOffset = { UE4CodeGen_Private::EPropertyClass::Float, "NewDensityOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtmosphericFogComponent_eventSetDensityOffset_Parms, NewDensityOffset), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewDensityOffset,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|AtmosphericFog" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Set DensityOffset" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, "SetDensityOffset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(AtmosphericFogComponent_eventSetDensityOffset_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset()
	{
		struct AtmosphericFogComponent_eventSetDistanceOffset_Parms
		{
			float NewDistanceOffset;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewDistanceOffset = { UE4CodeGen_Private::EPropertyClass::Float, "NewDistanceOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtmosphericFogComponent_eventSetDistanceOffset_Parms, NewDistanceOffset), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewDistanceOffset,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|AtmosphericFog" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Set DistanceOffset" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, "SetDistanceOffset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(AtmosphericFogComponent_eventSetDistanceOffset_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale()
	{
		struct AtmosphericFogComponent_eventSetDistanceScale_Parms
		{
			float NewDistanceScale;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewDistanceScale = { UE4CodeGen_Private::EPropertyClass::Float, "NewDistanceScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtmosphericFogComponent_eventSetDistanceScale_Parms, NewDistanceScale), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewDistanceScale,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|AtmosphericFog" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Set DistanceScale" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, "SetDistanceScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(AtmosphericFogComponent_eventSetDistanceScale_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier()
	{
		struct AtmosphericFogComponent_eventSetFogMultiplier_Parms
		{
			float NewFogMultiplier;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewFogMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "NewFogMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtmosphericFogComponent_eventSetFogMultiplier_Parms, NewFogMultiplier), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewFogMultiplier,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|AtmosphericFog" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Set FogMultiplier" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, "SetFogMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(AtmosphericFogComponent_eventSetFogMultiplier_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams()
	{
		struct AtmosphericFogComponent_eventSetPrecomputeParams_Parms
		{
			float DensityHeight;
			int32 MaxScatteringOrder;
			int32 InscatterAltitudeSampleNum;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InscatterAltitudeSampleNum = { UE4CodeGen_Private::EPropertyClass::Int, "InscatterAltitudeSampleNum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtmosphericFogComponent_eventSetPrecomputeParams_Parms, InscatterAltitudeSampleNum), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxScatteringOrder = { UE4CodeGen_Private::EPropertyClass::Int, "MaxScatteringOrder", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtmosphericFogComponent_eventSetPrecomputeParams_Parms, MaxScatteringOrder), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DensityHeight = { UE4CodeGen_Private::EPropertyClass::Float, "DensityHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtmosphericFogComponent_eventSetPrecomputeParams_Parms, DensityHeight), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InscatterAltitudeSampleNum,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxScatteringOrder,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DensityHeight,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|AtmosphericFog" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Set PrecomputeParams, only valid in Editor mode" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, "SetPrecomputeParams", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(AtmosphericFogComponent_eventSetPrecomputeParams_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance()
	{
		struct AtmosphericFogComponent_eventSetStartDistance_Parms
		{
			float NewStartDistance;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewStartDistance = { UE4CodeGen_Private::EPropertyClass::Float, "NewStartDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtmosphericFogComponent_eventSetStartDistance_Parms, NewStartDistance), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewStartDistance,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|AtmosphericFog" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Set StartDistance" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, "SetStartDistance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(AtmosphericFogComponent_eventSetStartDistance_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier()
	{
		struct AtmosphericFogComponent_eventSetSunMultiplier_Parms
		{
			float NewSunMultiplier;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewSunMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "NewSunMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtmosphericFogComponent_eventSetSunMultiplier_Parms, NewSunMultiplier), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewSunMultiplier,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|AtmosphericFog" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Set SunMultiplier" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, "SetSunMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(AtmosphericFogComponent_eventSetSunMultiplier_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_StartPrecompute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|AtmosphericFog" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, "StartPrecompute", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtmosphericFogComponent_NoRegister()
	{
		return UAtmosphericFogComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UAtmosphericFogComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering, "DisableGroundScattering" }, // 4029517228
				{ &Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk, "DisableSunDisk" }, // 3790737721
				{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale, "SetAltitudeScale" }, // 1287387592
				{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness, "SetDefaultBrightness" }, // 1310887938
				{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor, "SetDefaultLightColor" }, // 4177222830
				{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier, "SetDensityMultiplier" }, // 403433954
				{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset, "SetDensityOffset" }, // 2815699936
				{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset, "SetDistanceOffset" }, // 788258135
				{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale, "SetDistanceScale" }, // 1303424003
				{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier, "SetFogMultiplier" }, // 3095975875
				{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams, "SetPrecomputeParams" }, // 3852338181
				{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance, "SetStartDistance" }, // 1334216845
				{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier, "SetSunMultiplier" }, // 3619124038
				{ &Z_Construct_UFunction_UAtmosphericFogComponent_StartPrecompute, "StartPrecompute" }, // 857397407
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Rendering" },
				{ "HideCategories", "Object Mobility Activation Components|Activation Trigger PhysicsVolume" },
				{ "IncludePath", "Atmosphere/AtmosphericFogComponent.h" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Used to create fogging effects such as clouds." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IrradianceTexture_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IrradianceTexture = { UE4CodeGen_Private::EPropertyClass::Object, "IrradianceTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UAtmosphericFogComponent, IrradianceTexture_DEPRECATED), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_IrradianceTexture_MetaData, ARRAY_COUNT(NewProp_IrradianceTexture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransmittanceTexture_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TransmittanceTexture = { UE4CodeGen_Private::EPropertyClass::Object, "TransmittanceTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UAtmosphericFogComponent, TransmittanceTexture_DEPRECATED), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_TransmittanceTexture_MetaData, ARRAY_COUNT(NewProp_TransmittanceTexture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrecomputeParams_MetaData[] = {
				{ "Category", "Atmosphere" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrecomputeParams = { UE4CodeGen_Private::EPropertyClass::Struct, "PrecomputeParams", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UAtmosphericFogComponent, PrecomputeParams), Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters, METADATA_PARAMS(NewProp_PrecomputeParams_MetaData, ARRAY_COUNT(NewProp_PrecomputeParams_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableGroundScattering_MetaData[] = {
				{ "Category", "Lighting" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Disable Color scattering from ground." },
			};
#endif
			auto NewProp_bDisableGroundScattering_SetBit = [](void* Obj){ ((UAtmosphericFogComponent*)Obj)->bDisableGroundScattering = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableGroundScattering = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableGroundScattering", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAtmosphericFogComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisableGroundScattering_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisableGroundScattering_MetaData, ARRAY_COUNT(NewProp_bDisableGroundScattering_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableSunDisk_MetaData[] = {
				{ "Category", "Lighting" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Disable Sun Disk rendering." },
			};
#endif
			auto NewProp_bDisableSunDisk_SetBit = [](void* Obj){ ((UAtmosphericFogComponent*)Obj)->bDisableSunDisk = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableSunDisk = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableSunDisk", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAtmosphericFogComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisableSunDisk_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisableSunDisk_MetaData, ARRAY_COUNT(NewProp_bDisableSunDisk_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLightColor_MetaData[] = {
				{ "Category", "Lighting" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Default light color. Used when there is no sunlight placed in the level." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultLightColor = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultLightColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000015, 1, nullptr, STRUCT_OFFSET(UAtmosphericFogComponent, DefaultLightColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_DefaultLightColor_MetaData, ARRAY_COUNT(NewProp_DefaultLightColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBrightness_MetaData[] = {
				{ "Category", "Lighting" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Default light brightness. Used when there is no sunlight placed in the level. Unit is lumens" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultBrightness = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultBrightness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000015, 1, nullptr, STRUCT_OFFSET(UAtmosphericFogComponent, DefaultBrightness), METADATA_PARAMS(NewProp_DefaultBrightness_MetaData, ARRAY_COUNT(NewProp_DefaultBrightness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SunDiscScale_MetaData[] = {
				{ "Category", "Atmosphere" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Distance offset, in km (to handle large distance)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SunDiscScale = { UE4CodeGen_Private::EPropertyClass::Float, "SunDiscScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(UAtmosphericFogComponent, SunDiscScale), METADATA_PARAMS(NewProp_SunDiscScale_MetaData, ARRAY_COUNT(NewProp_SunDiscScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDistance_MetaData[] = {
				{ "Category", "Atmosphere" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Start Distance." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartDistance = { UE4CodeGen_Private::EPropertyClass::Float, "StartDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(UAtmosphericFogComponent, StartDistance), METADATA_PARAMS(NewProp_StartDistance_MetaData, ARRAY_COUNT(NewProp_StartDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundOffset_MetaData[] = {
				{ "Category", "Atmosphere" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Ground offset." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GroundOffset = { UE4CodeGen_Private::EPropertyClass::Float, "GroundOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(UAtmosphericFogComponent, GroundOffset), METADATA_PARAMS(NewProp_GroundOffset_MetaData, ARRAY_COUNT(NewProp_GroundOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceOffset_MetaData[] = {
				{ "Category", "Atmosphere" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Distance offset, in km (to handle large distance)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceOffset = { UE4CodeGen_Private::EPropertyClass::Float, "DistanceOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(UAtmosphericFogComponent, DistanceOffset), METADATA_PARAMS(NewProp_DistanceOffset_MetaData, ARRAY_COUNT(NewProp_DistanceOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AltitudeScale_MetaData[] = {
				{ "Category", "Atmosphere" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Altitude scale (only Z scale)." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AltitudeScale = { UE4CodeGen_Private::EPropertyClass::Float, "AltitudeScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(UAtmosphericFogComponent, AltitudeScale), METADATA_PARAMS(NewProp_AltitudeScale_MetaData, ARRAY_COUNT(NewProp_AltitudeScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceScale_MetaData[] = {
				{ "Category", "Atmosphere" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Distance scale." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceScale = { UE4CodeGen_Private::EPropertyClass::Float, "DistanceScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(UAtmosphericFogComponent, DistanceScale), METADATA_PARAMS(NewProp_DistanceScale_MetaData, ARRAY_COUNT(NewProp_DistanceScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DensityOffset_MetaData[] = {
				{ "Category", "Atmosphere" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Fog density offset to control opacity [-1.f ~ 1.f]." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DensityOffset = { UE4CodeGen_Private::EPropertyClass::Float, "DensityOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(UAtmosphericFogComponent, DensityOffset), METADATA_PARAMS(NewProp_DensityOffset_MetaData, ARRAY_COUNT(NewProp_DensityOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DensityMultiplier_MetaData[] = {
				{ "Category", "Atmosphere" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Fog density control factor." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DensityMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "DensityMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(UAtmosphericFogComponent, DensityMultiplier), METADATA_PARAMS(NewProp_DensityMultiplier_MetaData, ARRAY_COUNT(NewProp_DensityMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogMultiplier_MetaData[] = {
				{ "Category", "Atmosphere" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Scattering factor on object." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "FogMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(UAtmosphericFogComponent, FogMultiplier), METADATA_PARAMS(NewProp_FogMultiplier_MetaData, ARRAY_COUNT(NewProp_FogMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SunMultiplier_MetaData[] = {
				{ "Category", "Atmosphere" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
				{ "ToolTip", "Global scattering factor." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SunMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "SunMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(UAtmosphericFogComponent, SunMultiplier), METADATA_PARAMS(NewProp_SunMultiplier_MetaData, ARRAY_COUNT(NewProp_SunMultiplier_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IrradianceTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransmittanceTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrecomputeParams,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisableGroundScattering,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisableSunDisk,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultLightColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultBrightness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SunDiscScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroundOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistanceOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AltitudeScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistanceScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DensityOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DensityMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FogMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SunMultiplier,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAtmosphericFogComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAtmosphericFogComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A83080u,
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
	IMPLEMENT_CLASS(UAtmosphericFogComponent, 3225824150);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtmosphericFogComponent(Z_Construct_UClass_UAtmosphericFogComponent, &UAtmosphericFogComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UAtmosphericFogComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtmosphericFogComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
