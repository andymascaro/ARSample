// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/MultiLineEditableText.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiLineEditableText() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UMultiLineEditableText();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UMultiLineEditableText_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextLayoutWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UMultiLineEditableText_GetText();
	UMG_API UFunction* Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly();
	UMG_API UFunction* Z_Construct_UFunction_UMultiLineEditableText_SetText();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature()
	{
		struct MultiLineEditableText_eventOnMultiLineEditableTextCommittedEvent_Parms
		{
			FText Text;
			TEnumAsByte<ETextCommit::Type> CommitMethod;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CommitMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "CommitMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MultiLineEditableText_eventOnMultiLineEditableTextCommittedEvent_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Text, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MultiLineEditableText_eventOnMultiLineEditableTextCommittedEvent_Parms, Text), METADATA_PARAMS(NewProp_Text_MetaData, ARRAY_COUNT(NewProp_Text_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CommitMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableText, "OnMultiLineEditableTextCommittedEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00530000, sizeof(MultiLineEditableText_eventOnMultiLineEditableTextCommittedEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature()
	{
		struct MultiLineEditableText_eventOnMultiLineEditableTextChangedEvent_Parms
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
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Text, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MultiLineEditableText_eventOnMultiLineEditableTextChangedEvent_Parms, Text), METADATA_PARAMS(NewProp_Text_MetaData, ARRAY_COUNT(NewProp_Text_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableText, "OnMultiLineEditableTextChangedEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00530000, sizeof(MultiLineEditableText_eventOnMultiLineEditableTextChangedEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UMultiLineEditableText::StaticRegisterNativesUMultiLineEditableText()
	{
		UClass* Class = UMultiLineEditableText::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetText", (Native)&UMultiLineEditableText::execGetText },
			{ "SetIsReadOnly", (Native)&UMultiLineEditableText::execSetIsReadOnly },
			{ "SetText", (Native)&UMultiLineEditableText::execSetText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMultiLineEditableText_GetText()
	{
		struct MultiLineEditableText_eventGetText_Parms
		{
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MultiLineEditableText_eventGetText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "DisplayName", "GetText (Multi-Line Editable Text)" },
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableText, "GetText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MultiLineEditableText_eventGetText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly()
	{
		struct MultiLineEditableText_eventSetIsReadOnly_Parms
		{
			bool bReadOnly;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bReadOnly_SetBit = [](void* Obj){ ((MultiLineEditableText_eventSetIsReadOnly_Parms*)Obj)->bReadOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReadOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bReadOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MultiLineEditableText_eventSetIsReadOnly_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReadOnly_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReadOnly,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "DisplayName", "SetIsReadOnly (Multi-Line Editable Text" },
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableText, "SetIsReadOnly", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MultiLineEditableText_eventSetIsReadOnly_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMultiLineEditableText_SetText()
	{
		struct MultiLineEditableText_eventSetText_Parms
		{
			FText InText;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText = { UE4CodeGen_Private::EPropertyClass::Text, "InText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MultiLineEditableText_eventSetText_Parms, InText), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InText,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "DisplayName", "SetText (Multi-Line Editable Text)" },
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiLineEditableText, "SetText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MultiLineEditableText_eventSetText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMultiLineEditableText_NoRegister()
	{
		return UMultiLineEditableText::StaticClass();
	}
	UClass* Z_Construct_UClass_UMultiLineEditableText()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UTextLayoutWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMultiLineEditableText_GetText, "GetText" }, // 3569561642
				{ &Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature, "OnMultiLineEditableTextChangedEvent__DelegateSignature" }, // 2159261198
				{ &Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature, "OnMultiLineEditableTextCommittedEvent__DelegateSignature" }, // 2835743885
				{ &Z_Construct_UFunction_UMultiLineEditableText_SetIsReadOnly, "SetIsReadOnly" }, // 2835454956
				{ &Z_Construct_UFunction_UMultiLineEditableText_SetText, "SetText" }, // 793221286
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Editable Text (Multi-Line)" },
				{ "IncludePath", "Components/MultiLineEditableText.h" },
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
				{ "ToolTip", "Editable text box widget" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTextCommitted_MetaData[] = {
				{ "Category", "Widget Event" },
				{ "DisplayName", "OnTextCommitted (Multi-Line Editable Text)" },
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
				{ "ToolTip", "Called whenever the text is committed.  This happens when the user presses enter or the text box loses focus." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTextCommitted = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnTextCommitted", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UMultiLineEditableText, OnTextCommitted), Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnTextCommitted_MetaData, ARRAY_COUNT(NewProp_OnTextCommitted_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTextChanged_MetaData[] = {
				{ "Category", "Widget Event" },
				{ "DisplayName", "OnTextChanged (Multi-Line Editable Text)" },
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
				{ "ToolTip", "Called whenever the text is changed interactively by the user" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTextChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnTextChanged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UMultiLineEditableText, OnTextChanged), Z_Construct_UDelegateFunction_UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnTextChanged_MetaData, ARRAY_COUNT(NewProp_OnTextChanged_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowContextMenu_MetaData[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
				{ "ToolTip", "Whether the context menu can be opened" },
			};
#endif
			auto NewProp_AllowContextMenu_SetBit = [](void* Obj){ ((UMultiLineEditableText*)Obj)->AllowContextMenu = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowContextMenu = { UE4CodeGen_Private::EPropertyClass::Bool, "AllowContextMenu", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMultiLineEditableText), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_AllowContextMenu_SetBit)>::SetBit, METADATA_PARAMS(NewProp_AllowContextMenu_MetaData, ARRAY_COUNT(NewProp_AllowContextMenu_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
				{ "ToolTip", "Font color and opacity (overrides Style)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font = { UE4CodeGen_Private::EPropertyClass::Struct, "Font", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UMultiLineEditableText, Font_DEPRECATED), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(NewProp_Font_MetaData, ARRAY_COUNT(NewProp_Font_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsReadOnly_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
				{ "ToolTip", "Sets whether this text block can be modified interactively by the user" },
			};
#endif
			auto NewProp_bIsReadOnly_SetBit = [](void* Obj){ ((UMultiLineEditableText*)Obj)->bIsReadOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReadOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsReadOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMultiLineEditableText), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsReadOnly_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsReadOnly_MetaData, ARRAY_COUNT(NewProp_bIsReadOnly_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
				{ "Category", "Style" },
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
				{ "ShowOnlyInnerProperties", "" },
				{ "ToolTip", "The style" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "WidgetStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMultiLineEditableText, WidgetStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(NewProp_WidgetStyle_MetaData, ARRAY_COUNT(NewProp_WidgetStyle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HintTextDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
				{ "ToolTip", "A bindable delegate to allow logic to drive the hint text of the widget" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_HintTextDelegate = { UE4CodeGen_Private::EPropertyClass::Delegate, "HintTextDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080000, 1, nullptr, STRUCT_OFFSET(UMultiLineEditableText, HintTextDelegate), Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature, METADATA_PARAMS(NewProp_HintTextDelegate_MetaData, ARRAY_COUNT(NewProp_HintTextDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HintText_MetaData[] = {
				{ "Category", "Content" },
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
				{ "MultiLine", "true" },
				{ "ToolTip", "Hint text that appears when there is no text in the text box" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_HintText = { UE4CodeGen_Private::EPropertyClass::Text, "HintText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMultiLineEditableText, HintText), METADATA_PARAMS(NewProp_HintText_MetaData, ARRAY_COUNT(NewProp_HintText_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
				{ "Category", "Content" },
				{ "ModuleRelativePath", "Public/Components/MultiLineEditableText.h" },
				{ "MultiLine", "true" },
				{ "ToolTip", "The text content for this editable text box widget" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Text, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMultiLineEditableText, Text), METADATA_PARAMS(NewProp_Text_MetaData, ARRAY_COUNT(NewProp_Text_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnTextCommitted,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnTextChanged,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllowContextMenu,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Font,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsReadOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WidgetStyle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HintTextDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HintText,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMultiLineEditableText>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMultiLineEditableText::StaticClass,
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
	IMPLEMENT_CLASS(UMultiLineEditableText, 2143916875);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMultiLineEditableText(Z_Construct_UClass_UMultiLineEditableText, &UMultiLineEditableText::StaticClass, TEXT("/Script/UMG"), TEXT("UMultiLineEditableText"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiLineEditableText);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
