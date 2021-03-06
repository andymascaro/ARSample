// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Styling/SlateTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateTypes() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ECheckBoxState();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateCheckBoxType();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EConsumeMouseWheel();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FWindowStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBorderStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBoxStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FDockTabStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FHeaderRowStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSplitterStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTableColumnHeaderStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSpinBoxStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FInlineTextImageStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FVolumeControlStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSliderStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSearchBoxStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FEditableTextBoxStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FExpandableAreaStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FProgressBarStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBarStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FEditableTextStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FHyperlinkStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FComboBoxStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateSound();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FComboButtonStyle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCheckBoxStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateTypes_NoRegister();
	SLATECORE_API UClass* Z_Construct_UClass_USlateTypes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ECheckBoxState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ECheckBoxState, Z_Construct_UPackage__Script_SlateCore(), TEXT("ECheckBoxState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECheckBoxState(ECheckBoxState_StaticEnum, TEXT("/Script/SlateCore"), TEXT("ECheckBoxState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_ECheckBoxState_CRC() { return 3618681518U; }
	UEnum* Z_Construct_UEnum_SlateCore_ECheckBoxState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECheckBoxState"), 0, Get_Z_Construct_UEnum_SlateCore_ECheckBoxState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECheckBoxState::Unchecked", (int64)ECheckBoxState::Unchecked },
				{ "ECheckBoxState::Checked", (int64)ECheckBoxState::Checked },
				{ "ECheckBoxState::Undetermined", (int64)ECheckBoxState::Undetermined },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Checked.ToolTip", "Checked" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Current state of the check box" },
				{ "Unchecked.ToolTip", "Unchecked" },
				{ "Undetermined.ToolTip", "Neither checked nor unchecked" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECheckBoxState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ECheckBoxState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESlateCheckBoxType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateCheckBoxType, Z_Construct_UPackage__Script_SlateCore(), TEXT("ESlateCheckBoxType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESlateCheckBoxType(ESlateCheckBoxType_StaticEnum, TEXT("/Script/SlateCore"), TEXT("ESlateCheckBoxType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_ESlateCheckBoxType_CRC() { return 150516831U; }
	UEnum* Z_Construct_UEnum_SlateCore_ESlateCheckBoxType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESlateCheckBoxType"), 0, Get_Z_Construct_UEnum_SlateCore_ESlateCheckBoxType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESlateCheckBoxType::CheckBox", (int64)ESlateCheckBoxType::CheckBox },
				{ "ESlateCheckBoxType::ToggleButton", (int64)ESlateCheckBoxType::ToggleButton },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CheckBox.ToolTip", "Traditional check box with check button and label (or other content)" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToggleButton.ToolTip", "Toggle button.  You provide button content (such as an image), and the user can press to toggle it." },
				{ "ToolTip", "Type of check box" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESlateCheckBoxType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ESlateCheckBoxType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EConsumeMouseWheel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EConsumeMouseWheel, Z_Construct_UPackage__Script_SlateCore(), TEXT("EConsumeMouseWheel"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EConsumeMouseWheel(EConsumeMouseWheel_StaticEnum, TEXT("/Script/SlateCore"), TEXT("EConsumeMouseWheel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_EConsumeMouseWheel_CRC() { return 1258993768U; }
	UEnum* Z_Construct_UEnum_SlateCore_EConsumeMouseWheel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EConsumeMouseWheel"), 0, Get_Z_Construct_UEnum_SlateCore_EConsumeMouseWheel_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EConsumeMouseWheel::WhenScrollingPossible", (int64)EConsumeMouseWheel::WhenScrollingPossible },
				{ "EConsumeMouseWheel::Always", (int64)EConsumeMouseWheel::Always },
				{ "EConsumeMouseWheel::Never", (int64)EConsumeMouseWheel::Never },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Always.ToolTip", "Always consume mouse wheel event even if we don't scroll at all." },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "Never.ToolTip", "Never consume the mouse wheel" },
				{ "ToolTip", "Used to determine how we should handle mouse wheel input events when someone scrolls." },
				{ "WhenScrollingPossible.ToolTip", "Only consume the mouse wheel event when we actually scroll some amount." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EConsumeMouseWheel",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EConsumeMouseWheel",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FWindowStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FWindowStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWindowStyle, Z_Construct_UPackage__Script_SlateCore(), TEXT("WindowStyle"), sizeof(FWindowStyle), Get_Z_Construct_UScriptStruct_FWindowStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWindowStyle(FWindowStyle::StaticStruct, TEXT("/Script/SlateCore"), TEXT("WindowStyle"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFWindowStyle
{
	FScriptStruct_SlateCore_StaticRegisterNativesFWindowStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WindowStyle")),new UScriptStruct::TCppStructOps<FWindowStyle>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFWindowStyle;
	UScriptStruct* Z_Construct_UScriptStruct_FWindowStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWindowStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WindowStyle"), sizeof(FWindowStyle), Get_Z_Construct_UScriptStruct_FWindowStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Represents the appearance of an SWindow" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWindowStyle>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildBackgroundBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used to draw the background of child windows" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChildBackgroundBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "ChildBackgroundBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWindowStyle, ChildBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_ChildBackgroundBrush_MetaData, ARRAY_COUNT(NewProp_ChildBackgroundBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used to draw the window background" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "BackgroundBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWindowStyle, BackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_BackgroundBrush_MetaData, ARRAY_COUNT(NewProp_BackgroundBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used to draw the window border" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BorderBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "BorderBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWindowStyle, BorderBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_BorderBrush_MetaData, ARRAY_COUNT(NewProp_BorderBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineColor_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Color used to draw the window outline" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutlineColor = { UE4CodeGen_Private::EPropertyClass::Struct, "OutlineColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWindowStyle, OutlineColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_OutlineColor_MetaData, ARRAY_COUNT(NewProp_OutlineColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used to draw the window outline" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutlineBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "OutlineBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWindowStyle, OutlineBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_OutlineBrush_MetaData, ARRAY_COUNT(NewProp_OutlineBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Color used to draw the window background" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundColor = { UE4CodeGen_Private::EPropertyClass::Struct, "BackgroundColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWindowStyle, BackgroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_BackgroundColor_MetaData, ARRAY_COUNT(NewProp_BackgroundColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlashTitleBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used to draw the window title area when the window is flashing" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FlashTitleBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "FlashTitleBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWindowStyle, FlashTitleBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_FlashTitleBrush_MetaData, ARRAY_COUNT(NewProp_FlashTitleBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InactiveTitleBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used to draw the window title area when the window is inactive" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InactiveTitleBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "InactiveTitleBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWindowStyle, InactiveTitleBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_InactiveTitleBrush_MetaData, ARRAY_COUNT(NewProp_InactiveTitleBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveTitleBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used to draw the window title area when the window is active" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveTitleBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "ActiveTitleBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWindowStyle, ActiveTitleBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_ActiveTitleBrush_MetaData, ARRAY_COUNT(NewProp_ActiveTitleBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleTextStyle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Style used to draw the window title text" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TitleTextStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "TitleTextStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWindowStyle, TitleTextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(NewProp_TitleTextStyle_MetaData, ARRAY_COUNT(NewProp_TitleTextStyle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseButtonStyle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Style used to draw the window close button" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CloseButtonStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "CloseButtonStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWindowStyle, CloseButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(NewProp_CloseButtonStyle_MetaData, ARRAY_COUNT(NewProp_CloseButtonStyle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestoreButtonStyle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Style used to draw the window restore button" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RestoreButtonStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "RestoreButtonStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWindowStyle, RestoreButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(NewProp_RestoreButtonStyle_MetaData, ARRAY_COUNT(NewProp_RestoreButtonStyle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximizeButtonStyle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Style used to draw the window maximize button" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaximizeButtonStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "MaximizeButtonStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWindowStyle, MaximizeButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(NewProp_MaximizeButtonStyle_MetaData, ARRAY_COUNT(NewProp_MaximizeButtonStyle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimizeButtonStyle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Style used to draw the window minimize button" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinimizeButtonStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "MinimizeButtonStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWindowStyle, MinimizeButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(NewProp_MinimizeButtonStyle_MetaData, ARRAY_COUNT(NewProp_MinimizeButtonStyle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChildBackgroundBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackgroundBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BorderBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutlineColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutlineBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackgroundColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FlashTitleBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InactiveTitleBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActiveTitleBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TitleTextStyle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CloseButtonStyle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RestoreButtonStyle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaximizeButtonStyle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinimizeButtonStyle,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FSlateWidgetStyle,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"WindowStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FWindowStyle),
				alignof(FWindowStyle),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWindowStyle_CRC() { return 2773059776U; }
class UScriptStruct* FScrollBorderStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FScrollBorderStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScrollBorderStyle, Z_Construct_UPackage__Script_SlateCore(), TEXT("ScrollBorderStyle"), sizeof(FScrollBorderStyle), Get_Z_Construct_UScriptStruct_FScrollBorderStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScrollBorderStyle(FScrollBorderStyle::StaticStruct, TEXT("/Script/SlateCore"), TEXT("ScrollBorderStyle"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFScrollBorderStyle
{
	FScriptStruct_SlateCore_StaticRegisterNativesFScrollBorderStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ScrollBorderStyle")),new UScriptStruct::TCppStructOps<FScrollBorderStyle>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFScrollBorderStyle;
	UScriptStruct* Z_Construct_UScriptStruct_FScrollBorderStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScrollBorderStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScrollBorderStyle"), sizeof(FScrollBorderStyle), Get_Z_Construct_UScriptStruct_FScrollBorderStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Represents the appearance of an FScrollBorderStyle" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScrollBorderStyle>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BottomShadowBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used to draw the bottom shadow of a scrollborder" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BottomShadowBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "BottomShadowBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FScrollBorderStyle, BottomShadowBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_BottomShadowBrush_MetaData, ARRAY_COUNT(NewProp_BottomShadowBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopShadowBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used to draw the top shadow of a scrollborder" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TopShadowBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "TopShadowBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FScrollBorderStyle, TopShadowBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_TopShadowBrush_MetaData, ARRAY_COUNT(NewProp_TopShadowBrush_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BottomShadowBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TopShadowBrush,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FSlateWidgetStyle,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ScrollBorderStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FScrollBorderStyle),
				alignof(FScrollBorderStyle),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScrollBorderStyle_CRC() { return 2602936394U; }
class UScriptStruct* FScrollBoxStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FScrollBoxStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScrollBoxStyle, Z_Construct_UPackage__Script_SlateCore(), TEXT("ScrollBoxStyle"), sizeof(FScrollBoxStyle), Get_Z_Construct_UScriptStruct_FScrollBoxStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScrollBoxStyle(FScrollBoxStyle::StaticStruct, TEXT("/Script/SlateCore"), TEXT("ScrollBoxStyle"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFScrollBoxStyle
{
	FScriptStruct_SlateCore_StaticRegisterNativesFScrollBoxStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ScrollBoxStyle")),new UScriptStruct::TCppStructOps<FScrollBoxStyle>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFScrollBoxStyle;
	UScriptStruct* Z_Construct_UScriptStruct_FScrollBoxStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScrollBoxStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScrollBoxStyle"), sizeof(FScrollBoxStyle), Get_Z_Construct_UScriptStruct_FScrollBoxStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Represents the appearance of an SScrollBox" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScrollBoxStyle>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightShadowBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used to draw the right shadow of a scrollbox" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightShadowBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "RightShadowBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FScrollBoxStyle, RightShadowBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_RightShadowBrush_MetaData, ARRAY_COUNT(NewProp_RightShadowBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftShadowBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used to draw the left shadow of a scrollbox" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftShadowBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "LeftShadowBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FScrollBoxStyle, LeftShadowBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_LeftShadowBrush_MetaData, ARRAY_COUNT(NewProp_LeftShadowBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BottomShadowBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used to draw the bottom shadow of a scrollbox" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BottomShadowBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "BottomShadowBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FScrollBoxStyle, BottomShadowBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_BottomShadowBrush_MetaData, ARRAY_COUNT(NewProp_BottomShadowBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopShadowBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used to draw the top shadow of a scrollbox" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TopShadowBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "TopShadowBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FScrollBoxStyle, TopShadowBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_TopShadowBrush_MetaData, ARRAY_COUNT(NewProp_TopShadowBrush_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RightShadowBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeftShadowBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BottomShadowBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TopShadowBrush,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FSlateWidgetStyle,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ScrollBoxStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FScrollBoxStyle),
				alignof(FScrollBoxStyle),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScrollBoxStyle_CRC() { return 3619791815U; }
class UScriptStruct* FDockTabStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FDockTabStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDockTabStyle, Z_Construct_UPackage__Script_SlateCore(), TEXT("DockTabStyle"), sizeof(FDockTabStyle), Get_Z_Construct_UScriptStruct_FDockTabStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDockTabStyle(FDockTabStyle::StaticStruct, TEXT("/Script/SlateCore"), TEXT("DockTabStyle"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFDockTabStyle
{
	FScriptStruct_SlateCore_StaticRegisterNativesFDockTabStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DockTabStyle")),new UScriptStruct::TCppStructOps<FDockTabStyle>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFDockTabStyle;
	UScriptStruct* Z_Construct_UScriptStruct_FDockTabStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDockTabStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DockTabStyle"), sizeof(FDockTabStyle), Get_Z_Construct_UScriptStruct_FDockTabStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Represents the appearance of an SDockTab" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDockTabStyle>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlashColor_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Color used when flashing this tab" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FlashColor = { UE4CodeGen_Private::EPropertyClass::Struct, "FlashColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FDockTabStyle, FlashColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_FlashColor_MetaData, ARRAY_COUNT(NewProp_FlashColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapWidth_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "The width that this tab will overlap with side-by-side tabs" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverlapWidth = { UE4CodeGen_Private::EPropertyClass::Float, "OverlapWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FDockTabStyle, OverlapWidth), METADATA_PARAMS(NewProp_OverlapWidth_MetaData, ARRAY_COUNT(NewProp_OverlapWidth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabPadding_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Padding used around this tab" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TabPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "TabPadding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FDockTabStyle, TabPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(NewProp_TabPadding_MetaData, ARRAY_COUNT(NewProp_TabPadding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabWellBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used by the SDockingTabStack to draw the content associated with this tab; Documents, Apps, and Tool Panels have different backgrounds" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TabWellBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "TabWellBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FDockTabStyle, TabWellBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_TabWellBrush_MetaData, ARRAY_COUNT(NewProp_TabWellBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentAreaBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used by the SDockingTabStack to draw the content associated with this tab; Documents, Apps, and Tool Panels have different backgrounds" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContentAreaBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "ContentAreaBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FDockTabStyle, ContentAreaBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_ContentAreaBrush_MetaData, ARRAY_COUNT(NewProp_ContentAreaBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoveredBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used when this tab is hovered over" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoveredBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "HoveredBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FDockTabStyle, HoveredBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_HoveredBrush_MetaData, ARRAY_COUNT(NewProp_HoveredBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForegroundBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used when this tab is in the foreground" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForegroundBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "ForegroundBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FDockTabStyle, ForegroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_ForegroundBrush_MetaData, ARRAY_COUNT(NewProp_ForegroundBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorOverlayIconBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used to overlay a given color onto this tab" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorOverlayIconBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorOverlayIconBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FDockTabStyle, ColorOverlayIconBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_ColorOverlayIconBrush_MetaData, ARRAY_COUNT(NewProp_ColorOverlayIconBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorOverlayTabBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used to overlay a given color onto this tab" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorOverlayTabBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorOverlayTabBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FDockTabStyle, ColorOverlayTabBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_ColorOverlayTabBrush_MetaData, ARRAY_COUNT(NewProp_ColorOverlayTabBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used when this tab is in its active state" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "ActiveBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FDockTabStyle, ActiveBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_ActiveBrush_MetaData, ARRAY_COUNT(NewProp_ActiveBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used when this tab is in its normal state" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FDockTabStyle, NormalBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_NormalBrush_MetaData, ARRAY_COUNT(NewProp_NormalBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseButtonStyle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Style used for the close button" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CloseButtonStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "CloseButtonStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FDockTabStyle, CloseButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(NewProp_CloseButtonStyle_MetaData, ARRAY_COUNT(NewProp_CloseButtonStyle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FlashColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverlapWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TabPadding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TabWellBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContentAreaBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HoveredBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForegroundBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColorOverlayIconBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColorOverlayTabBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActiveBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NormalBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CloseButtonStyle,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FSlateWidgetStyle,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"DockTabStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FDockTabStyle),
				alignof(FDockTabStyle),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDockTabStyle_CRC() { return 124694928U; }
class UScriptStruct* FHeaderRowStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FHeaderRowStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHeaderRowStyle, Z_Construct_UPackage__Script_SlateCore(), TEXT("HeaderRowStyle"), sizeof(FHeaderRowStyle), Get_Z_Construct_UScriptStruct_FHeaderRowStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHeaderRowStyle(FHeaderRowStyle::StaticStruct, TEXT("/Script/SlateCore"), TEXT("HeaderRowStyle"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFHeaderRowStyle
{
	FScriptStruct_SlateCore_StaticRegisterNativesFHeaderRowStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HeaderRowStyle")),new UScriptStruct::TCppStructOps<FHeaderRowStyle>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFHeaderRowStyle;
	UScriptStruct* Z_Construct_UScriptStruct_FHeaderRowStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHeaderRowStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HeaderRowStyle"), sizeof(FHeaderRowStyle), Get_Z_Construct_UScriptStruct_FHeaderRowStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Represents the appearance of an SHeaderRow" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHeaderRowStyle>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForegroundColor_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Color used to draw the header row foreground" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForegroundColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ForegroundColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FHeaderRowStyle, ForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_ForegroundColor_MetaData, ARRAY_COUNT(NewProp_ForegroundColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used to draw the header row background" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "BackgroundBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FHeaderRowStyle, BackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_BackgroundBrush_MetaData, ARRAY_COUNT(NewProp_BackgroundBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColumnSplitterStyle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Style of the splitter used between the columns" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColumnSplitterStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "ColumnSplitterStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FHeaderRowStyle, ColumnSplitterStyle), Z_Construct_UScriptStruct_FSplitterStyle, METADATA_PARAMS(NewProp_ColumnSplitterStyle_MetaData, ARRAY_COUNT(NewProp_ColumnSplitterStyle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastColumnStyle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Style of the last header row column" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastColumnStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "LastColumnStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FHeaderRowStyle, LastColumnStyle), Z_Construct_UScriptStruct_FTableColumnHeaderStyle, METADATA_PARAMS(NewProp_LastColumnStyle_MetaData, ARRAY_COUNT(NewProp_LastColumnStyle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColumnStyle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Style of the normal header row columns" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColumnStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "ColumnStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FHeaderRowStyle, ColumnStyle), Z_Construct_UScriptStruct_FTableColumnHeaderStyle, METADATA_PARAMS(NewProp_ColumnStyle_MetaData, ARRAY_COUNT(NewProp_ColumnStyle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForegroundColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackgroundBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColumnSplitterStyle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastColumnStyle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColumnStyle,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FSlateWidgetStyle,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"HeaderRowStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FHeaderRowStyle),
				alignof(FHeaderRowStyle),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHeaderRowStyle_CRC() { return 3524718557U; }
class UScriptStruct* FTableColumnHeaderStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FTableColumnHeaderStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTableColumnHeaderStyle, Z_Construct_UPackage__Script_SlateCore(), TEXT("TableColumnHeaderStyle"), sizeof(FTableColumnHeaderStyle), Get_Z_Construct_UScriptStruct_FTableColumnHeaderStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTableColumnHeaderStyle(FTableColumnHeaderStyle::StaticStruct, TEXT("/Script/SlateCore"), TEXT("TableColumnHeaderStyle"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFTableColumnHeaderStyle
{
	FScriptStruct_SlateCore_StaticRegisterNativesFTableColumnHeaderStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TableColumnHeaderStyle")),new UScriptStruct::TCppStructOps<FTableColumnHeaderStyle>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFTableColumnHeaderStyle;
	UScriptStruct* Z_Construct_UScriptStruct_FTableColumnHeaderStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTableColumnHeaderStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TableColumnHeaderStyle"), sizeof(FTableColumnHeaderStyle), Get_Z_Construct_UScriptStruct_FTableColumnHeaderStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Represents the appearance of an STableColumnHeader" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTableColumnHeaderStyle>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuDropdownHoveredBorderBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used to draw the menu drop-down border in its hovered state" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MenuDropdownHoveredBorderBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "MenuDropdownHoveredBorderBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTableColumnHeaderStyle, MenuDropdownHoveredBorderBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_MenuDropdownHoveredBorderBrush_MetaData, ARRAY_COUNT(NewProp_MenuDropdownHoveredBorderBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuDropdownNormalBorderBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used to draw the menu drop-down border in its normal state" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MenuDropdownNormalBorderBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "MenuDropdownNormalBorderBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTableColumnHeaderStyle, MenuDropdownNormalBorderBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_MenuDropdownNormalBorderBrush_MetaData, ARRAY_COUNT(NewProp_MenuDropdownNormalBorderBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuDropdownImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Image used for the menu drop-down button" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MenuDropdownImage = { UE4CodeGen_Private::EPropertyClass::Struct, "MenuDropdownImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTableColumnHeaderStyle, MenuDropdownImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_MenuDropdownImage_MetaData, ARRAY_COUNT(NewProp_MenuDropdownImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoveredBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used to draw the header in its hovered state" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoveredBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "HoveredBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTableColumnHeaderStyle, HoveredBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_HoveredBrush_MetaData, ARRAY_COUNT(NewProp_HoveredBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used to draw the header in its normal state" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTableColumnHeaderStyle, NormalBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_NormalBrush_MetaData, ARRAY_COUNT(NewProp_NormalBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortSecondaryDescendingImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Image used when a column is secondarily sorted in descending order" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SortSecondaryDescendingImage = { UE4CodeGen_Private::EPropertyClass::Struct, "SortSecondaryDescendingImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTableColumnHeaderStyle, SortSecondaryDescendingImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_SortSecondaryDescendingImage_MetaData, ARRAY_COUNT(NewProp_SortSecondaryDescendingImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortSecondaryAscendingImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Image used when a column is secondarily sorted in ascending order" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SortSecondaryAscendingImage = { UE4CodeGen_Private::EPropertyClass::Struct, "SortSecondaryAscendingImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTableColumnHeaderStyle, SortSecondaryAscendingImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_SortSecondaryAscendingImage_MetaData, ARRAY_COUNT(NewProp_SortSecondaryAscendingImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortPrimaryDescendingImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Image used when a column is primarily sorted in descending order" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SortPrimaryDescendingImage = { UE4CodeGen_Private::EPropertyClass::Struct, "SortPrimaryDescendingImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTableColumnHeaderStyle, SortPrimaryDescendingImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_SortPrimaryDescendingImage_MetaData, ARRAY_COUNT(NewProp_SortPrimaryDescendingImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortPrimaryAscendingImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Image used when a column is primarily sorted in ascending order" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SortPrimaryAscendingImage = { UE4CodeGen_Private::EPropertyClass::Struct, "SortPrimaryAscendingImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTableColumnHeaderStyle, SortPrimaryAscendingImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_SortPrimaryAscendingImage_MetaData, ARRAY_COUNT(NewProp_SortPrimaryAscendingImage_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MenuDropdownHoveredBorderBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MenuDropdownNormalBorderBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MenuDropdownImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HoveredBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NormalBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SortSecondaryDescendingImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SortSecondaryAscendingImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SortPrimaryDescendingImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SortPrimaryAscendingImage,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FSlateWidgetStyle,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TableColumnHeaderStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FTableColumnHeaderStyle),
				alignof(FTableColumnHeaderStyle),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTableColumnHeaderStyle_CRC() { return 519722844U; }
class UScriptStruct* FTableRowStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FTableRowStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTableRowStyle, Z_Construct_UPackage__Script_SlateCore(), TEXT("TableRowStyle"), sizeof(FTableRowStyle), Get_Z_Construct_UScriptStruct_FTableRowStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTableRowStyle(FTableRowStyle::StaticStruct, TEXT("/Script/SlateCore"), TEXT("TableRowStyle"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFTableRowStyle
{
	FScriptStruct_SlateCore_StaticRegisterNativesFTableRowStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TableRowStyle")),new UScriptStruct::TCppStructOps<FTableRowStyle>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFTableRowStyle;
	UScriptStruct* Z_Construct_UScriptStruct_FTableRowStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTableRowStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TableRowStyle"), sizeof(FTableRowStyle), Get_Z_Construct_UScriptStruct_FTableRowStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Represents the appearance of an STableRow" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTableRowStyle>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropIndicator_Below_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used to provide feedback that a user can drop below the hovered row." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DropIndicator_Below = { UE4CodeGen_Private::EPropertyClass::Struct, "DropIndicator_Below", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTableRowStyle, DropIndicator_Below), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_DropIndicator_Below_MetaData, ARRAY_COUNT(NewProp_DropIndicator_Below_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropIndicator_Onto_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used to provide feedback that a user can drop onto the hovered row." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DropIndicator_Onto = { UE4CodeGen_Private::EPropertyClass::Struct, "DropIndicator_Onto", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTableRowStyle, DropIndicator_Onto), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_DropIndicator_Onto_MetaData, ARRAY_COUNT(NewProp_DropIndicator_Onto_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropIndicator_Above_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used to provide feedback that a user can drop above the hovered row." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DropIndicator_Above = { UE4CodeGen_Private::EPropertyClass::Struct, "DropIndicator_Above", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTableRowStyle, DropIndicator_Above), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_DropIndicator_Above_MetaData, ARRAY_COUNT(NewProp_DropIndicator_Above_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedTextColor_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Text color used for the selected row" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectedTextColor = { UE4CodeGen_Private::EPropertyClass::Struct, "SelectedTextColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTableRowStyle, SelectedTextColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_SelectedTextColor_MetaData, ARRAY_COUNT(NewProp_SelectedTextColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Text color used for all rows" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor = { UE4CodeGen_Private::EPropertyClass::Struct, "TextColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTableRowStyle, TextColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_TextColor_MetaData, ARRAY_COUNT(NewProp_TextColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OddRowBackgroundBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush to used when an odd row is in its normal state" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OddRowBackgroundBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "OddRowBackgroundBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTableRowStyle, OddRowBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_OddRowBackgroundBrush_MetaData, ARRAY_COUNT(NewProp_OddRowBackgroundBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OddRowBackgroundHoveredBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used when an odd row is hovered" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OddRowBackgroundHoveredBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "OddRowBackgroundHoveredBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTableRowStyle, OddRowBackgroundHoveredBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_OddRowBackgroundHoveredBrush_MetaData, ARRAY_COUNT(NewProp_OddRowBackgroundHoveredBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvenRowBackgroundBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used when an even row is in its normal state" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EvenRowBackgroundBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "EvenRowBackgroundBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTableRowStyle, EvenRowBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_EvenRowBackgroundBrush_MetaData, ARRAY_COUNT(NewProp_EvenRowBackgroundBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvenRowBackgroundHoveredBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used when an even row is hovered" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EvenRowBackgroundHoveredBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "EvenRowBackgroundHoveredBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTableRowStyle, EvenRowBackgroundHoveredBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_EvenRowBackgroundHoveredBrush_MetaData, ARRAY_COUNT(NewProp_EvenRowBackgroundHoveredBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InactiveBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used when a selected row is inactive" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InactiveBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "InactiveBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTableRowStyle, InactiveBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_InactiveBrush_MetaData, ARRAY_COUNT(NewProp_InactiveBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InactiveHoveredBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used when a selected row is inactive and hovered" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InactiveHoveredBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "InactiveHoveredBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTableRowStyle, InactiveHoveredBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_InactiveHoveredBrush_MetaData, ARRAY_COUNT(NewProp_InactiveHoveredBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used when a selected row is active" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "ActiveBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTableRowStyle, ActiveBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_ActiveBrush_MetaData, ARRAY_COUNT(NewProp_ActiveBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveHoveredBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used when a selected row is active and hovered" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveHoveredBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "ActiveHoveredBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTableRowStyle, ActiveHoveredBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_ActiveHoveredBrush_MetaData, ARRAY_COUNT(NewProp_ActiveHoveredBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectorFocusedBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used as a selector when a row is focused" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectorFocusedBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "SelectorFocusedBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTableRowStyle, SelectorFocusedBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_SelectorFocusedBrush_MetaData, ARRAY_COUNT(NewProp_SelectorFocusedBrush_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DropIndicator_Below,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DropIndicator_Onto,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DropIndicator_Above,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectedTextColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OddRowBackgroundBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OddRowBackgroundHoveredBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EvenRowBackgroundBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EvenRowBackgroundHoveredBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InactiveBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InactiveHoveredBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActiveBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActiveHoveredBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectorFocusedBrush,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FSlateWidgetStyle,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TableRowStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FTableRowStyle),
				alignof(FTableRowStyle),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTableRowStyle_CRC() { return 235796979U; }
class UScriptStruct* FSplitterStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FSplitterStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSplitterStyle, Z_Construct_UPackage__Script_SlateCore(), TEXT("SplitterStyle"), sizeof(FSplitterStyle), Get_Z_Construct_UScriptStruct_FSplitterStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSplitterStyle(FSplitterStyle::StaticStruct, TEXT("/Script/SlateCore"), TEXT("SplitterStyle"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFSplitterStyle
{
	FScriptStruct_SlateCore_StaticRegisterNativesFSplitterStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SplitterStyle")),new UScriptStruct::TCppStructOps<FSplitterStyle>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFSplitterStyle;
	UScriptStruct* Z_Construct_UScriptStruct_FSplitterStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSplitterStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SplitterStyle"), sizeof(FSplitterStyle), Get_Z_Construct_UScriptStruct_FSplitterStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Represents the appearance of an SSplitter" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSplitterStyle>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandleHighlightBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used to draw the handle in its highlight state" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandleHighlightBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "HandleHighlightBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSplitterStyle, HandleHighlightBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_HandleHighlightBrush_MetaData, ARRAY_COUNT(NewProp_HandleHighlightBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandleNormalBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used to draw the handle in its normal state" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandleNormalBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "HandleNormalBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSplitterStyle, HandleNormalBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_HandleNormalBrush_MetaData, ARRAY_COUNT(NewProp_HandleNormalBrush_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HandleHighlightBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HandleNormalBrush,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FSlateWidgetStyle,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SplitterStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FSplitterStyle),
				alignof(FSplitterStyle),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSplitterStyle_CRC() { return 3892415129U; }
class UScriptStruct* FSpinBoxStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FSpinBoxStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpinBoxStyle, Z_Construct_UPackage__Script_SlateCore(), TEXT("SpinBoxStyle"), sizeof(FSpinBoxStyle), Get_Z_Construct_UScriptStruct_FSpinBoxStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpinBoxStyle(FSpinBoxStyle::StaticStruct, TEXT("/Script/SlateCore"), TEXT("SpinBoxStyle"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFSpinBoxStyle
{
	FScriptStruct_SlateCore_StaticRegisterNativesFSpinBoxStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpinBoxStyle")),new UScriptStruct::TCppStructOps<FSpinBoxStyle>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFSpinBoxStyle;
	UScriptStruct* Z_Construct_UScriptStruct_FSpinBoxStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpinBoxStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpinBoxStyle"), sizeof(FSpinBoxStyle), Get_Z_Construct_UScriptStruct_FSpinBoxStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Represents the appearance of an SSpinBox" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpinBoxStyle>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextPadding_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Padding to add around the spinbox and its text" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "TextPadding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSpinBoxStyle, TextPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(NewProp_TextPadding_MetaData, ARRAY_COUNT(NewProp_TextPadding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForegroundColor_MetaData[] = {
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Color used to draw the spinbox foreground elements" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForegroundColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ForegroundColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSpinBoxStyle, ForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_ForegroundColor_MetaData, ARRAY_COUNT(NewProp_ForegroundColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowsImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Image used to draw the spinbox arrows" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArrowsImage = { UE4CodeGen_Private::EPropertyClass::Struct, "ArrowsImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSpinBoxStyle, ArrowsImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_ArrowsImage_MetaData, ARRAY_COUNT(NewProp_ArrowsImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InactiveFillBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used to fill the spinbox when it's inactive" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InactiveFillBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "InactiveFillBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSpinBoxStyle, InactiveFillBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_InactiveFillBrush_MetaData, ARRAY_COUNT(NewProp_InactiveFillBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveFillBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used to fill the spinbox when it's active" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveFillBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "ActiveFillBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSpinBoxStyle, ActiveFillBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_ActiveFillBrush_MetaData, ARRAY_COUNT(NewProp_ActiveFillBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoveredBackgroundBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used to draw the background of the spinbox when it's hovered over" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoveredBackgroundBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "HoveredBackgroundBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSpinBoxStyle, HoveredBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_HoveredBackgroundBrush_MetaData, ARRAY_COUNT(NewProp_HoveredBackgroundBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush used to draw the background of the spinbox" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "BackgroundBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSpinBoxStyle, BackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_BackgroundBrush_MetaData, ARRAY_COUNT(NewProp_BackgroundBrush_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextPadding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForegroundColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArrowsImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InactiveFillBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActiveFillBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HoveredBackgroundBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackgroundBrush,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FSlateWidgetStyle,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SpinBoxStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FSpinBoxStyle),
				alignof(FSpinBoxStyle),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpinBoxStyle_CRC() { return 2454475858U; }
class UScriptStruct* FInlineTextImageStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FInlineTextImageStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInlineTextImageStyle, Z_Construct_UPackage__Script_SlateCore(), TEXT("InlineTextImageStyle"), sizeof(FInlineTextImageStyle), Get_Z_Construct_UScriptStruct_FInlineTextImageStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInlineTextImageStyle(FInlineTextImageStyle::StaticStruct, TEXT("/Script/SlateCore"), TEXT("InlineTextImageStyle"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFInlineTextImageStyle
{
	FScriptStruct_SlateCore_StaticRegisterNativesFInlineTextImageStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InlineTextImageStyle")),new UScriptStruct::TCppStructOps<FInlineTextImageStyle>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFInlineTextImageStyle;
	UScriptStruct* Z_Construct_UScriptStruct_FInlineTextImageStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInlineTextImageStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InlineTextImageStyle"), sizeof(FInlineTextImageStyle), Get_Z_Construct_UScriptStruct_FInlineTextImageStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Represents the appearance of an inline image used by rich text" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInlineTextImageStyle>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Baseline_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "The offset from the bottom of the image height to the baseline." },
			};
#endif
			static const UE4CodeGen_Private::FInt16PropertyParams NewProp_Baseline = { UE4CodeGen_Private::EPropertyClass::Int16, "Baseline", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FInlineTextImageStyle, Baseline), METADATA_PARAMS(NewProp_Baseline_MetaData, ARRAY_COUNT(NewProp_Baseline_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Image to use when the slider thumb is in its normal state" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Image = { UE4CodeGen_Private::EPropertyClass::Struct, "Image", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FInlineTextImageStyle, Image), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_Image_MetaData, ARRAY_COUNT(NewProp_Image_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Baseline,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Image,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FSlateWidgetStyle,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"InlineTextImageStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FInlineTextImageStyle),
				alignof(FInlineTextImageStyle),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInlineTextImageStyle_CRC() { return 2941146545U; }
class UScriptStruct* FVolumeControlStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FVolumeControlStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVolumeControlStyle, Z_Construct_UPackage__Script_SlateCore(), TEXT("VolumeControlStyle"), sizeof(FVolumeControlStyle), Get_Z_Construct_UScriptStruct_FVolumeControlStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVolumeControlStyle(FVolumeControlStyle::StaticStruct, TEXT("/Script/SlateCore"), TEXT("VolumeControlStyle"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFVolumeControlStyle
{
	FScriptStruct_SlateCore_StaticRegisterNativesFVolumeControlStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VolumeControlStyle")),new UScriptStruct::TCppStructOps<FVolumeControlStyle>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFVolumeControlStyle;
	UScriptStruct* Z_Construct_UScriptStruct_FVolumeControlStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVolumeControlStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VolumeControlStyle"), sizeof(FVolumeControlStyle), Get_Z_Construct_UScriptStruct_FVolumeControlStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Represents the appearance of an SVolumeControl" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVolumeControlStyle>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MutedImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Image to use when the volume is muted" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MutedImage = { UE4CodeGen_Private::EPropertyClass::Struct, "MutedImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FVolumeControlStyle, MutedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_MutedImage_MetaData, ARRAY_COUNT(NewProp_MutedImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoVolumeImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Image to use when the volume is set to off" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NoVolumeImage = { UE4CodeGen_Private::EPropertyClass::Struct, "NoVolumeImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FVolumeControlStyle, NoVolumeImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_NoVolumeImage_MetaData, ARRAY_COUNT(NewProp_NoVolumeImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowVolumeImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Image to use when the volume is set to low" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LowVolumeImage = { UE4CodeGen_Private::EPropertyClass::Struct, "LowVolumeImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FVolumeControlStyle, LowVolumeImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_LowVolumeImage_MetaData, ARRAY_COUNT(NewProp_LowVolumeImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MidVolumeImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Image to use when the volume is set to mid-range" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MidVolumeImage = { UE4CodeGen_Private::EPropertyClass::Struct, "MidVolumeImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FVolumeControlStyle, MidVolumeImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_MidVolumeImage_MetaData, ARRAY_COUNT(NewProp_MidVolumeImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighVolumeImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Image to use when the volume is set to high" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HighVolumeImage = { UE4CodeGen_Private::EPropertyClass::Struct, "HighVolumeImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FVolumeControlStyle, HighVolumeImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_HighVolumeImage_MetaData, ARRAY_COUNT(NewProp_HighVolumeImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SliderStyle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "The style of the volume control slider" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SliderStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "SliderStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FVolumeControlStyle, SliderStyle), Z_Construct_UScriptStruct_FSliderStyle, METADATA_PARAMS(NewProp_SliderStyle_MetaData, ARRAY_COUNT(NewProp_SliderStyle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MutedImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NoVolumeImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LowVolumeImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MidVolumeImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HighVolumeImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SliderStyle,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FSlateWidgetStyle,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"VolumeControlStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FVolumeControlStyle),
				alignof(FVolumeControlStyle),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVolumeControlStyle_CRC() { return 2190086257U; }
class UScriptStruct* FSliderStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FSliderStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSliderStyle, Z_Construct_UPackage__Script_SlateCore(), TEXT("SliderStyle"), sizeof(FSliderStyle), Get_Z_Construct_UScriptStruct_FSliderStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSliderStyle(FSliderStyle::StaticStruct, TEXT("/Script/SlateCore"), TEXT("SliderStyle"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFSliderStyle
{
	FScriptStruct_SlateCore_StaticRegisterNativesFSliderStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SliderStyle")),new UScriptStruct::TCppStructOps<FSliderStyle>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFSliderStyle;
	UScriptStruct* Z_Construct_UScriptStruct_FSliderStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSliderStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SliderStyle"), sizeof(FSliderStyle), Get_Z_Construct_UScriptStruct_FSliderStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Represents the appearance of an SSlider" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSliderStyle>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarThickness_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BarThickness = { UE4CodeGen_Private::EPropertyClass::Float, "BarThickness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSliderStyle, BarThickness), METADATA_PARAMS(NewProp_BarThickness_MetaData, ARRAY_COUNT(NewProp_BarThickness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisabledThumbImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Image to use when the slider thumb is in its disabled state" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisabledThumbImage = { UE4CodeGen_Private::EPropertyClass::Struct, "DisabledThumbImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSliderStyle, DisabledThumbImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_DisabledThumbImage_MetaData, ARRAY_COUNT(NewProp_DisabledThumbImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalThumbImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Image to use when the slider thumb is in its normal state" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalThumbImage = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalThumbImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSliderStyle, NormalThumbImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_NormalThumbImage_MetaData, ARRAY_COUNT(NewProp_NormalThumbImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisabledBarImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Image to use when the slider bar is in its disabled state" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisabledBarImage = { UE4CodeGen_Private::EPropertyClass::Struct, "DisabledBarImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSliderStyle, DisabledBarImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_DisabledBarImage_MetaData, ARRAY_COUNT(NewProp_DisabledBarImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalBarImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Image to use when the slider bar is in its normal state" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalBarImage = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalBarImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSliderStyle, NormalBarImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_NormalBarImage_MetaData, ARRAY_COUNT(NewProp_NormalBarImage_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BarThickness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DisabledThumbImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NormalThumbImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DisabledBarImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NormalBarImage,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FSlateWidgetStyle,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SliderStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FSliderStyle),
				alignof(FSliderStyle),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSliderStyle_CRC() { return 1352344832U; }
class UScriptStruct* FSearchBoxStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FSearchBoxStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSearchBoxStyle, Z_Construct_UPackage__Script_SlateCore(), TEXT("SearchBoxStyle"), sizeof(FSearchBoxStyle), Get_Z_Construct_UScriptStruct_FSearchBoxStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSearchBoxStyle(FSearchBoxStyle::StaticStruct, TEXT("/Script/SlateCore"), TEXT("SearchBoxStyle"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFSearchBoxStyle
{
	FScriptStruct_SlateCore_StaticRegisterNativesFSearchBoxStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SearchBoxStyle")),new UScriptStruct::TCppStructOps<FSearchBoxStyle>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFSearchBoxStyle;
	UScriptStruct* Z_Construct_UScriptStruct_FSearchBoxStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSearchBoxStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SearchBoxStyle"), sizeof(FSearchBoxStyle), Get_Z_Construct_UScriptStruct_FSearchBoxStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Represents the appearance of an SSearchBox" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSearchBoxStyle>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLeftAlignButtons_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "If true, buttons appear to the left of the search text" },
			};
#endif
			auto NewProp_bLeftAlignButtons_SetBit = [](void* Obj){ ((FSearchBoxStyle*)Obj)->bLeftAlignButtons = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLeftAlignButtons = { UE4CodeGen_Private::EPropertyClass::Bool, "bLeftAlignButtons", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSearchBoxStyle), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLeftAlignButtons_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLeftAlignButtons_MetaData, ARRAY_COUNT(NewProp_bLeftAlignButtons_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImagePadding_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Padding to use around the images" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImagePadding = { UE4CodeGen_Private::EPropertyClass::Struct, "ImagePadding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSearchBoxStyle, ImagePadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(NewProp_ImagePadding_MetaData, ARRAY_COUNT(NewProp_ImagePadding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Image to use for the search \"clear\" button" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClearImage = { UE4CodeGen_Private::EPropertyClass::Struct, "ClearImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSearchBoxStyle, ClearImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_ClearImage_MetaData, ARRAY_COUNT(NewProp_ClearImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlassImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Image to use for the search \"glass\"" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlassImage = { UE4CodeGen_Private::EPropertyClass::Struct, "GlassImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSearchBoxStyle, GlassImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_GlassImage_MetaData, ARRAY_COUNT(NewProp_GlassImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownArrowImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Image to use for the search \"down\" arrow" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DownArrowImage = { UE4CodeGen_Private::EPropertyClass::Struct, "DownArrowImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSearchBoxStyle, DownArrowImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_DownArrowImage_MetaData, ARRAY_COUNT(NewProp_DownArrowImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpArrowImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Image to use for the search \"up\" arrow" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpArrowImage = { UE4CodeGen_Private::EPropertyClass::Struct, "UpArrowImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSearchBoxStyle, UpArrowImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_UpArrowImage_MetaData, ARRAY_COUNT(NewProp_UpArrowImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveFontInfo_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Font to use for the text box part of the search box when a search term is entered" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveFontInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "ActiveFontInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSearchBoxStyle, ActiveFontInfo), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(NewProp_ActiveFontInfo_MetaData, ARRAY_COUNT(NewProp_ActiveFontInfo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextBoxStyle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Style to use for the text box part of the search box" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextBoxStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "TextBoxStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSearchBoxStyle, TextBoxStyle), Z_Construct_UScriptStruct_FEditableTextBoxStyle, METADATA_PARAMS(NewProp_TextBoxStyle_MetaData, ARRAY_COUNT(NewProp_TextBoxStyle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLeftAlignButtons,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImagePadding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClearImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GlassImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DownArrowImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UpArrowImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActiveFontInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextBoxStyle,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FSlateWidgetStyle,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SearchBoxStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FSearchBoxStyle),
				alignof(FSearchBoxStyle),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSearchBoxStyle_CRC() { return 390880050U; }
class UScriptStruct* FExpandableAreaStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FExpandableAreaStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExpandableAreaStyle, Z_Construct_UPackage__Script_SlateCore(), TEXT("ExpandableAreaStyle"), sizeof(FExpandableAreaStyle), Get_Z_Construct_UScriptStruct_FExpandableAreaStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExpandableAreaStyle(FExpandableAreaStyle::StaticStruct, TEXT("/Script/SlateCore"), TEXT("ExpandableAreaStyle"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFExpandableAreaStyle
{
	FScriptStruct_SlateCore_StaticRegisterNativesFExpandableAreaStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ExpandableAreaStyle")),new UScriptStruct::TCppStructOps<FExpandableAreaStyle>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFExpandableAreaStyle;
	UScriptStruct* Z_Construct_UScriptStruct_FExpandableAreaStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExpandableAreaStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExpandableAreaStyle"), sizeof(FExpandableAreaStyle), Get_Z_Construct_UScriptStruct_FExpandableAreaStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Represents the appearance of an SExpandableArea" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExpandableAreaStyle>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RolloutAnimationSeconds_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "How long the rollout animation lasts" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RolloutAnimationSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "RolloutAnimationSeconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FExpandableAreaStyle, RolloutAnimationSeconds), METADATA_PARAMS(NewProp_RolloutAnimationSeconds_MetaData, ARRAY_COUNT(NewProp_RolloutAnimationSeconds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpandedImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Image to use when the area is expanded" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpandedImage = { UE4CodeGen_Private::EPropertyClass::Struct, "ExpandedImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FExpandableAreaStyle, ExpandedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_ExpandedImage_MetaData, ARRAY_COUNT(NewProp_ExpandedImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollapsedImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Image to use when the area is collapsed" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollapsedImage = { UE4CodeGen_Private::EPropertyClass::Struct, "CollapsedImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FExpandableAreaStyle, CollapsedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_CollapsedImage_MetaData, ARRAY_COUNT(NewProp_CollapsedImage_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RolloutAnimationSeconds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExpandedImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollapsedImage,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FSlateWidgetStyle,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ExpandableAreaStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FExpandableAreaStyle),
				alignof(FExpandableAreaStyle),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExpandableAreaStyle_CRC() { return 1011486225U; }
class UScriptStruct* FProgressBarStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FProgressBarStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressBarStyle, Z_Construct_UPackage__Script_SlateCore(), TEXT("ProgressBarStyle"), sizeof(FProgressBarStyle), Get_Z_Construct_UScriptStruct_FProgressBarStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProgressBarStyle(FProgressBarStyle::StaticStruct, TEXT("/Script/SlateCore"), TEXT("ProgressBarStyle"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFProgressBarStyle
{
	FScriptStruct_SlateCore_StaticRegisterNativesFProgressBarStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProgressBarStyle")),new UScriptStruct::TCppStructOps<FProgressBarStyle>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFProgressBarStyle;
	UScriptStruct* Z_Construct_UScriptStruct_FProgressBarStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProgressBarStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProgressBarStyle"), sizeof(FProgressBarStyle), Get_Z_Construct_UScriptStruct_FProgressBarStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Represents the appearance of an SProgressBar" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressBarStyle>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarqueeImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Image to use for marquee mode" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MarqueeImage = { UE4CodeGen_Private::EPropertyClass::Struct, "MarqueeImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FProgressBarStyle, MarqueeImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_MarqueeImage_MetaData, ARRAY_COUNT(NewProp_MarqueeImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FillImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Foreground image to use for the progress bar" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FillImage = { UE4CodeGen_Private::EPropertyClass::Struct, "FillImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FProgressBarStyle, FillImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_FillImage_MetaData, ARRAY_COUNT(NewProp_FillImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Background image to use for the progress bar" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundImage = { UE4CodeGen_Private::EPropertyClass::Struct, "BackgroundImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FProgressBarStyle, BackgroundImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_BackgroundImage_MetaData, ARRAY_COUNT(NewProp_BackgroundImage_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MarqueeImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FillImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackgroundImage,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FSlateWidgetStyle,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ProgressBarStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FProgressBarStyle),
				alignof(FProgressBarStyle),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProgressBarStyle_CRC() { return 868562007U; }
class UScriptStruct* FInlineEditableTextBlockStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle, Z_Construct_UPackage__Script_SlateCore(), TEXT("InlineEditableTextBlockStyle"), sizeof(FInlineEditableTextBlockStyle), Get_Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInlineEditableTextBlockStyle(FInlineEditableTextBlockStyle::StaticStruct, TEXT("/Script/SlateCore"), TEXT("InlineEditableTextBlockStyle"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFInlineEditableTextBlockStyle
{
	FScriptStruct_SlateCore_StaticRegisterNativesFInlineEditableTextBlockStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InlineEditableTextBlockStyle")),new UScriptStruct::TCppStructOps<FInlineEditableTextBlockStyle>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFInlineEditableTextBlockStyle;
	UScriptStruct* Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InlineEditableTextBlockStyle"), sizeof(FInlineEditableTextBlockStyle), Get_Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Represents the appearance of an SInlineEditableTextBlock" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInlineEditableTextBlockStyle>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextStyle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "The style of the text block, which dictates the font, color, and shadow options. Style overrides all other properties!" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "TextStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInlineEditableTextBlockStyle, TextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(NewProp_TextStyle_MetaData, ARRAY_COUNT(NewProp_TextStyle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditableTextBoxStyle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "The style of the editable text box, which dictates the font, color, and shadow options." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditableTextBoxStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "EditableTextBoxStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInlineEditableTextBlockStyle, EditableTextBoxStyle), Z_Construct_UScriptStruct_FEditableTextBoxStyle, METADATA_PARAMS(NewProp_EditableTextBoxStyle_MetaData, ARRAY_COUNT(NewProp_EditableTextBoxStyle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextStyle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditableTextBoxStyle,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FSlateWidgetStyle,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"InlineEditableTextBlockStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FInlineEditableTextBlockStyle),
				alignof(FInlineEditableTextBlockStyle),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle_CRC() { return 3463760954U; }
class UScriptStruct* FEditableTextBoxStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FEditableTextBoxStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditableTextBoxStyle, Z_Construct_UPackage__Script_SlateCore(), TEXT("EditableTextBoxStyle"), sizeof(FEditableTextBoxStyle), Get_Z_Construct_UScriptStruct_FEditableTextBoxStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditableTextBoxStyle(FEditableTextBoxStyle::StaticStruct, TEXT("/Script/SlateCore"), TEXT("EditableTextBoxStyle"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFEditableTextBoxStyle
{
	FScriptStruct_SlateCore_StaticRegisterNativesFEditableTextBoxStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditableTextBoxStyle")),new UScriptStruct::TCppStructOps<FEditableTextBoxStyle>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFEditableTextBoxStyle;
	UScriptStruct* Z_Construct_UScriptStruct_FEditableTextBoxStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditableTextBoxStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditableTextBoxStyle"), sizeof(FEditableTextBoxStyle), Get_Z_Construct_UScriptStruct_FEditableTextBoxStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Represents the appearance of an SEditableTextBox" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditableTextBoxStyle>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollBarStyle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Style used for the scrollbars" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScrollBarStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "ScrollBarStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEditableTextBoxStyle, ScrollBarStyle), Z_Construct_UScriptStruct_FScrollBarStyle, METADATA_PARAMS(NewProp_ScrollBarStyle_MetaData, ARRAY_COUNT(NewProp_ScrollBarStyle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VScrollBarPadding_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Padding around the vertical scrollbar" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VScrollBarPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "VScrollBarPadding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEditableTextBoxStyle, VScrollBarPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(NewProp_VScrollBarPadding_MetaData, ARRAY_COUNT(NewProp_VScrollBarPadding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HScrollBarPadding_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Padding around the horizontal scrollbar" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HScrollBarPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "HScrollBarPadding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEditableTextBoxStyle, HScrollBarPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(NewProp_HScrollBarPadding_MetaData, ARRAY_COUNT(NewProp_HScrollBarPadding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReadOnlyForegroundColor_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "The read-only foreground color of text in read-only mode." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReadOnlyForegroundColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ReadOnlyForegroundColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEditableTextBoxStyle, ReadOnlyForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_ReadOnlyForegroundColor_MetaData, ARRAY_COUNT(NewProp_ReadOnlyForegroundColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "The background color applied to the active background image" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundColor = { UE4CodeGen_Private::EPropertyClass::Struct, "BackgroundColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEditableTextBoxStyle, BackgroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_BackgroundColor_MetaData, ARRAY_COUNT(NewProp_BackgroundColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForegroundColor_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "The foreground color of text." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForegroundColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ForegroundColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEditableTextBoxStyle, ForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_ForegroundColor_MetaData, ARRAY_COUNT(NewProp_ForegroundColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Font family and size to be used when displaying this text." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font = { UE4CodeGen_Private::EPropertyClass::Struct, "Font", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEditableTextBoxStyle, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(NewProp_Font_MetaData, ARRAY_COUNT(NewProp_Font_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Padding" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Padding = { UE4CodeGen_Private::EPropertyClass::Struct, "Padding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEditableTextBoxStyle, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(NewProp_Padding_MetaData, ARRAY_COUNT(NewProp_Padding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundImageReadOnly_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Border background image when the box is read-only" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundImageReadOnly = { UE4CodeGen_Private::EPropertyClass::Struct, "BackgroundImageReadOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEditableTextBoxStyle, BackgroundImageReadOnly), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_BackgroundImageReadOnly_MetaData, ARRAY_COUNT(NewProp_BackgroundImageReadOnly_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundImageFocused_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Border background image when the box is focused" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundImageFocused = { UE4CodeGen_Private::EPropertyClass::Struct, "BackgroundImageFocused", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEditableTextBoxStyle, BackgroundImageFocused), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_BackgroundImageFocused_MetaData, ARRAY_COUNT(NewProp_BackgroundImageFocused_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundImageHovered_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Border background image when the box is hovered" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundImageHovered = { UE4CodeGen_Private::EPropertyClass::Struct, "BackgroundImageHovered", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEditableTextBoxStyle, BackgroundImageHovered), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_BackgroundImageHovered_MetaData, ARRAY_COUNT(NewProp_BackgroundImageHovered_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundImageNormal_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Border background image when the box is not hovered or focused" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundImageNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "BackgroundImageNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEditableTextBoxStyle, BackgroundImageNormal), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_BackgroundImageNormal_MetaData, ARRAY_COUNT(NewProp_BackgroundImageNormal_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScrollBarStyle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VScrollBarPadding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HScrollBarPadding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReadOnlyForegroundColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackgroundColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForegroundColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Font,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Padding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackgroundImageReadOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackgroundImageFocused,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackgroundImageHovered,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackgroundImageNormal,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FSlateWidgetStyle,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EditableTextBoxStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FEditableTextBoxStyle),
				alignof(FEditableTextBoxStyle),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditableTextBoxStyle_CRC() { return 977265642U; }
class UScriptStruct* FScrollBarStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FScrollBarStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScrollBarStyle, Z_Construct_UPackage__Script_SlateCore(), TEXT("ScrollBarStyle"), sizeof(FScrollBarStyle), Get_Z_Construct_UScriptStruct_FScrollBarStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScrollBarStyle(FScrollBarStyle::StaticStruct, TEXT("/Script/SlateCore"), TEXT("ScrollBarStyle"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFScrollBarStyle
{
	FScriptStruct_SlateCore_StaticRegisterNativesFScrollBarStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ScrollBarStyle")),new UScriptStruct::TCppStructOps<FScrollBarStyle>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFScrollBarStyle;
	UScriptStruct* Z_Construct_UScriptStruct_FScrollBarStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScrollBarStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScrollBarStyle"), sizeof(FScrollBarStyle), Get_Z_Construct_UScriptStruct_FScrollBarStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Represents the appearance of an SScrollBar" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScrollBarStyle>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DraggedThumbImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Image to use when the scrollbar thumb is in its dragged state" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DraggedThumbImage = { UE4CodeGen_Private::EPropertyClass::Struct, "DraggedThumbImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FScrollBarStyle, DraggedThumbImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_DraggedThumbImage_MetaData, ARRAY_COUNT(NewProp_DraggedThumbImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoveredThumbImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Image to use when the scrollbar thumb is in its hovered state" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoveredThumbImage = { UE4CodeGen_Private::EPropertyClass::Struct, "HoveredThumbImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FScrollBarStyle, HoveredThumbImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_HoveredThumbImage_MetaData, ARRAY_COUNT(NewProp_HoveredThumbImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalThumbImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Image to use when the scrollbar thumb is in its normal state" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalThumbImage = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalThumbImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FScrollBarStyle, NormalThumbImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_NormalThumbImage_MetaData, ARRAY_COUNT(NewProp_NormalThumbImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalBottomSlotImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "The image to use to represent the track below the thumb when the scrollbar is oriented horizontally" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HorizontalBottomSlotImage = { UE4CodeGen_Private::EPropertyClass::Struct, "HorizontalBottomSlotImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FScrollBarStyle, HorizontalBottomSlotImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_HorizontalBottomSlotImage_MetaData, ARRAY_COUNT(NewProp_HorizontalBottomSlotImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalBottomSlotImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "The image to use to represent the track below the thumb when the scrollbar is oriented vertically" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VerticalBottomSlotImage = { UE4CodeGen_Private::EPropertyClass::Struct, "VerticalBottomSlotImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FScrollBarStyle, VerticalBottomSlotImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_VerticalBottomSlotImage_MetaData, ARRAY_COUNT(NewProp_VerticalBottomSlotImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalTopSlotImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "The image to use to represent the track above the thumb when the scrollbar is oriented horizontally" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HorizontalTopSlotImage = { UE4CodeGen_Private::EPropertyClass::Struct, "HorizontalTopSlotImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FScrollBarStyle, HorizontalTopSlotImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_HorizontalTopSlotImage_MetaData, ARRAY_COUNT(NewProp_HorizontalTopSlotImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalTopSlotImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "The image to use to represent the track above the thumb when the scrollbar is oriented vertically" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VerticalTopSlotImage = { UE4CodeGen_Private::EPropertyClass::Struct, "VerticalTopSlotImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FScrollBarStyle, VerticalTopSlotImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_VerticalTopSlotImage_MetaData, ARRAY_COUNT(NewProp_VerticalTopSlotImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalBackgroundImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Background image to use when the scrollbar is oriented vertically" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VerticalBackgroundImage = { UE4CodeGen_Private::EPropertyClass::Struct, "VerticalBackgroundImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FScrollBarStyle, VerticalBackgroundImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_VerticalBackgroundImage_MetaData, ARRAY_COUNT(NewProp_VerticalBackgroundImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalBackgroundImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Background image to use when the scrollbar is oriented horizontally" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HorizontalBackgroundImage = { UE4CodeGen_Private::EPropertyClass::Struct, "HorizontalBackgroundImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FScrollBarStyle, HorizontalBackgroundImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_HorizontalBackgroundImage_MetaData, ARRAY_COUNT(NewProp_HorizontalBackgroundImage_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DraggedThumbImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HoveredThumbImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NormalThumbImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HorizontalBottomSlotImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VerticalBottomSlotImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HorizontalTopSlotImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VerticalTopSlotImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VerticalBackgroundImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HorizontalBackgroundImage,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FSlateWidgetStyle,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ScrollBarStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FScrollBarStyle),
				alignof(FScrollBarStyle),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScrollBarStyle_CRC() { return 497879147U; }
class UScriptStruct* FEditableTextStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FEditableTextStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditableTextStyle, Z_Construct_UPackage__Script_SlateCore(), TEXT("EditableTextStyle"), sizeof(FEditableTextStyle), Get_Z_Construct_UScriptStruct_FEditableTextStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditableTextStyle(FEditableTextStyle::StaticStruct, TEXT("/Script/SlateCore"), TEXT("EditableTextStyle"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFEditableTextStyle
{
	FScriptStruct_SlateCore_StaticRegisterNativesFEditableTextStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditableTextStyle")),new UScriptStruct::TCppStructOps<FEditableTextStyle>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFEditableTextStyle;
	UScriptStruct* Z_Construct_UScriptStruct_FEditableTextStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditableTextStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditableTextStyle"), sizeof(FEditableTextStyle), Get_Z_Construct_UScriptStruct_FEditableTextStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Represents the appearance of an SEditableText" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditableTextStyle>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaretImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Image brush used for the caret" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CaretImage = { UE4CodeGen_Private::EPropertyClass::Struct, "CaretImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEditableTextStyle, CaretImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_CaretImage_MetaData, ARRAY_COUNT(NewProp_CaretImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundImageComposing_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Background image for the selected text" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundImageComposing = { UE4CodeGen_Private::EPropertyClass::Struct, "BackgroundImageComposing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEditableTextStyle, BackgroundImageComposing), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_BackgroundImageComposing_MetaData, ARRAY_COUNT(NewProp_BackgroundImageComposing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundImageSelected_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Background image for the selected text" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundImageSelected = { UE4CodeGen_Private::EPropertyClass::Struct, "BackgroundImageSelected", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEditableTextStyle, BackgroundImageSelected), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_BackgroundImageSelected_MetaData, ARRAY_COUNT(NewProp_BackgroundImageSelected_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "The color and opacity of this text" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEditableTextStyle, ColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_ColorAndOpacity_MetaData, ARRAY_COUNT(NewProp_ColorAndOpacity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Font family and size to be used when displaying this text." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font = { UE4CodeGen_Private::EPropertyClass::Struct, "Font", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEditableTextStyle, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(NewProp_Font_MetaData, ARRAY_COUNT(NewProp_Font_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CaretImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackgroundImageComposing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackgroundImageSelected,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColorAndOpacity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Font,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FSlateWidgetStyle,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EditableTextStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FEditableTextStyle),
				alignof(FEditableTextStyle),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditableTextStyle_CRC() { return 2307934954U; }
class UScriptStruct* FHyperlinkStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FHyperlinkStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHyperlinkStyle, Z_Construct_UPackage__Script_SlateCore(), TEXT("HyperlinkStyle"), sizeof(FHyperlinkStyle), Get_Z_Construct_UScriptStruct_FHyperlinkStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHyperlinkStyle(FHyperlinkStyle::StaticStruct, TEXT("/Script/SlateCore"), TEXT("HyperlinkStyle"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFHyperlinkStyle
{
	FScriptStruct_SlateCore_StaticRegisterNativesFHyperlinkStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HyperlinkStyle")),new UScriptStruct::TCppStructOps<FHyperlinkStyle>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFHyperlinkStyle;
	UScriptStruct* Z_Construct_UScriptStruct_FHyperlinkStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHyperlinkStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HyperlinkStyle"), sizeof(FHyperlinkStyle), Get_Z_Construct_UScriptStruct_FHyperlinkStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Represents the appearance of an SHyperlink" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHyperlinkStyle>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Padding" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Padding = { UE4CodeGen_Private::EPropertyClass::Struct, "Padding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHyperlinkStyle, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(NewProp_Padding_MetaData, ARRAY_COUNT(NewProp_Padding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextStyle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Text style" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "TextStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHyperlinkStyle, TextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(NewProp_TextStyle_MetaData, ARRAY_COUNT(NewProp_TextStyle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnderlineStyle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Underline style" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnderlineStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "UnderlineStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHyperlinkStyle, UnderlineStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(NewProp_UnderlineStyle_MetaData, ARRAY_COUNT(NewProp_UnderlineStyle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Padding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextStyle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UnderlineStyle,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FSlateWidgetStyle,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"HyperlinkStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FHyperlinkStyle),
				alignof(FHyperlinkStyle),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHyperlinkStyle_CRC() { return 926158542U; }
class UScriptStruct* FComboBoxStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FComboBoxStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboBoxStyle, Z_Construct_UPackage__Script_SlateCore(), TEXT("ComboBoxStyle"), sizeof(FComboBoxStyle), Get_Z_Construct_UScriptStruct_FComboBoxStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FComboBoxStyle(FComboBoxStyle::StaticStruct, TEXT("/Script/SlateCore"), TEXT("ComboBoxStyle"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFComboBoxStyle
{
	FScriptStruct_SlateCore_StaticRegisterNativesFComboBoxStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ComboBoxStyle")),new UScriptStruct::TCppStructOps<FComboBoxStyle>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFComboBoxStyle;
	UScriptStruct* Z_Construct_UScriptStruct_FComboBoxStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FComboBoxStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ComboBoxStyle"), sizeof(FComboBoxStyle), Get_Z_Construct_UScriptStruct_FComboBoxStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Represents the appearance of an SComboBox" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboBoxStyle>(); };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionChangeSound_MetaData[] = {
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SelectionChangeSound = { UE4CodeGen_Private::EPropertyClass::Name, "SelectionChangeSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FComboBoxStyle, SelectionChangeSound_DEPRECATED), METADATA_PARAMS(NewProp_SelectionChangeSound_MetaData, ARRAY_COUNT(NewProp_SelectionChangeSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressedSound_MetaData[] = {
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PressedSound = { UE4CodeGen_Private::EPropertyClass::Name, "PressedSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FComboBoxStyle, PressedSound_DEPRECATED), METADATA_PARAMS(NewProp_PressedSound_MetaData, ARRAY_COUNT(NewProp_PressedSound_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionChangeSlateSound_MetaData[] = {
				{ "Category", "Sound" },
				{ "DisplayName", "Selection Change Sound" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "The Sound to play when the selection is changed" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectionChangeSlateSound = { UE4CodeGen_Private::EPropertyClass::Struct, "SelectionChangeSlateSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FComboBoxStyle, SelectionChangeSlateSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(NewProp_SelectionChangeSlateSound_MetaData, ARRAY_COUNT(NewProp_SelectionChangeSlateSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressedSlateSound_MetaData[] = {
				{ "Category", "Sound" },
				{ "DisplayName", "Pressed Sound" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "The sound the button should play when pressed" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PressedSlateSound = { UE4CodeGen_Private::EPropertyClass::Struct, "PressedSlateSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FComboBoxStyle, PressedSlateSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(NewProp_PressedSlateSound_MetaData, ARRAY_COUNT(NewProp_PressedSlateSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComboButtonStyle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ShowOnlyInnerProperties", "" },
				{ "ToolTip", "The style to use for our SComboButton" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComboButtonStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "ComboButtonStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FComboBoxStyle, ComboButtonStyle), Z_Construct_UScriptStruct_FComboButtonStyle, METADATA_PARAMS(NewProp_ComboButtonStyle_MetaData, ARRAY_COUNT(NewProp_ComboButtonStyle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectionChangeSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PressedSound,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectionChangeSlateSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PressedSlateSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComboButtonStyle,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FSlateWidgetStyle,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ComboBoxStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FComboBoxStyle),
				alignof(FComboBoxStyle),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FComboBoxStyle_CRC() { return 3858541589U; }
class UScriptStruct* FComboButtonStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FComboButtonStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboButtonStyle, Z_Construct_UPackage__Script_SlateCore(), TEXT("ComboButtonStyle"), sizeof(FComboButtonStyle), Get_Z_Construct_UScriptStruct_FComboButtonStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FComboButtonStyle(FComboButtonStyle::StaticStruct, TEXT("/Script/SlateCore"), TEXT("ComboButtonStyle"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFComboButtonStyle
{
	FScriptStruct_SlateCore_StaticRegisterNativesFComboButtonStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ComboButtonStyle")),new UScriptStruct::TCppStructOps<FComboButtonStyle>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFComboButtonStyle;
	UScriptStruct* Z_Construct_UScriptStruct_FComboButtonStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FComboButtonStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ComboButtonStyle"), sizeof(FComboButtonStyle), Get_Z_Construct_UScriptStruct_FComboButtonStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Represents the appearance of an SComboButton" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboButtonStyle>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuBorderPadding_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Padding to use to add a \"menu border\" around the drop-down content" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MenuBorderPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "MenuBorderPadding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FComboButtonStyle, MenuBorderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(NewProp_MenuBorderPadding_MetaData, ARRAY_COUNT(NewProp_MenuBorderPadding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuBorderBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Brush to use to add a \"menu border\" around the drop-down content" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MenuBorderBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "MenuBorderBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FComboButtonStyle, MenuBorderBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_MenuBorderBrush_MetaData, ARRAY_COUNT(NewProp_MenuBorderBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownArrowImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Image to use for the down arrow" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DownArrowImage = { UE4CodeGen_Private::EPropertyClass::Struct, "DownArrowImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FComboButtonStyle, DownArrowImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_DownArrowImage_MetaData, ARRAY_COUNT(NewProp_DownArrowImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonStyle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "The style to use for our SButton" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "ButtonStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FComboButtonStyle, ButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(NewProp_ButtonStyle_MetaData, ARRAY_COUNT(NewProp_ButtonStyle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MenuBorderPadding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MenuBorderBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DownArrowImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ButtonStyle,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FSlateWidgetStyle,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ComboButtonStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FComboButtonStyle),
				alignof(FComboButtonStyle),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FComboButtonStyle_CRC() { return 1990711485U; }
class UScriptStruct* FButtonStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FButtonStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FButtonStyle, Z_Construct_UPackage__Script_SlateCore(), TEXT("ButtonStyle"), sizeof(FButtonStyle), Get_Z_Construct_UScriptStruct_FButtonStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FButtonStyle(FButtonStyle::StaticStruct, TEXT("/Script/SlateCore"), TEXT("ButtonStyle"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFButtonStyle
{
	FScriptStruct_SlateCore_StaticRegisterNativesFButtonStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ButtonStyle")),new UScriptStruct::TCppStructOps<FButtonStyle>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFButtonStyle;
	UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FButtonStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ButtonStyle"), sizeof(FButtonStyle), Get_Z_Construct_UScriptStruct_FButtonStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Represents the appearance of an SButton" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FButtonStyle>(); };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoveredSound_MetaData[] = {
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_HoveredSound = { UE4CodeGen_Private::EPropertyClass::Name, "HoveredSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FButtonStyle, HoveredSound_DEPRECATED), METADATA_PARAMS(NewProp_HoveredSound_MetaData, ARRAY_COUNT(NewProp_HoveredSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressedSound_MetaData[] = {
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PressedSound = { UE4CodeGen_Private::EPropertyClass::Name, "PressedSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FButtonStyle, PressedSound_DEPRECATED), METADATA_PARAMS(NewProp_PressedSound_MetaData, ARRAY_COUNT(NewProp_PressedSound_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoveredSlateSound_MetaData[] = {
				{ "Category", "Sound" },
				{ "DisplayName", "Hovered Sound" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "The sound the button should play when initially hovered over" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoveredSlateSound = { UE4CodeGen_Private::EPropertyClass::Struct, "HoveredSlateSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FButtonStyle, HoveredSlateSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(NewProp_HoveredSlateSound_MetaData, ARRAY_COUNT(NewProp_HoveredSlateSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressedSlateSound_MetaData[] = {
				{ "Category", "Sound" },
				{ "DisplayName", "Pressed Sound" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "The sound the button should play when pressed" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PressedSlateSound = { UE4CodeGen_Private::EPropertyClass::Struct, "PressedSlateSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FButtonStyle, PressedSlateSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(NewProp_PressedSlateSound_MetaData, ARRAY_COUNT(NewProp_PressedSlateSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressedPadding_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Same as NormalPadding but used when the button is pressed. Allows for moving the content to match\nany \"movement\" in the button's border image." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PressedPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "PressedPadding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FButtonStyle, PressedPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(NewProp_PressedPadding_MetaData, ARRAY_COUNT(NewProp_PressedPadding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalPadding_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Padding that accounts for the border in the button's background image.\nWhen this is applied, the content of the button should appear flush\nwith the button's border. Use this padding when the button is not pressed." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalPadding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FButtonStyle, NormalPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(NewProp_NormalPadding_MetaData, ARRAY_COUNT(NewProp_NormalPadding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Disabled_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Button appearance when disabled, by default this is set to an invalid resource when that is the case default disabled drawing is used." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Disabled = { UE4CodeGen_Private::EPropertyClass::Struct, "Disabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FButtonStyle, Disabled), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_Disabled_MetaData, ARRAY_COUNT(NewProp_Disabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pressed_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Button appearance when pressed" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pressed = { UE4CodeGen_Private::EPropertyClass::Struct, "Pressed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FButtonStyle, Pressed), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_Pressed_MetaData, ARRAY_COUNT(NewProp_Pressed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hovered_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Button appearance when hovered" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hovered = { UE4CodeGen_Private::EPropertyClass::Struct, "Hovered", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FButtonStyle, Hovered), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_Hovered_MetaData, ARRAY_COUNT(NewProp_Hovered_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Button appearance when the button is not hovered or pressed" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal = { UE4CodeGen_Private::EPropertyClass::Struct, "Normal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FButtonStyle, Normal), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_Normal_MetaData, ARRAY_COUNT(NewProp_Normal_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HoveredSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PressedSound,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HoveredSlateSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PressedSlateSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PressedPadding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NormalPadding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Disabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pressed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hovered,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normal,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FSlateWidgetStyle,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ButtonStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FButtonStyle),
				alignof(FButtonStyle),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FButtonStyle_CRC() { return 1290175893U; }
class UScriptStruct* FTextBlockStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FTextBlockStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextBlockStyle, Z_Construct_UPackage__Script_SlateCore(), TEXT("TextBlockStyle"), sizeof(FTextBlockStyle), Get_Z_Construct_UScriptStruct_FTextBlockStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTextBlockStyle(FTextBlockStyle::StaticStruct, TEXT("/Script/SlateCore"), TEXT("TextBlockStyle"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFTextBlockStyle
{
	FScriptStruct_SlateCore_StaticRegisterNativesFTextBlockStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TextBlockStyle")),new UScriptStruct::TCppStructOps<FTextBlockStyle>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFTextBlockStyle;
	UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTextBlockStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TextBlockStyle"), sizeof(FTextBlockStyle), Get_Z_Construct_UScriptStruct_FTextBlockStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Represents the appearance of an STextBlock" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextBlockStyle>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnderlineBrush_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "The brush used to draw an underline under the text (if any)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnderlineBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "UnderlineBrush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FTextBlockStyle, UnderlineBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_UnderlineBrush_MetaData, ARRAY_COUNT(NewProp_UnderlineBrush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighlightShape_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "The shape of highlighted text" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HighlightShape = { UE4CodeGen_Private::EPropertyClass::Struct, "HighlightShape", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FTextBlockStyle, HighlightShape), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_HighlightShape_MetaData, ARRAY_COUNT(NewProp_HighlightShape_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighlightColor_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "The color of highlighted text" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HighlightColor = { UE4CodeGen_Private::EPropertyClass::Struct, "HighlightColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FTextBlockStyle, HighlightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_HighlightColor_MetaData, ARRAY_COUNT(NewProp_HighlightColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedBackgroundColor_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "The background color of selected text" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectedBackgroundColor = { UE4CodeGen_Private::EPropertyClass::Struct, "SelectedBackgroundColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTextBlockStyle, SelectedBackgroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_SelectedBackgroundColor_MetaData, ARRAY_COUNT(NewProp_SelectedBackgroundColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowColorAndOpacity_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "The color and opacity of the shadow" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "ShadowColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTextBlockStyle, ShadowColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_ShadowColorAndOpacity_MetaData, ARRAY_COUNT(NewProp_ShadowColorAndOpacity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowOffset_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "How much should the shadow be offset? An offset of 0 implies no shadow." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "ShadowOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTextBlockStyle, ShadowOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_ShadowOffset_MetaData, ARRAY_COUNT(NewProp_ShadowOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[] = {
				{ "Category", "Appearance" },
				{ "DisplayName", "Color" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "The color and opacity of this text" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTextBlockStyle, ColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_ColorAndOpacity_MetaData, ARRAY_COUNT(NewProp_ColorAndOpacity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Font family and size to be used when displaying this text." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font = { UE4CodeGen_Private::EPropertyClass::Struct, "Font", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTextBlockStyle, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(NewProp_Font_MetaData, ARRAY_COUNT(NewProp_Font_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UnderlineBrush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HighlightShape,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HighlightColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectedBackgroundColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShadowColorAndOpacity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShadowOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColorAndOpacity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Font,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FSlateWidgetStyle,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TextBlockStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FTextBlockStyle),
				alignof(FTextBlockStyle),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTextBlockStyle_CRC() { return 1557735406U; }
class UScriptStruct* FCheckBoxStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FCheckBoxStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCheckBoxStyle, Z_Construct_UPackage__Script_SlateCore(), TEXT("CheckBoxStyle"), sizeof(FCheckBoxStyle), Get_Z_Construct_UScriptStruct_FCheckBoxStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCheckBoxStyle(FCheckBoxStyle::StaticStruct, TEXT("/Script/SlateCore"), TEXT("CheckBoxStyle"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFCheckBoxStyle
{
	FScriptStruct_SlateCore_StaticRegisterNativesFCheckBoxStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CheckBoxStyle")),new UScriptStruct::TCppStructOps<FCheckBoxStyle>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFCheckBoxStyle;
	UScriptStruct* Z_Construct_UScriptStruct_FCheckBoxStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCheckBoxStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CheckBoxStyle"), sizeof(FCheckBoxStyle), Get_Z_Construct_UScriptStruct_FCheckBoxStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Represents the appearance of an SCheckBox" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCheckBoxStyle>(); };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoveredSound_MetaData[] = {
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_HoveredSound = { UE4CodeGen_Private::EPropertyClass::Name, "HoveredSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FCheckBoxStyle, HoveredSound_DEPRECATED), METADATA_PARAMS(NewProp_HoveredSound_MetaData, ARRAY_COUNT(NewProp_HoveredSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncheckedSound_MetaData[] = {
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_UncheckedSound = { UE4CodeGen_Private::EPropertyClass::Name, "UncheckedSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FCheckBoxStyle, UncheckedSound_DEPRECATED), METADATA_PARAMS(NewProp_UncheckedSound_MetaData, ARRAY_COUNT(NewProp_UncheckedSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckedSound_MetaData[] = {
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_CheckedSound = { UE4CodeGen_Private::EPropertyClass::Name, "CheckedSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FCheckBoxStyle, CheckedSound_DEPRECATED), METADATA_PARAMS(NewProp_CheckedSound_MetaData, ARRAY_COUNT(NewProp_CheckedSound_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoveredSlateSound_MetaData[] = {
				{ "Category", "Sound" },
				{ "DisplayName", "Hovered Sound" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "The sound the check box should play when initially hovered over" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoveredSlateSound = { UE4CodeGen_Private::EPropertyClass::Struct, "HoveredSlateSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCheckBoxStyle, HoveredSlateSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(NewProp_HoveredSlateSound_MetaData, ARRAY_COUNT(NewProp_HoveredSlateSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncheckedSlateSound_MetaData[] = {
				{ "Category", "Sound" },
				{ "DisplayName", "Unchecked Sound" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "The sound the check box should play when unchecked" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UncheckedSlateSound = { UE4CodeGen_Private::EPropertyClass::Struct, "UncheckedSlateSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCheckBoxStyle, UncheckedSlateSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(NewProp_UncheckedSlateSound_MetaData, ARRAY_COUNT(NewProp_UncheckedSlateSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckedSlateSound_MetaData[] = {
				{ "Category", "Sound" },
				{ "DisplayName", "Checked Sound" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "The sound the check box should play when checked" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CheckedSlateSound = { UE4CodeGen_Private::EPropertyClass::Struct, "CheckedSlateSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCheckBoxStyle, CheckedSlateSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(NewProp_CheckedSlateSound_MetaData, ARRAY_COUNT(NewProp_CheckedSlateSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderBackgroundColor_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "BorderBackgroundColor refers to the actual color and opacity of the supplied border image on toggle buttons" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BorderBackgroundColor = { UE4CodeGen_Private::EPropertyClass::Struct, "BorderBackgroundColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCheckBoxStyle, BorderBackgroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_BorderBackgroundColor_MetaData, ARRAY_COUNT(NewProp_BorderBackgroundColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForegroundColor_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "The foreground color" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForegroundColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ForegroundColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCheckBoxStyle, ForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_ForegroundColor_MetaData, ARRAY_COUNT(NewProp_ForegroundColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "Padding" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Padding = { UE4CodeGen_Private::EPropertyClass::Struct, "Padding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCheckBoxStyle, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(NewProp_Padding_MetaData, ARRAY_COUNT(NewProp_Padding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UndeterminedPressedImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "CheckBox appearance when CheckBox is undetermined and pressed" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UndeterminedPressedImage = { UE4CodeGen_Private::EPropertyClass::Struct, "UndeterminedPressedImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCheckBoxStyle, UndeterminedPressedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_UndeterminedPressedImage_MetaData, ARRAY_COUNT(NewProp_UndeterminedPressedImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UndeterminedHoveredImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "CheckBox appearance when CheckBox is undetermined and hovered" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UndeterminedHoveredImage = { UE4CodeGen_Private::EPropertyClass::Struct, "UndeterminedHoveredImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCheckBoxStyle, UndeterminedHoveredImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_UndeterminedHoveredImage_MetaData, ARRAY_COUNT(NewProp_UndeterminedHoveredImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UndeterminedImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "CheckBox appearance when the CheckBox is undetermined" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UndeterminedImage = { UE4CodeGen_Private::EPropertyClass::Struct, "UndeterminedImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCheckBoxStyle, UndeterminedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_UndeterminedImage_MetaData, ARRAY_COUNT(NewProp_UndeterminedImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckedPressedImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "CheckBox appearance when checked and pressed" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CheckedPressedImage = { UE4CodeGen_Private::EPropertyClass::Struct, "CheckedPressedImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCheckBoxStyle, CheckedPressedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_CheckedPressedImage_MetaData, ARRAY_COUNT(NewProp_CheckedPressedImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckedHoveredImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "CheckBox appearance when checked and hovered" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CheckedHoveredImage = { UE4CodeGen_Private::EPropertyClass::Struct, "CheckedHoveredImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCheckBoxStyle, CheckedHoveredImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_CheckedHoveredImage_MetaData, ARRAY_COUNT(NewProp_CheckedHoveredImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckedImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "CheckBox appearance when the CheckBox is checked" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CheckedImage = { UE4CodeGen_Private::EPropertyClass::Struct, "CheckedImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCheckBoxStyle, CheckedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_CheckedImage_MetaData, ARRAY_COUNT(NewProp_CheckedImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncheckedPressedImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "CheckBox appearance when the CheckBox is unchecked and hovered" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UncheckedPressedImage = { UE4CodeGen_Private::EPropertyClass::Struct, "UncheckedPressedImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCheckBoxStyle, UncheckedPressedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_UncheckedPressedImage_MetaData, ARRAY_COUNT(NewProp_UncheckedPressedImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncheckedHoveredImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "CheckBox appearance when the CheckBox is unchecked and hovered" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UncheckedHoveredImage = { UE4CodeGen_Private::EPropertyClass::Struct, "UncheckedHoveredImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCheckBoxStyle, UncheckedHoveredImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_UncheckedHoveredImage_MetaData, ARRAY_COUNT(NewProp_UncheckedHoveredImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncheckedImage_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "CheckBox appearance when the CheckBox is unchecked (normal)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UncheckedImage = { UE4CodeGen_Private::EPropertyClass::Struct, "UncheckedImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCheckBoxStyle, UncheckedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(NewProp_UncheckedImage_MetaData, ARRAY_COUNT(NewProp_UncheckedImage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckBoxType_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "The visual type of the checkbox" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CheckBoxType = { UE4CodeGen_Private::EPropertyClass::Byte, "CheckBoxType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCheckBoxStyle, CheckBoxType), Z_Construct_UEnum_SlateCore_ESlateCheckBoxType, METADATA_PARAMS(NewProp_CheckBoxType_MetaData, ARRAY_COUNT(NewProp_CheckBoxType_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HoveredSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UncheckedSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CheckedSound,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HoveredSlateSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UncheckedSlateSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CheckedSlateSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BorderBackgroundColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForegroundColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Padding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UndeterminedPressedImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UndeterminedHoveredImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UndeterminedImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CheckedPressedImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CheckedHoveredImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CheckedImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UncheckedPressedImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UncheckedHoveredImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UncheckedImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CheckBoxType,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				Z_Construct_UScriptStruct_FSlateWidgetStyle,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CheckBoxStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FCheckBoxStyle),
				alignof(FCheckBoxStyle),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCheckBoxStyle_CRC() { return 3533957487U; }
	void USlateTypes::StaticRegisterNativesUSlateTypes()
	{
	}
	UClass* Z_Construct_UClass_USlateTypes_NoRegister()
	{
		return USlateTypes::StaticClass();
	}
	UClass* Z_Construct_UClass_USlateTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Styling/SlateTypes.h" },
				{ "ModuleRelativePath", "Public/Styling/SlateTypes.h" },
				{ "ToolTip", "HACK: We need a UClass here or UHT will complain." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USlateTypes>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USlateTypes::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlateTypes, 2496187503);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlateTypes(Z_Construct_UClass_USlateTypes, &USlateTypes::StaticClass, TEXT("/Script/SlateCore"), TEXT("USlateTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
