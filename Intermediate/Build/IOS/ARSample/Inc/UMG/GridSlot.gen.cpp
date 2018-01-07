// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/GridSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridSlot() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UGridSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UGridSlot();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UGridSlot_SetColumn();
	UMG_API UFunction* Z_Construct_UFunction_UGridSlot_SetColumnSpan();
	UMG_API UFunction* Z_Construct_UFunction_UGridSlot_SetHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	UMG_API UFunction* Z_Construct_UFunction_UGridSlot_SetLayer();
	UMG_API UFunction* Z_Construct_UFunction_UGridSlot_SetPadding();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UFunction* Z_Construct_UFunction_UGridSlot_SetRow();
	UMG_API UFunction* Z_Construct_UFunction_UGridSlot_SetRowSpan();
	UMG_API UFunction* Z_Construct_UFunction_UGridSlot_SetVerticalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void UGridSlot::StaticRegisterNativesUGridSlot()
	{
		UClass* Class = UGridSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetColumn", (Native)&UGridSlot::execSetColumn },
			{ "SetColumnSpan", (Native)&UGridSlot::execSetColumnSpan },
			{ "SetHorizontalAlignment", (Native)&UGridSlot::execSetHorizontalAlignment },
			{ "SetLayer", (Native)&UGridSlot::execSetLayer },
			{ "SetPadding", (Native)&UGridSlot::execSetPadding },
			{ "SetRow", (Native)&UGridSlot::execSetRow },
			{ "SetRowSpan", (Native)&UGridSlot::execSetRowSpan },
			{ "SetVerticalAlignment", (Native)&UGridSlot::execSetVerticalAlignment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UGridSlot_SetColumn()
	{
		struct GridSlot_eventSetColumn_Parms
		{
			int32 InColumn;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InColumn = { UE4CodeGen_Private::EPropertyClass::Int, "InColumn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GridSlot_eventSetColumn_Parms, InColumn), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InColumn,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Grid Slot" },
				{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
				{ "ToolTip", "Sets the column index of the slot, this determines what cell the slot is in the panel" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSlot, "SetColumn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(GridSlot_eventSetColumn_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGridSlot_SetColumnSpan()
	{
		struct GridSlot_eventSetColumnSpan_Parms
		{
			int32 InColumnSpan;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InColumnSpan = { UE4CodeGen_Private::EPropertyClass::Int, "InColumnSpan", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GridSlot_eventSetColumnSpan_Parms, InColumnSpan), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InColumnSpan,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Grid Slot" },
				{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
				{ "ToolTip", "How many columns this slot spans over" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSlot, "SetColumnSpan", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(GridSlot_eventSetColumnSpan_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGridSlot_SetHorizontalAlignment()
	{
		struct GridSlot_eventSetHorizontalAlignment_Parms
		{
			TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InHorizontalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "InHorizontalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GridSlot_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InHorizontalAlignment,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Grid Slot" },
				{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSlot, "SetHorizontalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(GridSlot_eventSetHorizontalAlignment_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGridSlot_SetLayer()
	{
		struct GridSlot_eventSetLayer_Parms
		{
			int32 InLayer;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InLayer = { UE4CodeGen_Private::EPropertyClass::Int, "InLayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GridSlot_eventSetLayer_Parms, InLayer), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InLayer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Grid Slot" },
				{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
				{ "ToolTip", "Sets positive values offset this cell to be hit-tested and drawn on top of others." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSlot, "SetLayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(GridSlot_eventSetLayer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGridSlot_SetPadding()
	{
		struct GridSlot_eventSetPadding_Parms
		{
			FMargin InPadding;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "InPadding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GridSlot_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPadding,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Border Slot" },
				{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSlot, "SetPadding", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(GridSlot_eventSetPadding_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGridSlot_SetRow()
	{
		struct GridSlot_eventSetRow_Parms
		{
			int32 InRow;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InRow = { UE4CodeGen_Private::EPropertyClass::Int, "InRow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GridSlot_eventSetRow_Parms, InRow), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InRow,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Grid Slot" },
				{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
				{ "ToolTip", "Sets the row index of the slot, this determines what cell the slot is in the panel" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSlot, "SetRow", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(GridSlot_eventSetRow_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGridSlot_SetRowSpan()
	{
		struct GridSlot_eventSetRowSpan_Parms
		{
			int32 InRowSpan;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InRowSpan = { UE4CodeGen_Private::EPropertyClass::Int, "InRowSpan", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GridSlot_eventSetRowSpan_Parms, InRowSpan), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InRowSpan,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Grid Slot" },
				{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
				{ "ToolTip", "How many rows this this slot spans over" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSlot, "SetRowSpan", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(GridSlot_eventSetRowSpan_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGridSlot_SetVerticalAlignment()
	{
		struct GridSlot_eventSetVerticalAlignment_Parms
		{
			TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InVerticalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "InVerticalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GridSlot_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InVerticalAlignment,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Grid Slot" },
				{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSlot, "SetVerticalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(GridSlot_eventSetVerticalAlignment_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGridSlot_NoRegister()
	{
		return UGridSlot::StaticClass();
	}
	UClass* Z_Construct_UClass_UGridSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPanelSlot,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UGridSlot_SetColumn, "SetColumn" }, // 1007994651
				{ &Z_Construct_UFunction_UGridSlot_SetColumnSpan, "SetColumnSpan" }, // 2137495228
				{ &Z_Construct_UFunction_UGridSlot_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 539517815
				{ &Z_Construct_UFunction_UGridSlot_SetLayer, "SetLayer" }, // 1774512123
				{ &Z_Construct_UFunction_UGridSlot_SetPadding, "SetPadding" }, // 3067679101
				{ &Z_Construct_UFunction_UGridSlot_SetRow, "SetRow" }, // 190304020
				{ &Z_Construct_UFunction_UGridSlot_SetRowSpan, "SetRowSpan" }, // 3280361514
				{ &Z_Construct_UFunction_UGridSlot_SetVerticalAlignment, "SetVerticalAlignment" }, // 4003814982
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/GridSlot.h" },
				{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
				{ "ToolTip", "A slot for UGridPanel, these slots all share the same size as the largest slot\nin the grid." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nudge_MetaData[] = {
				{ "Category", "Layout|Grid Slot" },
				{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
				{ "ToolTip", "Offset this slot's content by some amount; positive values offset to lower right" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Nudge = { UE4CodeGen_Private::EPropertyClass::Struct, "Nudge", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UGridSlot, Nudge), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_Nudge_MetaData, ARRAY_COUNT(NewProp_Nudge_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[] = {
				{ "Category", "Layout|Grid Slot" },
				{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
				{ "ToolTip", "Positive values offset this cell to be hit-tested and drawn on top of others. Default is 0; i.e. no offset." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Layer = { UE4CodeGen_Private::EPropertyClass::Int, "Layer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UGridSlot, Layer), METADATA_PARAMS(NewProp_Layer_MetaData, ARRAY_COUNT(NewProp_Layer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColumnSpan_MetaData[] = {
				{ "Category", "Layout|Grid Slot" },
				{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ColumnSpan = { UE4CodeGen_Private::EPropertyClass::Int, "ColumnSpan", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UGridSlot, ColumnSpan), METADATA_PARAMS(NewProp_ColumnSpan_MetaData, ARRAY_COUNT(NewProp_ColumnSpan_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Column_MetaData[] = {
				{ "Category", "Layout|Grid Slot" },
				{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
				{ "ToolTip", "The column index of the cell this slot is in" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Column = { UE4CodeGen_Private::EPropertyClass::Int, "Column", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UGridSlot, Column), METADATA_PARAMS(NewProp_Column_MetaData, ARRAY_COUNT(NewProp_Column_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowSpan_MetaData[] = {
				{ "Category", "Layout|Grid Slot" },
				{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RowSpan = { UE4CodeGen_Private::EPropertyClass::Int, "RowSpan", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UGridSlot, RowSpan), METADATA_PARAMS(NewProp_RowSpan_MetaData, ARRAY_COUNT(NewProp_RowSpan_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[] = {
				{ "Category", "Layout|Grid Slot" },
				{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
				{ "ToolTip", "The row index of the cell this slot is in" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Row = { UE4CodeGen_Private::EPropertyClass::Int, "Row", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UGridSlot, Row), METADATA_PARAMS(NewProp_Row_MetaData, ARRAY_COUNT(NewProp_Row_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[] = {
				{ "Category", "Layout|Grid Slot" },
				{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
				{ "ToolTip", "The alignment of the object vertically." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "VerticalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UGridSlot, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(NewProp_VerticalAlignment_MetaData, ARRAY_COUNT(NewProp_VerticalAlignment_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[] = {
				{ "Category", "Layout|Grid Slot" },
				{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
				{ "ToolTip", "The alignment of the object horizontally." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "HorizontalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UGridSlot, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(NewProp_HorizontalAlignment_MetaData, ARRAY_COUNT(NewProp_HorizontalAlignment_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
				{ "Category", "Layout|Grid Slot" },
				{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
				{ "ToolTip", "The padding area between the slot and the content it contains." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Padding = { UE4CodeGen_Private::EPropertyClass::Struct, "Padding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UGridSlot, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(NewProp_Padding_MetaData, ARRAY_COUNT(NewProp_Padding_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Nudge,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Layer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColumnSpan,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Column,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RowSpan,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Row,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VerticalAlignment,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HorizontalAlignment,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Padding,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGridSlot>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGridSlot::StaticClass,
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
	IMPLEMENT_CLASS(UGridSlot, 2191706044);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGridSlot(Z_Construct_UClass_UGridSlot, &UGridSlot::StaticClass, TEXT("/Script/UMG"), TEXT("UGridSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
