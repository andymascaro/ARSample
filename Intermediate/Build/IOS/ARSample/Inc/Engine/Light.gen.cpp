// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/Light.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLight() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ALight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ALight();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_ALight_GetBrightness();
	ENGINE_API UFunction* Z_Construct_UFunction_ALight_GetLightColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UFunction_ALight_IsEnabled();
	ENGINE_API UFunction* Z_Construct_UFunction_ALight_OnRep_bEnabled();
	ENGINE_API UFunction* Z_Construct_UFunction_ALight_SetAffectTranslucentLighting();
	ENGINE_API UFunction* Z_Construct_UFunction_ALight_SetBrightness();
	ENGINE_API UFunction* Z_Construct_UFunction_ALight_SetCastShadows();
	ENGINE_API UFunction* Z_Construct_UFunction_ALight_SetEnabled();
	ENGINE_API UFunction* Z_Construct_UFunction_ALight_SetLightColor();
	ENGINE_API UFunction* Z_Construct_UFunction_ALight_SetLightFunctionFadeDistance();
	ENGINE_API UFunction* Z_Construct_UFunction_ALight_SetLightFunctionMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_ALight_SetLightFunctionScale();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_ALight_ToggleEnabled();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponent_NoRegister();
// End Cross Module References
	void ALight::StaticRegisterNativesALight()
	{
		UClass* Class = ALight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBrightness", (Native)&ALight::execGetBrightness },
			{ "GetLightColor", (Native)&ALight::execGetLightColor },
			{ "IsEnabled", (Native)&ALight::execIsEnabled },
			{ "OnRep_bEnabled", (Native)&ALight::execOnRep_bEnabled },
			{ "SetAffectTranslucentLighting", (Native)&ALight::execSetAffectTranslucentLighting },
			{ "SetBrightness", (Native)&ALight::execSetBrightness },
			{ "SetCastShadows", (Native)&ALight::execSetCastShadows },
			{ "SetEnabled", (Native)&ALight::execSetEnabled },
			{ "SetLightColor", (Native)&ALight::execSetLightColor },
			{ "SetLightFunctionFadeDistance", (Native)&ALight::execSetLightFunctionFadeDistance },
			{ "SetLightFunctionMaterial", (Native)&ALight::execSetLightFunctionMaterial },
			{ "SetLightFunctionScale", (Native)&ALight::execSetLightFunctionScale },
			{ "ToggleEnabled", (Native)&ALight::execToggleEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ALight_GetBrightness()
	{
		struct Light_eventGetBrightness_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Light_eventGetBrightness_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Engine/Light.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALight, "GetBrightness", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Light_eventGetBrightness_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALight_GetLightColor()
	{
		struct Light_eventGetLightColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Light_eventGetLightColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Engine/Light.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALight, "GetLightColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(Light_eventGetLightColor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALight_IsEnabled()
	{
		struct Light_eventIsEnabled_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((Light_eventIsEnabled_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Light_eventIsEnabled_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Engine/Light.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALight, "IsEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Light_eventIsEnabled_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALight_OnRep_bEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Light.h" },
				{ "ToolTip", "Replication Notification Callbacks" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALight, "OnRep_bEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALight_SetAffectTranslucentLighting()
	{
		struct Light_eventSetAffectTranslucentLighting_Parms
		{
			bool bNewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bNewValue_SetBit = [](void* Obj){ ((Light_eventSetAffectTranslucentLighting_Parms*)Obj)->bNewValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Light_eventSetAffectTranslucentLighting_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Engine/Light.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALight, "SetAffectTranslucentLighting", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Light_eventSetAffectTranslucentLighting_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALight_SetBrightness()
	{
		struct Light_eventSetBrightness_Parms
		{
			float NewBrightness;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewBrightness = { UE4CodeGen_Private::EPropertyClass::Float, "NewBrightness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Light_eventSetBrightness_Parms, NewBrightness), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewBrightness,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Engine/Light.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALight, "SetBrightness", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Light_eventSetBrightness_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALight_SetCastShadows()
	{
		struct Light_eventSetCastShadows_Parms
		{
			bool bNewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bNewValue_SetBit = [](void* Obj){ ((Light_eventSetCastShadows_Parms*)Obj)->bNewValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Light_eventSetCastShadows_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Engine/Light.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALight, "SetCastShadows", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Light_eventSetCastShadows_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALight_SetEnabled()
	{
		struct Light_eventSetEnabled_Parms
		{
			bool bSetEnabled;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bSetEnabled_SetBit = [](void* Obj){ ((Light_eventSetEnabled_Parms*)Obj)->bSetEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bSetEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Light_eventSetEnabled_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSetEnabled_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSetEnabled,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Engine/Light.h" },
				{ "ToolTip", "BEGIN DEPRECATED (use component functions now in level script)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALight, "SetEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Light_eventSetEnabled_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALight_SetLightColor()
	{
		struct Light_eventSetLightColor_Parms
		{
			FLinearColor NewLightColor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLightColor = { UE4CodeGen_Private::EPropertyClass::Struct, "NewLightColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Light_eventSetLightColor_Parms, NewLightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewLightColor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Engine/Light.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALight, "SetLightColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Light_eventSetLightColor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALight_SetLightFunctionFadeDistance()
	{
		struct Light_eventSetLightFunctionFadeDistance_Parms
		{
			float NewLightFunctionFadeDistance;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewLightFunctionFadeDistance = { UE4CodeGen_Private::EPropertyClass::Float, "NewLightFunctionFadeDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Light_eventSetLightFunctionFadeDistance_Parms, NewLightFunctionFadeDistance), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewLightFunctionFadeDistance,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Engine/Light.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALight, "SetLightFunctionFadeDistance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Light_eventSetLightFunctionFadeDistance_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALight_SetLightFunctionMaterial()
	{
		struct Light_eventSetLightFunctionMaterial_Parms
		{
			UMaterialInterface* NewLightFunctionMaterial;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewLightFunctionMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "NewLightFunctionMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Light_eventSetLightFunctionMaterial_Parms, NewLightFunctionMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewLightFunctionMaterial,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Engine/Light.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALight, "SetLightFunctionMaterial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Light_eventSetLightFunctionMaterial_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALight_SetLightFunctionScale()
	{
		struct Light_eventSetLightFunctionScale_Parms
		{
			FVector NewLightFunctionScale;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLightFunctionScale = { UE4CodeGen_Private::EPropertyClass::Struct, "NewLightFunctionScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Light_eventSetLightFunctionScale_Parms, NewLightFunctionScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewLightFunctionScale,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Engine/Light.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALight, "SetLightFunctionScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Light_eventSetLightFunctionScale_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALight_ToggleEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Engine/Light.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALight, "ToggleEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALight_NoRegister()
	{
		return ALight::StaticClass();
	}
	UClass* Z_Construct_UClass_ALight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ALight_GetBrightness, "GetBrightness" }, // 3938004836
				{ &Z_Construct_UFunction_ALight_GetLightColor, "GetLightColor" }, // 772402767
				{ &Z_Construct_UFunction_ALight_IsEnabled, "IsEnabled" }, // 1087685692
				{ &Z_Construct_UFunction_ALight_OnRep_bEnabled, "OnRep_bEnabled" }, // 963287826
				{ &Z_Construct_UFunction_ALight_SetAffectTranslucentLighting, "SetAffectTranslucentLighting" }, // 2024135906
				{ &Z_Construct_UFunction_ALight_SetBrightness, "SetBrightness" }, // 2218478571
				{ &Z_Construct_UFunction_ALight_SetCastShadows, "SetCastShadows" }, // 902385521
				{ &Z_Construct_UFunction_ALight_SetEnabled, "SetEnabled" }, // 1218321166
				{ &Z_Construct_UFunction_ALight_SetLightColor, "SetLightColor" }, // 1758412728
				{ &Z_Construct_UFunction_ALight_SetLightFunctionFadeDistance, "SetLightFunctionFadeDistance" }, // 2994564658
				{ &Z_Construct_UFunction_ALight_SetLightFunctionMaterial, "SetLightFunctionMaterial" }, // 701663605
				{ &Z_Construct_UFunction_ALight_SetLightFunctionScale, "SetLightFunctionScale" }, // 27963766
				{ &Z_Construct_UFunction_ALight_ToggleEnabled, "ToggleEnabled" }, // 2139050863
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ChildCanTick", "" },
				{ "ClassGroupNames", "Lights" },
				{ "HideCategories", "Input Collision Replication" },
				{ "IgnoreCategoryKeywordsInSubclasses", "true" },
				{ "IncludePath", "Engine/Light.h" },
				{ "IsConversionRoot", "true" },
				{ "ModuleRelativePath", "Classes/Engine/Light.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Light.h" },
				{ "ToolTip", "replicated copy of LightComponent's bEnabled property" },
			};
#endif
			auto NewProp_bEnabled_SetBit = [](void* Obj){ ((ALight*)Obj)->bEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000100000020, 1, "OnRep_bEnabled", sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ALight), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnabled_MetaData, ARRAY_COUNT(NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Light" },
				{ "EditInline", "true" },
				{ "ExposeFunctionCategories", "Light,Rendering,Rendering|Components|Light" },
				{ "ModuleRelativePath", "Classes/Engine/Light.h" },
				{ "ToolTip", "@todo document" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightComponent = { UE4CodeGen_Private::EPropertyClass::Object, "LightComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ALight, LightComponent), Z_Construct_UClass_ULightComponent_NoRegister, METADATA_PARAMS(NewProp_LightComponent_MetaData, ARRAY_COUNT(NewProp_LightComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ALight>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ALight::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900081u,
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
	IMPLEMENT_CLASS(ALight, 71213117);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALight(Z_Construct_UClass_ALight, &ALight::StaticClass, TEXT("/Script/Engine"), TEXT("ALight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
