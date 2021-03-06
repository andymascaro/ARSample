// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/FontImportOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFontImportOptions() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFontImportCharacterSet();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFontImportOptionsData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UFontImportOptions_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFontImportOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EFontImportCharacterSet_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EFontImportCharacterSet, Z_Construct_UPackage__Script_Engine(), TEXT("EFontImportCharacterSet"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFontImportCharacterSet(EFontImportCharacterSet_StaticEnum, TEXT("/Script/Engine"), TEXT("EFontImportCharacterSet"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EFontImportCharacterSet_CRC() { return 2114010979U; }
	UEnum* Z_Construct_UEnum_Engine_EFontImportCharacterSet()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFontImportCharacterSet"), 0, Get_Z_Construct_UEnum_Engine_EFontImportCharacterSet_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FontICS_Default", (int64)FontICS_Default },
				{ "FontICS_Ansi", (int64)FontICS_Ansi },
				{ "FontICS_Symbol", (int64)FontICS_Symbol },
				{ "FontICS_MAX", (int64)FontICS_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "Font character set type for importing TrueType fonts." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFontImportCharacterSet",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EFontImportCharacterSet",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FFontImportOptionsData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FFontImportOptionsData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFontImportOptionsData, Z_Construct_UPackage__Script_Engine(), TEXT("FontImportOptionsData"), sizeof(FFontImportOptionsData), Get_Z_Construct_UScriptStruct_FFontImportOptionsData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFontImportOptionsData(FFontImportOptionsData::StaticStruct, TEXT("/Script/Engine"), TEXT("FontImportOptionsData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFFontImportOptionsData
{
	FScriptStruct_Engine_StaticRegisterNativesFFontImportOptionsData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FontImportOptionsData")),new UScriptStruct::TCppStructOps<FFontImportOptionsData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFFontImportOptionsData;
	UScriptStruct* Z_Construct_UScriptStruct_FFontImportOptionsData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFontImportOptionsData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FontImportOptionsData"), sizeof(FFontImportOptionsData), Get_Z_Construct_UScriptStruct_FFontImportOptionsData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "Font import options" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFontImportOptionsData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldScanRadiusScale_MetaData[] = {
				{ "Category", "FontImportOptionsData" },
				{ "ClampMax", "4.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "Shrinks or expands the scan radius used to determine the silhouette of the font edges." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldScanRadiusScale = { UE4CodeGen_Private::EPropertyClass::Float, "DistanceFieldScanRadiusScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFontImportOptionsData, DistanceFieldScanRadiusScale), METADATA_PARAMS(NewProp_DistanceFieldScanRadiusScale_MetaData, ARRAY_COUNT(NewProp_DistanceFieldScanRadiusScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldScaleFactor_MetaData[] = {
				{ "Category", "FontImportOptionsData" },
				{ "editcondition", "bUseDistanceFieldAlpha" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "Scale factor determines how big to scale the font bitmap during import when generating distance field values\nNote that higher values give better quality but importing will take much longer." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_DistanceFieldScaleFactor = { UE4CodeGen_Private::EPropertyClass::Int, "DistanceFieldScaleFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFontImportOptionsData, DistanceFieldScaleFactor), METADATA_PARAMS(NewProp_DistanceFieldScaleFactor_MetaData, ARRAY_COUNT(NewProp_DistanceFieldScaleFactor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDistanceFieldAlpha_MetaData[] = {
				{ "Category", "FontImportOptionsData" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "If true then the alpha channel of the font textures will store a distance field instead of a color mask" },
			};
#endif
			auto NewProp_bUseDistanceFieldAlpha_SetBit = [](void* Obj){ ((FFontImportOptionsData*)Obj)->bUseDistanceFieldAlpha = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDistanceFieldAlpha = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseDistanceFieldAlpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FFontImportOptionsData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseDistanceFieldAlpha_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseDistanceFieldAlpha_MetaData, ARRAY_COUNT(NewProp_bUseDistanceFieldAlpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kerning_MetaData[] = {
				{ "Category", "FontImportOptionsData" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "The initial horizontal spacing adjustment between rendered characters.  This setting will be copied directly into the generated Font object's properties." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Kerning = { UE4CodeGen_Private::EPropertyClass::Int, "Kerning", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFontImportOptionsData, Kerning), METADATA_PARAMS(NewProp_Kerning_MetaData, ARRAY_COUNT(NewProp_Kerning_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLegacyMode_MetaData[] = {
				{ "Category", "FontImportOptionsData" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "Enables legacy font import mode.  This results in lower quality antialiasing and larger glyph bounds, but may be useful when debugging problems" },
			};
#endif
			auto NewProp_bEnableLegacyMode_SetBit = [](void* Obj){ ((FFontImportOptionsData*)Obj)->bEnableLegacyMode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLegacyMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableLegacyMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FFontImportOptionsData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableLegacyMode_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableLegacyMode_MetaData, ARRAY_COUNT(NewProp_bEnableLegacyMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtendBoxLeft_MetaData[] = {
				{ "Category", "FontImportOptionsData" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "How much to extend the left of the UV coordinate rectangle for each character in pixels" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExtendBoxLeft = { UE4CodeGen_Private::EPropertyClass::Int, "ExtendBoxLeft", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFontImportOptionsData, ExtendBoxLeft), METADATA_PARAMS(NewProp_ExtendBoxLeft_MetaData, ARRAY_COUNT(NewProp_ExtendBoxLeft_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtendBoxRight_MetaData[] = {
				{ "Category", "FontImportOptionsData" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "How much to extend the right of the UV coordinate rectangle for each character in pixels" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExtendBoxRight = { UE4CodeGen_Private::EPropertyClass::Int, "ExtendBoxRight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFontImportOptionsData, ExtendBoxRight), METADATA_PARAMS(NewProp_ExtendBoxRight_MetaData, ARRAY_COUNT(NewProp_ExtendBoxRight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtendBoxBottom_MetaData[] = {
				{ "Category", "FontImportOptionsData" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "How much to extend the bottom of the UV coordinate rectangle for each character in pixels" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExtendBoxBottom = { UE4CodeGen_Private::EPropertyClass::Int, "ExtendBoxBottom", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFontImportOptionsData, ExtendBoxBottom), METADATA_PARAMS(NewProp_ExtendBoxBottom_MetaData, ARRAY_COUNT(NewProp_ExtendBoxBottom_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtendBoxTop_MetaData[] = {
				{ "Category", "FontImportOptionsData" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "How much to extend the top of the UV coordinate rectangle for each character in pixels" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExtendBoxTop = { UE4CodeGen_Private::EPropertyClass::Int, "ExtendBoxTop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFontImportOptionsData, ExtendBoxTop), METADATA_PARAMS(NewProp_ExtendBoxTop_MetaData, ARRAY_COUNT(NewProp_ExtendBoxTop_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YPadding_MetaData[] = {
				{ "Category", "FontImportOptionsData" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "Vertical padding between each font character on the texture page in pixels" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_YPadding = { UE4CodeGen_Private::EPropertyClass::Int, "YPadding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFontImportOptionsData, YPadding), METADATA_PARAMS(NewProp_YPadding_MetaData, ARRAY_COUNT(NewProp_YPadding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XPadding_MetaData[] = {
				{ "Category", "FontImportOptionsData" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "Horizontal padding between each font character on the texture page in pixels" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_XPadding = { UE4CodeGen_Private::EPropertyClass::Int, "XPadding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFontImportOptionsData, XPadding), METADATA_PARAMS(NewProp_XPadding_MetaData, ARRAY_COUNT(NewProp_XPadding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TexturePageMaxHeight_MetaData[] = {
				{ "Category", "FontImportOptionsData" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "The maximum vertical size of a texture page for this font in pixels.  The actual height of a texture page may be less than this if the font can fit within a smaller sized texture page." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TexturePageMaxHeight = { UE4CodeGen_Private::EPropertyClass::Int, "TexturePageMaxHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFontImportOptionsData, TexturePageMaxHeight), METADATA_PARAMS(NewProp_TexturePageMaxHeight_MetaData, ARRAY_COUNT(NewProp_TexturePageMaxHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TexturePageWidth_MetaData[] = {
				{ "Category", "FontImportOptionsData" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "Horizontal size of each texture page for this font in pixels" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TexturePageWidth = { UE4CodeGen_Private::EPropertyClass::Int, "TexturePageWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFontImportOptionsData, TexturePageWidth), METADATA_PARAMS(NewProp_TexturePageWidth_MetaData, ARRAY_COUNT(NewProp_TexturePageWidth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDropShadow_MetaData[] = {
				{ "Category", "FontImportOptionsData" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "Enables a very simple, 1-pixel, black colored drop shadow for the generated font" },
			};
#endif
			auto NewProp_bEnableDropShadow_SetBit = [](void* Obj){ ((FFontImportOptionsData*)Obj)->bEnableDropShadow = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDropShadow = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableDropShadow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FFontImportOptionsData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableDropShadow_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableDropShadow_MetaData, ARRAY_COUNT(NewProp_bEnableDropShadow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForegroundColor_MetaData[] = {
				{ "Category", "FontImportOptionsData" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "Color of the foreground font pixels.  Usually you should leave this white and instead use the UI Styles editor to change the color of the font on the fly" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForegroundColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ForegroundColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFontImportOptionsData, ForegroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_ForegroundColor_MetaData, ARRAY_COUNT(NewProp_ForegroundColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeASCIIRange_MetaData[] = {
				{ "Category", "FontImportOptionsData" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "When specifying a range of characters and this is enabled, forces ASCII characters (0 thru 255) to be included as well" },
			};
#endif
			auto NewProp_bIncludeASCIIRange_SetBit = [](void* Obj){ ((FFontImportOptionsData*)Obj)->bIncludeASCIIRange = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeASCIIRange = { UE4CodeGen_Private::EPropertyClass::Bool, "bIncludeASCIIRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FFontImportOptionsData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIncludeASCIIRange_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIncludeASCIIRange_MetaData, ARRAY_COUNT(NewProp_bIncludeASCIIRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreatePrintableOnly_MetaData[] = {
				{ "Category", "FontImportOptionsData" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "Skips generation of glyphs for any characters that are not considered 'printable'" },
			};
#endif
			auto NewProp_bCreatePrintableOnly_SetBit = [](void* Obj){ ((FFontImportOptionsData*)Obj)->bCreatePrintableOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreatePrintableOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bCreatePrintableOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FFontImportOptionsData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCreatePrintableOnly_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCreatePrintableOnly_MetaData, ARRAY_COUNT(NewProp_bCreatePrintableOnly_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharsFileWildcard_MetaData[] = {
				{ "Category", "FontImportOptionsData" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "File mask wildcard that specifies which files within the CharsFilePath to scan for characters in include in the font" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharsFileWildcard = { UE4CodeGen_Private::EPropertyClass::Str, "CharsFileWildcard", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFontImportOptionsData, CharsFileWildcard), METADATA_PARAMS(NewProp_CharsFileWildcard_MetaData, ARRAY_COUNT(NewProp_CharsFileWildcard_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharsFilePath_MetaData[] = {
				{ "Category", "FontImportOptionsData" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "Path on disk to a folder where files that contain a list of characters to include in the font" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharsFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "CharsFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFontImportOptionsData, CharsFilePath), METADATA_PARAMS(NewProp_CharsFilePath_MetaData, ARRAY_COUNT(NewProp_CharsFilePath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnicodeRange_MetaData[] = {
				{ "Category", "FontImportOptionsData" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "Range of Unicode character values to include in the font.  You can specify ranges using hyphens and/or commas (e.g. '400-900')" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_UnicodeRange = { UE4CodeGen_Private::EPropertyClass::Str, "UnicodeRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFontImportOptionsData, UnicodeRange), METADATA_PARAMS(NewProp_UnicodeRange_MetaData, ARRAY_COUNT(NewProp_UnicodeRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chars_MetaData[] = {
				{ "Category", "FontImportOptionsData" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "Explicit list of characters to include in the font" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Chars = { UE4CodeGen_Private::EPropertyClass::Str, "Chars", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFontImportOptionsData, Chars), METADATA_PARAMS(NewProp_Chars_MetaData, ARRAY_COUNT(NewProp_Chars_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterSet_MetaData[] = {
				{ "Category", "FontImportOptionsData" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "Character set for this font" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CharacterSet = { UE4CodeGen_Private::EPropertyClass::Byte, "CharacterSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFontImportOptionsData, CharacterSet), Z_Construct_UEnum_Engine_EFontImportCharacterSet, METADATA_PARAMS(NewProp_CharacterSet_MetaData, ARRAY_COUNT(NewProp_CharacterSet_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlphaOnly_MetaData[] = {
				{ "Category", "FontImportOptionsData" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "if true then forces PF_G8 and only maintains Alpha value and discards color" },
			};
#endif
			auto NewProp_bAlphaOnly_SetBit = [](void* Obj){ ((FFontImportOptionsData*)Obj)->bAlphaOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlphaOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bAlphaOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FFontImportOptionsData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAlphaOnly_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAlphaOnly_MetaData, ARRAY_COUNT(NewProp_bAlphaOnly_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableUnderline_MetaData[] = {
				{ "Category", "FontImportOptionsData" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "Whether the font should be generated with an underline or not" },
			};
#endif
			auto NewProp_bEnableUnderline_SetBit = [](void* Obj){ ((FFontImportOptionsData*)Obj)->bEnableUnderline = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableUnderline = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableUnderline", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FFontImportOptionsData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableUnderline_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableUnderline_MetaData, ARRAY_COUNT(NewProp_bEnableUnderline_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableItalic_MetaData[] = {
				{ "Category", "FontImportOptionsData" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "Whether the font should be generated in italics or not" },
			};
#endif
			auto NewProp_bEnableItalic_SetBit = [](void* Obj){ ((FFontImportOptionsData*)Obj)->bEnableItalic = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableItalic = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableItalic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FFontImportOptionsData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableItalic_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableItalic_MetaData, ARRAY_COUNT(NewProp_bEnableItalic_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableBold_MetaData[] = {
				{ "Category", "FontImportOptionsData" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "Whether the font should be generated in bold or not" },
			};
#endif
			auto NewProp_bEnableBold_SetBit = [](void* Obj){ ((FFontImportOptionsData*)Obj)->bEnableBold = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableBold = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableBold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FFontImportOptionsData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableBold_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableBold_MetaData, ARRAY_COUNT(NewProp_bEnableBold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAntialiasing_MetaData[] = {
				{ "Category", "FontImportOptionsData" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "Whether the font should be antialiased or not.  Usually you should leave this enabled." },
			};
#endif
			auto NewProp_bEnableAntialiasing_SetBit = [](void* Obj){ ((FFontImportOptionsData*)Obj)->bEnableAntialiasing = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAntialiasing = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableAntialiasing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FFontImportOptionsData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableAntialiasing_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableAntialiasing_MetaData, ARRAY_COUNT(NewProp_bEnableAntialiasing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
				{ "Category", "FontImportOptionsData" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "Height of font (point size)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Float, "Height", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFontImportOptionsData, Height), METADATA_PARAMS(NewProp_Height_MetaData, ARRAY_COUNT(NewProp_Height_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontName_MetaData[] = {
				{ "Category", "FontImportOptionsData" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "Name of the typeface for the font to import" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FontName = { UE4CodeGen_Private::EPropertyClass::Str, "FontName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFontImportOptionsData, FontName), METADATA_PARAMS(NewProp_FontName_MetaData, ARRAY_COUNT(NewProp_FontName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistanceFieldScanRadiusScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistanceFieldScaleFactor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseDistanceFieldAlpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Kerning,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableLegacyMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExtendBoxLeft,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExtendBoxRight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExtendBoxBottom,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExtendBoxTop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_YPadding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_XPadding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TexturePageMaxHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TexturePageWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableDropShadow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForegroundColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIncludeASCIIRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCreatePrintableOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CharsFileWildcard,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CharsFilePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UnicodeRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Chars,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CharacterSet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAlphaOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableUnderline,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableItalic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableBold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableAntialiasing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Height,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FontName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"FontImportOptionsData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FFontImportOptionsData),
				alignof(FFontImportOptionsData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFontImportOptionsData_CRC() { return 2796218607U; }
	void UFontImportOptions::StaticRegisterNativesUFontImportOptions()
	{
	}
	UClass* Z_Construct_UClass_UFontImportOptions_NoRegister()
	{
		return UFontImportOptions::StaticClass();
	}
	UClass* Z_Construct_UClass_UFontImportOptions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object" },
				{ "IncludePath", "Engine/FontImportOptions.h" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "Holds options for importing fonts." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
				{ "Category", "FontImportOptions" },
				{ "FullyExpand", "true" },
				{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
				{ "ToolTip", "The actual data for this object.  We wrap it in a struct so that we can copy it around between objects." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data = { UE4CodeGen_Private::EPropertyClass::Struct, "Data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFontImportOptions, Data), Z_Construct_UScriptStruct_FFontImportOptionsData, METADATA_PARAMS(NewProp_Data_MetaData, ARRAY_COUNT(NewProp_Data_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Data,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UFontImportOptions>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UFontImportOptions::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080088u,
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
	IMPLEMENT_CLASS(UFontImportOptions, 1954823524);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFontImportOptions(Z_Construct_UClass_UFontImportOptions, &UFontImportOptions::StaticClass, TEXT("/Script/Engine"), TEXT("UFontImportOptions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFontImportOptions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
