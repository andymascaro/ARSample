// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/BackgroundBlurSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBackgroundBlurSlot() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UBackgroundBlurSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBackgroundBlurSlot();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UBackgroundBlurSlot_SetHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	UMG_API UFunction* Z_Construct_UFunction_UBackgroundBlurSlot_SetPadding();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UFunction* Z_Construct_UFunction_UBackgroundBlurSlot_SetVerticalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
// End Cross Module References
	void UBackgroundBlurSlot::StaticRegisterNativesUBackgroundBlurSlot()
	{
		UClass* Class = UBackgroundBlurSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetHorizontalAlignment", (Native)&UBackgroundBlurSlot::execSetHorizontalAlignment },
			{ "SetPadding", (Native)&UBackgroundBlurSlot::execSetPadding },
			{ "SetVerticalAlignment", (Native)&UBackgroundBlurSlot::execSetVerticalAlignment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UBackgroundBlurSlot_SetHorizontalAlignment()
	{
		struct BackgroundBlurSlot_eventSetHorizontalAlignment_Parms
		{
			TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InHorizontalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "InHorizontalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BackgroundBlurSlot_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InHorizontalAlignment,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Background Blur Slot" },
				{ "ModuleRelativePath", "Public/Components/BackgroundBlurSlot.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurSlot, "SetHorizontalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BackgroundBlurSlot_eventSetHorizontalAlignment_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBackgroundBlurSlot_SetPadding()
	{
		struct BackgroundBlurSlot_eventSetPadding_Parms
		{
			FMargin InPadding;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "InPadding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BackgroundBlurSlot_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPadding,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Background Blur Slot" },
				{ "ModuleRelativePath", "Public/Components/BackgroundBlurSlot.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurSlot, "SetPadding", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BackgroundBlurSlot_eventSetPadding_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBackgroundBlurSlot_SetVerticalAlignment()
	{
		struct BackgroundBlurSlot_eventSetVerticalAlignment_Parms
		{
			TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InVerticalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "InVerticalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BackgroundBlurSlot_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InVerticalAlignment,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Background Blur Slot" },
				{ "ModuleRelativePath", "Public/Components/BackgroundBlurSlot.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurSlot, "SetVerticalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BackgroundBlurSlot_eventSetVerticalAlignment_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBackgroundBlurSlot_NoRegister()
	{
		return UBackgroundBlurSlot::StaticClass();
	}
	UClass* Z_Construct_UClass_UBackgroundBlurSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPanelSlot,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UBackgroundBlurSlot_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 3498792755
				{ &Z_Construct_UFunction_UBackgroundBlurSlot_SetPadding, "SetPadding" }, // 136393115
				{ &Z_Construct_UFunction_UBackgroundBlurSlot_SetVerticalAlignment, "SetVerticalAlignment" }, // 1527790885
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/BackgroundBlurSlot.h" },
				{ "ModuleRelativePath", "Public/Components/BackgroundBlurSlot.h" },
				{ "ToolTip", "The Slot for the UBackgroundBlurSlot, contains the widget displayed in a BackgroundBlur's single slot" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[] = {
				{ "Category", "Layout|Background Blur Slot" },
				{ "ModuleRelativePath", "Public/Components/BackgroundBlurSlot.h" },
				{ "ToolTip", "The alignment of the object vertically." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "VerticalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBackgroundBlurSlot, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(NewProp_VerticalAlignment_MetaData, ARRAY_COUNT(NewProp_VerticalAlignment_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[] = {
				{ "Category", "Layout|Background Blur Slot" },
				{ "ModuleRelativePath", "Public/Components/BackgroundBlurSlot.h" },
				{ "ToolTip", "The alignment of the object horizontally." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "HorizontalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBackgroundBlurSlot, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(NewProp_HorizontalAlignment_MetaData, ARRAY_COUNT(NewProp_HorizontalAlignment_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
				{ "Category", "Layout|Background Blur Slot" },
				{ "ModuleRelativePath", "Public/Components/BackgroundBlurSlot.h" },
				{ "ToolTip", "The padding area between the slot and the content it contains." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Padding = { UE4CodeGen_Private::EPropertyClass::Struct, "Padding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBackgroundBlurSlot, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(NewProp_Padding_MetaData, ARRAY_COUNT(NewProp_Padding_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VerticalAlignment,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HorizontalAlignment,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Padding,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBackgroundBlurSlot>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBackgroundBlurSlot::StaticClass,
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
	IMPLEMENT_CLASS(UBackgroundBlurSlot, 1880266116);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBackgroundBlurSlot(Z_Construct_UClass_UBackgroundBlurSlot, &UBackgroundBlurSlot::StaticClass, TEXT("/Script/UMG"), TEXT("UBackgroundBlurSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBackgroundBlurSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
