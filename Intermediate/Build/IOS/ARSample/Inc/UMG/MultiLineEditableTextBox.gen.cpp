// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/MultiLineEditableTextBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiLineEditableTextBox() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UMultiLineEditableTextBox();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UMultiLineEditableTextBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextLayoutWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_GetText();
	UMG_API UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_SetError();
	UMG_API UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly();
	UMG_API UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_SetText();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FEditableTextBoxStyle();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature()
	{
		struct MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxCommittedEvent_Parms
		{
			FText Text;
			TEnumAsByte<ETextCommit::Type> CommitMethod;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CommitMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "CommitMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxCommittedEvent_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Text, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxCommittedEvent_Parms, Text), METADATA_PARAMS(NewProp_Text_MetaData, ARRAY_COUNT(NewProp_Text_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CommitMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, "OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00530000, sizeof(MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxCommittedEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature()
	{
		struct MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxChangedEvent_Parms
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
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Text, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxChangedEvent_Parms, Text), METADATA_PARAMS(NewProp_Text_MetaData, ARRAY_COUNT(NewProp_Text_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, "OnMultiLineEditableTextBoxChangedEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00530000, sizeof(MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxChangedEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UMultiLineEditableTextBox::StaticRegisterNativesUMultiLineEditableTextBox()
	{
		UClass* Class = UMultiLineEditableTextBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetText", (Native)&UMultiLineEditableTextBox::execGetText },
			{ "SetError", (Native)&UMultiLineEditableTextBox::execSetError },
			{ "SetIsReadOnly", (Native)&UMultiLineEditableTextBox::execSetIsReadOnly },
			{ "SetText", (Native)&UMultiLineEditableTextBox::execSetText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_GetText()
	{
		struct MultiLineEditableTextBox_eventGetText_Parms
		{
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MultiLineEditableTextBox_eventGetText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "DisplayName", "GetText (Multi-Line Text Box)" },
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, "GetText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MultiLineEditableTextBox_eventGetText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_SetError()
	{
		struct MultiLineEditableTextBox_eventSetError_Parms
		{
			FText InError;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_InError = { UE4CodeGen_Private::EPropertyClass::Text, "InError", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MultiLineEditableTextBox_eventSetError_Parms, InError), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InError,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "DisplayName", "SetError (Multi-Line Text Box)" },
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, "SetError", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MultiLineEditableTextBox_eventSetError_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly()
	{
		struct MultiLineEditableTextBox_eventSetIsReadOnly_Parms
		{
			bool bReadOnly;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bReadOnly_SetBit = [](void* Obj){ ((MultiLineEditableTextBox_eventSetIsReadOnly_Parms*)Obj)->bReadOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReadOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bReadOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MultiLineEditableTextBox_eventSetIsReadOnly_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReadOnly_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReadOnly,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "DisplayName", "SetIsReadOnly (Multi-Line Text Box)" },
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, "SetIsReadOnly", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MultiLineEditableTextBox_eventSetIsReadOnly_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMultiLineEditableTextBox_SetText()
	{
		struct MultiLineEditableTextBox_eventSetText_Parms
		{
			FText InText;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText = { UE4CodeGen_Private::EPropertyClass::Text, "InText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MultiLineEditableTextBox_eventSetText_Parms, InText), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InText,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "DisplayName", "SetText (Multi-Line Text Box)" },
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableTextBox, "SetText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MultiLineEditableTextBox_eventSetText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMultiLineEditableTextBox_NoRegister()
	{
		return UMultiLineEditableTextBox::StaticClass();
	}
	UClass* Z_Construct_UClass_UMultiLineEditableTextBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UTextLayoutWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMultiLineEditableTextBox_GetText, "GetText" }, // 833088883
				{ &Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature, "OnMultiLineEditableTextBoxChangedEvent__DelegateSignature" }, // 1395426156
				{ &Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature, "OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature" }, // 3877439024
				{ &Z_Construct_UFunction_UMultiLineEditableTextBox_SetError, "SetError" }, // 3389503609
				{ &Z_Construct_UFunction_UMultiLineEditableTextBox_SetIsReadOnly, "SetIsReadOnly" }, // 4084547786
				{ &Z_Construct_UFunction_UMultiLineEditableTextBox_SetText, "SetText" }, // 3363215381
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Text Box (Multi-Line)" },
				{ "IncludePath", "Components/MultiLineEditableTextBox.h" },
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
				{ "ToolTip", "Allows a user to enter multiple lines of text" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTextCommitted_MetaData[] = {
				{ "Category", "Widget Event" },
				{ "DisplayName", "OnTextCommitted (Multi-Line Text Box)" },
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
				{ "ToolTip", "Called whenever the text is committed.  This happens when the user presses enter or the text box loses focus." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTextCommitted = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnTextCommitted", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UMultiLineEditableTextBox, OnTextCommitted), Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnTextCommitted_MetaData, ARRAY_COUNT(NewProp_OnTextCommitted_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTextChanged_MetaData[] = {
				{ "Category", "Widget Event" },
				{ "DisplayName", "OnTextChanged (Multi-Line Text Box)" },
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
				{ "ToolTip", "Called whenever the text is changed interactively by the user" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTextChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnTextChanged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UMultiLineEditableTextBox, OnTextChanged), Z_Construct_UDelegateFunction_UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnTextChanged_MetaData, ARRAY_COUNT(NewProp_OnTextChanged_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReadOnlyForegroundColor_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
				{ "ToolTip", "Text color and opacity when read-only (overrides Style)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReadOnlyForegroundColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ReadOnlyForegroundColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UMultiLineEditableTextBox, ReadOnlyForegroundColor_DEPRECATED), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_ReadOnlyForegroundColor_MetaData, ARRAY_COUNT(NewProp_ReadOnlyForegroundColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
				{ "ToolTip", "The color of the background/border around the editable text (overrides Style)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundColor = { UE4CodeGen_Private::EPropertyClass::Struct, "BackgroundColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UMultiLineEditableTextBox, BackgroundColor_DEPRECATED), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_BackgroundColor_MetaData, ARRAY_COUNT(NewProp_BackgroundColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForegroundColor_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
				{ "ToolTip", "Text color and opacity (overrides Style)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForegroundColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ForegroundColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UMultiLineEditableTextBox, ForegroundColor_DEPRECATED), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_ForegroundColor_MetaData, ARRAY_COUNT(NewProp_ForegroundColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
				{ "ToolTip", "Font color and opacity (overrides Style)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font = { UE4CodeGen_Private::EPropertyClass::Struct, "Font", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UMultiLineEditableTextBox, Font_DEPRECATED), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(NewProp_Font_MetaData, ARRAY_COUNT(NewProp_Font_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Style = { UE4CodeGen_Private::EPropertyClass::Object, "Style", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UMultiLineEditableTextBox, Style_DEPRECATED), Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister, METADATA_PARAMS(NewProp_Style_MetaData, ARRAY_COUNT(NewProp_Style_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowContextMenu_MetaData[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
				{ "ToolTip", "Whether the context menu can be opened" },
			};
#endif
			auto NewProp_AllowContextMenu_SetBit = [](void* Obj){ ((UMultiLineEditableTextBox*)Obj)->AllowContextMenu = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowContextMenu = { UE4CodeGen_Private::EPropertyClass::Bool, "AllowContextMenu", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMultiLineEditableTextBox), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_AllowContextMenu_SetBit)>::SetBit, METADATA_PARAMS(NewProp_AllowContextMenu_MetaData, ARRAY_COUNT(NewProp_AllowContextMenu_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsReadOnly_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
				{ "ToolTip", "Sets whether this text block can be modified interactively by the user" },
			};
#endif
			auto NewProp_bIsReadOnly_SetBit = [](void* Obj){ ((UMultiLineEditableTextBox*)Obj)->bIsReadOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReadOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsReadOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMultiLineEditableTextBox), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsReadOnly_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsReadOnly_MetaData, ARRAY_COUNT(NewProp_bIsReadOnly_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextStyle_MetaData[] = {
				{ "Category", "Style" },
				{ "DisplayName", "Text Style" },
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
				{ "ToolTip", "The text style" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "TextStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMultiLineEditableTextBox, TextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(NewProp_TextStyle_MetaData, ARRAY_COUNT(NewProp_TextStyle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
				{ "Category", "Style" },
				{ "DisplayName", "Style" },
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
				{ "ToolTip", "The style" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "WidgetStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMultiLineEditableTextBox, WidgetStyle), Z_Construct_UScriptStruct_FEditableTextBoxStyle, METADATA_PARAMS(NewProp_WidgetStyle_MetaData, ARRAY_COUNT(NewProp_WidgetStyle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HintTextDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
				{ "ToolTip", "A bindable delegate to allow logic to drive the hint text of the widget" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_HintTextDelegate = { UE4CodeGen_Private::EPropertyClass::Delegate, "HintTextDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080000, 1, nullptr, STRUCT_OFFSET(UMultiLineEditableTextBox, HintTextDelegate), Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature, METADATA_PARAMS(NewProp_HintTextDelegate_MetaData, ARRAY_COUNT(NewProp_HintTextDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HintText_MetaData[] = {
				{ "Category", "Content" },
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
				{ "MultiLine", "true" },
				{ "ToolTip", "Hint text that appears when there is no text in the text box" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_HintText = { UE4CodeGen_Private::EPropertyClass::Text, "HintText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMultiLineEditableTextBox, HintText), METADATA_PARAMS(NewProp_HintText_MetaData, ARRAY_COUNT(NewProp_HintText_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
				{ "Category", "Content" },
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableTextBox.h" },
				{ "MultiLine", "true" },
				{ "ToolTip", "The text content for this editable text box widget" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Text, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMultiLineEditableTextBox, Text), METADATA_PARAMS(NewProp_Text_MetaData, ARRAY_COUNT(NewProp_Text_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnTextCommitted,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnTextChanged,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReadOnlyForegroundColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackgroundColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForegroundColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Font,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Style,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllowContextMenu,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsReadOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextStyle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WidgetStyle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HintTextDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HintText,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMultiLineEditableTextBox>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMultiLineEditableTextBox::StaticClass,
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
	IMPLEMENT_CLASS(UMultiLineEditableTextBox, 3035021275);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMultiLineEditableTextBox(Z_Construct_UClass_UMultiLineEditableTextBox, &UMultiLineEditableTextBox::StaticClass, TEXT("/Script/UMG"), TEXT("UMultiLineEditableTextBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiLineEditableTextBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
