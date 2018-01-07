// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Fonts/CompositeFont.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositeFont() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EFontLayoutMethod();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EFontLoadingPolicy();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EFontHinting();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCompositeFont();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCompositeSubFont();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTypeface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Range();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTypefaceEntry();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FFontData();
	SLATECORE_API UClass* Z_Construct_UClass_UFontBulkData_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static UEnum* EFontLayoutMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EFontLayoutMethod, Z_Construct_UPackage__Script_SlateCore(), TEXT("EFontLayoutMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFontLayoutMethod(EFontLayoutMethod_StaticEnum, TEXT("/Script/SlateCore"), TEXT("EFontLayoutMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_EFontLayoutMethod_CRC() { return 2386035131U; }
	UEnum* Z_Construct_UEnum_SlateCore_EFontLayoutMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFontLayoutMethod"), 0, Get_Z_Construct_UEnum_SlateCore_EFontLayoutMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFontLayoutMethod::Metrics", (int64)EFontLayoutMethod::Metrics },
				{ "EFontLayoutMethod::BoundingBox", (int64)EFontLayoutMethod::BoundingBox },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BoundingBox.ToolTip", "Layout the font using the values from its bounding box. This typically yields a larger line height for fonts that have valid metrics, however it can also produce much better results for fonts that have broken or incorrect metrics." },
				{ "Metrics.ToolTip", "Layout the font using the metrics data available in the font. This is typically the desired option, however some fonts have broken or incorrect metrics so may yield better results when using the bounding box values to layout the font." },
				{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFontLayoutMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EFontLayoutMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFontLoadingPolicy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EFontLoadingPolicy, Z_Construct_UPackage__Script_SlateCore(), TEXT("EFontLoadingPolicy"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFontLoadingPolicy(EFontLoadingPolicy_StaticEnum, TEXT("/Script/SlateCore"), TEXT("EFontLoadingPolicy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_EFontLoadingPolicy_CRC() { return 1828295774U; }
	UEnum* Z_Construct_UEnum_SlateCore_EFontLoadingPolicy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFontLoadingPolicy"), 0, Get_Z_Construct_UEnum_SlateCore_EFontLoadingPolicy_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFontLoadingPolicy::LazyLoad", (int64)EFontLoadingPolicy::LazyLoad },
				{ "EFontLoadingPolicy::Stream", (int64)EFontLoadingPolicy::Stream },
				{ "EFontLoadingPolicy::Inline", (int64)EFontLoadingPolicy::Inline },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Inline.ToolTip", "Embed the font data within the asset. This will consume more memory than Streaming, however it is guaranteed to be hitch free (only valid for font data within a Font Face asset)." },
				{ "LazyLoad.ToolTip", "Lazy load the entire font into memory. This will consume more memory than Streaming, however there will be zero file-IO when rendering glyphs within the font, although the initial load may cause a hitch." },
				{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
				{ "Stream.ToolTip", "Stream the font from disk. This will consume less memory than LazyLoad or Inline, however there will be file-IO when rendering glyphs, which may cause hitches under certain circumstances or on certain platforms." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFontLoadingPolicy",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EFontLoadingPolicy",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFontHinting_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EFontHinting, Z_Construct_UPackage__Script_SlateCore(), TEXT("EFontHinting"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFontHinting(EFontHinting_StaticEnum, TEXT("/Script/SlateCore"), TEXT("EFontHinting"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_EFontHinting_CRC() { return 2470746111U; }
	UEnum* Z_Construct_UEnum_SlateCore_EFontHinting()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFontHinting"), 0, Get_Z_Construct_UEnum_SlateCore_EFontHinting_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFontHinting::Default", (int64)EFontHinting::Default },
				{ "EFontHinting::Auto", (int64)EFontHinting::Auto },
				{ "EFontHinting::AutoLight", (int64)EFontHinting::AutoLight },
				{ "EFontHinting::Monochrome", (int64)EFontHinting::Monochrome },
				{ "EFontHinting::None", (int64)EFontHinting::None },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Auto.ToolTip", "Force the use of an automatic hinting algorithm." },
				{ "AutoLight.ToolTip", "Force the use of an automatic light hinting algorithm, optimized for non-monochrome displays." },
				{ "Default.ToolTip", "Use the default hinting specified in the font." },
				{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
				{ "Monochrome.ToolTip", "Force the use of an automatic hinting algorithm optimized for monochrome displays." },
				{ "None.ToolTip", "Do not use hinting." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFontHinting",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EFontHinting",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FCompositeFont::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FCompositeFont_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompositeFont, Z_Construct_UPackage__Script_SlateCore(), TEXT("CompositeFont"), sizeof(FCompositeFont), Get_Z_Construct_UScriptStruct_FCompositeFont_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCompositeFont(FCompositeFont::StaticStruct, TEXT("/Script/SlateCore"), TEXT("CompositeFont"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFCompositeFont
{
	FScriptStruct_SlateCore_StaticRegisterNativesFCompositeFont()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CompositeFont")),new UScriptStruct::TCppStructOps<FCompositeFont>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFCompositeFont;
	UScriptStruct* Z_Construct_UScriptStruct_FCompositeFont()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCompositeFont_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CompositeFont"), sizeof(FCompositeFont), Get_Z_Construct_UScriptStruct_FCompositeFont_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompositeFont>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubTypefaces_MetaData[] = {
				{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
				{ "ToolTip", "Sub-typefaces to use for a specific set of characters" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubTypefaces = { UE4CodeGen_Private::EPropertyClass::Array, "SubTypefaces", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCompositeFont, SubTypefaces), METADATA_PARAMS(NewProp_SubTypefaces_MetaData, ARRAY_COUNT(NewProp_SubTypefaces_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubTypefaces_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SubTypefaces", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCompositeSubFont, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTypeface_MetaData[] = {
				{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
				{ "ToolTip", "The default typeface that will be used when not overridden by a sub-typeface" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultTypeface = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultTypeface", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCompositeFont, DefaultTypeface), Z_Construct_UScriptStruct_FTypeface, METADATA_PARAMS(NewProp_DefaultTypeface_MetaData, ARRAY_COUNT(NewProp_DefaultTypeface_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubTypefaces,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubTypefaces_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultTypeface,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CompositeFont",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FCompositeFont),
				alignof(FCompositeFont),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCompositeFont_CRC() { return 2055109840U; }
class UScriptStruct* FCompositeSubFont::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FCompositeSubFont_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompositeSubFont, Z_Construct_UPackage__Script_SlateCore(), TEXT("CompositeSubFont"), sizeof(FCompositeSubFont), Get_Z_Construct_UScriptStruct_FCompositeSubFont_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCompositeSubFont(FCompositeSubFont::StaticStruct, TEXT("/Script/SlateCore"), TEXT("CompositeSubFont"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFCompositeSubFont
{
	FScriptStruct_SlateCore_StaticRegisterNativesFCompositeSubFont()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CompositeSubFont")),new UScriptStruct::TCppStructOps<FCompositeSubFont>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFCompositeSubFont;
	UScriptStruct* Z_Construct_UScriptStruct_FCompositeSubFont()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCompositeSubFont_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CompositeSubFont"), sizeof(FCompositeSubFont), Get_Z_Construct_UScriptStruct_FCompositeSubFont_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompositeSubFont>(); };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorName_MetaData[] = {
				{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
				{ "ToolTip", "Name of this sub-font. Only used by the editor UI as a convenience to let you state the purpose of the font family." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_EditorName = { UE4CodeGen_Private::EPropertyClass::Name, "EditorName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(FCompositeSubFont, EditorName), METADATA_PARAMS(NewProp_EditorName_MetaData, ARRAY_COUNT(NewProp_EditorName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalingFactor_MetaData[] = {
				{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
				{ "ToolTip", "Amount to scale this sub-font so that it better matches the size of the default font" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScalingFactor = { UE4CodeGen_Private::EPropertyClass::Float, "ScalingFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCompositeSubFont, ScalingFactor), METADATA_PARAMS(NewProp_ScalingFactor_MetaData, ARRAY_COUNT(NewProp_ScalingFactor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterRanges_MetaData[] = {
				{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
				{ "ToolTip", "Array of character ranges for which this sub-font should be used" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharacterRanges = { UE4CodeGen_Private::EPropertyClass::Array, "CharacterRanges", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCompositeSubFont, CharacterRanges), METADATA_PARAMS(NewProp_CharacterRanges_MetaData, ARRAY_COUNT(NewProp_CharacterRanges_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterRanges_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CharacterRanges", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInt32Range, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Typeface_MetaData[] = {
				{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
				{ "ToolTip", "Typeface data for this sub-font" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Typeface = { UE4CodeGen_Private::EPropertyClass::Struct, "Typeface", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCompositeSubFont, Typeface), Z_Construct_UScriptStruct_FTypeface, METADATA_PARAMS(NewProp_Typeface_MetaData, ARRAY_COUNT(NewProp_Typeface_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditorName,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScalingFactor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CharacterRanges,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CharacterRanges_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Typeface,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CompositeSubFont",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FCompositeSubFont),
				alignof(FCompositeSubFont),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCompositeSubFont_CRC() { return 1200619020U; }
class UScriptStruct* FTypeface::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FTypeface_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypeface, Z_Construct_UPackage__Script_SlateCore(), TEXT("Typeface"), sizeof(FTypeface), Get_Z_Construct_UScriptStruct_FTypeface_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTypeface(FTypeface::StaticStruct, TEXT("/Script/SlateCore"), TEXT("Typeface"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFTypeface
{
	FScriptStruct_SlateCore_StaticRegisterNativesFTypeface()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Typeface")),new UScriptStruct::TCppStructOps<FTypeface>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFTypeface;
	UScriptStruct* Z_Construct_UScriptStruct_FTypeface()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTypeface_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Typeface"), sizeof(FTypeface), Get_Z_Construct_UScriptStruct_FTypeface_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
				{ "ToolTip", "Definition for a typeface (a family of fonts)" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypeface>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fonts_MetaData[] = {
				{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
				{ "ToolTip", "The fonts contained within this family" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Fonts = { UE4CodeGen_Private::EPropertyClass::Array, "Fonts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTypeface, Fonts), METADATA_PARAMS(NewProp_Fonts_MetaData, ARRAY_COUNT(NewProp_Fonts_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Fonts_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Fonts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTypefaceEntry, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Fonts,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Fonts_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"Typeface",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FTypeface),
				alignof(FTypeface),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTypeface_CRC() { return 3240383574U; }
class UScriptStruct* FTypefaceEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FTypefaceEntry_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypefaceEntry, Z_Construct_UPackage__Script_SlateCore(), TEXT("TypefaceEntry"), sizeof(FTypefaceEntry), Get_Z_Construct_UScriptStruct_FTypefaceEntry_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTypefaceEntry(FTypefaceEntry::StaticStruct, TEXT("/Script/SlateCore"), TEXT("TypefaceEntry"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFTypefaceEntry
{
	FScriptStruct_SlateCore_StaticRegisterNativesFTypefaceEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TypefaceEntry")),new UScriptStruct::TCppStructOps<FTypefaceEntry>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFTypefaceEntry;
	UScriptStruct* Z_Construct_UScriptStruct_FTypefaceEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTypefaceEntry_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TypefaceEntry"), sizeof(FTypefaceEntry), Get_Z_Construct_UScriptStruct_FTypefaceEntry_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
				{ "ToolTip", "A single entry in a typeface" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypefaceEntry>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
				{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
				{ "ToolTip", "Raw font data for this font" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font = { UE4CodeGen_Private::EPropertyClass::Struct, "Font", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTypefaceEntry, Font), Z_Construct_UScriptStruct_FFontData, METADATA_PARAMS(NewProp_Font_MetaData, ARRAY_COUNT(NewProp_Font_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
				{ "ToolTip", "Name used to identify this font within its typeface" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTypefaceEntry, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Font,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TypefaceEntry",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FTypefaceEntry),
				alignof(FTypefaceEntry),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTypefaceEntry_CRC() { return 2833191359U; }
class UScriptStruct* FFontData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FFontData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFontData, Z_Construct_UPackage__Script_SlateCore(), TEXT("FontData"), sizeof(FFontData), Get_Z_Construct_UScriptStruct_FFontData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFontData(FFontData::StaticStruct, TEXT("/Script/SlateCore"), TEXT("FontData"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFFontData
{
	FScriptStruct_SlateCore_StaticRegisterNativesFFontData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FontData")),new UScriptStruct::TCppStructOps<FFontData>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFFontData;
	UScriptStruct* Z_Construct_UScriptStruct_FFontData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFontData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FontData"), sizeof(FFontData), Get_Z_Construct_UScriptStruct_FFontData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
				{ "ToolTip", "Payload data describing an individual font in a typeface. Keep this lean as it's also used as a key!" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFontData>(); };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontData_MetaData[] = {
				{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
				{ "ToolTip", "Legacy font data v1. This used to be where font data was stored prior to font bulk data.\nThis can be removed once we no longer support loading packages older than VER_UE4_SLATE_BULK_FONT_DATA." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FontData = { UE4CodeGen_Private::EPropertyClass::Array, "FontData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000820000000, 1, nullptr, STRUCT_OFFSET(FFontData, FontData_DEPRECATED), METADATA_PARAMS(NewProp_FontData_MetaData, ARRAY_COUNT(NewProp_FontData_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_FontData_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "FontData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000820000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulkDataPtr_MetaData[] = {
				{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
				{ "NativeConst", "" },
				{ "ToolTip", "Legacy font data v2. This used to be where font data was stored prior to font face assets.\nThis can be removed once we no longer support loading packages older than FEditorObjectVersion::AddedFontFaceAssets (as can UFontBulkData itself)." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BulkDataPtr = { UE4CodeGen_Private::EPropertyClass::Object, "BulkDataPtr", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000820000000, 1, nullptr, STRUCT_OFFSET(FFontData, BulkDataPtr_DEPRECATED), Z_Construct_UClass_UFontBulkData_NoRegister, METADATA_PARAMS(NewProp_BulkDataPtr_MetaData, ARRAY_COUNT(NewProp_BulkDataPtr_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontFaceAsset_MetaData[] = {
				{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
				{ "NativeConst", "" },
				{ "ToolTip", "Font data v3. This points to a font face asset." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FontFaceAsset = { UE4CodeGen_Private::EPropertyClass::Object, "FontFaceAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FFontData, FontFaceAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_FontFaceAsset_MetaData, ARRAY_COUNT(NewProp_FontFaceAsset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingPolicy_MetaData[] = {
				{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
				{ "ToolTip", "Enum controlling how this font should be loaded at runtime. See the enum for more explanations of the options.\nThis variable is ignored if we have a font face asset, and is synchronized with the font face asset on load in a cooked build." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoadingPolicy = { UE4CodeGen_Private::EPropertyClass::Enum, "LoadingPolicy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FFontData, LoadingPolicy), Z_Construct_UEnum_SlateCore_EFontLoadingPolicy, METADATA_PARAMS(NewProp_LoadingPolicy_MetaData, ARRAY_COUNT(NewProp_LoadingPolicy_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoadingPolicy_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hinting_MetaData[] = {
				{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
				{ "ToolTip", "The hinting algorithm to use with the font.\nThis variable is ignored if we have a font face asset, and is synchronized with the font face asset on load in a cooked build." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hinting = { UE4CodeGen_Private::EPropertyClass::Enum, "Hinting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FFontData, Hinting), Z_Construct_UEnum_SlateCore_EFontHinting, METADATA_PARAMS(NewProp_Hinting_MetaData, ARRAY_COUNT(NewProp_Hinting_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hinting_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontFilename_MetaData[] = {
				{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
				{ "ToolTip", "The filename of the font to use.\nThis variable is ignored if we have a font face asset, and is set to the .ufont file in a cooked build." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FontFilename = { UE4CodeGen_Private::EPropertyClass::Str, "FontFilename", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FFontData, FontFilename), METADATA_PARAMS(NewProp_FontFilename_MetaData, ARRAY_COUNT(NewProp_FontFilename_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FontData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FontData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BulkDataPtr,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FontFaceAsset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LoadingPolicy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LoadingPolicy_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hinting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hinting_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FontFilename,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"FontData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FFontData),
				alignof(FFontData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFontData_CRC() { return 1098726997U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
