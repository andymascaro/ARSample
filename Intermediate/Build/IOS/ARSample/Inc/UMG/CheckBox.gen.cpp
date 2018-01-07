// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/CheckBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckBox() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnCheckBoxComponentStateChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UCheckBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCheckBox();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UMG_API UFunction* Z_Construct_UFunction_UCheckBox_GetCheckedState();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ECheckBoxState();
	UMG_API UFunction* Z_Construct_UFunction_UCheckBox_IsChecked();
	UMG_API UFunction* Z_Construct_UFunction_UCheckBox_IsPressed();
	UMG_API UFunction* Z_Construct_UFunction_UCheckBox_SetCheckedState();
	UMG_API UFunction* Z_Construct_UFunction_UCheckBox_SetIsChecked();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	ENGINE_API UClass* Z_Construct_UClass_USlateBrushAsset_NoRegister();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCheckBoxStyle();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetCheckBoxState__DelegateSignature();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UMG_OnCheckBoxComponentStateChanged__DelegateSignature()
	{
		struct _Script_UMG_eventOnCheckBoxComponentStateChanged_Parms
		{
			bool bIsChecked;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bIsChecked_SetBit = [](void* Obj){ ((_Script_UMG_eventOnCheckBoxComponentStateChanged_Parms*)Obj)->bIsChecked = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsChecked = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsChecked", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(_Script_UMG_eventOnCheckBoxComponentStateChanged_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsChecked_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsChecked,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, "OnCheckBoxComponentStateChanged__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_UMG_eventOnCheckBoxComponentStateChanged_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UCheckBox::StaticRegisterNativesUCheckBox()
	{
		UClass* Class = UCheckBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCheckedState", (Native)&UCheckBox::execGetCheckedState },
			{ "IsChecked", (Native)&UCheckBox::execIsChecked },
			{ "IsPressed", (Native)&UCheckBox::execIsPressed },
			{ "SetCheckedState", (Native)&UCheckBox::execSetCheckedState },
			{ "SetIsChecked", (Native)&UCheckBox::execSetIsChecked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UCheckBox_GetCheckedState()
	{
		struct CheckBox_eventGetCheckedState_Parms
		{
			ECheckBoxState ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CheckBox_eventGetCheckedState_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
				{ "ToolTip", "@return the full current checked state." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckBox, "GetCheckedState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CheckBox_eventGetCheckedState_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheckBox_IsChecked()
	{
		struct CheckBox_eventIsChecked_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((CheckBox_eventIsChecked_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CheckBox_eventIsChecked_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
				{ "ToolTip", "Returns true if the checkbox is currently checked" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckBox, "IsChecked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CheckBox_eventIsChecked_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheckBox_IsPressed()
	{
		struct CheckBox_eventIsPressed_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((CheckBox_eventIsPressed_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CheckBox_eventIsPressed_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
				{ "ToolTip", "Returns true if this button is currently pressed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckBox, "IsPressed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CheckBox_eventIsPressed_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheckBox_SetCheckedState()
	{
		struct CheckBox_eventSetCheckedState_Parms
		{
			ECheckBoxState InCheckedState;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InCheckedState = { UE4CodeGen_Private::EPropertyClass::Enum, "InCheckedState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CheckBox_eventSetCheckedState_Parms, InCheckedState), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InCheckedState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InCheckedState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InCheckedState_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
				{ "ToolTip", "Sets the checked state." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckBox, "SetCheckedState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CheckBox_eventSetCheckedState_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCheckBox_SetIsChecked()
	{
		struct CheckBox_eventSetIsChecked_Parms
		{
			bool InIsChecked;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_InIsChecked_SetBit = [](void* Obj){ ((CheckBox_eventSetIsChecked_Parms*)Obj)->InIsChecked = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsChecked = { UE4CodeGen_Private::EPropertyClass::Bool, "InIsChecked", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CheckBox_eventSetIsChecked_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_InIsChecked_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InIsChecked,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
				{ "ToolTip", "Sets the checked state." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckBox, "SetIsChecked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CheckBox_eventSetIsChecked_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCheckBox_NoRegister()
	{
		return UCheckBox::StaticClass();
	}
	UClass* Z_Construct_UClass_UCheckBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UContentWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UCheckBox_GetCheckedState, "GetCheckedState" }, // 2118202270
				{ &Z_Construct_UFunction_UCheckBox_IsChecked, "IsChecked" }, // 2341984088
				{ &Z_Construct_UFunction_UCheckBox_IsPressed, "IsPressed" }, // 3889932577
				{ &Z_Construct_UFunction_UCheckBox_SetCheckedState, "SetCheckedState" }, // 1282279296
				{ &Z_Construct_UFunction_UCheckBox_SetIsChecked, "SetIsChecked" }, // 2195926699
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/CheckBox.h" },
				{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
				{ "ToolTip", "The checkbox widget allows you to display a toggled state of 'unchecked', 'checked' and\n'indeterminable.  You can use the checkbox for a classic checkbox, or as a toggle button,\nor as radio buttons.\n\n* Single Child\n* Toggle" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCheckStateChanged_MetaData[] = {
				{ "Category", "CheckBox|Event" },
				{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
				{ "ToolTip", "Called when the checked state has changed" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCheckStateChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnCheckStateChanged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UCheckBox, OnCheckStateChanged), Z_Construct_UDelegateFunction_UMG_OnCheckBoxComponentStateChanged__DelegateSignature, METADATA_PARAMS(NewProp_OnCheckStateChanged_MetaData, ARRAY_COUNT(NewProp_OnCheckStateChanged_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFocusable_MetaData[] = {
				{ "Category", "Interaction" },
				{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
				{ "ToolTip", "Sometimes a button should only be mouse-clickable and never keyboard focusable." },
			};
#endif
			auto NewProp_IsFocusable_SetBit = [](void* Obj){ ((UCheckBox*)Obj)->IsFocusable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFocusable = { UE4CodeGen_Private::EPropertyClass::Bool, "IsFocusable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCheckBox), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsFocusable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsFocusable_MetaData, ARRAY_COUNT(NewProp_IsFocusable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderBackgroundColor_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
				{ "ToolTip", "The color of the background border" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BorderBackgroundColor = { UE4CodeGen_Private::EPropertyClass::Struct, "BorderBackgroundColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UCheckBox, BorderBackgroundColor_DEPRECATED), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_BorderBackgroundColor_MetaData, ARRAY_COUNT(NewProp_BorderBackgroundColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
				{ "ToolTip", "Spacing between the check box image and its content" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Padding = { UE4CodeGen_Private::EPropertyClass::Struct, "Padding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UCheckBox, Padding_DEPRECATED), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(NewProp_Padding_MetaData, ARRAY_COUNT(NewProp_Padding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
				{ "ToolTip", "How the content of the toggle button should align within the given space" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "HorizontalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UCheckBox, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(NewProp_HorizontalAlignment_MetaData, ARRAY_COUNT(NewProp_HorizontalAlignment_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UndeterminedPressedImage_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
				{ "ToolTip", "Image to use when the checkbox is in an ambiguous state and pressed" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UndeterminedPressedImage = { UE4CodeGen_Private::EPropertyClass::Object, "UndeterminedPressedImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UCheckBox, UndeterminedPressedImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(NewProp_UndeterminedPressedImage_MetaData, ARRAY_COUNT(NewProp_UndeterminedPressedImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UndeterminedHoveredImage_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
				{ "ToolTip", "Image to use when the checkbox is checked and hovered" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UndeterminedHoveredImage = { UE4CodeGen_Private::EPropertyClass::Object, "UndeterminedHoveredImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UCheckBox, UndeterminedHoveredImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(NewProp_UndeterminedHoveredImage_MetaData, ARRAY_COUNT(NewProp_UndeterminedHoveredImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UndeterminedImage_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
				{ "ToolTip", "Image to use when the checkbox is in an ambiguous state and hovered" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UndeterminedImage = { UE4CodeGen_Private::EPropertyClass::Object, "UndeterminedImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UCheckBox, UndeterminedImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(NewProp_UndeterminedImage_MetaData, ARRAY_COUNT(NewProp_UndeterminedImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckedPressedImage_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
				{ "ToolTip", "Image to use when the checkbox is checked and pressed" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CheckedPressedImage = { UE4CodeGen_Private::EPropertyClass::Object, "CheckedPressedImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UCheckBox, CheckedPressedImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(NewProp_CheckedPressedImage_MetaData, ARRAY_COUNT(NewProp_CheckedPressedImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckedHoveredImage_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
				{ "ToolTip", "Image to use when the checkbox is checked and hovered" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CheckedHoveredImage = { UE4CodeGen_Private::EPropertyClass::Object, "CheckedHoveredImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UCheckBox, CheckedHoveredImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(NewProp_CheckedHoveredImage_MetaData, ARRAY_COUNT(NewProp_CheckedHoveredImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckedImage_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
				{ "ToolTip", "Image to use when the checkbox is checked" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CheckedImage = { UE4CodeGen_Private::EPropertyClass::Object, "CheckedImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UCheckBox, CheckedImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(NewProp_CheckedImage_MetaData, ARRAY_COUNT(NewProp_CheckedImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncheckedPressedImage_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
				{ "ToolTip", "Image to use when the checkbox is unchecked and pressed" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UncheckedPressedImage = { UE4CodeGen_Private::EPropertyClass::Object, "UncheckedPressedImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UCheckBox, UncheckedPressedImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(NewProp_UncheckedPressedImage_MetaData, ARRAY_COUNT(NewProp_UncheckedPressedImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncheckedHoveredImage_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
				{ "ToolTip", "Image to use when the checkbox is unchecked and hovered" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UncheckedHoveredImage = { UE4CodeGen_Private::EPropertyClass::Object, "UncheckedHoveredImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UCheckBox, UncheckedHoveredImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(NewProp_UncheckedHoveredImage_MetaData, ARRAY_COUNT(NewProp_UncheckedHoveredImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncheckedImage_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
				{ "ToolTip", "Image to use when the checkbox is unchecked" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UncheckedImage = { UE4CodeGen_Private::EPropertyClass::Object, "UncheckedImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UCheckBox, UncheckedImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(NewProp_UncheckedImage_MetaData, ARRAY_COUNT(NewProp_UncheckedImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
				{ "ToolTip", "Style of the check box" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Style = { UE4CodeGen_Private::EPropertyClass::Object, "Style", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UCheckBox, Style_DEPRECATED), Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister, METADATA_PARAMS(NewProp_Style_MetaData, ARRAY_COUNT(NewProp_Style_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
				{ "Category", "Style" },
				{ "DisplayName", "Style" },
				{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
				{ "ToolTip", "The checkbox bar style" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "WidgetStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCheckBox, WidgetStyle), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(NewProp_WidgetStyle_MetaData, ARRAY_COUNT(NewProp_WidgetStyle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckedStateDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
				{ "ToolTip", "A bindable delegate for the IsChecked." },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_CheckedStateDelegate = { UE4CodeGen_Private::EPropertyClass::Delegate, "CheckedStateDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080000, 1, nullptr, STRUCT_OFFSET(UCheckBox, CheckedStateDelegate), Z_Construct_UDelegateFunction_UWidget_GetCheckBoxState__DelegateSignature, METADATA_PARAMS(NewProp_CheckedStateDelegate_MetaData, ARRAY_COUNT(NewProp_CheckedStateDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckedState_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
				{ "ToolTip", "Whether the check box is currently in a checked state" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CheckedState = { UE4CodeGen_Private::EPropertyClass::Enum, "CheckedState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UCheckBox, CheckedState), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(NewProp_CheckedState_MetaData, ARRAY_COUNT(NewProp_CheckedState_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CheckedState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnCheckStateChanged,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsFocusable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BorderBackgroundColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Padding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HorizontalAlignment,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UndeterminedPressedImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UndeterminedHoveredImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UndeterminedImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CheckedPressedImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CheckedHoveredImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CheckedImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UncheckedPressedImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UncheckedHoveredImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UncheckedImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Style,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WidgetStyle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CheckedStateDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CheckedState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CheckedState_Underlying,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCheckBox>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCheckBox::StaticClass,
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
	IMPLEMENT_CLASS(UCheckBox, 4131134194);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCheckBox(Z_Construct_UClass_UCheckBox, &UCheckBox::StaticClass, TEXT("/Script/UMG"), TEXT("UCheckBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
