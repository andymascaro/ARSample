// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/ScrollBoxSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScrollBoxSlot() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UScrollBoxSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBoxSlot();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBoxSlot_SetHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBoxSlot_SetPadding();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
// End Cross Module References
	void UScrollBoxSlot::StaticRegisterNativesUScrollBoxSlot()
	{
		UClass* Class = UScrollBoxSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetHorizontalAlignment", (Native)&UScrollBoxSlot::execSetHorizontalAlignment },
			{ "SetPadding", (Native)&UScrollBoxSlot::execSetPadding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UScrollBoxSlot_SetHorizontalAlignment()
	{
		struct ScrollBoxSlot_eventSetHorizontalAlignment_Parms
		{
			TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InHorizontalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "InHorizontalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ScrollBoxSlot_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InHorizontalAlignment,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|ScrollBox Slot" },
				{ "ModuleRelativePath", "Public/Components/ScrollBoxSlot.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBoxSlot, "SetHorizontalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ScrollBoxSlot_eventSetHorizontalAlignment_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UScrollBoxSlot_SetPadding()
	{
		struct ScrollBoxSlot_eventSetPadding_Parms
		{
			FMargin InPadding;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "InPadding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ScrollBoxSlot_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPadding,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|ScrollBox Slot" },
				{ "ModuleRelativePath", "Public/Components/ScrollBoxSlot.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBoxSlot, "SetPadding", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ScrollBoxSlot_eventSetPadding_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScrollBoxSlot_NoRegister()
	{
		return UScrollBoxSlot::StaticClass();
	}
	UClass* Z_Construct_UClass_UScrollBoxSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPanelSlot,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UScrollBoxSlot_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 1449033148
				{ &Z_Construct_UFunction_UScrollBoxSlot_SetPadding, "SetPadding" }, // 1170688728
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/ScrollBoxSlot.h" },
				{ "ModuleRelativePath", "Public/Components/ScrollBoxSlot.h" },
				{ "ToolTip", "The Slot for the UScrollBox, contains the widget that are scrollable" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[] = {
				{ "Category", "Layout|ScrollBox Slot" },
				{ "ModuleRelativePath", "Public/Components/ScrollBoxSlot.h" },
				{ "ToolTip", "The alignment of the object horizontally." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "HorizontalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UScrollBoxSlot, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(NewProp_HorizontalAlignment_MetaData, ARRAY_COUNT(NewProp_HorizontalAlignment_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
				{ "Category", "Layout|ScrollBox Slot" },
				{ "ModuleRelativePath", "Public/Components/ScrollBoxSlot.h" },
				{ "ToolTip", "The padding area between the slot and the content it contains." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Padding = { UE4CodeGen_Private::EPropertyClass::Struct, "Padding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UScrollBoxSlot, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(NewProp_Padding_MetaData, ARRAY_COUNT(NewProp_Padding_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HorizontalAlignment,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Padding,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UScrollBoxSlot>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UScrollBoxSlot::StaticClass,
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
	IMPLEMENT_CLASS(UScrollBoxSlot, 2663165520);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScrollBoxSlot(Z_Construct_UClass_UScrollBoxSlot, &UScrollBoxSlot::StaticClass, TEXT("/Script/UMG"), TEXT("UScrollBoxSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScrollBoxSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
