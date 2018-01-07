// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialInstanceDynamic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialInstanceDynamic() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides();
	ENGINE_API UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue();
	ENGINE_API UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams();
	ENGINE_API UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue();
	ENGINE_API UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue();
	ENGINE_API UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue();
// End Cross Module References
	void UMaterialInstanceDynamic::StaticRegisterNativesUMaterialInstanceDynamic()
	{
		UClass* Class = UMaterialInstanceDynamic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyInterpParameters", (Native)&UMaterialInstanceDynamic::execCopyInterpParameters },
			{ "CopyParameterOverrides", (Native)&UMaterialInstanceDynamic::execCopyParameterOverrides },
			{ "K2_CopyMaterialInstanceParameters", (Native)&UMaterialInstanceDynamic::execK2_CopyMaterialInstanceParameters },
			{ "K2_GetScalarParameterValue", (Native)&UMaterialInstanceDynamic::execK2_GetScalarParameterValue },
			{ "K2_GetTextureParameterValue", (Native)&UMaterialInstanceDynamic::execK2_GetTextureParameterValue },
			{ "K2_GetVectorParameterValue", (Native)&UMaterialInstanceDynamic::execK2_GetVectorParameterValue },
			{ "K2_InterpolateMaterialInstanceParams", (Native)&UMaterialInstanceDynamic::execK2_InterpolateMaterialInstanceParams },
			{ "SetScalarParameterValue", (Native)&UMaterialInstanceDynamic::execSetScalarParameterValue },
			{ "SetTextureParameterValue", (Native)&UMaterialInstanceDynamic::execSetTextureParameterValue },
			{ "SetVectorParameterValue", (Native)&UMaterialInstanceDynamic::execSetVectorParameterValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters()
	{
		struct MaterialInstanceDynamic_eventCopyInterpParameters_Parms
		{
			UMaterialInstance* Source;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source = { UE4CodeGen_Private::EPropertyClass::Object, "Source", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventCopyInterpParameters_Parms, Source), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Source,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Material" },
				{ "DisplayName", "CopyInterpParameters" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
				{ "ToolTip", "Copies over parameters given a material instance (only copy from the instance, not following the hierarchy)\nmuch faster than K2_CopyMaterialInstanceParameters(),\nThe output is the object itself (this).\n@param Source ignores the call if 0" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, "CopyInterpParameters", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(MaterialInstanceDynamic_eventCopyInterpParameters_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides()
	{
		struct MaterialInstanceDynamic_eventCopyParameterOverrides_Parms
		{
			UMaterialInstance* MaterialInstance;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance = { UE4CodeGen_Private::EPropertyClass::Object, "MaterialInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventCopyParameterOverrides_Parms, MaterialInstance), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialInstance,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Material" },
				{ "DisplayName", "CopyParameterOverrides" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
				{ "ToolTip", "Copy parameter values from another material instance. This will copy only\nparameters explicitly overridden in that material instance!!" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, "CopyParameterOverrides", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MaterialInstanceDynamic_eventCopyParameterOverrides_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters()
	{
		struct MaterialInstanceDynamic_eventK2_CopyMaterialInstanceParameters_Parms
		{
			UMaterialInterface* Source;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source = { UE4CodeGen_Private::EPropertyClass::Object, "Source", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_CopyMaterialInstanceParameters_Parms, Source), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Source,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Material" },
				{ "DisplayName", "CopyMaterialInstanceParameters" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
				{ "ToolTip", "Copies over parameters given a material interface (copy each instance following the hierarchy)\nVery slow implementation, avoid using at runtime. Hopefully we can replace ity later with something like CopyInterpParameters()\nThe output is the object itself (this)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, "K2_CopyMaterialInstanceParameters", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MaterialInstanceDynamic_eventK2_CopyMaterialInstanceParameters_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue()
	{
		struct MaterialInstanceDynamic_eventK2_GetScalarParameterValue_Parms
		{
			FName ParameterName;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetScalarParameterValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetScalarParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Material" },
				{ "DisplayName", "GetScalarParameterValue" },
				{ "Keywords", "GetFloatParameterValue" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
				{ "ToolTip", "Get the current scalar (float) parameter value from an MID" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, "K2_GetScalarParameterValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MaterialInstanceDynamic_eventK2_GetScalarParameterValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue()
	{
		struct MaterialInstanceDynamic_eventK2_GetTextureParameterValue_Parms
		{
			FName ParameterName;
			UTexture* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetTextureParameterValue_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Material" },
				{ "DisplayName", "GetTextureParameterValue" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
				{ "ToolTip", "Get the current MID texture parameter value" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, "K2_GetTextureParameterValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MaterialInstanceDynamic_eventK2_GetTextureParameterValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue()
	{
		struct MaterialInstanceDynamic_eventK2_GetVectorParameterValue_Parms
		{
			FName ParameterName;
			FLinearColor ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetVectorParameterValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Material" },
				{ "DisplayName", "GetVectorParameterValue" },
				{ "Keywords", "GetColorParameterValue" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
				{ "ToolTip", "Get the current MID vector parameter value" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, "K2_GetVectorParameterValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(MaterialInstanceDynamic_eventK2_GetVectorParameterValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams()
	{
		struct MaterialInstanceDynamic_eventK2_InterpolateMaterialInstanceParams_Parms
		{
			UMaterialInstance* SourceA;
			UMaterialInstance* SourceB;
			float Alpha;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha = { UE4CodeGen_Private::EPropertyClass::Float, "Alpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_InterpolateMaterialInstanceParams_Parms, Alpha), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceB = { UE4CodeGen_Private::EPropertyClass::Object, "SourceB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_InterpolateMaterialInstanceParams_Parms, SourceB), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceA = { UE4CodeGen_Private::EPropertyClass::Object, "SourceA", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_InterpolateMaterialInstanceParams_Parms, SourceA), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Alpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceB,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceA,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Material" },
				{ "DisplayName", "InterpolateMaterialInstanceParameters" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
				{ "ToolTip", "Interpolates the scalar and vector parameters of this material instance based on two other material instances, and an alpha blending factor\nThe output is the object itself (this).\nSupports the case SourceA==this || SourceB==this\nBoth material have to be from the same base material\n@param SourceA value that is used for Alpha=0, silently ignores the case if 0\n@param SourceB value that is used for Alpha=1, silently ignores the case if 0\n@param Alpha usually in the range 0..1, values outside the range extrapolate" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, "K2_InterpolateMaterialInstanceParams", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MaterialInstanceDynamic_eventK2_InterpolateMaterialInstanceParams_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue()
	{
		struct MaterialInstanceDynamic_eventSetScalarParameterValue_Parms
		{
			FName ParameterName;
			float Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetScalarParameterValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetScalarParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Material" },
				{ "Keywords", "SetFloatParameterValue" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
				{ "ToolTip", "Set a MID scalar (float) parameter value" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, "SetScalarParameterValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MaterialInstanceDynamic_eventSetScalarParameterValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue()
	{
		struct MaterialInstanceDynamic_eventSetTextureParameterValue_Parms
		{
			FName ParameterName;
			UTexture* Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Object, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetTextureParameterValue_Parms, Value), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Material" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
				{ "ToolTip", "Set an MID texture parameter value" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, "SetTextureParameterValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MaterialInstanceDynamic_eventSetTextureParameterValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue()
	{
		struct MaterialInstanceDynamic_eventSetVectorParameterValue_Parms
		{
			FName ParameterName;
			FLinearColor Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Struct, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetVectorParameterValue_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Material" },
				{ "Keywords", "SetColorParameterValue" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
				{ "ToolTip", "Set an MID vector parameter value" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, "SetVectorParameterValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(MaterialInstanceDynamic_eventSetVectorParameterValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister()
	{
		return UMaterialInstanceDynamic::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialInstanceDynamic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialInstance,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters, "CopyInterpParameters" }, // 10025371
				{ &Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides, "CopyParameterOverrides" }, // 1709610593
				{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters, "K2_CopyMaterialInstanceParameters" }, // 2754983192
				{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue, "K2_GetScalarParameterValue" }, // 245867104
				{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue, "K2_GetTextureParameterValue" }, // 1407018142
				{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue, "K2_GetVectorParameterValue" }, // 1337373394
				{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams, "K2_InterpolateMaterialInstanceParams" }, // 927674315
				{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue, "SetScalarParameterValue" }, // 3195132731
				{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue, "SetTextureParameterValue" }, // 1333074905
				{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue, "SetVectorParameterValue" }, // 2063320183
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Materials/MaterialInstanceDynamic.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialInstanceDynamic>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialInstanceDynamic::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00902080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialInstanceDynamic, 3587761932);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialInstanceDynamic(Z_Construct_UClass_UMaterialInstanceDynamic, &UMaterialInstanceDynamic::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialInstanceDynamic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialInstanceDynamic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
