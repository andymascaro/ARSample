// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/WrapBoxSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWrapBoxSlot() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UWrapBoxSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWrapBoxSlot();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace();
	UMG_API UFunction* Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan();
	UMG_API UFunction* Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	UMG_API UFunction* Z_Construct_UFunction_UWrapBoxSlot_SetPadding();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UFunction* Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
// End Cross Module References
	void UWrapBoxSlot::StaticRegisterNativesUWrapBoxSlot()
	{
		UClass* Class = UWrapBoxSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetFillEmptySpace", (Native)&UWrapBoxSlot::execSetFillEmptySpace },
			{ "SetFillSpanWhenLessThan", (Native)&UWrapBoxSlot::execSetFillSpanWhenLessThan },
			{ "SetHorizontalAlignment", (Native)&UWrapBoxSlot::execSetHorizontalAlignment },
			{ "SetPadding", (Native)&UWrapBoxSlot::execSetPadding },
			{ "SetVerticalAlignment", (Native)&UWrapBoxSlot::execSetVerticalAlignment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace()
	{
		struct WrapBoxSlot_eventSetFillEmptySpace_Parms
		{
			bool InbFillEmptySpace;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_InbFillEmptySpace_SetBit = [](void* Obj){ ((WrapBoxSlot_eventSetFillEmptySpace_Parms*)Obj)->InbFillEmptySpace = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InbFillEmptySpace = { UE4CodeGen_Private::EPropertyClass::Bool, "InbFillEmptySpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WrapBoxSlot_eventSetFillEmptySpace_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_InbFillEmptySpace_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InbFillEmptySpace,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Wrap Box Slot" },
				{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrapBoxSlot, "SetFillEmptySpace", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(WrapBoxSlot_eventSetFillEmptySpace_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan()
	{
		struct WrapBoxSlot_eventSetFillSpanWhenLessThan_Parms
		{
			float InFillSpanWhenLessThan;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InFillSpanWhenLessThan = { UE4CodeGen_Private::EPropertyClass::Float, "InFillSpanWhenLessThan", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WrapBoxSlot_eventSetFillSpanWhenLessThan_Parms, InFillSpanWhenLessThan), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InFillSpanWhenLessThan,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Wrap Box Slot" },
				{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrapBoxSlot, "SetFillSpanWhenLessThan", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(WrapBoxSlot_eventSetFillSpanWhenLessThan_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment()
	{
		struct WrapBoxSlot_eventSetHorizontalAlignment_Parms
		{
			TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InHorizontalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "InHorizontalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WrapBoxSlot_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InHorizontalAlignment,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Wrap Box Slot" },
				{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrapBoxSlot, "SetHorizontalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(WrapBoxSlot_eventSetHorizontalAlignment_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWrapBoxSlot_SetPadding()
	{
		struct WrapBoxSlot_eventSetPadding_Parms
		{
			FMargin InPadding;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "InPadding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WrapBoxSlot_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPadding,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Wrap Box Slot" },
				{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrapBoxSlot, "SetPadding", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(WrapBoxSlot_eventSetPadding_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment()
	{
		struct WrapBoxSlot_eventSetVerticalAlignment_Parms
		{
			TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InVerticalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "InVerticalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WrapBoxSlot_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InVerticalAlignment,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Wrap Box Slot" },
				{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrapBoxSlot, "SetVerticalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(WrapBoxSlot_eventSetVerticalAlignment_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWrapBoxSlot_NoRegister()
	{
		return UWrapBoxSlot::StaticClass();
	}
	UClass* Z_Construct_UClass_UWrapBoxSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPanelSlot,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace, "SetFillEmptySpace" }, // 2379373048
				{ &Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan, "SetFillSpanWhenLessThan" }, // 2876024509
				{ &Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 2761189389
				{ &Z_Construct_UFunction_UWrapBoxSlot_SetPadding, "SetPadding" }, // 3887923922
				{ &Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment, "SetVerticalAlignment" }, // 668152343
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/WrapBoxSlot.h" },
				{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
				{ "ToolTip", "The Slot for the UWrapBox, contains the widget that is flowed vertically" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[] = {
				{ "Category", "Layout|Wrap Box Slot" },
				{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
				{ "ToolTip", "The alignment of the object vertically." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "VerticalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UWrapBoxSlot, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(NewProp_VerticalAlignment_MetaData, ARRAY_COUNT(NewProp_VerticalAlignment_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[] = {
				{ "Category", "Layout|Wrap Box Slot" },
				{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
				{ "ToolTip", "The alignment of the object horizontally." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "HorizontalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UWrapBoxSlot, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(NewProp_HorizontalAlignment_MetaData, ARRAY_COUNT(NewProp_HorizontalAlignment_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FillSpanWhenLessThan_MetaData[] = {
				{ "Category", "Layout|Wrap Box Slot" },
				{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
				{ "ToolTip", "If the total available space in the wrap panel drops below this threshold, this slot will attempt to fill an entire line.\nNOTE: A value of 0, denotes no filling will occur." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FillSpanWhenLessThan = { UE4CodeGen_Private::EPropertyClass::Float, "FillSpanWhenLessThan", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UWrapBoxSlot, FillSpanWhenLessThan), METADATA_PARAMS(NewProp_FillSpanWhenLessThan_MetaData, ARRAY_COUNT(NewProp_FillSpanWhenLessThan_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFillEmptySpace_MetaData[] = {
				{ "Category", "Layout|Wrap Box Slot" },
				{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
				{ "ToolTip", "Should this slot fill the remaining space on the line?" },
			};
#endif
			auto NewProp_bFillEmptySpace_SetBit = [](void* Obj){ ((UWrapBoxSlot*)Obj)->bFillEmptySpace = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFillEmptySpace = { UE4CodeGen_Private::EPropertyClass::Bool, "bFillEmptySpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UWrapBoxSlot), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFillEmptySpace_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFillEmptySpace_MetaData, ARRAY_COUNT(NewProp_bFillEmptySpace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
				{ "Category", "Layout|Wrap Box Slot" },
				{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
				{ "ToolTip", "The padding area between the slot and the content it contains." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Padding = { UE4CodeGen_Private::EPropertyClass::Struct, "Padding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UWrapBoxSlot, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(NewProp_Padding_MetaData, ARRAY_COUNT(NewProp_Padding_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VerticalAlignment,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HorizontalAlignment,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FillSpanWhenLessThan,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFillEmptySpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Padding,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UWrapBoxSlot>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UWrapBoxSlot::StaticClass,
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
	IMPLEMENT_CLASS(UWrapBoxSlot, 1644682243);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWrapBoxSlot(Z_Construct_UClass_UWrapBoxSlot, &UWrapBoxSlot::StaticClass, TEXT("/Script/UMG"), TEXT("UWrapBoxSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWrapBoxSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
