// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/Button.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeButton() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnButtonHoverEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnButtonReleasedEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnButtonPressedEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnButtonClickedEvent__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UMG_API UFunction* Z_Construct_UFunction_UButton_IsPressed();
	UMG_API UFunction* Z_Construct_UFunction_UButton_SetBackgroundColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UMG_API UFunction* Z_Construct_UFunction_UButton_SetClickMethod();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EButtonClickMethod();
	UMG_API UFunction* Z_Construct_UFunction_UButton_SetColorAndOpacity();
	UMG_API UFunction* Z_Construct_UFunction_UButton_SetStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
	UMG_API UFunction* Z_Construct_UFunction_UButton_SetTouchMethod();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EButtonTouchMethod();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UMG_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/Button.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, "OnButtonHoverEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UMG_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/Button.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, "OnButtonReleasedEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UMG_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/Button.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, "OnButtonPressedEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UMG_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/Button.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, "OnButtonClickedEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UButton::StaticRegisterNativesUButton()
	{
		UClass* Class = UButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsPressed", (Native)&UButton::execIsPressed },
			{ "SetBackgroundColor", (Native)&UButton::execSetBackgroundColor },
			{ "SetClickMethod", (Native)&UButton::execSetClickMethod },
			{ "SetColorAndOpacity", (Native)&UButton::execSetColorAndOpacity },
			{ "SetStyle", (Native)&UButton::execSetStyle },
			{ "SetTouchMethod", (Native)&UButton::execSetTouchMethod },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UButton_IsPressed()
	{
		struct Button_eventIsPressed_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((Button_eventIsPressed_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Button_eventIsPressed_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Button" },
				{ "ModuleRelativePath", "Public/Components/Button.h" },
				{ "ToolTip", "Returns true if the user is actively pressing the button.  Do not use this for detecting 'Clicks', use the OnClicked event instead.\n\n@return true if the user is actively pressing the button otherwise false." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UButton, "IsPressed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Button_eventIsPressed_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UButton_SetBackgroundColor()
	{
		struct Button_eventSetBackgroundColor_Parms
		{
			FLinearColor InBackgroundColor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBackgroundColor = { UE4CodeGen_Private::EPropertyClass::Struct, "InBackgroundColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Button_eventSetBackgroundColor_Parms, InBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InBackgroundColor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Button|Appearance" },
				{ "ModuleRelativePath", "Public/Components/Button.h" },
				{ "ToolTip", "Sets the color multiplier for the button background" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UButton, "SetBackgroundColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Button_eventSetBackgroundColor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UButton_SetClickMethod()
	{
		struct Button_eventSetClickMethod_Parms
		{
			TEnumAsByte<EButtonClickMethod::Type> InClickMethod;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InClickMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "InClickMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Button_eventSetClickMethod_Parms, InClickMethod), Z_Construct_UEnum_SlateCore_EButtonClickMethod, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InClickMethod,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Button" },
				{ "ModuleRelativePath", "Public/Components/Button.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UButton, "SetClickMethod", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Button_eventSetClickMethod_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UButton_SetColorAndOpacity()
	{
		struct Button_eventSetColorAndOpacity_Parms
		{
			FLinearColor InColorAndOpacity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "InColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Button_eventSetColorAndOpacity_Parms, InColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InColorAndOpacity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Button|Appearance" },
				{ "ModuleRelativePath", "Public/Components/Button.h" },
				{ "ToolTip", "Sets the color multiplier for the button content" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UButton, "SetColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Button_eventSetColorAndOpacity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UButton_SetStyle()
	{
		struct Button_eventSetStyle_Parms
		{
			FButtonStyle InStyle;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InStyle_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "InStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(Button_eventSetStyle_Parms, InStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(NewProp_InStyle_MetaData, ARRAY_COUNT(NewProp_InStyle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InStyle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Button|Appearance" },
				{ "ModuleRelativePath", "Public/Components/Button.h" },
				{ "ToolTip", "Sets the color multiplier for the button background" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UButton, "SetStyle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(Button_eventSetStyle_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UButton_SetTouchMethod()
	{
		struct Button_eventSetTouchMethod_Parms
		{
			TEnumAsByte<EButtonTouchMethod::Type> InTouchMethod;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InTouchMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "InTouchMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Button_eventSetTouchMethod_Parms, InTouchMethod), Z_Construct_UEnum_SlateCore_EButtonTouchMethod, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InTouchMethod,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Button" },
				{ "ModuleRelativePath", "Public/Components/Button.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UButton, "SetTouchMethod", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Button_eventSetTouchMethod_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UButton_NoRegister()
	{
		return UButton::StaticClass();
	}
	UClass* Z_Construct_UClass_UButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UContentWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UButton_IsPressed, "IsPressed" }, // 124802102
				{ &Z_Construct_UFunction_UButton_SetBackgroundColor, "SetBackgroundColor" }, // 4146964676
				{ &Z_Construct_UFunction_UButton_SetClickMethod, "SetClickMethod" }, // 3286148470
				{ &Z_Construct_UFunction_UButton_SetColorAndOpacity, "SetColorAndOpacity" }, // 2638147376
				{ &Z_Construct_UFunction_UButton_SetStyle, "SetStyle" }, // 2088922016
				{ &Z_Construct_UFunction_UButton_SetTouchMethod, "SetTouchMethod" }, // 82949836
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/Button.h" },
				{ "ModuleRelativePath", "Public/Components/Button.h" },
				{ "ToolTip", "The button is a click-able primitive widget to enable basic interaction, you\ncan place any other widget inside a button to make a more complex and\ninteresting click-able element in your UI.\n\n* Single Child\n* Clickable" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUnhovered_MetaData[] = {
				{ "Category", "Button|Event" },
				{ "ModuleRelativePath", "Public/Components/Button.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUnhovered = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnUnhovered", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UButton, OnUnhovered), Z_Construct_UDelegateFunction_UMG_OnButtonHoverEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnUnhovered_MetaData, ARRAY_COUNT(NewProp_OnUnhovered_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHovered_MetaData[] = {
				{ "Category", "Button|Event" },
				{ "ModuleRelativePath", "Public/Components/Button.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHovered = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnHovered", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UButton, OnHovered), Z_Construct_UDelegateFunction_UMG_OnButtonHoverEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnHovered_MetaData, ARRAY_COUNT(NewProp_OnHovered_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnReleased_MetaData[] = {
				{ "Category", "Button|Event" },
				{ "ModuleRelativePath", "Public/Components/Button.h" },
				{ "ToolTip", "Called when the button is released" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReleased = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnReleased", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UButton, OnReleased), Z_Construct_UDelegateFunction_UMG_OnButtonReleasedEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnReleased_MetaData, ARRAY_COUNT(NewProp_OnReleased_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPressed_MetaData[] = {
				{ "Category", "Button|Event" },
				{ "ModuleRelativePath", "Public/Components/Button.h" },
				{ "ToolTip", "Called when the button is pressed" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPressed = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnPressed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UButton, OnPressed), Z_Construct_UDelegateFunction_UMG_OnButtonPressedEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnPressed_MetaData, ARRAY_COUNT(NewProp_OnPressed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnClicked_MetaData[] = {
				{ "Category", "Button|Event" },
				{ "ModuleRelativePath", "Public/Components/Button.h" },
				{ "ToolTip", "Called when the button is clicked" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClicked = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnClicked", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UButton, OnClicked), Z_Construct_UDelegateFunction_UMG_OnButtonClickedEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnClicked_MetaData, ARRAY_COUNT(NewProp_OnClicked_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFocusable_MetaData[] = {
				{ "Category", "Interaction" },
				{ "ModuleRelativePath", "Public/Components/Button.h" },
				{ "ToolTip", "Sometimes a button should only be mouse-clickable and never keyboard focusable." },
			};
#endif
			auto NewProp_IsFocusable_SetBit = [](void* Obj){ ((UButton*)Obj)->IsFocusable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFocusable = { UE4CodeGen_Private::EPropertyClass::Bool, "IsFocusable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UButton), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsFocusable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsFocusable_MetaData, ARRAY_COUNT(NewProp_IsFocusable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TouchMethod_MetaData[] = {
				{ "Category", "Interaction" },
				{ "ModuleRelativePath", "Public/Components/Button.h" },
				{ "ToolTip", "The type of touch action required by the user to trigger the buttons 'Click'" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TouchMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "TouchMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UButton, TouchMethod), Z_Construct_UEnum_SlateCore_EButtonTouchMethod, METADATA_PARAMS(NewProp_TouchMethod_MetaData, ARRAY_COUNT(NewProp_TouchMethod_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickMethod_MetaData[] = {
				{ "Category", "Interaction" },
				{ "ModuleRelativePath", "Public/Components/Button.h" },
				{ "ToolTip", "The type of mouse action required by the user to trigger the buttons 'Click'" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClickMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "ClickMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UButton, ClickMethod), Z_Construct_UEnum_SlateCore_EButtonClickMethod, METADATA_PARAMS(NewProp_ClickMethod_MetaData, ARRAY_COUNT(NewProp_ClickMethod_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Button.h" },
				{ "sRGB", "true" },
				{ "ToolTip", "The color multiplier for the button background" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundColor = { UE4CodeGen_Private::EPropertyClass::Struct, "BackgroundColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UButton, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_BackgroundColor_MetaData, ARRAY_COUNT(NewProp_BackgroundColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/Button.h" },
				{ "sRGB", "true" },
				{ "ToolTip", "The color multiplier for the button content" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UButton, ColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_ColorAndOpacity_MetaData, ARRAY_COUNT(NewProp_ColorAndOpacity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "DisplayName", "Style" },
				{ "ModuleRelativePath", "Public/Components/Button.h" },
				{ "ToolTip", "The button style used at runtime" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "WidgetStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UButton, WidgetStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(NewProp_WidgetStyle_MetaData, ARRAY_COUNT(NewProp_WidgetStyle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/Button.h" },
				{ "ToolTip", "The template style asset, used to seed the mutable instance of the style." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Style = { UE4CodeGen_Private::EPropertyClass::Object, "Style", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UButton, Style_DEPRECATED), Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister, METADATA_PARAMS(NewProp_Style_MetaData, ARRAY_COUNT(NewProp_Style_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnUnhovered,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnHovered,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnReleased,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnPressed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnClicked,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsFocusable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TouchMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClickMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackgroundColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColorAndOpacity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WidgetStyle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Style,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UButton>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UButton::StaticClass,
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
	IMPLEMENT_CLASS(UButton, 3680337435);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UButton(Z_Construct_UClass_UButton, &UButton::StaticClass, TEXT("/Script/UMG"), TEXT("UButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
