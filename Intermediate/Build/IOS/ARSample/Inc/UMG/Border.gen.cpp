// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/Border.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBorder() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBorder();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UBorder_GetDynamicMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UBorder_SetBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UMG_API UFunction* Z_Construct_UFunction_UBorder_SetBrushColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UMG_API UFunction* Z_Construct_UFunction_UBorder_SetBrushFromAsset();
	ENGINE_API UClass* Z_Construct_UClass_USlateBrushAsset_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UBorder_SetBrushFromMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UBorder_SetBrushFromTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UBorder_SetContentColorAndOpacity();
	UMG_API UFunction* Z_Construct_UFunction_UBorder_SetDesiredSizeScale();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UFunction* Z_Construct_UFunction_UBorder_SetHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	UMG_API UFunction* Z_Construct_UFunction_UBorder_SetPadding();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UFunction* Z_Construct_UFunction_UBorder_SetVerticalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetSlateBrush__DelegateSignature();
// End Cross Module References
	void UBorder::StaticRegisterNativesUBorder()
	{
		UClass* Class = UBorder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDynamicMaterial", (Native)&UBorder::execGetDynamicMaterial },
			{ "SetBrush", (Native)&UBorder::execSetBrush },
			{ "SetBrushColor", (Native)&UBorder::execSetBrushColor },
			{ "SetBrushFromAsset", (Native)&UBorder::execSetBrushFromAsset },
			{ "SetBrushFromMaterial", (Native)&UBorder::execSetBrushFromMaterial },
			{ "SetBrushFromTexture", (Native)&UBorder::execSetBrushFromTexture },
			{ "SetContentColorAndOpacity", (Native)&UBorder::execSetContentColorAndOpacity },
			{ "SetDesiredSizeScale", (Native)&UBorder::execSetDesiredSizeScale },
			{ "SetHorizontalAlignment", (Native)&UBorder::execSetHorizontalAlignment },
			{ "SetPadding", (Native)&UBorder::execSetPadding },
			{ "SetVerticalAlignment", (Native)&UBorder::execSetVerticalAlignment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UBorder_GetDynamicMaterial()
	{
		struct Border_eventGetDynamicMaterial_Parms
		{
			UMaterialInstanceDynamic* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Border_eventGetDynamicMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Border.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, "GetDynamicMaterial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Border_eventGetDynamicMaterial_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBorder_SetBrush()
	{
		struct Border_eventSetBrush_Parms
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
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "InBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(Border_eventSetBrush_Parms, InBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_InBrush_MetaData, ARRAY_COUNT(NewProp_InBrush_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InBrush,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Border.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, "SetBrush", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(Border_eventSetBrush_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBorder_SetBrushColor()
	{
		struct Border_eventSetBrushColor_Parms
		{
			FLinearColor InBrushColor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBrushColor = { UE4CodeGen_Private::EPropertyClass::Struct, "InBrushColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Border_eventSetBrushColor_Parms, InBrushColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InBrushColor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Border.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, "SetBrushColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Border_eventSetBrushColor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBorder_SetBrushFromAsset()
	{
		struct Border_eventSetBrushFromAsset_Parms
		{
			USlateBrushAsset* Asset;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset = { UE4CodeGen_Private::EPropertyClass::Object, "Asset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Border_eventSetBrushFromAsset_Parms, Asset), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Asset,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Border.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, "SetBrushFromAsset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Border_eventSetBrushFromAsset_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBorder_SetBrushFromMaterial()
	{
		struct Border_eventSetBrushFromMaterial_Parms
		{
			UMaterialInterface* Material;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material = { UE4CodeGen_Private::EPropertyClass::Object, "Material", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Border_eventSetBrushFromMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Material,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Border.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, "SetBrushFromMaterial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Border_eventSetBrushFromMaterial_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBorder_SetBrushFromTexture()
	{
		struct Border_eventSetBrushFromTexture_Parms
		{
			UTexture2D* Texture;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Object, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Border_eventSetBrushFromTexture_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Texture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Border.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, "SetBrushFromTexture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Border_eventSetBrushFromTexture_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBorder_SetContentColorAndOpacity()
	{
		struct Border_eventSetContentColorAndOpacity_Parms
		{
			FLinearColor InContentColorAndOpacity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InContentColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "InContentColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Border_eventSetContentColorAndOpacity_Parms, InContentColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InContentColorAndOpacity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Border.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, "SetContentColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Border_eventSetContentColorAndOpacity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBorder_SetDesiredSizeScale()
	{
		struct Border_eventSetDesiredSizeScale_Parms
		{
			FVector2D InScale;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InScale = { UE4CodeGen_Private::EPropertyClass::Struct, "InScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Border_eventSetDesiredSizeScale_Parms, InScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InScale,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Border.h" },
				{ "ToolTip", "Sets the DesireSizeScale of this border.\n\n@param InScale    The X and Y multipliers for the desired size" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, "SetDesiredSizeScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Border_eventSetDesiredSizeScale_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBorder_SetHorizontalAlignment()
	{
		struct Border_eventSetHorizontalAlignment_Parms
		{
			TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InHorizontalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "InHorizontalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Border_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InHorizontalAlignment,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Border.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, "SetHorizontalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Border_eventSetHorizontalAlignment_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBorder_SetPadding()
	{
		struct Border_eventSetPadding_Parms
		{
			FMargin InPadding;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "InPadding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Border_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPadding,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Border.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, "SetPadding", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Border_eventSetPadding_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBorder_SetVerticalAlignment()
	{
		struct Border_eventSetVerticalAlignment_Parms
		{
			TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InVerticalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "InVerticalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Border_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InVerticalAlignment,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Border.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, "SetVerticalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Border_eventSetVerticalAlignment_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBorder_NoRegister()
	{
		return UBorder::StaticClass();
	}
	UClass* Z_Construct_UClass_UBorder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UContentWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UBorder_GetDynamicMaterial, "GetDynamicMaterial" }, // 606253746
				{ &Z_Construct_UFunction_UBorder_SetBrush, "SetBrush" }, // 1712910286
				{ &Z_Construct_UFunction_UBorder_SetBrushColor, "SetBrushColor" }, // 901018157
				{ &Z_Construct_UFunction_UBorder_SetBrushFromAsset, "SetBrushFromAsset" }, // 2817613468
				{ &Z_Construct_UFunction_UBorder_SetBrushFromMaterial, "SetBrushFromMaterial" }, // 1575687647
				{ &Z_Construct_UFunction_UBorder_SetBrushFromTexture, "SetBrushFromTexture" }, // 896000985
				{ &Z_Construct_UFunction_UBorder_SetContentColorAndOpacity, "SetContentColorAndOpacity" }, // 1633713518
				{ &Z_Construct_UFunction_UBorder_SetDesiredSizeScale, "SetDesiredSizeScale" }, // 1836130798
				{ &Z_Construct_UFunction_UBorder_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 3768187517
				{ &Z_Construct_UFunction_UBorder_SetPadding, "SetPadding" }, // 757276780
				{ &Z_Construct_UFunction_UBorder_SetVerticalAlignment, "SetVerticalAlignment" }, // 2441142461
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/Border.h" },
				{ "ModuleRelativePath", "Public/Components/Border.h" },
				{ "ToolTip", "A border is a container widget that can contain one child widget, providing an opportunity\nto surround it with a background image and adjustable padding.\n\n* Single Child\n* Image" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/Border.h" },
				{ "ToolTip", "Image to use for the border" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Brush = { UE4CodeGen_Private::EPropertyClass::Object, "Brush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080820000000, 1, nullptr, STRUCT_OFFSET(UBorder, Brush_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(NewProp_Brush_MetaData, ARRAY_COUNT(NewProp_Brush_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMouseDoubleClickEvent_MetaData[] = {
				{ "Category", "Events" },
				{ "IsBindableEvent", "True" },
				{ "ModuleRelativePath", "Public/Components/Border.h" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnMouseDoubleClickEvent = { UE4CodeGen_Private::EPropertyClass::Delegate, "OnMouseDoubleClickEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080001, 1, nullptr, STRUCT_OFFSET(UBorder, OnMouseDoubleClickEvent), Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnMouseDoubleClickEvent_MetaData, ARRAY_COUNT(NewProp_OnMouseDoubleClickEvent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMouseMoveEvent_MetaData[] = {
				{ "Category", "Events" },
				{ "IsBindableEvent", "True" },
				{ "ModuleRelativePath", "Public/Components/Border.h" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnMouseMoveEvent = { UE4CodeGen_Private::EPropertyClass::Delegate, "OnMouseMoveEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080001, 1, nullptr, STRUCT_OFFSET(UBorder, OnMouseMoveEvent), Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnMouseMoveEvent_MetaData, ARRAY_COUNT(NewProp_OnMouseMoveEvent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMouseButtonUpEvent_MetaData[] = {
				{ "Category", "Events" },
				{ "IsBindableEvent", "True" },
				{ "ModuleRelativePath", "Public/Components/Border.h" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnMouseButtonUpEvent = { UE4CodeGen_Private::EPropertyClass::Delegate, "OnMouseButtonUpEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080001, 1, nullptr, STRUCT_OFFSET(UBorder, OnMouseButtonUpEvent), Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnMouseButtonUpEvent_MetaData, ARRAY_COUNT(NewProp_OnMouseButtonUpEvent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMouseButtonDownEvent_MetaData[] = {
				{ "Category", "Events" },
				{ "IsBindableEvent", "True" },
				{ "ModuleRelativePath", "Public/Components/Border.h" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnMouseButtonDownEvent = { UE4CodeGen_Private::EPropertyClass::Delegate, "OnMouseButtonDownEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080001, 1, nullptr, STRUCT_OFFSET(UBorder, OnMouseButtonDownEvent), Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnMouseButtonDownEvent_MetaData, ARRAY_COUNT(NewProp_OnMouseButtonDownEvent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredSizeScale_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Border.h" },
				{ "ToolTip", "Scales the computed desired size of this border and its contents. Useful\nfor making things that slide open without having to hard-code their size.\nNote: if the parent widget is set up to ignore this widget's desired size,\nthen changing this value will have no effect." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesiredSizeScale = { UE4CodeGen_Private::EPropertyClass::Struct, "DesiredSizeScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UBorder, DesiredSizeScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_DesiredSizeScale_MetaData, ARRAY_COUNT(NewProp_DesiredSizeScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushColorDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/Border.h" },
				{ "ToolTip", "A bindable delegate for the BrushColor." },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_BrushColorDelegate = { UE4CodeGen_Private::EPropertyClass::Delegate, "BrushColorDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080000, 1, nullptr, STRUCT_OFFSET(UBorder, BrushColorDelegate), Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature, METADATA_PARAMS(NewProp_BrushColorDelegate_MetaData, ARRAY_COUNT(NewProp_BrushColorDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushColor_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Border.h" },
				{ "sRGB", "true" },
				{ "ToolTip", "Color and opacity of the actual border image" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BrushColor = { UE4CodeGen_Private::EPropertyClass::Struct, "BrushColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UBorder, BrushColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_BrushColor_MetaData, ARRAY_COUNT(NewProp_BrushColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/Border.h" },
				{ "ToolTip", "A bindable delegate for the Brush." },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_BackgroundDelegate = { UE4CodeGen_Private::EPropertyClass::Delegate, "BackgroundDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080000, 1, nullptr, STRUCT_OFFSET(UBorder, BackgroundDelegate), Z_Construct_UDelegateFunction_UWidget_GetSlateBrush__DelegateSignature, METADATA_PARAMS(NewProp_BackgroundDelegate_MetaData, ARRAY_COUNT(NewProp_BackgroundDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[] = {
				{ "Category", "Appearance" },
				{ "DisplayName", "Brush" },
				{ "ModuleRelativePath", "Public/Components/Border.h" },
				{ "ToolTip", "Brush to drag as the background" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Background = { UE4CodeGen_Private::EPropertyClass::Struct, "Background", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UBorder, Background), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_Background_MetaData, ARRAY_COUNT(NewProp_Background_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
				{ "Category", "Content" },
				{ "ModuleRelativePath", "Public/Components/Border.h" },
				{ "ToolTip", "The padding area between the slot and the content it contains." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Padding = { UE4CodeGen_Private::EPropertyClass::Struct, "Padding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UBorder, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(NewProp_Padding_MetaData, ARRAY_COUNT(NewProp_Padding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentColorAndOpacityDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/Border.h" },
				{ "ToolTip", "A bindable delegate for the ContentColorAndOpacity." },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ContentColorAndOpacityDelegate = { UE4CodeGen_Private::EPropertyClass::Delegate, "ContentColorAndOpacityDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080000, 1, nullptr, STRUCT_OFFSET(UBorder, ContentColorAndOpacityDelegate), Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature, METADATA_PARAMS(NewProp_ContentColorAndOpacityDelegate_MetaData, ARRAY_COUNT(NewProp_ContentColorAndOpacityDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentColorAndOpacity_MetaData[] = {
				{ "Category", "Content" },
				{ "ModuleRelativePath", "Public/Components/Border.h" },
				{ "sRGB", "true" },
				{ "ToolTip", "Color and opacity multiplier of content in the border" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContentColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "ContentColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UBorder, ContentColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_ContentColorAndOpacity_MetaData, ARRAY_COUNT(NewProp_ContentColorAndOpacity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowEffectWhenDisabled_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Border.h" },
				{ "ToolTip", "Whether or not to show the disabled effect when this border is disabled" },
			};
#endif
			auto NewProp_bShowEffectWhenDisabled_SetBit = [](void* Obj){ ((UBorder*)Obj)->bShowEffectWhenDisabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowEffectWhenDisabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowEffectWhenDisabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBorder), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowEffectWhenDisabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowEffectWhenDisabled_MetaData, ARRAY_COUNT(NewProp_bShowEffectWhenDisabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[] = {
				{ "Category", "Content" },
				{ "ModuleRelativePath", "Public/Components/Border.h" },
				{ "ToolTip", "The alignment of the content vertically." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "VerticalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UBorder, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(NewProp_VerticalAlignment_MetaData, ARRAY_COUNT(NewProp_VerticalAlignment_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[] = {
				{ "Category", "Content" },
				{ "ModuleRelativePath", "Public/Components/Border.h" },
				{ "ToolTip", "The alignment of the content horizontally." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "HorizontalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UBorder, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(NewProp_HorizontalAlignment_MetaData, ARRAY_COUNT(NewProp_HorizontalAlignment_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Brush,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnMouseDoubleClickEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnMouseMoveEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnMouseButtonUpEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnMouseButtonDownEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DesiredSizeScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BrushColorDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BrushColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackgroundDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Background,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Padding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContentColorAndOpacityDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContentColorAndOpacity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowEffectWhenDisabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VerticalAlignment,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HorizontalAlignment,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBorder>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBorder::StaticClass,
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
	IMPLEMENT_CLASS(UBorder, 2992627037);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBorder(Z_Construct_UClass_UBorder, &UBorder::StaticClass, TEXT("/Script/UMG"), TEXT("UBorder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBorder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
