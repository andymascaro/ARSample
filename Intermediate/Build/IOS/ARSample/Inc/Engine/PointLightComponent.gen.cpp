// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/PointLightComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointLightComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UPointLightComponent_SetAttenuationRadius();
	ENGINE_API UFunction* Z_Construct_UFunction_UPointLightComponent_SetLightFalloffExponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UPointLightComponent_SetSoftSourceRadius();
	ENGINE_API UFunction* Z_Construct_UFunction_UPointLightComponent_SetSourceLength();
	ENGINE_API UFunction* Z_Construct_UFunction_UPointLightComponent_SetSourceRadius();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassPointLightSettings();
// End Cross Module References
	void UPointLightComponent::StaticRegisterNativesUPointLightComponent()
	{
		UClass* Class = UPointLightComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAttenuationRadius", (Native)&UPointLightComponent::execSetAttenuationRadius },
			{ "SetLightFalloffExponent", (Native)&UPointLightComponent::execSetLightFalloffExponent },
			{ "SetSoftSourceRadius", (Native)&UPointLightComponent::execSetSoftSourceRadius },
			{ "SetSourceLength", (Native)&UPointLightComponent::execSetSourceLength },
			{ "SetSourceRadius", (Native)&UPointLightComponent::execSetSourceRadius },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UPointLightComponent_SetAttenuationRadius()
	{
		struct PointLightComponent_eventSetAttenuationRadius_Parms
		{
			float NewRadius;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewRadius = { UE4CodeGen_Private::EPropertyClass::Float, "NewRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PointLightComponent_eventSetAttenuationRadius_Parms, NewRadius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewRadius,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "ModuleRelativePath", "Classes/Components/PointLightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointLightComponent, "SetAttenuationRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PointLightComponent_eventSetAttenuationRadius_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPointLightComponent_SetLightFalloffExponent()
	{
		struct PointLightComponent_eventSetLightFalloffExponent_Parms
		{
			float NewLightFalloffExponent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewLightFalloffExponent = { UE4CodeGen_Private::EPropertyClass::Float, "NewLightFalloffExponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PointLightComponent_eventSetLightFalloffExponent_Parms, NewLightFalloffExponent), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewLightFalloffExponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "ModuleRelativePath", "Classes/Components/PointLightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointLightComponent, "SetLightFalloffExponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PointLightComponent_eventSetLightFalloffExponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPointLightComponent_SetSoftSourceRadius()
	{
		struct PointLightComponent_eventSetSoftSourceRadius_Parms
		{
			float bNewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bNewValue = { UE4CodeGen_Private::EPropertyClass::Float, "bNewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PointLightComponent_eventSetSoftSourceRadius_Parms, bNewValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "ModuleRelativePath", "Classes/Components/PointLightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointLightComponent, "SetSoftSourceRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PointLightComponent_eventSetSoftSourceRadius_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPointLightComponent_SetSourceLength()
	{
		struct PointLightComponent_eventSetSourceLength_Parms
		{
			float NewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PointLightComponent_eventSetSourceLength_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "ModuleRelativePath", "Classes/Components/PointLightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointLightComponent, "SetSourceLength", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PointLightComponent_eventSetSourceLength_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPointLightComponent_SetSourceRadius()
	{
		struct PointLightComponent_eventSetSourceRadius_Parms
		{
			float bNewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bNewValue = { UE4CodeGen_Private::EPropertyClass::Float, "bNewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PointLightComponent_eventSetSourceRadius_Parms, bNewValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "ModuleRelativePath", "Classes/Components/PointLightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointLightComponent, "SetSourceRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PointLightComponent_eventSetSourceRadius_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPointLightComponent_NoRegister()
	{
		return UPointLightComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UPointLightComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ULightComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UPointLightComponent_SetAttenuationRadius, "SetAttenuationRadius" }, // 3552760326
				{ &Z_Construct_UFunction_UPointLightComponent_SetLightFalloffExponent, "SetLightFalloffExponent" }, // 3319502424
				{ &Z_Construct_UFunction_UPointLightComponent_SetSoftSourceRadius, "SetSoftSourceRadius" }, // 3663259318
				{ &Z_Construct_UFunction_UPointLightComponent_SetSourceLength, "SetSourceLength" }, // 4254008334
				{ &Z_Construct_UFunction_UPointLightComponent_SetSourceRadius, "SetSourceRadius" }, // 4089781595
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Lights Common" },
				{ "HideCategories", "Object LightShafts Trigger Activation Components|Activation Physics Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
				{ "IncludePath", "Components/PointLightComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/Components/PointLightComponent.h" },
				{ "ToolTip", "A light component which emits light from a single point equally in all directions." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightmassSettings_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/PointLightComponent.h" },
				{ "ShowOnlyInnerProperties", "" },
				{ "ToolTip", "The Lightmass settings for this object." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightmassSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "LightmassSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UPointLightComponent, LightmassSettings), Z_Construct_UScriptStruct_FLightmassPointLightSettings, METADATA_PARAMS(NewProp_LightmassSettings_MetaData, ARRAY_COUNT(NewProp_LightmassSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceLength_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/PointLightComponent.h" },
				{ "ToolTip", "Length of light source shape.\nNote that light sources shapes which intersect shadow casting geometry can cause shadowing artifacts." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SourceLength = { UE4CodeGen_Private::EPropertyClass::Float, "SourceLength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UPointLightComponent, SourceLength), METADATA_PARAMS(NewProp_SourceLength_MetaData, ARRAY_COUNT(NewProp_SourceLength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoftSourceRadius_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/PointLightComponent.h" },
				{ "ToolTip", "Soft radius of light source shape.\nNote that light sources shapes which intersect shadow casting geometry can cause shadowing artifacts." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SoftSourceRadius = { UE4CodeGen_Private::EPropertyClass::Float, "SoftSourceRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UPointLightComponent, SoftSourceRadius), METADATA_PARAMS(NewProp_SoftSourceRadius_MetaData, ARRAY_COUNT(NewProp_SoftSourceRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceRadius_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/PointLightComponent.h" },
				{ "ToolTip", "Radius of light source shape.\nNote that light sources shapes which intersect shadow casting geometry can cause shadowing artifacts." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SourceRadius = { UE4CodeGen_Private::EPropertyClass::Float, "SourceRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UPointLightComponent, SourceRadius), METADATA_PARAMS(NewProp_SourceRadius_MetaData, ARRAY_COUNT(NewProp_SourceRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightFalloffExponent_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/PointLightComponent.h" },
				{ "ToolTip", "Controls the radial falloff of the light when UseInverseSquaredFalloff is disabled.\n2 is almost linear and very unrealistic and around 8 it looks reasonable.\nWith large exponents, the light has contribution to only a small area of its influence radius but still costs the same as low exponents." },
				{ "UIMax", "16.0" },
				{ "UIMin", "2.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightFalloffExponent = { UE4CodeGen_Private::EPropertyClass::Float, "LightFalloffExponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040200000015, 1, nullptr, STRUCT_OFFSET(UPointLightComponent, LightFalloffExponent), METADATA_PARAMS(NewProp_LightFalloffExponent_MetaData, ARRAY_COUNT(NewProp_LightFalloffExponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseInverseSquaredFalloff_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/PointLightComponent.h" },
				{ "ToolTip", "Whether to use physically based inverse squared distance falloff, where AttenuationRadius is only clamping the light's contribution.\nDisabling inverse squared falloff can be useful when placing fill lights (don't want a super bright spot near the light).\nWhen enabled, the light's Intensity is in units of lumens, where 1700 lumens is a 100W lightbulb.\nWhen disabled, the light's Intensity is a brightness scale." },
			};
#endif
			auto NewProp_bUseInverseSquaredFalloff_SetBit = [](void* Obj){ ((UPointLightComponent*)Obj)->bUseInverseSquaredFalloff = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseInverseSquaredFalloff = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseInverseSquaredFalloff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPointLightComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseInverseSquaredFalloff_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseInverseSquaredFalloff_MetaData, ARRAY_COUNT(NewProp_bUseInverseSquaredFalloff_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationRadius_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/PointLightComponent.h" },
				{ "SliderExponent", "5.0" },
				{ "ToolTip", "Bounds the light's visible influence.\nThis clamping of the light's influence is not physically correct but very important for performance, larger lights cost more." },
				{ "UIMax", "16384.0" },
				{ "UIMin", "8.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttenuationRadius = { UE4CodeGen_Private::EPropertyClass::Float, "AttenuationRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000015, 1, nullptr, STRUCT_OFFSET(UPointLightComponent, AttenuationRadius), METADATA_PARAMS(NewProp_AttenuationRadius_MetaData, ARRAY_COUNT(NewProp_AttenuationRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/PointLightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UPointLightComponent, Radius_DEPRECATED), METADATA_PARAMS(NewProp_Radius_MetaData, ARRAY_COUNT(NewProp_Radius_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightmassSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceLength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoftSourceRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightFalloffExponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseInverseSquaredFalloff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttenuationRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPointLightComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPointLightComponent::StaticClass,
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
	IMPLEMENT_CLASS(UPointLightComponent, 1765394870);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPointLightComponent(Z_Construct_UClass_UPointLightComponent, &UPointLightComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UPointLightComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointLightComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
