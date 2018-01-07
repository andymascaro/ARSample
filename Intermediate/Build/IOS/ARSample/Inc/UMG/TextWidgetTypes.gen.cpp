// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/TextWidgetTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextWidgetTypes() {}
// Cross Module References
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FShapedTextOptions();
	UPackage* Z_Construct_UPackage__Script_UMG();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextFlowDirection();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextShapingMethod();
	UMG_API UClass* Z_Construct_UClass_UTextLayoutWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextLayoutWidget();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextWrappingPolicy();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextJustify();
// End Cross Module References
class UScriptStruct* FShapedTextOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FShapedTextOptions_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FShapedTextOptions, Z_Construct_UPackage__Script_UMG(), TEXT("ShapedTextOptions"), sizeof(FShapedTextOptions), Get_Z_Construct_UScriptStruct_FShapedTextOptions_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FShapedTextOptions(FShapedTextOptions::StaticStruct, TEXT("/Script/UMG"), TEXT("ShapedTextOptions"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFShapedTextOptions
{
	FScriptStruct_UMG_StaticRegisterNativesFShapedTextOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ShapedTextOptions")),new UScriptStruct::TCppStructOps<FShapedTextOptions>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFShapedTextOptions;
	UScriptStruct* Z_Construct_UScriptStruct_FShapedTextOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FShapedTextOptions_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ShapedTextOptions"), sizeof(FShapedTextOptions), Get_Z_Construct_UScriptStruct_FShapedTextOptions_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
				{ "ToolTip", "Common data for all widgets that use shaped text.\nContains the common options that should be exposed for the underlying Slate widget." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShapedTextOptions>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextFlowDirection_MetaData[] = {
				{ "Category", "Localization" },
				{ "EditCondition", "bOverride_TextFlowDirection" },
				{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
				{ "ToolTip", "Which text flow direction should the text within this widget use? (unset to use the default returned by GetDefaultTextFlowDirection)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TextFlowDirection = { UE4CodeGen_Private::EPropertyClass::Enum, "TextFlowDirection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(FShapedTextOptions, TextFlowDirection), Z_Construct_UEnum_Slate_ETextFlowDirection, METADATA_PARAMS(NewProp_TextFlowDirection_MetaData, ARRAY_COUNT(NewProp_TextFlowDirection_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextFlowDirection_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextShapingMethod_MetaData[] = {
				{ "Category", "Localization" },
				{ "EditCondition", "bOverride_TextShapingMethod" },
				{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
				{ "ToolTip", "Which text shaping method should the text within this widget use? (unset to use the default returned by GetDefaultTextShapingMethod)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TextShapingMethod = { UE4CodeGen_Private::EPropertyClass::Enum, "TextShapingMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(FShapedTextOptions, TextShapingMethod), Z_Construct_UEnum_SlateCore_ETextShapingMethod, METADATA_PARAMS(NewProp_TextShapingMethod_MetaData, ARRAY_COUNT(NewProp_TextShapingMethod_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextShapingMethod_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_TextFlowDirection_MetaData[] = {
				{ "Category", "Localization" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
			};
#endif
			auto NewProp_bOverride_TextFlowDirection_SetBit = [](void* Obj){ ((FShapedTextOptions*)Obj)->bOverride_TextFlowDirection = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_TextFlowDirection = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_TextFlowDirection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FShapedTextOptions), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverride_TextFlowDirection_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverride_TextFlowDirection_MetaData, ARRAY_COUNT(NewProp_bOverride_TextFlowDirection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_TextShapingMethod_MetaData[] = {
				{ "Category", "Localization" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
			};
#endif
			auto NewProp_bOverride_TextShapingMethod_SetBit = [](void* Obj){ ((FShapedTextOptions*)Obj)->bOverride_TextShapingMethod = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_TextShapingMethod = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_TextShapingMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FShapedTextOptions), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverride_TextShapingMethod_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverride_TextShapingMethod_MetaData, ARRAY_COUNT(NewProp_bOverride_TextShapingMethod_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextFlowDirection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextFlowDirection_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextShapingMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextShapingMethod_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverride_TextFlowDirection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverride_TextShapingMethod,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ShapedTextOptions",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FShapedTextOptions),
				alignof(FShapedTextOptions),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FShapedTextOptions_CRC() { return 1414461459U; }
	void UTextLayoutWidget::StaticRegisterNativesUTextLayoutWidget()
	{
	}
	UClass* Z_Construct_UClass_UTextLayoutWidget_NoRegister()
	{
		return UTextLayoutWidget::StaticClass();
	}
	UClass* Z_Construct_UClass_UTextLayoutWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Components/TextWidgetTypes.h" },
				{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
				{ "ToolTip", "Base class for all widgets that use a text layout.\nContains the common options that should be exposed for the underlying Slate widget." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineHeightPercentage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
				{ "ToolTip", "The amount to scale each lines height by." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineHeightPercentage = { UE4CodeGen_Private::EPropertyClass::Float, "LineHeightPercentage", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c0000000015, 1, nullptr, STRUCT_OFFSET(UTextLayoutWidget, LineHeightPercentage), METADATA_PARAMS(NewProp_LineHeightPercentage_MetaData, ARRAY_COUNT(NewProp_LineHeightPercentage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Margin_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
				{ "ToolTip", "The amount of blank space left around the edges of text area." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Margin = { UE4CodeGen_Private::EPropertyClass::Struct, "Margin", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c0000000015, 1, nullptr, STRUCT_OFFSET(UTextLayoutWidget, Margin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(NewProp_Margin_MetaData, ARRAY_COUNT(NewProp_Margin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrappingPolicy_MetaData[] = {
				{ "Category", "Wrapping" },
				{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
				{ "ToolTip", "The wrapping policy to use." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrappingPolicy = { UE4CodeGen_Private::EPropertyClass::Enum, "WrappingPolicy", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c0000000015, 1, nullptr, STRUCT_OFFSET(UTextLayoutWidget, WrappingPolicy), Z_Construct_UEnum_Slate_ETextWrappingPolicy, METADATA_PARAMS(NewProp_WrappingPolicy_MetaData, ARRAY_COUNT(NewProp_WrappingPolicy_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrappingPolicy_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrapTextAt_MetaData[] = {
				{ "Category", "Wrapping" },
				{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
				{ "ToolTip", "Whether text wraps onto a new line when it's length exceeds this width; if this value is zero or negative, no wrapping occurs." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WrapTextAt = { UE4CodeGen_Private::EPropertyClass::Float, "WrapTextAt", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UTextLayoutWidget, WrapTextAt), METADATA_PARAMS(NewProp_WrapTextAt_MetaData, ARRAY_COUNT(NewProp_WrapTextAt_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoWrapText_MetaData[] = {
				{ "Category", "Wrapping" },
				{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
				{ "ToolTip", "True if we're wrapping text automatically based on the computed horizontal space for this widget." },
			};
#endif
			auto NewProp_AutoWrapText_SetBit = [](void* Obj){ ((UTextLayoutWidget*)Obj)->AutoWrapText = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoWrapText = { UE4CodeGen_Private::EPropertyClass::Bool, "AutoWrapText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UTextLayoutWidget), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_AutoWrapText_SetBit)>::SetBit, METADATA_PARAMS(NewProp_AutoWrapText_MetaData, ARRAY_COUNT(NewProp_AutoWrapText_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Justification_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
				{ "ToolTip", "How the text should be aligned with the margin." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Justification = { UE4CodeGen_Private::EPropertyClass::Byte, "Justification", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UTextLayoutWidget, Justification), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(NewProp_Justification_MetaData, ARRAY_COUNT(NewProp_Justification_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapedTextOptions_MetaData[] = {
				{ "Category", "Localization" },
				{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
				{ "ShowOnlyInnerProperties", "" },
				{ "ToolTip", "Controls how the text within this widget should be shaped." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShapedTextOptions = { UE4CodeGen_Private::EPropertyClass::Struct, "ShapedTextOptions", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c0000000015, 1, nullptr, STRUCT_OFFSET(UTextLayoutWidget, ShapedTextOptions), Z_Construct_UScriptStruct_FShapedTextOptions, METADATA_PARAMS(NewProp_ShapedTextOptions_MetaData, ARRAY_COUNT(NewProp_ShapedTextOptions_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LineHeightPercentage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Margin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WrappingPolicy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WrappingPolicy_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WrapTextAt,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoWrapText,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Justification,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShapedTextOptions,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTextLayoutWidget>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTextLayoutWidget::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00081u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UTextLayoutWidget, 1604364552);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextLayoutWidget(Z_Construct_UClass_UTextLayoutWidget, &UTextLayoutWidget::StaticClass, TEXT("/Script/UMG"), TEXT("UTextLayoutWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextLayoutWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
