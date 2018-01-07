// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/EditableText.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditableText() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UEditableText();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UEditableText_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UEditableText_GetText();
	UMG_API UFunction* Z_Construct_UFunction_UEditableText_SetHintText();
	UMG_API UFunction* Z_Construct_UFunction_UEditableText_SetIsPassword();
	UMG_API UFunction* Z_Construct_UFunction_UEditableText_SetIsReadOnly();
	UMG_API UFunction* Z_Construct_UFunction_UEditableText_SetText();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FShapedTextOptions();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EVirtualKeyboardType();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	ENGINE_API UClass* Z_Construct_UClass_USlateBrushAsset_NoRegister();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FEditableTextStyle();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature()
	{
		struct EditableText_eventOnEditableTextCommittedEvent_Parms
		{
			FText Text;
			TEnumAsByte<ETextCommit::Type> CommitMethod;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CommitMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "CommitMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditableText_eventOnEditableTextCommittedEvent_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Text, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(EditableText_eventOnEditableTextCommittedEvent_Parms, Text), METADATA_PARAMS(NewProp_Text_MetaData, ARRAY_COUNT(NewProp_Text_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CommitMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, "OnEditableTextCommittedEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00530000, sizeof(EditableText_eventOnEditableTextCommittedEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature()
	{
		struct EditableText_eventOnEditableTextChangedEvent_Parms
		{
			FText Text;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Text, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(EditableText_eventOnEditableTextChangedEvent_Parms, Text), METADATA_PARAMS(NewProp_Text_MetaData, ARRAY_COUNT(NewProp_Text_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, "OnEditableTextChangedEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00530000, sizeof(EditableText_eventOnEditableTextChangedEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UEditableText::StaticRegisterNativesUEditableText()
	{
		UClass* Class = UEditableText::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetText", (Native)&UEditableText::execGetText },
			{ "SetHintText", (Native)&UEditableText::execSetHintText },
			{ "SetIsPassword", (Native)&UEditableText::execSetIsPassword },
			{ "SetIsReadOnly", (Native)&UEditableText::execSetIsReadOnly },
			{ "SetText", (Native)&UEditableText::execSetText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UEditableText_GetText()
	{
		struct EditableText_eventGetText_Parms
		{
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(EditableText_eventGetText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "DisplayName", "GetText (Editable Text)" },
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
				{ "ToolTip", "Gets the widget text\n@return The widget text" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, "GetText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(EditableText_eventGetText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEditableText_SetHintText()
	{
		struct EditableText_eventSetHintText_Parms
		{
			FText InHintText;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_InHintText = { UE4CodeGen_Private::EPropertyClass::Text, "InHintText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditableText_eventSetHintText_Parms, InHintText), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InHintText,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, "SetHintText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(EditableText_eventSetHintText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEditableText_SetIsPassword()
	{
		struct EditableText_eventSetIsPassword_Parms
		{
			bool InbIsPassword;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_InbIsPassword_SetBit = [](void* Obj){ ((EditableText_eventSetIsPassword_Parms*)Obj)->InbIsPassword = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InbIsPassword = { UE4CodeGen_Private::EPropertyClass::Bool, "InbIsPassword", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EditableText_eventSetIsPassword_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_InbIsPassword_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InbIsPassword,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, "SetIsPassword", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(EditableText_eventSetIsPassword_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEditableText_SetIsReadOnly()
	{
		struct EditableText_eventSetIsReadOnly_Parms
		{
			bool InbIsReadyOnly;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_InbIsReadyOnly_SetBit = [](void* Obj){ ((EditableText_eventSetIsReadOnly_Parms*)Obj)->InbIsReadyOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InbIsReadyOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "InbIsReadyOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EditableText_eventSetIsReadOnly_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_InbIsReadyOnly_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InbIsReadyOnly,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "DisplayName", "SetIsReadOnly (Editable Text)" },
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, "SetIsReadOnly", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(EditableText_eventSetIsReadOnly_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEditableText_SetText()
	{
		struct EditableText_eventSetText_Parms
		{
			FText InText;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText = { UE4CodeGen_Private::EPropertyClass::Text, "InText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditableText_eventSetText_Parms, InText), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InText,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "DisplayName", "SetText (Editable Text)" },
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
				{ "ToolTip", "Directly sets the widget text.\nWarning: This will wipe any binding created for the Text property!\n@param InText The text to assign to the widget" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableText, "SetText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(EditableText_eventSetText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditableText_NoRegister()
	{
		return UEditableText::StaticClass();
	}
	UClass* Z_Construct_UClass_UEditableText()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UEditableText_GetText, "GetText" }, // 248572736
				{ &Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature, "OnEditableTextChangedEvent__DelegateSignature" }, // 129951062
				{ &Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature, "OnEditableTextCommittedEvent__DelegateSignature" }, // 384193679
				{ &Z_Construct_UFunction_UEditableText_SetHintText, "SetHintText" }, // 380883168
				{ &Z_Construct_UFunction_UEditableText_SetIsPassword, "SetIsPassword" }, // 653417228
				{ &Z_Construct_UFunction_UEditableText_SetIsReadOnly, "SetIsReadOnly" }, // 397171213
				{ &Z_Construct_UFunction_UEditableText_SetText, "SetText" }, // 2875389968
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/EditableText.h" },
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
				{ "ToolTip", "Editable text box widget" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTextCommitted_MetaData[] = {
				{ "Category", "Widget Event" },
				{ "DisplayName", "OnTextCommitted (Editable Text)" },
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
				{ "ToolTip", "Called whenever the text is committed.  This happens when the user presses enter or the text box loses focus." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTextCommitted = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnTextCommitted", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UEditableText, OnTextCommitted), Z_Construct_UDelegateFunction_UEditableText_OnEditableTextCommittedEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnTextCommitted_MetaData, ARRAY_COUNT(NewProp_OnTextCommitted_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTextChanged_MetaData[] = {
				{ "Category", "Widget Event" },
				{ "DisplayName", "OnTextChanged (Editable Text)" },
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
				{ "ToolTip", "Called whenever the text is changed interactively by the user" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTextChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnTextChanged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UEditableText, OnTextChanged), Z_Construct_UDelegateFunction_UEditableText_OnEditableTextChangedEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnTextChanged_MetaData, ARRAY_COUNT(NewProp_OnTextChanged_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapedTextOptions_MetaData[] = {
				{ "Category", "Localization" },
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
				{ "ShowOnlyInnerProperties", "" },
				{ "ToolTip", "Controls how the text within this widget should be shaped." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShapedTextOptions = { UE4CodeGen_Private::EPropertyClass::Struct, "ShapedTextOptions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UEditableText, ShapedTextOptions), Z_Construct_UScriptStruct_FShapedTextOptions, METADATA_PARAMS(NewProp_ShapedTextOptions_MetaData, ARRAY_COUNT(NewProp_ShapedTextOptions_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyboardType_MetaData[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
				{ "ToolTip", "If we're on a platform that requires a virtual keyboard, what kind of keyboard should this widget use?" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_KeyboardType = { UE4CodeGen_Private::EPropertyClass::Byte, "KeyboardType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(UEditableText, KeyboardType), Z_Construct_UEnum_UMG_EVirtualKeyboardType, METADATA_PARAMS(NewProp_KeyboardType_MetaData, ARRAY_COUNT(NewProp_KeyboardType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowContextMenu_MetaData[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
				{ "ToolTip", "Whether the context menu can be opened" },
			};
#endif
			auto NewProp_AllowContextMenu_SetBit = [](void* Obj){ ((UEditableText*)Obj)->AllowContextMenu = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowContextMenu = { UE4CodeGen_Private::EPropertyClass::Bool, "AllowContextMenu", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEditableText), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_AllowContextMenu_SetBit)>::SetBit, METADATA_PARAMS(NewProp_AllowContextMenu_MetaData, ARRAY_COUNT(NewProp_AllowContextMenu_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectAllTextOnCommit_MetaData[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
				{ "ToolTip", "Whether to select all text when pressing enter to commit changes" },
			};
#endif
			auto NewProp_SelectAllTextOnCommit_SetBit = [](void* Obj){ ((UEditableText*)Obj)->SelectAllTextOnCommit = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SelectAllTextOnCommit = { UE4CodeGen_Private::EPropertyClass::Bool, "SelectAllTextOnCommit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEditableText), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_SelectAllTextOnCommit_SetBit)>::SetBit, METADATA_PARAMS(NewProp_SelectAllTextOnCommit_MetaData, ARRAY_COUNT(NewProp_SelectAllTextOnCommit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearKeyboardFocusOnCommit_MetaData[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
				{ "ToolTip", "Whether to clear keyboard focus when pressing enter to commit changes" },
			};
#endif
			auto NewProp_ClearKeyboardFocusOnCommit_SetBit = [](void* Obj){ ((UEditableText*)Obj)->ClearKeyboardFocusOnCommit = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ClearKeyboardFocusOnCommit = { UE4CodeGen_Private::EPropertyClass::Bool, "ClearKeyboardFocusOnCommit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEditableText), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ClearKeyboardFocusOnCommit_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ClearKeyboardFocusOnCommit_MetaData, ARRAY_COUNT(NewProp_ClearKeyboardFocusOnCommit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RevertTextOnEscape_MetaData[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
				{ "ToolTip", "Whether to allow the user to back out of changes when they press the escape key" },
			};
#endif
			auto NewProp_RevertTextOnEscape_SetBit = [](void* Obj){ ((UEditableText*)Obj)->RevertTextOnEscape = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RevertTextOnEscape = { UE4CodeGen_Private::EPropertyClass::Bool, "RevertTextOnEscape", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEditableText), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_RevertTextOnEscape_SetBit)>::SetBit, METADATA_PARAMS(NewProp_RevertTextOnEscape_MetaData, ARRAY_COUNT(NewProp_RevertTextOnEscape_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectAllTextWhenFocused_MetaData[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
				{ "ToolTip", "Whether to select all text when the user clicks to give focus on the widget" },
			};
#endif
			auto NewProp_SelectAllTextWhenFocused_SetBit = [](void* Obj){ ((UEditableText*)Obj)->SelectAllTextWhenFocused = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SelectAllTextWhenFocused = { UE4CodeGen_Private::EPropertyClass::Bool, "SelectAllTextWhenFocused", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEditableText), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_SelectAllTextWhenFocused_SetBit)>::SetBit, METADATA_PARAMS(NewProp_SelectAllTextWhenFocused_MetaData, ARRAY_COUNT(NewProp_SelectAllTextWhenFocused_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCaretMovedWhenGainFocus_MetaData[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
				{ "ToolTip", "Workaround as we lose focus when the auto completion closes." },
			};
#endif
			auto NewProp_IsCaretMovedWhenGainFocus_SetBit = [](void* Obj){ ((UEditableText*)Obj)->IsCaretMovedWhenGainFocus = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCaretMovedWhenGainFocus = { UE4CodeGen_Private::EPropertyClass::Bool, "IsCaretMovedWhenGainFocus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEditableText), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsCaretMovedWhenGainFocus_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsCaretMovedWhenGainFocus_MetaData, ARRAY_COUNT(NewProp_IsCaretMovedWhenGainFocus_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumDesiredWidth_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
				{ "ToolTip", "Minimum width that a text block should be" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumDesiredWidth = { UE4CodeGen_Private::EPropertyClass::Float, "MinimumDesiredWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UEditableText, MinimumDesiredWidth), METADATA_PARAMS(NewProp_MinimumDesiredWidth_MetaData, ARRAY_COUNT(NewProp_MinimumDesiredWidth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPassword_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
				{ "ToolTip", "Sets whether this text box is for storing a password" },
			};
#endif
			auto NewProp_IsPassword_SetBit = [](void* Obj){ ((UEditableText*)Obj)->IsPassword = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPassword = { UE4CodeGen_Private::EPropertyClass::Bool, "IsPassword", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEditableText), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsPassword_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsPassword_MetaData, ARRAY_COUNT(NewProp_IsPassword_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsReadOnly_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
				{ "ToolTip", "Sets whether this text box can actually be modified interactively by the user" },
			};
#endif
			auto NewProp_IsReadOnly_SetBit = [](void* Obj){ ((UEditableText*)Obj)->IsReadOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsReadOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "IsReadOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEditableText), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsReadOnly_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsReadOnly_MetaData, ARRAY_COUNT(NewProp_IsReadOnly_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
				{ "ToolTip", "Text color and opacity (overrides Style)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UEditableText, ColorAndOpacity_DEPRECATED), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_ColorAndOpacity_MetaData, ARRAY_COUNT(NewProp_ColorAndOpacity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
				{ "ToolTip", "Font color and opacity (overrides Style)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font = { UE4CodeGen_Private::EPropertyClass::Struct, "Font", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UEditableText, Font_DEPRECATED), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(NewProp_Font_MetaData, ARRAY_COUNT(NewProp_Font_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaretImage_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
				{ "ToolTip", "Image brush used for the caret (overrides Style)" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaretImage = { UE4CodeGen_Private::EPropertyClass::Object, "CaretImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UEditableText, CaretImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(NewProp_CaretImage_MetaData, ARRAY_COUNT(NewProp_CaretImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundImageComposing_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
				{ "ToolTip", "Background image for the composing text (overrides Style)" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackgroundImageComposing = { UE4CodeGen_Private::EPropertyClass::Object, "BackgroundImageComposing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UEditableText, BackgroundImageComposing_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(NewProp_BackgroundImageComposing_MetaData, ARRAY_COUNT(NewProp_BackgroundImageComposing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundImageSelected_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
				{ "ToolTip", "Background image for the selected text (overrides Style)" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackgroundImageSelected = { UE4CodeGen_Private::EPropertyClass::Object, "BackgroundImageSelected", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UEditableText, BackgroundImageSelected_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(NewProp_BackgroundImageSelected_MetaData, ARRAY_COUNT(NewProp_BackgroundImageSelected_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
				{ "ToolTip", "Text style" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Style = { UE4CodeGen_Private::EPropertyClass::Object, "Style", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UEditableText, Style_DEPRECATED), Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister, METADATA_PARAMS(NewProp_Style_MetaData, ARRAY_COUNT(NewProp_Style_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
				{ "Category", "Style" },
				{ "DisplayName", "Style" },
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
				{ "ToolTip", "The style" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "WidgetStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEditableText, WidgetStyle), Z_Construct_UScriptStruct_FEditableTextStyle, METADATA_PARAMS(NewProp_WidgetStyle_MetaData, ARRAY_COUNT(NewProp_WidgetStyle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HintTextDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
				{ "ToolTip", "A bindable delegate to allow logic to drive the hint text of the widget" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_HintTextDelegate = { UE4CodeGen_Private::EPropertyClass::Delegate, "HintTextDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080000, 1, nullptr, STRUCT_OFFSET(UEditableText, HintTextDelegate), Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature, METADATA_PARAMS(NewProp_HintTextDelegate_MetaData, ARRAY_COUNT(NewProp_HintTextDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HintText_MetaData[] = {
				{ "Category", "Content" },
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
				{ "ToolTip", "Hint text that appears when there is no text in the text box" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_HintText = { UE4CodeGen_Private::EPropertyClass::Text, "HintText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UEditableText, HintText), METADATA_PARAMS(NewProp_HintText_MetaData, ARRAY_COUNT(NewProp_HintText_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
				{ "ToolTip", "A bindable delegate to allow logic to drive the text of the widget" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_TextDelegate = { UE4CodeGen_Private::EPropertyClass::Delegate, "TextDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080000, 1, nullptr, STRUCT_OFFSET(UEditableText, TextDelegate), Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature, METADATA_PARAMS(NewProp_TextDelegate_MetaData, ARRAY_COUNT(NewProp_TextDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
				{ "Category", "Content" },
				{ "ModuleRelativePath", "Public/Components/EditableText.h" },
				{ "ToolTip", "The text content for this editable text box widget" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Text, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UEditableText, Text), METADATA_PARAMS(NewProp_Text_MetaData, ARRAY_COUNT(NewProp_Text_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnTextCommitted,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnTextChanged,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShapedTextOptions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyboardType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllowContextMenu,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectAllTextOnCommit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClearKeyboardFocusOnCommit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RevertTextOnEscape,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectAllTextWhenFocused,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsCaretMovedWhenGainFocus,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinimumDesiredWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsPassword,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsReadOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColorAndOpacity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Font,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CaretImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackgroundImageComposing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackgroundImageSelected,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Style,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WidgetStyle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HintTextDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HintText,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEditableText>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEditableText::StaticClass,
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
	IMPLEMENT_CLASS(UEditableText, 2014613449);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditableText(Z_Construct_UClass_UEditableText, &UEditableText::StaticClass, TEXT("/Script/UMG"), TEXT("UEditableText"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableText);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
