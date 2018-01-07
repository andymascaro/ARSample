// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/UniformGridPanel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUniformGridPanel() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UUniformGridPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUniformGridPanel();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid();
	UMG_API UClass* Z_Construct_UClass_UUniformGridSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight();
	UMG_API UFunction* Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth();
	UMG_API UFunction* Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
// End Cross Module References
	void UUniformGridPanel::StaticRegisterNativesUUniformGridPanel()
	{
		UClass* Class = UUniformGridPanel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChildToUniformGrid", (Native)&UUniformGridPanel::execAddChildToUniformGrid },
			{ "SetMinDesiredSlotHeight", (Native)&UUniformGridPanel::execSetMinDesiredSlotHeight },
			{ "SetMinDesiredSlotWidth", (Native)&UUniformGridPanel::execSetMinDesiredSlotWidth },
			{ "SetSlotPadding", (Native)&UUniformGridPanel::execSetSlotPadding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid()
	{
		struct UniformGridPanel_eventAddChildToUniformGrid_Parms
		{
			UWidget* Content;
			UUniformGridSlot* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(UniformGridPanel_eventAddChildToUniformGrid_Parms, ReturnValue), Z_Construct_UClass_UUniformGridSlot_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Content = { UE4CodeGen_Private::EPropertyClass::Object, "Content", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(UniformGridPanel_eventAddChildToUniformGrid_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(NewProp_Content_MetaData, ARRAY_COUNT(NewProp_Content_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Content,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Widget" },
				{ "ModuleRelativePath", "Public/Components/UniformGridPanel.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniformGridPanel, "AddChildToUniformGrid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UniformGridPanel_eventAddChildToUniformGrid_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight()
	{
		struct UniformGridPanel_eventSetMinDesiredSlotHeight_Parms
		{
			float InMinDesiredSlotHeight;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMinDesiredSlotHeight = { UE4CodeGen_Private::EPropertyClass::Float, "InMinDesiredSlotHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UniformGridPanel_eventSetMinDesiredSlotHeight_Parms, InMinDesiredSlotHeight), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InMinDesiredSlotHeight,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Child Layout" },
				{ "ModuleRelativePath", "Public/Components/UniformGridPanel.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniformGridPanel, "SetMinDesiredSlotHeight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UniformGridPanel_eventSetMinDesiredSlotHeight_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth()
	{
		struct UniformGridPanel_eventSetMinDesiredSlotWidth_Parms
		{
			float InMinDesiredSlotWidth;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMinDesiredSlotWidth = { UE4CodeGen_Private::EPropertyClass::Float, "InMinDesiredSlotWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UniformGridPanel_eventSetMinDesiredSlotWidth_Parms, InMinDesiredSlotWidth), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InMinDesiredSlotWidth,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Child Layout" },
				{ "ModuleRelativePath", "Public/Components/UniformGridPanel.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniformGridPanel, "SetMinDesiredSlotWidth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UniformGridPanel_eventSetMinDesiredSlotWidth_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding()
	{
		struct UniformGridPanel_eventSetSlotPadding_Parms
		{
			FMargin InSlotPadding;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSlotPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "InSlotPadding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UniformGridPanel_eventSetSlotPadding_Parms, InSlotPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSlotPadding,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Child Layout" },
				{ "ModuleRelativePath", "Public/Components/UniformGridPanel.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniformGridPanel, "SetSlotPadding", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UniformGridPanel_eventSetSlotPadding_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUniformGridPanel_NoRegister()
	{
		return UUniformGridPanel::StaticClass();
	}
	UClass* Z_Construct_UClass_UUniformGridPanel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPanelWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid, "AddChildToUniformGrid" }, // 4142395948
				{ &Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight, "SetMinDesiredSlotHeight" }, // 4260160309
				{ &Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth, "SetMinDesiredSlotWidth" }, // 3318650853
				{ &Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding, "SetSlotPadding" }, // 983430177
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/UniformGridPanel.h" },
				{ "ModuleRelativePath", "Public/Components/UniformGridPanel.h" },
				{ "ToolTip", "A panel that evenly divides up available space between all of its children." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDesiredSlotHeight_MetaData[] = {
				{ "Category", "Child Layout" },
				{ "ModuleRelativePath", "Public/Components/UniformGridPanel.h" },
				{ "ToolTip", "The minimum desired height of the slots" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDesiredSlotHeight = { UE4CodeGen_Private::EPropertyClass::Float, "MinDesiredSlotHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UUniformGridPanel, MinDesiredSlotHeight), METADATA_PARAMS(NewProp_MinDesiredSlotHeight_MetaData, ARRAY_COUNT(NewProp_MinDesiredSlotHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDesiredSlotWidth_MetaData[] = {
				{ "Category", "Child Layout" },
				{ "ModuleRelativePath", "Public/Components/UniformGridPanel.h" },
				{ "ToolTip", "The minimum desired width of the slots" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDesiredSlotWidth = { UE4CodeGen_Private::EPropertyClass::Float, "MinDesiredSlotWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UUniformGridPanel, MinDesiredSlotWidth), METADATA_PARAMS(NewProp_MinDesiredSlotWidth_MetaData, ARRAY_COUNT(NewProp_MinDesiredSlotWidth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotPadding_MetaData[] = {
				{ "Category", "Child Layout" },
				{ "ModuleRelativePath", "Public/Components/UniformGridPanel.h" },
				{ "ToolTip", "Padding given to each slot" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "SlotPadding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UUniformGridPanel, SlotPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(NewProp_SlotPadding_MetaData, ARRAY_COUNT(NewProp_SlotPadding_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinDesiredSlotHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinDesiredSlotWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SlotPadding,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UUniformGridPanel>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UUniformGridPanel::StaticClass,
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
	IMPLEMENT_CLASS(UUniformGridPanel, 3012659443);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUniformGridPanel(Z_Construct_UClass_UUniformGridPanel, &UUniformGridPanel::StaticClass, TEXT("/Script/UMG"), TEXT("UUniformGridPanel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUniformGridPanel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
