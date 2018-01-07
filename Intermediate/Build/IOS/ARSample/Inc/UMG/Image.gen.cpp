// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/Image.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImage() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UImage_GetDynamicMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UImage_SetBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UMG_API UFunction* Z_Construct_UFunction_UImage_SetBrushFromAsset();
	ENGINE_API UClass* Z_Construct_UClass_USlateBrushAsset_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UImage_SetBrushFromMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UImage_SetBrushFromTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UImage_SetBrushFromTextureDynamic();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UImage_SetColorAndOpacity();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UMG_API UFunction* Z_Construct_UFunction_UImage_SetOpacity();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetSlateBrush__DelegateSignature();
// End Cross Module References
	void UImage::StaticRegisterNativesUImage()
	{
		UClass* Class = UImage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDynamicMaterial", (Native)&UImage::execGetDynamicMaterial },
			{ "SetBrush", (Native)&UImage::execSetBrush },
			{ "SetBrushFromAsset", (Native)&UImage::execSetBrushFromAsset },
			{ "SetBrushFromMaterial", (Native)&UImage::execSetBrushFromMaterial },
			{ "SetBrushFromTexture", (Native)&UImage::execSetBrushFromTexture },
			{ "SetBrushFromTextureDynamic", (Native)&UImage::execSetBrushFromTextureDynamic },
			{ "SetColorAndOpacity", (Native)&UImage::execSetColorAndOpacity },
			{ "SetOpacity", (Native)&UImage::execSetOpacity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UImage_GetDynamicMaterial()
	{
		struct Image_eventGetDynamicMaterial_Parms
		{
			UMaterialInstanceDynamic* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Image_eventGetDynamicMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Image.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UImage, "GetDynamicMaterial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Image_eventGetDynamicMaterial_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UImage_SetBrush()
	{
		struct Image_eventSetBrush_Parms
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
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "InBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(Image_eventSetBrush_Parms, InBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_InBrush_MetaData, ARRAY_COUNT(NewProp_InBrush_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InBrush,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Image.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UImage, "SetBrush", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(Image_eventSetBrush_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UImage_SetBrushFromAsset()
	{
		struct Image_eventSetBrushFromAsset_Parms
		{
			USlateBrushAsset* Asset;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset = { UE4CodeGen_Private::EPropertyClass::Object, "Asset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Image_eventSetBrushFromAsset_Parms, Asset), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Asset,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Image.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UImage, "SetBrushFromAsset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Image_eventSetBrushFromAsset_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UImage_SetBrushFromMaterial()
	{
		struct Image_eventSetBrushFromMaterial_Parms
		{
			UMaterialInterface* Material;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material = { UE4CodeGen_Private::EPropertyClass::Object, "Material", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Image_eventSetBrushFromMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Material,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Image.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UImage, "SetBrushFromMaterial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Image_eventSetBrushFromMaterial_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UImage_SetBrushFromTexture()
	{
		struct Image_eventSetBrushFromTexture_Parms
		{
			UTexture2D* Texture;
			bool bMatchSize;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bMatchSize_SetBit = [](void* Obj){ ((Image_eventSetBrushFromTexture_Parms*)Obj)->bMatchSize = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMatchSize = { UE4CodeGen_Private::EPropertyClass::Bool, "bMatchSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Image_eventSetBrushFromTexture_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMatchSize_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Object, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Image_eventSetBrushFromTexture_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMatchSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Texture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "CPP_Default_bMatchSize", "false" },
				{ "ModuleRelativePath", "Public/Components/Image.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UImage, "SetBrushFromTexture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Image_eventSetBrushFromTexture_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UImage_SetBrushFromTextureDynamic()
	{
		struct Image_eventSetBrushFromTextureDynamic_Parms
		{
			UTexture2DDynamic* Texture;
			bool bMatchSize;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bMatchSize_SetBit = [](void* Obj){ ((Image_eventSetBrushFromTextureDynamic_Parms*)Obj)->bMatchSize = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMatchSize = { UE4CodeGen_Private::EPropertyClass::Bool, "bMatchSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Image_eventSetBrushFromTextureDynamic_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMatchSize_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Object, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Image_eventSetBrushFromTextureDynamic_Parms, Texture), Z_Construct_UClass_UTexture2DDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMatchSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Texture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "CPP_Default_bMatchSize", "false" },
				{ "ModuleRelativePath", "Public/Components/Image.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UImage, "SetBrushFromTextureDynamic", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Image_eventSetBrushFromTextureDynamic_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UImage_SetColorAndOpacity()
	{
		struct Image_eventSetColorAndOpacity_Parms
		{
			FLinearColor InColorAndOpacity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "InColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Image_eventSetColorAndOpacity_Parms, InColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InColorAndOpacity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Image.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UImage, "SetColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Image_eventSetColorAndOpacity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UImage_SetOpacity()
	{
		struct Image_eventSetOpacity_Parms
		{
			float InOpacity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InOpacity = { UE4CodeGen_Private::EPropertyClass::Float, "InOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Image_eventSetOpacity_Parms, InOpacity), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InOpacity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Image.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UImage, "SetOpacity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Image_eventSetOpacity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UImage_NoRegister()
	{
		return UImage::StaticClass();
	}
	UClass* Z_Construct_UClass_UImage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UImage_GetDynamicMaterial, "GetDynamicMaterial" }, // 3995360898
				{ &Z_Construct_UFunction_UImage_SetBrush, "SetBrush" }, // 3668081812
				{ &Z_Construct_UFunction_UImage_SetBrushFromAsset, "SetBrushFromAsset" }, // 4182795707
				{ &Z_Construct_UFunction_UImage_SetBrushFromMaterial, "SetBrushFromMaterial" }, // 2557522324
				{ &Z_Construct_UFunction_UImage_SetBrushFromTexture, "SetBrushFromTexture" }, // 1058031401
				{ &Z_Construct_UFunction_UImage_SetBrushFromTextureDynamic, "SetBrushFromTextureDynamic" }, // 2424483462
				{ &Z_Construct_UFunction_UImage_SetColorAndOpacity, "SetColorAndOpacity" }, // 3258093595
				{ &Z_Construct_UFunction_UImage_SetOpacity, "SetOpacity" }, // 589596499
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/Image.h" },
				{ "ModuleRelativePath", "Public/Components/Image.h" },
				{ "ToolTip", "The image widget allows you to display a Slate Brush, or texture or material in the UI.\n\n* No Children" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMouseButtonDownEvent_MetaData[] = {
				{ "Category", "Events" },
				{ "IsBindableEvent", "True" },
				{ "ModuleRelativePath", "Public/Components/Image.h" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnMouseButtonDownEvent = { UE4CodeGen_Private::EPropertyClass::Delegate, "OnMouseButtonDownEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080001, 1, nullptr, STRUCT_OFFSET(UImage, OnMouseButtonDownEvent), Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnMouseButtonDownEvent_MetaData, ARRAY_COUNT(NewProp_OnMouseButtonDownEvent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacityDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/Image.h" },
				{ "ToolTip", "A bindable delegate for the ColorAndOpacity." },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ColorAndOpacityDelegate = { UE4CodeGen_Private::EPropertyClass::Delegate, "ColorAndOpacityDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080000, 1, nullptr, STRUCT_OFFSET(UImage, ColorAndOpacityDelegate), Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature, METADATA_PARAMS(NewProp_ColorAndOpacityDelegate_MetaData, ARRAY_COUNT(NewProp_ColorAndOpacityDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Image.h" },
				{ "sRGB", "true" },
				{ "ToolTip", "Color and opacity" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UImage, ColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_ColorAndOpacity_MetaData, ARRAY_COUNT(NewProp_ColorAndOpacity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/Image.h" },
				{ "ToolTip", "A bindable delegate for the Image." },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_BrushDelegate = { UE4CodeGen_Private::EPropertyClass::Delegate, "BrushDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080000, 1, nullptr, STRUCT_OFFSET(UImage, BrushDelegate), Z_Construct_UDelegateFunction_UWidget_GetSlateBrush__DelegateSignature, METADATA_PARAMS(NewProp_BrushDelegate_MetaData, ARRAY_COUNT(NewProp_BrushDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Image.h" },
				{ "ToolTip", "Image to draw" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Brush = { UE4CodeGen_Private::EPropertyClass::Struct, "Brush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UImage, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_Brush_MetaData, ARRAY_COUNT(NewProp_Brush_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/Image.h" },
				{ "ToolTip", "Image to draw" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image = { UE4CodeGen_Private::EPropertyClass::Object, "Image", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UImage, Image_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(NewProp_Image_MetaData, ARRAY_COUNT(NewProp_Image_MetaData)) };
#endif // WITH_EDITORONLY_DATA
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnMouseButtonDownEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColorAndOpacityDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColorAndOpacity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BrushDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Brush,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Image,
#endif // WITH_EDITORONLY_DATA
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UImage>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UImage::StaticClass,
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
	IMPLEMENT_CLASS(UImage, 634968431);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UImage(Z_Construct_UClass_UImage, &UImage::StaticClass, TEXT("/Script/UMG"), TEXT("UImage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
