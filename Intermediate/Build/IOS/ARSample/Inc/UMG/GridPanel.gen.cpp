// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/GridPanel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridPanel() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UGridPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UGridPanel();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UGridPanel_AddChildToGrid();
	UMG_API UClass* Z_Construct_UClass_UGridSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
// End Cross Module References
	void UGridPanel::StaticRegisterNativesUGridPanel()
	{
		UClass* Class = UGridPanel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChildToGrid", (Native)&UGridPanel::execAddChildToGrid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UGridPanel_AddChildToGrid()
	{
		struct GridPanel_eventAddChildToGrid_Parms
		{
			UWidget* Content;
			UGridSlot* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(GridPanel_eventAddChildToGrid_Parms, ReturnValue), Z_Construct_UClass_UGridSlot_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Content = { UE4CodeGen_Private::EPropertyClass::Object, "Content", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GridPanel_eventAddChildToGrid_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(NewProp_Content_MetaData, ARRAY_COUNT(NewProp_Content_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Content,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "ModuleRelativePath", "Public/Components/GridPanel.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridPanel, "AddChildToGrid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(GridPanel_eventAddChildToGrid_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGridPanel_NoRegister()
	{
		return UGridPanel::StaticClass();
	}
	UClass* Z_Construct_UClass_UGridPanel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPanelWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UGridPanel_AddChildToGrid, "AddChildToGrid" }, // 4166377970
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/GridPanel.h" },
				{ "ModuleRelativePath", "Public/Components/GridPanel.h" },
				{ "ToolTip", "A panel that evenly divides up available space between all of its children.\n\n* Many Children" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowFill_MetaData[] = {
				{ "Category", "Fill Rules" },
				{ "ModuleRelativePath", "Public/Components/GridPanel.h" },
				{ "ToolTip", "The row fill rules" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RowFill = { UE4CodeGen_Private::EPropertyClass::Array, "RowFill", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UGridPanel, RowFill), METADATA_PARAMS(NewProp_RowFill_MetaData, ARRAY_COUNT(NewProp_RowFill_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RowFill_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "RowFill", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColumnFill_MetaData[] = {
				{ "Category", "Fill Rules" },
				{ "ModuleRelativePath", "Public/Components/GridPanel.h" },
				{ "ToolTip", "The column fill rules" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColumnFill = { UE4CodeGen_Private::EPropertyClass::Array, "ColumnFill", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UGridPanel, ColumnFill), METADATA_PARAMS(NewProp_ColumnFill_MetaData, ARRAY_COUNT(NewProp_ColumnFill_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ColumnFill_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "ColumnFill", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RowFill,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RowFill_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColumnFill,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColumnFill_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGridPanel>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGridPanel::StaticClass,
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
	IMPLEMENT_CLASS(UGridPanel, 1628981625);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGridPanel(Z_Construct_UClass_UGridPanel, &UGridPanel::StaticClass, TEXT("/Script/UMG"), TEXT("UGridPanel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridPanel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
