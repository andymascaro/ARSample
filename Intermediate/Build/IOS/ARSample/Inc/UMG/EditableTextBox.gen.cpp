// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/EditableTextBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditableTextBox() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UEditableTextBox_ClearError();
	UMG_API UFunction* Z_Construct_UFunction_UEditableTextBox_GetText();
	UMG_API UFunction* Z_Construct_UFunction_UEditableTextBox_HasError();
	UMG_API UFunction* Z_Construct_UFunction_UEditableTextBox_SetError();
	UMG_API UFunction* Z_Construct_UFunction_UEditableTextBox_SetHintText();
	UMG_API UFunction* Z_Construct_UFunction_UEditableTextBox_SetIsReadOnly();
	UMG_API UFunction* Z_Construct_UFunction_UEditableTextBox_SetText();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FShapedTextOptions();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EVirtualKeyboardType();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FEditableTextBoxStyle();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature()
	{
		struct EditableTextBox_eventOnEditableTextBoxCommittedEvent_Parms
		{
			FText Text;
			TEnumAsByte<ETextCommit::Type> CommitMethod;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CommitMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "CommitMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditableTextBox_eventOnEditableTextBoxCommittedEvent_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Text, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(EditableTextBox_eventOnEditableTextBoxCommittedEvent_Parms, Text), METADATA_PARAMS(NewProp_Text_MetaData, ARRAY_COUNT(NewProp_Text_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CommitMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableTextBox, "OnEditableTextBoxCommittedEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00530000, sizeof(EditableTextBox_eventOnEditableTextBoxCommittedEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature()
	{
		struct EditableTextBox_eventOnEditableTextBoxChangedEvent_Parms
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
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Text, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(EditableTextBox_eventOnEditableTextBoxChangedEvent_Parms, Text), METADATA_PARAMS(NewProp_Text_MetaData, ARRAY_COUNT(NewProp_Text_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableTextBox, "OnEditableTextBoxChangedEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00530000, sizeof(EditableTextBox_eventOnEditableTextBoxChangedEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UEditableTextBox::StaticRegisterNativesUEditableTextBox()
	{
		UClass* Class = UEditableTextBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearError", (Native)&UEditableTextBox::execClearError },
			{ "GetText", (Native)&UEditableTextBox::execGetText },
			{ "HasError", (Native)&UEditableTextBox::execHasError },
			{ "SetError", (Native)&UEditableTextBox::execSetError },
			{ "SetHintText", (Native)&UEditableTextBox::execSetHintText },
			{ "SetIsReadOnly", (Native)&UEditableTextBox::execSetIsReadOnly },
			{ "SetText", (Native)&UEditableTextBox::execSetText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UEditableTextBox_ClearError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableTextBox, "ClearError", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEditableTextBox_GetText()
	{
		struct EditableTextBox_eventGetText_Parms
		{
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(EditableTextBox_eventGetText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "DisplayName", "GetText (Text Box)" },
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableTextBox, "GetText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(EditableTextBox_eventGetText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEditableTextBox_HasError()
	{
		struct EditableTextBox_eventHasError_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((EditableTextBox_eventHasError_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EditableTextBox_eventHasError_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableTextBox, "HasError", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(EditableTextBox_eventHasError_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEditableTextBox_SetError()
	{
		struct EditableTextBox_eventSetError_Parms
		{
			FText InError;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_InError = { UE4CodeGen_Private::EPropertyClass::Text, "InError", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditableTextBox_eventSetError_Parms, InError), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InError,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "DisplayName", "SetError (Text Box)" },
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableTextBox, "SetError", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(EditableTextBox_eventSetError_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEditableTextBox_SetHintText()
	{
		struct EditableTextBox_eventSetHintText_Parms
		{
			FText InText;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText = { UE4CodeGen_Private::EPropertyClass::Text, "InText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditableTextBox_eventSetHintText_Parms, InText), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InText,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "DisplayName", "Set Hint Text (Text Box)" },
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableTextBox, "SetHintText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(EditableTextBox_eventSetHintText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEditableTextBox_SetIsReadOnly()
	{
		struct EditableTextBox_eventSetIsReadOnly_Parms
		{
			bool bReadOnly;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bReadOnly_SetBit = [](void* Obj){ ((EditableTextBox_eventSetIsReadOnly_Parms*)Obj)->bReadOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReadOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bReadOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EditableTextBox_eventSetIsReadOnly_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReadOnly_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReadOnly,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "DisplayName", "SetIsReadOnly (Text Box)" },
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableTextBox, "SetIsReadOnly", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(EditableTextBox_eventSetIsReadOnly_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEditableTextBox_SetText()
	{
		struct EditableTextBox_eventSetText_Parms
		{
			FText InText;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText = { UE4CodeGen_Private::EPropertyClass::Text, "InText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EditableTextBox_eventSetText_Parms, InText), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InText,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "DisplayName", "SetText (Text Box)" },
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableTextBox, "SetText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(EditableTextBox_eventSetText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditableTextBox_NoRegister()
	{
		return UEditableTextBox::StaticClass();
	}
	UClass* Z_Construct_UClass_UEditableTextBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UEditableTextBox_ClearError, "ClearError" }, // 3535691939
				{ &Z_Construct_UFunction_UEditableTextBox_GetText, "GetText" }, // 3632781739
				{ &Z_Construct_UFunction_UEditableTextBox_HasError, "HasError" }, // 3679961489
				{ &Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature, "OnEditableTextBoxChangedEvent__DelegateSignature" }, // 2408866165
				{ &Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature, "OnEditableTextBoxCommittedEvent__DelegateSignature" }, // 1105961178
				{ &Z_Construct_UFunction_UEditableTextBox_SetError, "SetError" }, // 3838889165
				{ &Z_Construct_UFunction_UEditableTextBox_SetHintText, "SetHintText" }, // 4131675176
				{ &Z_Construct_UFunction_UEditableTextBox_SetIsReadOnly, "SetIsReadOnly" }, // 296003651
				{ &Z_Construct_UFunction_UEditableTextBox_SetText, "SetText" }, // 442432399
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Text Box" },
				{ "IncludePath", "Components/EditableTextBox.h" },
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
				{ "ToolTip", "Allows the user to type in custom text.  Only permits a single line of text to be entered.\n\n* No Children\n* Text Entry" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTextCommitted_MetaData[] = {
				{ "Category", "TextBox|Event" },
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
				{ "ToolTip", "Called whenever the text is committed.  This happens when the user presses enter or the text box loses focus." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTextCommitted = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnTextCommitted", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UEditableTextBox, OnTextCommitted), Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnTextCommitted_MetaData, ARRAY_COUNT(NewProp_OnTextCommitted_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTextChanged_MetaData[] = {
				{ "Category", "TextBox|Event" },
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
				{ "ToolTip", "Called whenever the text is changed interactively by the user" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTextChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnTextChanged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UEditableTextBox, OnTextChanged), Z_Construct_UDelegateFunction_UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnTextChanged_MetaData, ARRAY_COUNT(NewProp_OnTextChanged_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapedTextOptions_MetaData[] = {
				{ "Category", "Localization" },
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
				{ "ShowOnlyInnerProperties", "" },
				{ "ToolTip", "Controls how the text within this widget should be shaped." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShapedTextOptions = { UE4CodeGen_Private::EPropertyClass::Struct, "ShapedTextOptions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UEditableTextBox, ShapedTextOptions), Z_Construct_UScriptStruct_FShapedTextOptions, METADATA_PARAMS(NewProp_ShapedTextOptions_MetaData, ARRAY_COUNT(NewProp_ShapedTextOptions_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyboardType_MetaData[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
				{ "ToolTip", "If we're on a platform that requires a virtual keyboard, what kind of keyboard should this widget use?" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_KeyboardType = { UE4CodeGen_Private::EPropertyClass::Byte, "KeyboardType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(UEditableTextBox, KeyboardType), Z_Construct_UEnum_UMG_EVirtualKeyboardType, METADATA_PARAMS(NewProp_KeyboardType_MetaData, ARRAY_COUNT(NewProp_KeyboardType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowContextMenu_MetaData[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
				{ "ToolTip", "Whether the context menu can be opened" },
			};
#endif
			auto NewProp_AllowContextMenu_SetBit = [](void* Obj){ ((UEditableTextBox*)Obj)->AllowContextMenu = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowContextMenu = { UE4CodeGen_Private::EPropertyClass::Bool, "AllowContextMenu", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEditableTextBox), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_AllowContextMenu_SetBit)>::SetBit, METADATA_PARAMS(NewProp_AllowContextMenu_MetaData, ARRAY_COUNT(NewProp_AllowContextMenu_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectAllTextOnCommit_MetaData[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
				{ "ToolTip", "Whether to select all text when pressing enter to commit changes" },
			};
#endif
			auto NewProp_SelectAllTextOnCommit_SetBit = [](void* Obj){ ((UEditableTextBox*)Obj)->SelectAllTextOnCommit = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SelectAllTextOnCommit = { UE4CodeGen_Private::EPropertyClass::Bool, "SelectAllTextOnCommit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEditableTextBox), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_SelectAllTextOnCommit_SetBit)>::SetBit, METADATA_PARAMS(NewProp_SelectAllTextOnCommit_MetaData, ARRAY_COUNT(NewProp_SelectAllTextOnCommit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearKeyboardFocusOnCommit_MetaData[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
				{ "ToolTip", "Whether to clear keyboard focus when pressing enter to commit changes" },
			};
#endif
			auto NewProp_ClearKeyboardFocusOnCommit_SetBit = [](void* Obj){ ((UEditableTextBox*)Obj)->ClearKeyboardFocusOnCommit = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ClearKeyboardFocusOnCommit = { UE4CodeGen_Private::EPropertyClass::Bool, "ClearKeyboardFocusOnCommit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEditableTextBox), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ClearKeyboardFocusOnCommit_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ClearKeyboardFocusOnCommit_MetaData, ARRAY_COUNT(NewProp_ClearKeyboardFocusOnCommit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RevertTextOnEscape_MetaData[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
				{ "ToolTip", "Whether to allow the user to back out of changes when they press the escape key" },
			};
#endif
			auto NewProp_RevertTextOnEscape_SetBit = [](void* Obj){ ((UEditableTextBox*)Obj)->RevertTextOnEscape = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RevertTextOnEscape = { UE4CodeGen_Private::EPropertyClass::Bool, "RevertTextOnEscape", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEditableTextBox), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_RevertTextOnEscape_SetBit)>::SetBit, METADATA_PARAMS(NewProp_RevertTextOnEscape_MetaData, ARRAY_COUNT(NewProp_RevertTextOnEscape_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectAllTextWhenFocused_MetaData[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
				{ "ToolTip", "Whether to select all text when the user clicks to give focus on the widget" },
			};
#endif
			auto NewProp_SelectAllTextWhenFocused_SetBit = [](void* Obj){ ((UEditableTextBox*)Obj)->SelectAllTextWhenFocused = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SelectAllTextWhenFocused = { UE4CodeGen_Private::EPropertyClass::Bool, "SelectAllTextWhenFocused", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEditableTextBox), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_SelectAllTextWhenFocused_SetBit)>::SetBit, METADATA_PARAMS(NewProp_SelectAllTextWhenFocused_MetaData, ARRAY_COUNT(NewProp_SelectAllTextWhenFocused_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCaretMovedWhenGainFocus_MetaData[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
				{ "ToolTip", "Workaround as we lose focus when the auto completion closes." },
			};
#endif
			auto NewProp_IsCaretMovedWhenGainFocus_SetBit = [](void* Obj){ ((UEditableTextBox*)Obj)->IsCaretMovedWhenGainFocus = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCaretMovedWhenGainFocus = { UE4CodeGen_Private::EPropertyClass::Bool, "IsCaretMovedWhenGainFocus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEditableTextBox), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsCaretMovedWhenGainFocus_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsCaretMovedWhenGainFocus_MetaData, ARRAY_COUNT(NewProp_IsCaretMovedWhenGainFocus_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
				{ "ToolTip", "Padding between the box/border and the text widget inside (overrides Style)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Padding = { UE4CodeGen_Private::EPropertyClass::Struct, "Padding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UEditableTextBox, Padding_DEPRECATED), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(NewProp_Padding_MetaData, ARRAY_COUNT(NewProp_Padding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumDesiredWidth_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
				{ "ToolTip", "Minimum width that a text block should be" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumDesiredWidth = { UE4CodeGen_Private::EPropertyClass::Float, "MinimumDesiredWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UEditableTextBox, MinimumDesiredWidth), METADATA_PARAMS(NewProp_MinimumDesiredWidth_MetaData, ARRAY_COUNT(NewProp_MinimumDesiredWidth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPassword_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
				{ "ToolTip", "Sets whether this text box is for storing a password" },
			};
#endif
			auto NewProp_IsPassword_SetBit = [](void* Obj){ ((UEditableTextBox*)Obj)->IsPassword = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPassword = { UE4CodeGen_Private::EPropertyClass::Bool, "IsPassword", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEditableTextBox), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsPassword_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsPassword_MetaData, ARRAY_COUNT(NewProp_IsPassword_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsReadOnly_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
				{ "ToolTip", "Sets whether this text box can actually be modified interactively by the user" },
			};
#endif
			auto NewProp_IsReadOnly_SetBit = [](void* Obj){ ((UEditableTextBox*)Obj)->IsReadOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsReadOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "IsReadOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEditableTextBox), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsReadOnly_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsReadOnly_MetaData, ARRAY_COUNT(NewProp_IsReadOnly_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReadOnlyForegroundColor_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
				{ "ToolTip", "Text color and opacity when read-only (overrides Style)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReadOnlyForegroundColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ReadOnlyForegroundColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UEditableTextBox, ReadOnlyForegroundColor_DEPRECATED), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_ReadOnlyForegroundColor_MetaData, ARRAY_COUNT(NewProp_ReadOnlyForegroundColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
				{ "ToolTip", "The color of the background/border around the editable text (overrides Style)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundColor = { UE4CodeGen_Private::EPropertyClass::Struct, "BackgroundColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UEditableTextBox, BackgroundColor_DEPRECATED), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_BackgroundColor_MetaData, ARRAY_COUNT(NewProp_BackgroundColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForegroundColor_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
				{ "ToolTip", "Text color and opacity (overrides Style)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForegroundColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ForegroundColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UEditableTextBox, ForegroundColor_DEPRECATED), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_ForegroundColor_MetaData, ARRAY_COUNT(NewProp_ForegroundColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
				{ "ToolTip", "Font color and opacity (overrides Style)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font = { UE4CodeGen_Private::EPropertyClass::Struct, "Font", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UEditableTextBox, Font_DEPRECATED), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(NewProp_Font_MetaData, ARRAY_COUNT(NewProp_Font_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HintTextDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
				{ "ToolTip", "A bindable delegate to allow logic to drive the hint text of the widget" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_HintTextDelegate = { UE4CodeGen_Private::EPropertyClass::Delegate, "HintTextDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080000, 1, nullptr, STRUCT_OFFSET(UEditableTextBox, HintTextDelegate), Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature, METADATA_PARAMS(NewProp_HintTextDelegate_MetaData, ARRAY_COUNT(NewProp_HintTextDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HintText_MetaData[] = {
				{ "Category", "Content" },
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
				{ "ToolTip", "Hint text that appears when there is no text in the text box" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_HintText = { UE4CodeGen_Private::EPropertyClass::Text, "HintText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UEditableTextBox, HintText), METADATA_PARAMS(NewProp_HintText_MetaData, ARRAY_COUNT(NewProp_HintText_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
				{ "ToolTip", "Style used for the text box" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Style = { UE4CodeGen_Private::EPropertyClass::Object, "Style", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UEditableTextBox, Style_DEPRECATED), Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister, METADATA_PARAMS(NewProp_Style_MetaData, ARRAY_COUNT(NewProp_Style_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
				{ "Category", "Style" },
				{ "DisplayName", "Style" },
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
				{ "ToolTip", "The style" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "WidgetStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEditableTextBox, WidgetStyle), Z_Construct_UScriptStruct_FEditableTextBoxStyle, METADATA_PARAMS(NewProp_WidgetStyle_MetaData, ARRAY_COUNT(NewProp_WidgetStyle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
				{ "ToolTip", "A bindable delegate to allow logic to drive the text of the widget" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_TextDelegate = { UE4CodeGen_Private::EPropertyClass::Delegate, "TextDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080000, 1, nullptr, STRUCT_OFFSET(UEditableTextBox, TextDelegate), Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature, METADATA_PARAMS(NewProp_TextDelegate_MetaData, ARRAY_COUNT(NewProp_TextDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
				{ "Category", "Content" },
				{ "ModuleRelativePath", "Public/Components/EditableTextBox.h" },
				{ "ToolTip", "The text content for this editable text box widget" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Text, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UEditableTextBox, Text), METADATA_PARAMS(NewProp_Text_MetaData, ARRAY_COUNT(NewProp_Text_MetaData)) };
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
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Padding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinimumDesiredWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsPassword,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsReadOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReadOnlyForegroundColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackgroundColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForegroundColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Font,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HintTextDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HintText,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Style,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WidgetStyle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEditableTextBox>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEditableTextBox::StaticClass,
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
	IMPLEMENT_CLASS(UEditableTextBox, 1731381176);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditableTextBox(Z_Construct_UClass_UEditableTextBox, &UEditableTextBox::StaticClass, TEXT("/Script/UMG"), TEXT("UEditableTextBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableTextBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
