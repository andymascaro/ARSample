// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/ComboBoxString.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboBoxString() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UComboBoxString_OnOpeningEvent__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UComboBoxString();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESelectInfo();
	UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UComboBoxString_AddOption();
	UMG_API UFunction* Z_Construct_UFunction_UComboBoxString_ClearOptions();
	UMG_API UFunction* Z_Construct_UFunction_UComboBoxString_ClearSelection();
	UMG_API UFunction* Z_Construct_UFunction_UComboBoxString_FindOptionIndex();
	UMG_API UFunction* Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex();
	UMG_API UFunction* Z_Construct_UFunction_UComboBoxString_GetOptionCount();
	UMG_API UFunction* Z_Construct_UFunction_UComboBoxString_GetSelectedOption();
	UMG_API UFunction* Z_Construct_UFunction_UComboBoxString_RefreshOptions();
	UMG_API UFunction* Z_Construct_UFunction_UComboBoxString_RemoveOption();
	UMG_API UFunction* Z_Construct_UFunction_UComboBoxString_SetSelectedOption();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForString__DelegateSignature();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FComboBoxStyle();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UComboBoxString_OnOpeningEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, "OnOpeningEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature()
	{
		struct ComboBoxString_eventOnSelectionChangedEvent_Parms
		{
			FString SelectedItem;
			TEnumAsByte<ESelectInfo::Type> SelectionType;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectionType = { UE4CodeGen_Private::EPropertyClass::Byte, "SelectionType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ComboBoxString_eventOnSelectionChangedEvent_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectedItem = { UE4CodeGen_Private::EPropertyClass::Str, "SelectedItem", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ComboBoxString_eventOnSelectionChangedEvent_Parms, SelectedItem), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectionType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectedItem,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, "OnSelectionChangedEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(ComboBoxString_eventOnSelectionChangedEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UComboBoxString::StaticRegisterNativesUComboBoxString()
	{
		UClass* Class = UComboBoxString::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOption", (Native)&UComboBoxString::execAddOption },
			{ "ClearOptions", (Native)&UComboBoxString::execClearOptions },
			{ "ClearSelection", (Native)&UComboBoxString::execClearSelection },
			{ "FindOptionIndex", (Native)&UComboBoxString::execFindOptionIndex },
			{ "GetOptionAtIndex", (Native)&UComboBoxString::execGetOptionAtIndex },
			{ "GetOptionCount", (Native)&UComboBoxString::execGetOptionCount },
			{ "GetSelectedOption", (Native)&UComboBoxString::execGetSelectedOption },
			{ "RefreshOptions", (Native)&UComboBoxString::execRefreshOptions },
			{ "RemoveOption", (Native)&UComboBoxString::execRemoveOption },
			{ "SetSelectedOption", (Native)&UComboBoxString::execSetSelectedOption },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UComboBoxString_AddOption()
	{
		struct ComboBoxString_eventAddOption_Parms
		{
			FString Option;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Option = { UE4CodeGen_Private::EPropertyClass::Str, "Option", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ComboBoxString_eventAddOption_Parms, Option), METADATA_PARAMS(NewProp_Option_MetaData, ARRAY_COUNT(NewProp_Option_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Option,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ComboBox" },
				{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, "AddOption", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ComboBoxString_eventAddOption_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UComboBoxString_ClearOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ComboBox" },
				{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, "ClearOptions", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UComboBoxString_ClearSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ComboBox" },
				{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, "ClearSelection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UComboBoxString_FindOptionIndex()
	{
		struct ComboBoxString_eventFindOptionIndex_Parms
		{
			FString Option;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ComboBoxString_eventFindOptionIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Option = { UE4CodeGen_Private::EPropertyClass::Str, "Option", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ComboBoxString_eventFindOptionIndex_Parms, Option), METADATA_PARAMS(NewProp_Option_MetaData, ARRAY_COUNT(NewProp_Option_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Option,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ComboBox" },
				{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, "FindOptionIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ComboBoxString_eventFindOptionIndex_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex()
	{
		struct ComboBoxString_eventGetOptionAtIndex_Parms
		{
			int32 Index;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ComboBoxString_eventGetOptionAtIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ComboBoxString_eventGetOptionAtIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ComboBox" },
				{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, "GetOptionAtIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ComboBoxString_eventGetOptionAtIndex_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UComboBoxString_GetOptionCount()
	{
		struct ComboBoxString_eventGetOptionCount_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ComboBoxString_eventGetOptionCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ComboBox" },
				{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
				{ "ToolTip", "@return The number of options" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, "GetOptionCount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ComboBoxString_eventGetOptionCount_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UComboBoxString_GetSelectedOption()
	{
		struct ComboBoxString_eventGetSelectedOption_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ComboBoxString_eventGetSelectedOption_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ComboBox" },
				{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, "GetSelectedOption", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ComboBoxString_eventGetSelectedOption_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UComboBoxString_RefreshOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ComboBox" },
				{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
				{ "ToolTip", "Refreshes the list of options.  If you added new ones, and want to update the list even if it's\ncurrently being displayed use this." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, "RefreshOptions", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UComboBoxString_RemoveOption()
	{
		struct ComboBoxString_eventRemoveOption_Parms
		{
			FString Option;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ComboBoxString_eventRemoveOption_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ComboBoxString_eventRemoveOption_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Option = { UE4CodeGen_Private::EPropertyClass::Str, "Option", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ComboBoxString_eventRemoveOption_Parms, Option), METADATA_PARAMS(NewProp_Option_MetaData, ARRAY_COUNT(NewProp_Option_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Option,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ComboBox" },
				{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, "RemoveOption", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ComboBoxString_eventRemoveOption_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UComboBoxString_SetSelectedOption()
	{
		struct ComboBoxString_eventSetSelectedOption_Parms
		{
			FString Option;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Option = { UE4CodeGen_Private::EPropertyClass::Str, "Option", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ComboBoxString_eventSetSelectedOption_Parms, Option), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Option,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ComboBox" },
				{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, "SetSelectedOption", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ComboBoxString_eventSetSelectedOption_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UComboBoxString_NoRegister()
	{
		return UComboBoxString::StaticClass();
	}
	UClass* Z_Construct_UClass_UComboBoxString()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UComboBoxString_AddOption, "AddOption" }, // 3413036920
				{ &Z_Construct_UFunction_UComboBoxString_ClearOptions, "ClearOptions" }, // 3909113164
				{ &Z_Construct_UFunction_UComboBoxString_ClearSelection, "ClearSelection" }, // 3106196586
				{ &Z_Construct_UFunction_UComboBoxString_FindOptionIndex, "FindOptionIndex" }, // 2777878284
				{ &Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex, "GetOptionAtIndex" }, // 3940427796
				{ &Z_Construct_UFunction_UComboBoxString_GetOptionCount, "GetOptionCount" }, // 815985668
				{ &Z_Construct_UFunction_UComboBoxString_GetSelectedOption, "GetSelectedOption" }, // 3051768789
				{ &Z_Construct_UDelegateFunction_UComboBoxString_OnOpeningEvent__DelegateSignature, "OnOpeningEvent__DelegateSignature" }, // 1303358260
				{ &Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature, "OnSelectionChangedEvent__DelegateSignature" }, // 2165170632
				{ &Z_Construct_UFunction_UComboBoxString_RefreshOptions, "RefreshOptions" }, // 1288733246
				{ &Z_Construct_UFunction_UComboBoxString_RemoveOption, "RemoveOption" }, // 1606688602
				{ &Z_Construct_UFunction_UComboBoxString_SetSelectedOption, "SetSelectedOption" }, // 72962530
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "ComboBox (String)" },
				{ "IncludePath", "Components/ComboBoxString.h" },
				{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
				{ "ToolTip", "The combobox allows you to display a list of options to the user in a dropdown menu for them to select one." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnOpening_MetaData[] = {
				{ "Category", "Events" },
				{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
				{ "ToolTip", "Called when the combobox is opening" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOpening = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnOpening", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UComboBoxString, OnOpening), Z_Construct_UDelegateFunction_UComboBoxString_OnOpeningEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnOpening_MetaData, ARRAY_COUNT(NewProp_OnOpening_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSelectionChanged_MetaData[] = {
				{ "Category", "Events" },
				{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
				{ "ToolTip", "Called when a new item is selected in the combobox." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectionChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSelectionChanged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UComboBoxString, OnSelectionChanged), Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnSelectionChanged_MetaData, ARRAY_COUNT(NewProp_OnSelectionChanged_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGenerateWidgetEvent_MetaData[] = {
				{ "Category", "Events" },
				{ "IsBindableEvent", "True" },
				{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
				{ "ToolTip", "Called when the widget is needed for the item." },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnGenerateWidgetEvent = { UE4CodeGen_Private::EPropertyClass::Delegate, "OnGenerateWidgetEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080001, 1, nullptr, STRUCT_OFFSET(UComboBoxString, OnGenerateWidgetEvent), Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForString__DelegateSignature, METADATA_PARAMS(NewProp_OnGenerateWidgetEvent_MetaData, ARRAY_COUNT(NewProp_OnGenerateWidgetEvent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFocusable_MetaData[] = {
				{ "Category", "Interaction" },
				{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
			};
#endif
			auto NewProp_bIsFocusable_SetBit = [](void* Obj){ ((UComboBoxString*)Obj)->bIsFocusable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFocusable = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsFocusable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UComboBoxString), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsFocusable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsFocusable_MetaData, ARRAY_COUNT(NewProp_bIsFocusable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForegroundColor_MetaData[] = {
				{ "Category", "Style" },
				{ "DesignerRebuild", "" },
				{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
				{ "ToolTip", "The foreground color to pass through the hierarchy." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForegroundColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ForegroundColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UComboBoxString, ForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_ForegroundColor_MetaData, ARRAY_COUNT(NewProp_ForegroundColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
				{ "Category", "Style" },
				{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
				{ "ToolTip", "The default font to use in the combobox, only applies if you're not implementing OnGenerateWidgetEvent\nto factory each new entry." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font = { UE4CodeGen_Private::EPropertyClass::Struct, "Font", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UComboBoxString, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(NewProp_Font_MetaData, ARRAY_COUNT(NewProp_Font_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableGamepadNavigationMode_MetaData[] = {
				{ "Category", "Content" },
				{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
				{ "ToolTip", "When false, directional keys will change the selection. When true, ComboBox\nmust be activated and will only capture arrow input while activated." },
			};
#endif
			auto NewProp_EnableGamepadNavigationMode_SetBit = [](void* Obj){ ((UComboBoxString*)Obj)->EnableGamepadNavigationMode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableGamepadNavigationMode = { UE4CodeGen_Private::EPropertyClass::Bool, "EnableGamepadNavigationMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UComboBoxString), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_EnableGamepadNavigationMode_SetBit)>::SetBit, METADATA_PARAMS(NewProp_EnableGamepadNavigationMode_MetaData, ARRAY_COUNT(NewProp_EnableGamepadNavigationMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasDownArrow_MetaData[] = {
				{ "Category", "Content" },
				{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
				{ "ToolTip", "When false, the down arrow is not generated and it is up to the API consumer\nto make their own visual hint that this is a drop down." },
			};
#endif
			auto NewProp_HasDownArrow_SetBit = [](void* Obj){ ((UComboBoxString*)Obj)->HasDownArrow = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasDownArrow = { UE4CodeGen_Private::EPropertyClass::Bool, "HasDownArrow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UComboBoxString), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_HasDownArrow_SetBit)>::SetBit, METADATA_PARAMS(NewProp_HasDownArrow_MetaData, ARRAY_COUNT(NewProp_HasDownArrow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxListHeight_MetaData[] = {
				{ "Category", "Content" },
				{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
				{ "ToolTip", "The max height of the combobox list that opens" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxListHeight = { UE4CodeGen_Private::EPropertyClass::Float, "MaxListHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UComboBoxString, MaxListHeight), METADATA_PARAMS(NewProp_MaxListHeight_MetaData, ARRAY_COUNT(NewProp_MaxListHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentPadding_MetaData[] = {
				{ "Category", "Content" },
				{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContentPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "ContentPadding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UComboBoxString, ContentPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(NewProp_ContentPadding_MetaData, ARRAY_COUNT(NewProp_ContentPadding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemStyle_MetaData[] = {
				{ "Category", "Style" },
				{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
				{ "ToolTip", "The item row style." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "ItemStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UComboBoxString, ItemStyle), Z_Construct_UScriptStruct_FTableRowStyle, METADATA_PARAMS(NewProp_ItemStyle_MetaData, ARRAY_COUNT(NewProp_ItemStyle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
				{ "Category", "Style" },
				{ "DisplayName", "Style" },
				{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
				{ "ToolTip", "The style." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "WidgetStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UComboBoxString, WidgetStyle), Z_Construct_UScriptStruct_FComboBoxStyle, METADATA_PARAMS(NewProp_WidgetStyle_MetaData, ARRAY_COUNT(NewProp_WidgetStyle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedOption_MetaData[] = {
				{ "Category", "Content" },
				{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
				{ "ToolTip", "The item in the combobox to select by default" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectedOption = { UE4CodeGen_Private::EPropertyClass::Str, "SelectedOption", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UComboBoxString, SelectedOption), METADATA_PARAMS(NewProp_SelectedOption_MetaData, ARRAY_COUNT(NewProp_SelectedOption_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultOptions_MetaData[] = {
				{ "Category", "Content" },
				{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
				{ "ToolTip", "The default list of items to be displayed on the combobox." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultOptions = { UE4CodeGen_Private::EPropertyClass::Array, "DefaultOptions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UComboBoxString, DefaultOptions), METADATA_PARAMS(NewProp_DefaultOptions_MetaData, ARRAY_COUNT(NewProp_DefaultOptions_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultOptions_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "DefaultOptions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnOpening,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnSelectionChanged,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnGenerateWidgetEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsFocusable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForegroundColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Font,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnableGamepadNavigationMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HasDownArrow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxListHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContentPadding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemStyle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WidgetStyle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectedOption,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultOptions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultOptions_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UComboBoxString>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UComboBoxString::StaticClass,
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
	IMPLEMENT_CLASS(UComboBoxString, 2218031808);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComboBoxString(Z_Construct_UClass_UComboBoxString, &UComboBoxString::StaticClass, TEXT("/Script/UMG"), TEXT("UComboBoxString"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboBoxString);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
