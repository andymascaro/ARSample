// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/CapsuleComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsuleComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent();
	ENGINE_API UClass* Z_Construct_UClass_UShapeComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight();
	ENGINE_API UFunction* Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere();
	ENGINE_API UFunction* Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius();
	ENGINE_API UFunction* Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize();
	ENGINE_API UFunction* Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere();
	ENGINE_API UFunction* Z_Construct_UFunction_UCapsuleComponent_GetShapeScale();
	ENGINE_API UFunction* Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight();
	ENGINE_API UFunction* Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere();
	ENGINE_API UFunction* Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius();
	ENGINE_API UFunction* Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize();
	ENGINE_API UFunction* Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere();
	ENGINE_API UFunction* Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight();
	ENGINE_API UFunction* Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius();
	ENGINE_API UFunction* Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize();
// End Cross Module References
	void UCapsuleComponent::StaticRegisterNativesUCapsuleComponent()
	{
		UClass* Class = UCapsuleComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScaledCapsuleHalfHeight", (Native)&UCapsuleComponent::execGetScaledCapsuleHalfHeight },
			{ "GetScaledCapsuleHalfHeight_WithoutHemisphere", (Native)&UCapsuleComponent::execGetScaledCapsuleHalfHeight_WithoutHemisphere },
			{ "GetScaledCapsuleRadius", (Native)&UCapsuleComponent::execGetScaledCapsuleRadius },
			{ "GetScaledCapsuleSize", (Native)&UCapsuleComponent::execGetScaledCapsuleSize },
			{ "GetScaledCapsuleSize_WithoutHemisphere", (Native)&UCapsuleComponent::execGetScaledCapsuleSize_WithoutHemisphere },
			{ "GetShapeScale", (Native)&UCapsuleComponent::execGetShapeScale },
			{ "GetUnscaledCapsuleHalfHeight", (Native)&UCapsuleComponent::execGetUnscaledCapsuleHalfHeight },
			{ "GetUnscaledCapsuleHalfHeight_WithoutHemisphere", (Native)&UCapsuleComponent::execGetUnscaledCapsuleHalfHeight_WithoutHemisphere },
			{ "GetUnscaledCapsuleRadius", (Native)&UCapsuleComponent::execGetUnscaledCapsuleRadius },
			{ "GetUnscaledCapsuleSize", (Native)&UCapsuleComponent::execGetUnscaledCapsuleSize },
			{ "GetUnscaledCapsuleSize_WithoutHemisphere", (Native)&UCapsuleComponent::execGetUnscaledCapsuleSize_WithoutHemisphere },
			{ "SetCapsuleHalfHeight", (Native)&UCapsuleComponent::execSetCapsuleHalfHeight },
			{ "SetCapsuleRadius", (Native)&UCapsuleComponent::execSetCapsuleRadius },
			{ "SetCapsuleSize", (Native)&UCapsuleComponent::execSetCapsuleSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight()
	{
		struct CapsuleComponent_eventGetScaledCapsuleHalfHeight_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CapsuleComponent_eventGetScaledCapsuleHalfHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Capsule" },
				{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
				{ "ToolTip", "Returns the capsule half-height scaled by the component scale. This includes both the cylinder and hemisphere cap.\n@return The capsule half-height scaled by the component scale." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, "GetScaledCapsuleHalfHeight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CapsuleComponent_eventGetScaledCapsuleHalfHeight_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere()
	{
		struct CapsuleComponent_eventGetScaledCapsuleHalfHeight_WithoutHemisphere_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CapsuleComponent_eventGetScaledCapsuleHalfHeight_WithoutHemisphere_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Capsule" },
				{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
				{ "ToolTip", "Returns the capsule half-height minus radius (to exclude the hemisphere), scaled by the component scale.\nFrom the center of the capsule this is the vertical distance along the straight cylindrical portion to the point just before the curve of top hemisphere begins.\n@return The capsule half-height minus radius, scaled by the component scale." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, "GetScaledCapsuleHalfHeight_WithoutHemisphere", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CapsuleComponent_eventGetScaledCapsuleHalfHeight_WithoutHemisphere_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius()
	{
		struct CapsuleComponent_eventGetScaledCapsuleRadius_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CapsuleComponent_eventGetScaledCapsuleRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Capsule" },
				{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
				{ "ToolTip", "Returns the capsule radius scaled by the component scale.\n@return The capsule radius scaled by the component scale." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, "GetScaledCapsuleRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CapsuleComponent_eventGetScaledCapsuleRadius_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize()
	{
		struct CapsuleComponent_eventGetScaledCapsuleSize_Parms
		{
			float OutRadius;
			float OutHalfHeight;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutHalfHeight = { UE4CodeGen_Private::EPropertyClass::Float, "OutHalfHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CapsuleComponent_eventGetScaledCapsuleSize_Parms, OutHalfHeight), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutRadius = { UE4CodeGen_Private::EPropertyClass::Float, "OutRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CapsuleComponent_eventGetScaledCapsuleSize_Parms, OutRadius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutHalfHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutRadius,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Capsule" },
				{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
				{ "ToolTip", "Returns the capsule radius and half-height scaled by the component scale. Half-height includes the hemisphere end cap.\n@param OutRadius Radius of the capsule, scaled by the component scale.\n@param OutHalfHeight Half-height of the capsule, scaled by the component scale. Includes the hemisphere end cap.\n@return The capsule radius and half-height scaled by the component scale." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, "GetScaledCapsuleSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(CapsuleComponent_eventGetScaledCapsuleSize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere()
	{
		struct CapsuleComponent_eventGetScaledCapsuleSize_WithoutHemisphere_Parms
		{
			float OutRadius;
			float OutHalfHeightWithoutHemisphere;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutHalfHeightWithoutHemisphere = { UE4CodeGen_Private::EPropertyClass::Float, "OutHalfHeightWithoutHemisphere", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CapsuleComponent_eventGetScaledCapsuleSize_WithoutHemisphere_Parms, OutHalfHeightWithoutHemisphere), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutRadius = { UE4CodeGen_Private::EPropertyClass::Float, "OutRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CapsuleComponent_eventGetScaledCapsuleSize_WithoutHemisphere_Parms, OutRadius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutHalfHeightWithoutHemisphere,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutRadius,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Capsule" },
				{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
				{ "ToolTip", "Returns the capsule radius and half-height scaled by the component scale. Half-height excludes the hemisphere end cap.\n@param OutRadius Radius of the capsule, ignoring component scaling.\n@param OutHalfHeightWithoutHemisphere Half-height of the capsule, scaled by the component scale. Excludes the hemisphere end cap.\n@return The capsule radius and half-height scaled by the component scale." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, "GetScaledCapsuleSize_WithoutHemisphere", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(CapsuleComponent_eventGetScaledCapsuleSize_WithoutHemisphere_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapsuleComponent_GetShapeScale()
	{
		struct CapsuleComponent_eventGetShapeScale_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CapsuleComponent_eventGetShapeScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Capsule" },
				{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
				{ "ToolTip", "Get the scale used by this shape. This is a uniform scale that is the minimum of any non-uniform scaling.\n@return the scale used by this shape." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, "GetShapeScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CapsuleComponent_eventGetShapeScale_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight()
	{
		struct CapsuleComponent_eventGetUnscaledCapsuleHalfHeight_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CapsuleComponent_eventGetUnscaledCapsuleHalfHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Capsule" },
				{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
				{ "ToolTip", "Returns the capsule half-height, ignoring component scaling. This includes the hemisphere end cap.\n@return The capsule radius, ignoring component scaling." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, "GetUnscaledCapsuleHalfHeight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CapsuleComponent_eventGetUnscaledCapsuleHalfHeight_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere()
	{
		struct CapsuleComponent_eventGetUnscaledCapsuleHalfHeight_WithoutHemisphere_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CapsuleComponent_eventGetUnscaledCapsuleHalfHeight_WithoutHemisphere_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Capsule" },
				{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
				{ "ToolTip", "Returns the capsule half-height minus radius (to exclude the hemisphere), ignoring component scaling. This excludes the hemisphere end cap.\nFrom the center of the capsule this is the vertical distance along the straight cylindrical portion to the point just before the curve of top hemisphere begins.\n@return The capsule half-height minus radius, ignoring component scaling." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, "GetUnscaledCapsuleHalfHeight_WithoutHemisphere", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CapsuleComponent_eventGetUnscaledCapsuleHalfHeight_WithoutHemisphere_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius()
	{
		struct CapsuleComponent_eventGetUnscaledCapsuleRadius_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CapsuleComponent_eventGetUnscaledCapsuleRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Capsule" },
				{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
				{ "ToolTip", "Returns the capsule radius, ignoring component scaling.\n@return the capsule radius, ignoring component scaling." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, "GetUnscaledCapsuleRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CapsuleComponent_eventGetUnscaledCapsuleRadius_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize()
	{
		struct CapsuleComponent_eventGetUnscaledCapsuleSize_Parms
		{
			float OutRadius;
			float OutHalfHeight;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutHalfHeight = { UE4CodeGen_Private::EPropertyClass::Float, "OutHalfHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CapsuleComponent_eventGetUnscaledCapsuleSize_Parms, OutHalfHeight), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutRadius = { UE4CodeGen_Private::EPropertyClass::Float, "OutRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CapsuleComponent_eventGetUnscaledCapsuleSize_Parms, OutRadius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutHalfHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutRadius,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Capsule" },
				{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
				{ "ToolTip", "Returns the capsule radius and half-height scaled by the component scale. Half-height includes the hemisphere end cap.\n@param OutRadius Radius of the capsule, scaled by the component scale.\n@param OutHalfHeight Half-height of the capsule, scaled by the component scale. Includes the hemisphere end cap.\n@return The capsule radius and half-height scaled by the component scale." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, "GetUnscaledCapsuleSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(CapsuleComponent_eventGetUnscaledCapsuleSize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere()
	{
		struct CapsuleComponent_eventGetUnscaledCapsuleSize_WithoutHemisphere_Parms
		{
			float OutRadius;
			float OutHalfHeightWithoutHemisphere;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutHalfHeightWithoutHemisphere = { UE4CodeGen_Private::EPropertyClass::Float, "OutHalfHeightWithoutHemisphere", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CapsuleComponent_eventGetUnscaledCapsuleSize_WithoutHemisphere_Parms, OutHalfHeightWithoutHemisphere), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutRadius = { UE4CodeGen_Private::EPropertyClass::Float, "OutRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CapsuleComponent_eventGetUnscaledCapsuleSize_WithoutHemisphere_Parms, OutRadius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutHalfHeightWithoutHemisphere,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutRadius,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Capsule" },
				{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
				{ "ToolTip", "Returns the capsule radius and half-height, ignoring component scaling. Half-height excludes the hemisphere end cap.\n@param OutRadius Radius of the capsule, ignoring component scaling.\n@param OutHalfHeightWithoutHemisphere Half-height of the capsule, scaled by the component scale. Excludes the hemisphere end cap.\n@return The capsule radius and half-height (excluding hemisphere end cap), ignoring component scaling." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, "GetUnscaledCapsuleSize_WithoutHemisphere", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(CapsuleComponent_eventGetUnscaledCapsuleSize_WithoutHemisphere_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight()
	{
		struct CapsuleComponent_eventSetCapsuleHalfHeight_Parms
		{
			float HalfHeight;
			bool bUpdateOverlaps;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateOverlaps_SetBit = [](void* Obj){ ((CapsuleComponent_eventSetCapsuleHalfHeight_Parms*)Obj)->bUpdateOverlaps = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateOverlaps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CapsuleComponent_eventSetCapsuleHalfHeight_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateOverlaps_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HalfHeight = { UE4CodeGen_Private::EPropertyClass::Float, "HalfHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CapsuleComponent_eventSetCapsuleHalfHeight_Parms, HalfHeight), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateOverlaps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HalfHeight,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Capsule" },
				{ "CPP_Default_bUpdateOverlaps", "true" },
				{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
				{ "ToolTip", "Set the capsule half-height. This is the unscaled half-height, before component scale is applied.\nIf this capsule collides, updates touching array for owner actor.\n@param       HalfHeight : half-height, from capsule center to end of top or bottom hemisphere.\n@param       bUpdateOverlaps: if true and this shape is registered and collides, updates touching array for owner actor." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, "SetCapsuleHalfHeight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CapsuleComponent_eventSetCapsuleHalfHeight_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius()
	{
		struct CapsuleComponent_eventSetCapsuleRadius_Parms
		{
			float Radius;
			bool bUpdateOverlaps;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateOverlaps_SetBit = [](void* Obj){ ((CapsuleComponent_eventSetCapsuleRadius_Parms*)Obj)->bUpdateOverlaps = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateOverlaps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CapsuleComponent_eventSetCapsuleRadius_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateOverlaps_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CapsuleComponent_eventSetCapsuleRadius_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateOverlaps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Capsule" },
				{ "CPP_Default_bUpdateOverlaps", "true" },
				{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
				{ "ToolTip", "Set the capsule radius. This is the unscaled radius, before component scale is applied.\nIf this capsule collides, updates touching array for owner actor.\n@param       Radius : radius of end-cap hemispheres and center cylinder.\n@param       bUpdateOverlaps: if true and this shape is registered and collides, updates touching array for owner actor." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, "SetCapsuleRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CapsuleComponent_eventSetCapsuleRadius_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize()
	{
		struct CapsuleComponent_eventSetCapsuleSize_Parms
		{
			float InRadius;
			float InHalfHeight;
			bool bUpdateOverlaps;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateOverlaps_SetBit = [](void* Obj){ ((CapsuleComponent_eventSetCapsuleSize_Parms*)Obj)->bUpdateOverlaps = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateOverlaps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CapsuleComponent_eventSetCapsuleSize_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateOverlaps_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InHalfHeight = { UE4CodeGen_Private::EPropertyClass::Float, "InHalfHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CapsuleComponent_eventSetCapsuleSize_Parms, InHalfHeight), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InRadius = { UE4CodeGen_Private::EPropertyClass::Float, "InRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CapsuleComponent_eventSetCapsuleSize_Parms, InRadius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateOverlaps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InHalfHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InRadius,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Capsule" },
				{ "CPP_Default_bUpdateOverlaps", "true" },
				{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
				{ "ToolTip", "Change the capsule size. This is the unscaled size, before component scale is applied.\n@param       InRadius : radius of end-cap hemispheres and center cylinder.\n@param       InHalfHeight : half-height, from capsule center to end of top or bottom hemisphere.\n@param       bUpdateOverlaps: if true and this shape is registered and collides, updates touching array for owner actor." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, "SetCapsuleSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CapsuleComponent_eventSetCapsuleSize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister()
	{
		return UCapsuleComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UCapsuleComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UShapeComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight, "GetScaledCapsuleHalfHeight" }, // 1357322659
				{ &Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere, "GetScaledCapsuleHalfHeight_WithoutHemisphere" }, // 4117935398
				{ &Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius, "GetScaledCapsuleRadius" }, // 3675149070
				{ &Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize, "GetScaledCapsuleSize" }, // 1076279372
				{ &Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere, "GetScaledCapsuleSize_WithoutHemisphere" }, // 1450690261
				{ &Z_Construct_UFunction_UCapsuleComponent_GetShapeScale, "GetShapeScale" }, // 4123893149
				{ &Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight, "GetUnscaledCapsuleHalfHeight" }, // 1793568522
				{ &Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere, "GetUnscaledCapsuleHalfHeight_WithoutHemisphere" }, // 2345128418
				{ &Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius, "GetUnscaledCapsuleRadius" }, // 333568877
				{ &Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize, "GetUnscaledCapsuleSize" }, // 2308688870
				{ &Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere, "GetUnscaledCapsuleSize_WithoutHemisphere" }, // 2275614822
				{ &Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight, "SetCapsuleHalfHeight" }, // 2664622898
				{ &Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius, "SetCapsuleRadius" }, // 527140493
				{ &Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize, "SetCapsuleSize" }, // 3193855741
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Collision" },
				{ "DisplayName", "Capsule Collision" },
				{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger" },
				{ "IncludePath", "Components/CapsuleComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
				{ "ToolTip", "A capsule generally used for simple collision. Bounds are rendered as lines in the editor." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleHeight_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CapsuleHeight = { UE4CodeGen_Private::EPropertyClass::Float, "CapsuleHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080020000000, 1, nullptr, STRUCT_OFFSET(UCapsuleComponent, CapsuleHeight_DEPRECATED), METADATA_PARAMS(NewProp_CapsuleHeight_MetaData, ARRAY_COUNT(NewProp_CapsuleHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleRadius_MetaData[] = {
				{ "Category", "Shape" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
				{ "ToolTip", "Radius of cap hemispheres and center cylinder.\nThis cannot be more than CapsuleHalfHeight." },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CapsuleRadius = { UE4CodeGen_Private::EPropertyClass::Float, "CapsuleRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008000000001d, 1, nullptr, STRUCT_OFFSET(UCapsuleComponent, CapsuleRadius), METADATA_PARAMS(NewProp_CapsuleRadius_MetaData, ARRAY_COUNT(NewProp_CapsuleRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleHalfHeight_MetaData[] = {
				{ "Category", "Shape" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
				{ "ToolTip", "Half-height, from center of capsule to the end of top or bottom hemisphere.\nThis cannot be less than CapsuleRadius." },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CapsuleHalfHeight = { UE4CodeGen_Private::EPropertyClass::Float, "CapsuleHalfHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008000000001d, 1, nullptr, STRUCT_OFFSET(UCapsuleComponent, CapsuleHalfHeight), METADATA_PARAMS(NewProp_CapsuleHalfHeight_MetaData, ARRAY_COUNT(NewProp_CapsuleHalfHeight_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleHalfHeight,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCapsuleComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCapsuleComponent::StaticClass,
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
	IMPLEMENT_CLASS(UCapsuleComponent, 242758616);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCapsuleComponent(Z_Construct_UClass_UCapsuleComponent, &UCapsuleComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UCapsuleComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCapsuleComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
