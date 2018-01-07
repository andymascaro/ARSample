// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/InputKeySelector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputKeySelector() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UInputKeySelector();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
	UMG_API UClass* Z_Construct_UClass_UInputKeySelector_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey();
	UMG_API UFunction* Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys();
	UMG_API UFunction* Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys();
	UMG_API UFunction* Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText();
	UMG_API UFunction* Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText();
	UMG_API UFunction* Z_Construct_UFunction_UInputKeySelector_SetSelectedKey();
	UMG_API UFunction* Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, "OnIsSelectingKeyChanged__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature()
	{
		struct InputKeySelector_eventOnKeySelected_Parms
		{
			FInputChord SelectedKey;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectedKey = { UE4CodeGen_Private::EPropertyClass::Struct, "SelectedKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InputKeySelector_eventOnKeySelected_Parms, SelectedKey), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectedKey,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, "OnKeySelected__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(InputKeySelector_eventOnKeySelected_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UInputKeySelector::StaticRegisterNativesUInputKeySelector()
	{
		UClass* Class = UInputKeySelector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsSelectingKey", (Native)&UInputKeySelector::execGetIsSelectingKey },
			{ "SetAllowGamepadKeys", (Native)&UInputKeySelector::execSetAllowGamepadKeys },
			{ "SetAllowModifierKeys", (Native)&UInputKeySelector::execSetAllowModifierKeys },
			{ "SetKeySelectionText", (Native)&UInputKeySelector::execSetKeySelectionText },
			{ "SetNoKeySpecifiedText", (Native)&UInputKeySelector::execSetNoKeySpecifiedText },
			{ "SetSelectedKey", (Native)&UInputKeySelector::execSetSelectedKey },
			{ "SetTextBlockVisibility", (Native)&UInputKeySelector::execSetTextBlockVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey()
	{
		struct InputKeySelector_eventGetIsSelectingKey_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((InputKeySelector_eventGetIsSelectingKey_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InputKeySelector_eventGetIsSelectingKey_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
				{ "ToolTip", "Returns true if the widget is currently selecting a key, otherwise returns false." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, "GetIsSelectingKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(InputKeySelector_eventGetIsSelectingKey_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys()
	{
		struct InputKeySelector_eventSetAllowGamepadKeys_Parms
		{
			bool bInAllowGamepadKeys;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bInAllowGamepadKeys_SetBit = [](void* Obj){ ((InputKeySelector_eventSetAllowGamepadKeys_Parms*)Obj)->bInAllowGamepadKeys = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInAllowGamepadKeys = { UE4CodeGen_Private::EPropertyClass::Bool, "bInAllowGamepadKeys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InputKeySelector_eventSetAllowGamepadKeys_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInAllowGamepadKeys_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInAllowGamepadKeys,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
				{ "ToolTip", "Sets whether or not gamepad keys are allowed in the selected key." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, "SetAllowGamepadKeys", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(InputKeySelector_eventSetAllowGamepadKeys_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys()
	{
		struct InputKeySelector_eventSetAllowModifierKeys_Parms
		{
			bool bInAllowModifierKeys;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bInAllowModifierKeys_SetBit = [](void* Obj){ ((InputKeySelector_eventSetAllowModifierKeys_Parms*)Obj)->bInAllowModifierKeys = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInAllowModifierKeys = { UE4CodeGen_Private::EPropertyClass::Bool, "bInAllowModifierKeys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InputKeySelector_eventSetAllowModifierKeys_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInAllowModifierKeys_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInAllowModifierKeys,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
				{ "ToolTip", "Sets whether or not modifier keys are allowed in the selected key." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, "SetAllowModifierKeys", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(InputKeySelector_eventSetAllowModifierKeys_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText()
	{
		struct InputKeySelector_eventSetKeySelectionText_Parms
		{
			FText InKeySelectionText;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_InKeySelectionText = { UE4CodeGen_Private::EPropertyClass::Text, "InKeySelectionText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InputKeySelector_eventSetKeySelectionText_Parms, InKeySelectionText), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InKeySelectionText,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
				{ "ToolTip", "Sets the text which is displayed while selecting keys." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, "SetKeySelectionText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(InputKeySelector_eventSetKeySelectionText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText()
	{
		struct InputKeySelector_eventSetNoKeySpecifiedText_Parms
		{
			FText InNoKeySpecifiedText;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_InNoKeySpecifiedText = { UE4CodeGen_Private::EPropertyClass::Text, "InNoKeySpecifiedText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InputKeySelector_eventSetNoKeySpecifiedText_Parms, InNoKeySpecifiedText), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InNoKeySpecifiedText,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
				{ "ToolTip", "Sets the text to display when no key text is available or not selecting a key." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, "SetNoKeySpecifiedText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(InputKeySelector_eventSetNoKeySpecifiedText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputKeySelector_SetSelectedKey()
	{
		struct InputKeySelector_eventSetSelectedKey_Parms
		{
			FInputChord InSelectedKey;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSelectedKey_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSelectedKey = { UE4CodeGen_Private::EPropertyClass::Struct, "InSelectedKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(InputKeySelector_eventSetSelectedKey_Parms, InSelectedKey), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(NewProp_InSelectedKey_MetaData, ARRAY_COUNT(NewProp_InSelectedKey_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSelectedKey,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
				{ "ToolTip", "Sets the currently selected key." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, "SetSelectedKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(InputKeySelector_eventSetSelectedKey_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility()
	{
		struct InputKeySelector_eventSetTextBlockVisibility_Parms
		{
			ESlateVisibility InVisibility;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVisibility_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InVisibility = { UE4CodeGen_Private::EPropertyClass::Enum, "InVisibility", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(InputKeySelector_eventSetTextBlockVisibility_Parms, InVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(NewProp_InVisibility_MetaData, ARRAY_COUNT(NewProp_InVisibility_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InVisibility_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InVisibility,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InVisibility_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
				{ "ToolTip", "Sets the visibility of the text block." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputKeySelector, "SetTextBlockVisibility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(InputKeySelector_eventSetTextBlockVisibility_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInputKeySelector_NoRegister()
	{
		return UInputKeySelector::StaticClass();
	}
	UClass* Z_Construct_UClass_UInputKeySelector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UInputKeySelector_GetIsSelectingKey, "GetIsSelectingKey" }, // 1482447291
				{ &Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature, "OnIsSelectingKeyChanged__DelegateSignature" }, // 2121187668
				{ &Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature, "OnKeySelected__DelegateSignature" }, // 773192518
				{ &Z_Construct_UFunction_UInputKeySelector_SetAllowGamepadKeys, "SetAllowGamepadKeys" }, // 3822946867
				{ &Z_Construct_UFunction_UInputKeySelector_SetAllowModifierKeys, "SetAllowModifierKeys" }, // 2096039281
				{ &Z_Construct_UFunction_UInputKeySelector_SetKeySelectionText, "SetKeySelectionText" }, // 3977618107
				{ &Z_Construct_UFunction_UInputKeySelector_SetNoKeySpecifiedText, "SetNoKeySpecifiedText" }, // 3030664444
				{ &Z_Construct_UFunction_UInputKeySelector_SetSelectedKey, "SetSelectedKey" }, // 800319078
				{ &Z_Construct_UFunction_UInputKeySelector_SetTextBlockVisibility, "SetTextBlockVisibility" }, // 3222291393
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/InputKeySelector.h" },
				{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
				{ "ToolTip", "A widget for selecting a single key or a single key with a modifier." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnIsSelectingKeyChanged_MetaData[] = {
				{ "Category", "Widget Event" },
				{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
				{ "ToolTip", "Called whenever the key selection mode starts or stops." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIsSelectingKeyChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnIsSelectingKeyChanged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UInputKeySelector, OnIsSelectingKeyChanged), Z_Construct_UDelegateFunction_UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature, METADATA_PARAMS(NewProp_OnIsSelectingKeyChanged_MetaData, ARRAY_COUNT(NewProp_OnIsSelectingKeyChanged_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnKeySelected_MetaData[] = {
				{ "Category", "Widget Event" },
				{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
				{ "ToolTip", "Called whenever a new key is selected by the user." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKeySelected = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnKeySelected", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UInputKeySelector, OnKeySelected), Z_Construct_UDelegateFunction_UInputKeySelector_OnKeySelected__DelegateSignature, METADATA_PARAMS(NewProp_OnKeySelected_MetaData, ARRAY_COUNT(NewProp_OnKeySelected_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscapeKeys_MetaData[] = {
				{ "Category", "Key Selection" },
				{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
				{ "ToolTip", "When true gamepad keys are allowed in the input chord representing the selected key, otherwise they are ignored." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EscapeKeys = { UE4CodeGen_Private::EPropertyClass::Array, "EscapeKeys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UInputKeySelector, EscapeKeys), METADATA_PARAMS(NewProp_EscapeKeys_MetaData, ARRAY_COUNT(NewProp_EscapeKeys_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EscapeKeys_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "EscapeKeys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowGamepadKeys_MetaData[] = {
				{ "Category", "Key Selection" },
				{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
				{ "ToolTip", "When true gamepad keys are allowed in the input chord representing the selected key, otherwise they are ignored." },
			};
#endif
			auto NewProp_bAllowGamepadKeys_SetBit = [](void* Obj){ ((UInputKeySelector*)Obj)->bAllowGamepadKeys = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowGamepadKeys = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowGamepadKeys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UInputKeySelector), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowGamepadKeys_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowGamepadKeys_MetaData, ARRAY_COUNT(NewProp_bAllowGamepadKeys_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowModifierKeys_MetaData[] = {
				{ "Category", "Key Selection" },
				{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
				{ "ToolTip", "input chord representing the selected key, if false modifier keys are ignored." },
			};
#endif
			auto NewProp_bAllowModifierKeys_SetBit = [](void* Obj){ ((UInputKeySelector*)Obj)->bAllowModifierKeys = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowModifierKeys = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowModifierKeys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UInputKeySelector), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowModifierKeys_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowModifierKeys_MetaData, ARRAY_COUNT(NewProp_bAllowModifierKeys_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoKeySpecifiedText_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
				{ "ToolTip", "Sets the text to display when no key text is available or not selecting a key." },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_NoKeySpecifiedText = { UE4CodeGen_Private::EPropertyClass::Text, "NoKeySpecifiedText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UInputKeySelector, NoKeySpecifiedText), METADATA_PARAMS(NewProp_NoKeySpecifiedText_MetaData, ARRAY_COUNT(NewProp_NoKeySpecifiedText_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeySelectionText_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
				{ "ToolTip", "Sets the text which is displayed while selecting keys." },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_KeySelectionText = { UE4CodeGen_Private::EPropertyClass::Text, "KeySelectionText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UInputKeySelector, KeySelectionText), METADATA_PARAMS(NewProp_KeySelectionText_MetaData, ARRAY_COUNT(NewProp_KeySelectionText_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UInputKeySelector, ColorAndOpacity_DEPRECATED), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_ColorAndOpacity_MetaData, ARRAY_COUNT(NewProp_ColorAndOpacity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Margin_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
				{ "ToolTip", "The amount of blank space around the text used to display the currently selected key." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Margin = { UE4CodeGen_Private::EPropertyClass::Struct, "Margin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UInputKeySelector, Margin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(NewProp_Margin_MetaData, ARRAY_COUNT(NewProp_Margin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font = { UE4CodeGen_Private::EPropertyClass::Struct, "Font", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UInputKeySelector, Font_DEPRECATED), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(NewProp_Font_MetaData, ARRAY_COUNT(NewProp_Font_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedKey_MetaData[] = {
				{ "Category", "Key Selection" },
				{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
				{ "ToolTip", "The currently selected key chord." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectedKey = { UE4CodeGen_Private::EPropertyClass::Struct, "SelectedKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UInputKeySelector, SelectedKey), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(NewProp_SelectedKey_MetaData, ARRAY_COUNT(NewProp_SelectedKey_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextStyle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "DisplayName", "Text Style" },
				{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
				{ "ToolTip", "The button style used at runtime" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "TextStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UInputKeySelector, TextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(NewProp_TextStyle_MetaData, ARRAY_COUNT(NewProp_TextStyle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "DisplayName", "Style" },
				{ "ModuleRelativePath", "Public/Components/InputKeySelector.h" },
				{ "ToolTip", "The button style used at runtime" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "WidgetStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UInputKeySelector, WidgetStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(NewProp_WidgetStyle_MetaData, ARRAY_COUNT(NewProp_WidgetStyle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnIsSelectingKeyChanged,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnKeySelected,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EscapeKeys,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EscapeKeys_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowGamepadKeys,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowModifierKeys,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NoKeySpecifiedText,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeySelectionText,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColorAndOpacity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Margin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Font,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectedKey,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextStyle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WidgetStyle,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInputKeySelector>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInputKeySelector::StaticClass,
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
	IMPLEMENT_CLASS(UInputKeySelector, 1633669253);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputKeySelector(Z_Construct_UClass_UInputKeySelector, &UInputKeySelector::StaticClass, TEXT("/Script/UMG"), TEXT("UInputKeySelector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputKeySelector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
