// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Styling/SlateColor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateColor() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateColorStylingMode();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	static UEnum* ESlateColorStylingMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateColorStylingMode, Z_Construct_UPackage__Script_SlateCore(), TEXT("ESlateColorStylingMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESlateColorStylingMode(ESlateColorStylingMode_StaticEnum, TEXT("/Script/SlateCore"), TEXT("ESlateColorStylingMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_ESlateColorStylingMode_CRC() { return 2800969641U; }
	UEnum* Z_Construct_UEnum_SlateCore_ESlateColorStylingMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESlateColorStylingMode"), 0, Get_Z_Construct_UEnum_SlateCore_ESlateColorStylingMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESlateColorStylingMode::UseColor_Specified", (int64)ESlateColorStylingMode::UseColor_Specified },
				{ "ESlateColorStylingMode::UseColor_Specified_Link", (int64)ESlateColorStylingMode::UseColor_Specified_Link },
				{ "ESlateColorStylingMode::UseColor_Foreground", (int64)ESlateColorStylingMode::UseColor_Foreground },
				{ "ESlateColorStylingMode::UseColor_Foreground_Subdued", (int64)ESlateColorStylingMode::UseColor_Foreground_Subdued },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Styling/SlateColor.h" },
				{ "ToolTip", "Enumerates types of color values that can be held by Slate color.\n\nShould we use the specified color? If not, then which color from the style should we use." },
				{ "UseColor_Foreground.DisplayName", "Foreground Color" },
				{ "UseColor_Foreground.ToolTip", "Use the widget's foreground color." },
				{ "UseColor_Foreground_Subdued.Hidden", "" },
				{ "UseColor_Foreground_Subdued.ToolTip", "Use the widget's subdued color." },
				{ "UseColor_Specified.DisplayName", "Specified Color" },
				{ "UseColor_Specified.ToolTip", "Color value is stored in this Slate color." },
				{ "UseColor_Specified_Link.Hidden", "" },
				{ "UseColor_Specified_Link.ToolTip", "Color value is stored in the linked color." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESlateColorStylingMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ESlateColorStylingMode::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSlateColor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FSlateColor_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlateColor, Z_Construct_UPackage__Script_SlateCore(), TEXT("SlateColor"), sizeof(FSlateColor), Get_Z_Construct_UScriptStruct_FSlateColor_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSlateColor(FSlateColor::StaticStruct, TEXT("/Script/SlateCore"), TEXT("SlateColor"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFSlateColor
{
	FScriptStruct_SlateCore_StaticRegisterNativesFSlateColor()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SlateColor")),new UScriptStruct::TCppStructOps<FSlateColor>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFSlateColor;
	UScriptStruct* Z_Construct_UScriptStruct_FSlateColor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSlateColor_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SlateColor"), sizeof(FSlateColor), Get_Z_Construct_UScriptStruct_FSlateColor_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Styling/SlateColor.h" },
				{ "ToolTip", "A Slate color can be a directly specified value, or the color can be pulled from a WidgetStyle." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlateColor>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorUseRule_MetaData[] = {
				{ "Category", "Color" },
				{ "ModuleRelativePath", "Public/Styling/SlateColor.h" },
				{ "ToolTip", "The rule for which color to pick." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ColorUseRule = { UE4CodeGen_Private::EPropertyClass::Byte, "ColorUseRule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(FSlateColor, ColorUseRule), Z_Construct_UEnum_SlateCore_ESlateColorStylingMode, METADATA_PARAMS(NewProp_ColorUseRule_MetaData, ARRAY_COUNT(NewProp_ColorUseRule_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecifiedColor_MetaData[] = {
				{ "Category", "Color" },
				{ "ModuleRelativePath", "Public/Styling/SlateColor.h" },
				{ "ToolTip", "The current specified color; only meaningful when ColorToUse == UseColor_Specified." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpecifiedColor = { UE4CodeGen_Private::EPropertyClass::Struct, "SpecifiedColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(FSlateColor, SpecifiedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_SpecifiedColor_MetaData, ARRAY_COUNT(NewProp_SpecifiedColor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColorUseRule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpecifiedColor,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SlateColor",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FSlateColor),
				alignof(FSlateColor),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSlateColor_CRC() { return 3800990075U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
