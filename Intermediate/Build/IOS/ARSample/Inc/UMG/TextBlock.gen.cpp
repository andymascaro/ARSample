// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/TextBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextBlock() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock();
	UMG_API UClass* Z_Construct_UClass_UTextLayoutWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UTextBlock_GetText();
	UMG_API UFunction* Z_Construct_UFunction_UTextBlock_SetColorAndOpacity();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	UMG_API UFunction* Z_Construct_UFunction_UTextBlock_SetFont();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	UMG_API UFunction* Z_Construct_UFunction_UTextBlock_SetJustification();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextJustify();
	UMG_API UFunction* Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth();
	UMG_API UFunction* Z_Construct_UFunction_UTextBlock_SetOpacity();
	UMG_API UFunction* Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UMG_API UFunction* Z_Construct_UFunction_UTextBlock_SetShadowOffset();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UFunction* Z_Construct_UFunction_UTextBlock_SetText();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetSlateColor__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature();
// End Cross Module References
	void UTextBlock::StaticRegisterNativesUTextBlock()
	{
		UClass* Class = UTextBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetText", (Native)&UTextBlock::execGetText },
			{ "SetColorAndOpacity", (Native)&UTextBlock::execSetColorAndOpacity },
			{ "SetFont", (Native)&UTextBlock::execSetFont },
			{ "SetJustification", (Native)&UTextBlock::execSetJustification },
			{ "SetMinDesiredWidth", (Native)&UTextBlock::execSetMinDesiredWidth },
			{ "SetOpacity", (Native)&UTextBlock::execSetOpacity },
			{ "SetShadowColorAndOpacity", (Native)&UTextBlock::execSetShadowColorAndOpacity },
			{ "SetShadowOffset", (Native)&UTextBlock::execSetShadowOffset },
			{ "SetText", (Native)&UTextBlock::execSetText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UTextBlock_GetText()
	{
		struct TextBlock_eventGetText_Parms
		{
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TextBlock_eventGetText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "DisplayName", "GetText (Text)" },
				{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
				{ "ToolTip", "Gets the widget text\n@return The widget text" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, "GetText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(TextBlock_eventGetText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTextBlock_SetColorAndOpacity()
	{
		struct TextBlock_eventSetColorAndOpacity_Parms
		{
			FSlateColor InColorAndOpacity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "InColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TextBlock_eventSetColorAndOpacity_Parms, InColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InColorAndOpacity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
				{ "ToolTip", "Sets the color and opacity of the text in this text block\n\n@param InColorAndOpacity             The new text color and opacity" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, "SetColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TextBlock_eventSetColorAndOpacity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTextBlock_SetFont()
	{
		struct TextBlock_eventSetFont_Parms
		{
			FSlateFontInfo InFontInfo;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFontInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "InFontInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TextBlock_eventSetFont_Parms, InFontInfo), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InFontInfo,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
				{ "ToolTip", "Dynamically set the font info for this text block\n\n@param InFontInfo THe new font info" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, "SetFont", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TextBlock_eventSetFont_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTextBlock_SetJustification()
	{
		struct TextBlock_eventSetJustification_Parms
		{
			TEnumAsByte<ETextJustify::Type> InJustification;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InJustification = { UE4CodeGen_Private::EPropertyClass::Byte, "InJustification", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TextBlock_eventSetJustification_Parms, InJustification), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InJustification,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
				{ "ToolTip", "Set the text justification for this text block\n\n@param InJustification new justification" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, "SetJustification", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TextBlock_eventSetJustification_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth()
	{
		struct TextBlock_eventSetMinDesiredWidth_Parms
		{
			float InMinDesiredWidth;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMinDesiredWidth = { UE4CodeGen_Private::EPropertyClass::Float, "InMinDesiredWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TextBlock_eventSetMinDesiredWidth_Parms, InMinDesiredWidth), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InMinDesiredWidth,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
				{ "ToolTip", "Set the minimum desired width for this text block\n\n@param InMinDesiredWidth new minimum desired width" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, "SetMinDesiredWidth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TextBlock_eventSetMinDesiredWidth_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTextBlock_SetOpacity()
	{
		struct TextBlock_eventSetOpacity_Parms
		{
			float InOpacity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InOpacity = { UE4CodeGen_Private::EPropertyClass::Float, "InOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TextBlock_eventSetOpacity_Parms, InOpacity), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InOpacity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
				{ "ToolTip", "Sets the opacity of the text in this text block\n\n@param InOpacity              The new text opacity" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, "SetOpacity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TextBlock_eventSetOpacity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity()
	{
		struct TextBlock_eventSetShadowColorAndOpacity_Parms
		{
			FLinearColor InShadowColorAndOpacity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InShadowColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "InShadowColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TextBlock_eventSetShadowColorAndOpacity_Parms, InShadowColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InShadowColorAndOpacity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
				{ "ToolTip", "Sets the color and opacity of the text drop shadow\nNote: if opacity is zero no shadow will be drawn\n\n@param InShadowColorAndOpacity               The new drop shadow color and opacity" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, "SetShadowColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(TextBlock_eventSetShadowColorAndOpacity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTextBlock_SetShadowOffset()
	{
		struct TextBlock_eventSetShadowOffset_Parms
		{
			FVector2D InShadowOffset;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InShadowOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "InShadowOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TextBlock_eventSetShadowOffset_Parms, InShadowOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InShadowOffset,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
				{ "ToolTip", "Sets the offset that the text drop shadow should be drawn at\n\n@param InShadowOffset                The new offset" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, "SetShadowOffset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(TextBlock_eventSetShadowOffset_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTextBlock_SetText()
	{
		struct TextBlock_eventSetText_Parms
		{
			FText InText;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText = { UE4CodeGen_Private::EPropertyClass::Text, "InText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TextBlock_eventSetText_Parms, InText), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InText,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "DisplayName", "SetText (Text)" },
				{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
				{ "ToolTip", "Directly sets the widget text.\nWarning: This will wipe any binding created for the Text property!\n@param InText The text to assign to the widget" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, "SetText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(TextBlock_eventSetText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTextBlock_NoRegister()
	{
		return UTextBlock::StaticClass();
	}
	UClass* Z_Construct_UClass_UTextBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UTextLayoutWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UTextBlock_GetText, "GetText" }, // 546887798
				{ &Z_Construct_UFunction_UTextBlock_SetColorAndOpacity, "SetColorAndOpacity" }, // 2028582772
				{ &Z_Construct_UFunction_UTextBlock_SetFont, "SetFont" }, // 4293658965
				{ &Z_Construct_UFunction_UTextBlock_SetJustification, "SetJustification" }, // 2644820751
				{ &Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth, "SetMinDesiredWidth" }, // 4065561529
				{ &Z_Construct_UFunction_UTextBlock_SetOpacity, "SetOpacity" }, // 246162158
				{ &Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity, "SetShadowColorAndOpacity" }, // 3675425923
				{ &Z_Construct_UFunction_UTextBlock_SetShadowOffset, "SetShadowOffset" }, // 724641644
				{ &Z_Construct_UFunction_UTextBlock_SetText, "SetText" }, // 1903072882
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Text" },
				{ "IncludePath", "Components/TextBlock.h" },
				{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
				{ "ToolTip", "A simple static text widget.\n\n* No Children\n* Text" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWrapWithInvalidationPanel_MetaData[] = {
				{ "Category", "Performance" },
				{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
				{ "ToolTip", "If true, it will automatically wrap this text widget with an invalidation panel" },
			};
#endif
			auto NewProp_bWrapWithInvalidationPanel_SetBit = [](void* Obj){ ((UTextBlock*)Obj)->bWrapWithInvalidationPanel = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWrapWithInvalidationPanel = { UE4CodeGen_Private::EPropertyClass::Bool, "bWrapWithInvalidationPanel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UTextBlock), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bWrapWithInvalidationPanel_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bWrapWithInvalidationPanel_MetaData, ARRAY_COUNT(NewProp_bWrapWithInvalidationPanel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDesiredWidth_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
				{ "ToolTip", "The minimum desired size for the text" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDesiredWidth = { UE4CodeGen_Private::EPropertyClass::Float, "MinDesiredWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UTextBlock, MinDesiredWidth), METADATA_PARAMS(NewProp_MinDesiredWidth_MetaData, ARRAY_COUNT(NewProp_MinDesiredWidth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowColorAndOpacityDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
				{ "ToolTip", "A bindable delegate for the ShadowColorAndOpacity." },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ShadowColorAndOpacityDelegate = { UE4CodeGen_Private::EPropertyClass::Delegate, "ShadowColorAndOpacityDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080000, 1, nullptr, STRUCT_OFFSET(UTextBlock, ShadowColorAndOpacityDelegate), Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature, METADATA_PARAMS(NewProp_ShadowColorAndOpacityDelegate_MetaData, ARRAY_COUNT(NewProp_ShadowColorAndOpacityDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowColorAndOpacity_MetaData[] = {
				{ "Category", "Appearance" },
				{ "DisplayName", "Shadow Color" },
				{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
				{ "ToolTip", "The color of the shadow" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "ShadowColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UTextBlock, ShadowColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_ShadowColorAndOpacity_MetaData, ARRAY_COUNT(NewProp_ShadowColorAndOpacity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowOffset_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
				{ "ToolTip", "The direction the shadow is cast" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "ShadowOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UTextBlock, ShadowOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_ShadowOffset_MetaData, ARRAY_COUNT(NewProp_ShadowOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
				{ "ToolTip", "The font to render the text with" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font = { UE4CodeGen_Private::EPropertyClass::Struct, "Font", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UTextBlock, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(NewProp_Font_MetaData, ARRAY_COUNT(NewProp_Font_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacityDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
				{ "ToolTip", "A bindable delegate for the ColorAndOpacity." },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ColorAndOpacityDelegate = { UE4CodeGen_Private::EPropertyClass::Delegate, "ColorAndOpacityDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080000, 1, nullptr, STRUCT_OFFSET(UTextBlock, ColorAndOpacityDelegate), Z_Construct_UDelegateFunction_UWidget_GetSlateColor__DelegateSignature, METADATA_PARAMS(NewProp_ColorAndOpacityDelegate_MetaData, ARRAY_COUNT(NewProp_ColorAndOpacityDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
				{ "ToolTip", "The color of the text" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UTextBlock, ColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_ColorAndOpacity_MetaData, ARRAY_COUNT(NewProp_ColorAndOpacity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
				{ "ToolTip", "A bindable delegate to allow logic to drive the text of the widget" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_TextDelegate = { UE4CodeGen_Private::EPropertyClass::Delegate, "TextDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080000, 1, nullptr, STRUCT_OFFSET(UTextBlock, TextDelegate), Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature, METADATA_PARAMS(NewProp_TextDelegate_MetaData, ARRAY_COUNT(NewProp_TextDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
				{ "Category", "Content" },
				{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
				{ "MultiLine", "true" },
				{ "ToolTip", "The text to display" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Text, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UTextBlock, Text), METADATA_PARAMS(NewProp_Text_MetaData, ARRAY_COUNT(NewProp_Text_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bWrapWithInvalidationPanel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinDesiredWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShadowColorAndOpacityDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShadowColorAndOpacity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShadowOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Font,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColorAndOpacityDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColorAndOpacity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTextBlock>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTextBlock::StaticClass,
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
	IMPLEMENT_CLASS(UTextBlock, 663742130);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextBlock(Z_Construct_UClass_UTextBlock, &UTextBlock::StaticClass, TEXT("/Script/UMG"), TEXT("UTextBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
