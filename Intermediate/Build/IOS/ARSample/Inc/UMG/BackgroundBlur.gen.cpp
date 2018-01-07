// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/BackgroundBlur.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBackgroundBlur() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UBackgroundBlur_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBackgroundBlur();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur();
	UMG_API UFunction* Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius();
	UMG_API UFunction* Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength();
	UMG_API UFunction* Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	UMG_API UFunction* Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UMG_API UFunction* Z_Construct_UFunction_UBackgroundBlur_SetPadding();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UFunction* Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
// End Cross Module References
	void UBackgroundBlur::StaticRegisterNativesUBackgroundBlur()
	{
		UClass* Class = UBackgroundBlur::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetApplyAlphaToBlur", (Native)&UBackgroundBlur::execSetApplyAlphaToBlur },
			{ "SetBlurRadius", (Native)&UBackgroundBlur::execSetBlurRadius },
			{ "SetBlurStrength", (Native)&UBackgroundBlur::execSetBlurStrength },
			{ "SetHorizontalAlignment", (Native)&UBackgroundBlur::execSetHorizontalAlignment },
			{ "SetLowQualityFallbackBrush", (Native)&UBackgroundBlur::execSetLowQualityFallbackBrush },
			{ "SetPadding", (Native)&UBackgroundBlur::execSetPadding },
			{ "SetVerticalAlignment", (Native)&UBackgroundBlur::execSetVerticalAlignment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur()
	{
		struct BackgroundBlur_eventSetApplyAlphaToBlur_Parms
		{
			bool bInApplyAlphaToBlur;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bInApplyAlphaToBlur_SetBit = [](void* Obj){ ((BackgroundBlur_eventSetApplyAlphaToBlur_Parms*)Obj)->bInApplyAlphaToBlur = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInApplyAlphaToBlur = { UE4CodeGen_Private::EPropertyClass::Bool, "bInApplyAlphaToBlur", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BackgroundBlur_eventSetApplyAlphaToBlur_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInApplyAlphaToBlur_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInApplyAlphaToBlur,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlur, "SetApplyAlphaToBlur", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BackgroundBlur_eventSetApplyAlphaToBlur_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius()
	{
		struct BackgroundBlur_eventSetBlurRadius_Parms
		{
			int32 InBlurRadius;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InBlurRadius = { UE4CodeGen_Private::EPropertyClass::Int, "InBlurRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BackgroundBlur_eventSetBlurRadius_Parms, InBlurRadius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InBlurRadius,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlur, "SetBlurRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BackgroundBlur_eventSetBlurRadius_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength()
	{
		struct BackgroundBlur_eventSetBlurStrength_Parms
		{
			float InStrength;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InStrength = { UE4CodeGen_Private::EPropertyClass::Float, "InStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BackgroundBlur_eventSetBlurStrength_Parms, InStrength), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InStrength,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlur, "SetBlurStrength", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(BackgroundBlur_eventSetBlurStrength_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment()
	{
		struct BackgroundBlur_eventSetHorizontalAlignment_Parms
		{
			TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InHorizontalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "InHorizontalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BackgroundBlur_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InHorizontalAlignment,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlur, "SetHorizontalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BackgroundBlur_eventSetHorizontalAlignment_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush()
	{
		struct BackgroundBlur_eventSetLowQualityFallbackBrush_Parms
		{
			FSlateBrush InBrush;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBrush_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "InBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BackgroundBlur_eventSetLowQualityFallbackBrush_Parms, InBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_InBrush_MetaData, ARRAY_COUNT(NewProp_InBrush_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InBrush,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlur, "SetLowQualityFallbackBrush", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(BackgroundBlur_eventSetLowQualityFallbackBrush_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBackgroundBlur_SetPadding()
	{
		struct BackgroundBlur_eventSetPadding_Parms
		{
			FMargin InPadding;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "InPadding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BackgroundBlur_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPadding,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlur, "SetPadding", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BackgroundBlur_eventSetPadding_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment()
	{
		struct BackgroundBlur_eventSetVerticalAlignment_Parms
		{
			TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InVerticalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "InVerticalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BackgroundBlur_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InVerticalAlignment,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlur, "SetVerticalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BackgroundBlur_eventSetVerticalAlignment_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBackgroundBlur_NoRegister()
	{
		return UBackgroundBlur::StaticClass();
	}
	UClass* Z_Construct_UClass_UBackgroundBlur()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UContentWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur, "SetApplyAlphaToBlur" }, // 1295434599
				{ &Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius, "SetBlurRadius" }, // 1815194989
				{ &Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength, "SetBlurStrength" }, // 197929057
				{ &Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 3373480441
				{ &Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush, "SetLowQualityFallbackBrush" }, // 3405444557
				{ &Z_Construct_UFunction_UBackgroundBlur_SetPadding, "SetPadding" }, // 164236263
				{ &Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment, "SetVerticalAlignment" }, // 3693690514
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/BackgroundBlur.h" },
				{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
				{ "ToolTip", "A background blur is a container widget that can contain one child widget, providing an opportunity\nto surround it with adjustable padding and apply a post-process Gaussian blur to all content beneath the widget.\n\n* Single Child\n* Blur Effect" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowQualityFallbackBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
				{ "ToolTip", "An image to draw instead of applying a blur when low quality override mode is enabled.\nYou can enable low quality mode for background blurs by setting the cvar Slate.ForceBackgroundBlurLowQualityOverride to 1.\nThis is usually done in the project's scalability settings" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LowQualityFallbackBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "LowQualityFallbackBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UBackgroundBlur, LowQualityFallbackBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_LowQualityFallbackBrush_MetaData, ARRAY_COUNT(NewProp_LowQualityFallbackBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlurRadius_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ClampMax", "255" },
				{ "ClampMin", "0" },
				{ "EditCondition", "bOverrideAutoRadiusCalculation" },
				{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
				{ "ToolTip", "This is the number of pixels which will be weighted in each direction from any given pixel when computing the blur\nA larger value is more costly but allows for stronger blurs." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlurRadius = { UE4CodeGen_Private::EPropertyClass::Int, "BlurRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UBackgroundBlur, BlurRadius), METADATA_PARAMS(NewProp_BlurRadius_MetaData, ARRAY_COUNT(NewProp_BlurRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAutoRadiusCalculation_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
				{ "ToolTip", "Whether or not the radius should be computed automatically or if it should use the radius" },
			};
#endif
			auto NewProp_bOverrideAutoRadiusCalculation_SetBit = [](void* Obj){ ((UBackgroundBlur*)Obj)->bOverrideAutoRadiusCalculation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAutoRadiusCalculation = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideAutoRadiusCalculation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBackgroundBlur), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideAutoRadiusCalculation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideAutoRadiusCalculation_MetaData, ARRAY_COUNT(NewProp_bOverrideAutoRadiusCalculation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlurStrength_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ClampMax", "100" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
				{ "ToolTip", "How blurry the background is.  Larger numbers mean more blurry but will result in larger runtime cost on the gpu." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlurStrength = { UE4CodeGen_Private::EPropertyClass::Float, "BlurStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UBackgroundBlur, BlurStrength), METADATA_PARAMS(NewProp_BlurStrength_MetaData, ARRAY_COUNT(NewProp_BlurStrength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyAlphaToBlur_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
				{ "ToolTip", "True to modulate the strength of the blur based on the widget alpha." },
			};
#endif
			auto NewProp_bApplyAlphaToBlur_SetBit = [](void* Obj){ ((UBackgroundBlur*)Obj)->bApplyAlphaToBlur = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyAlphaToBlur = { UE4CodeGen_Private::EPropertyClass::Bool, "bApplyAlphaToBlur", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBackgroundBlur), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bApplyAlphaToBlur_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bApplyAlphaToBlur_MetaData, ARRAY_COUNT(NewProp_bApplyAlphaToBlur_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[] = {
				{ "Category", "Content" },
				{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
				{ "ToolTip", "The alignment of the content vertically." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "VerticalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UBackgroundBlur, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(NewProp_VerticalAlignment_MetaData, ARRAY_COUNT(NewProp_VerticalAlignment_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[] = {
				{ "Category", "Content" },
				{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
				{ "ToolTip", "The alignment of the content horizontally." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "HorizontalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UBackgroundBlur, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(NewProp_HorizontalAlignment_MetaData, ARRAY_COUNT(NewProp_HorizontalAlignment_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
				{ "Category", "Content" },
				{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
				{ "ToolTip", "The padding area between the slot and the content it contains." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Padding = { UE4CodeGen_Private::EPropertyClass::Struct, "Padding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UBackgroundBlur, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(NewProp_Padding_MetaData, ARRAY_COUNT(NewProp_Padding_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LowQualityFallbackBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlurRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideAutoRadiusCalculation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlurStrength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bApplyAlphaToBlur,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VerticalAlignment,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HorizontalAlignment,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Padding,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBackgroundBlur>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBackgroundBlur::StaticClass,
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
	IMPLEMENT_CLASS(UBackgroundBlur, 834813706);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBackgroundBlur(Z_Construct_UClass_UBackgroundBlur, &UBackgroundBlur::StaticClass, TEXT("/Script/UMG"), TEXT("UBackgroundBlur"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBackgroundBlur);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
