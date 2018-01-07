// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/Font.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFont() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFontCacheType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFontCharacter();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFont();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCompositeFont();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFontImportOptionsData();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SLATECORE_API UClass* Z_Construct_UClass_UFontProviderInterface_NoRegister();
// End Cross Module References
	static UEnum* EFontCacheType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EFontCacheType, Z_Construct_UPackage__Script_Engine(), TEXT("EFontCacheType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFontCacheType(EFontCacheType_StaticEnum, TEXT("/Script/Engine"), TEXT("EFontCacheType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EFontCacheType_CRC() { return 337559348U; }
	UEnum* Z_Construct_UEnum_Engine_EFontCacheType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFontCacheType"), 0, Get_Z_Construct_UEnum_Engine_EFontCacheType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFontCacheType::Offline", (int64)EFontCacheType::Offline },
				{ "EFontCacheType::Runtime", (int64)EFontCacheType::Runtime },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Font.h" },
				{ "Offline.ToolTip", "The font is using offline caching (this is how UFont traditionally worked)." },
				{ "Runtime.ToolTip", "The font is using runtime caching (this is how Slate fonts work)." },
				{ "ToolTip", "Enumerates supported font caching types." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFontCacheType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EFontCacheType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FFontCharacter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FFontCharacter_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFontCharacter, Z_Construct_UPackage__Script_Engine(), TEXT("FontCharacter"), sizeof(FFontCharacter), Get_Z_Construct_UScriptStruct_FFontCharacter_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFontCharacter(FFontCharacter::StaticStruct, TEXT("/Script/Engine"), TEXT("FontCharacter"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFFontCharacter
{
	FScriptStruct_Engine_StaticRegisterNativesFFontCharacter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FontCharacter")),new UScriptStruct::TCppStructOps<FFontCharacter>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFFontCharacter;
	UScriptStruct* Z_Construct_UScriptStruct_FFontCharacter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFontCharacter_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FontCharacter"), sizeof(FFontCharacter), Get_Z_Construct_UScriptStruct_FFontCharacter_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Font.h" },
				{ "ToolTip", "This struct is serialized using native serialization so any changes to it require a package version bump." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFontCharacter>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalOffset_MetaData[] = {
				{ "Category", "FontCharacter" },
				{ "ModuleRelativePath", "Classes/Engine/Font.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_VerticalOffset = { UE4CodeGen_Private::EPropertyClass::Int, "VerticalOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFontCharacter, VerticalOffset), METADATA_PARAMS(NewProp_VerticalOffset_MetaData, ARRAY_COUNT(NewProp_VerticalOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureIndex_MetaData[] = {
				{ "Category", "FontCharacter" },
				{ "ModuleRelativePath", "Classes/Engine/Font.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextureIndex = { UE4CodeGen_Private::EPropertyClass::Byte, "TextureIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFontCharacter, TextureIndex), nullptr, METADATA_PARAMS(NewProp_TextureIndex_MetaData, ARRAY_COUNT(NewProp_TextureIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VSize_MetaData[] = {
				{ "Category", "FontCharacter" },
				{ "ModuleRelativePath", "Classes/Engine/Font.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_VSize = { UE4CodeGen_Private::EPropertyClass::Int, "VSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFontCharacter, VSize), METADATA_PARAMS(NewProp_VSize_MetaData, ARRAY_COUNT(NewProp_VSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_USize_MetaData[] = {
				{ "Category", "FontCharacter" },
				{ "ModuleRelativePath", "Classes/Engine/Font.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_USize = { UE4CodeGen_Private::EPropertyClass::Int, "USize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFontCharacter, USize), METADATA_PARAMS(NewProp_USize_MetaData, ARRAY_COUNT(NewProp_USize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartV_MetaData[] = {
				{ "Category", "FontCharacter" },
				{ "ModuleRelativePath", "Classes/Engine/Font.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartV = { UE4CodeGen_Private::EPropertyClass::Int, "StartV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFontCharacter, StartV), METADATA_PARAMS(NewProp_StartV_MetaData, ARRAY_COUNT(NewProp_StartV_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartU_MetaData[] = {
				{ "Category", "FontCharacter" },
				{ "ModuleRelativePath", "Classes/Engine/Font.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartU = { UE4CodeGen_Private::EPropertyClass::Int, "StartU", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFontCharacter, StartU), METADATA_PARAMS(NewProp_StartU_MetaData, ARRAY_COUNT(NewProp_StartU_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VerticalOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_USize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartU,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"FontCharacter",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FFontCharacter),
				alignof(FFontCharacter),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFontCharacter_CRC() { return 457065256U; }
	void UFont::StaticRegisterNativesUFont()
	{
	}
	UClass* Z_Construct_UClass_UFont_NoRegister()
	{
		return UFont::StaticClass();
	}
	UClass* Z_Construct_UClass_UFont()
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
				{ "AutoExpandCategories", "Font" },
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Engine/Font.h" },
				{ "ModuleRelativePath", "Classes/Engine/Font.h" },
				{ "ToolTip", "A font object, for use by Slate, UMG, and Canvas.\n\nA font can either be:\n  * Runtime cached - The font contains a series of TTF files that combine to form a composite font. The glyphs are cached on demand when required at runtime.\n  * Offline cached - The font contains a series of textures containing pre-baked cached glyphs and their associated texture coordinates." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompositeFont_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Font.h" },
				{ "ToolTip", "Embedded composite font data" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CompositeFont = { UE4CodeGen_Private::EPropertyClass::Struct, "CompositeFont", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UFont, CompositeFont), Z_Construct_UScriptStruct_FCompositeFont, METADATA_PARAMS(NewProp_CompositeFont_MetaData, ARRAY_COUNT(NewProp_CompositeFont_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LegacyFontName_MetaData[] = {
				{ "Category", "RuntimeFont" },
				{ "ModuleRelativePath", "Classes/Engine/Font.h" },
				{ "ToolTip", "The default font name to use for legacy Canvas APIs that don't specify a font name" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_LegacyFontName = { UE4CodeGen_Private::EPropertyClass::Name, "LegacyFontName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFont, LegacyFontName), METADATA_PARAMS(NewProp_LegacyFontName_MetaData, ARRAY_COUNT(NewProp_LegacyFontName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LegacyFontSize_MetaData[] = {
				{ "Category", "RuntimeFont" },
				{ "ModuleRelativePath", "Classes/Engine/Font.h" },
				{ "ToolTip", "The default size of the font used for legacy Canvas APIs that don't specify a font size" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LegacyFontSize = { UE4CodeGen_Private::EPropertyClass::Int, "LegacyFontSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFont, LegacyFontSize), METADATA_PARAMS(NewProp_LegacyFontSize_MetaData, ARRAY_COUNT(NewProp_LegacyFontSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalingFactor_MetaData[] = {
				{ "Category", "OfflineFont" },
				{ "ModuleRelativePath", "Classes/Engine/Font.h" },
				{ "ToolTip", "Scale to apply to the font." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScalingFactor = { UE4CodeGen_Private::EPropertyClass::Float, "ScalingFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFont, ScalingFactor), METADATA_PARAMS(NewProp_ScalingFactor_MetaData, ARRAY_COUNT(NewProp_ScalingFactor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCharHeight_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Font.h" },
				{ "ToolTip", "The maximum height of a character in this font.  For multi-fonts, this array will contain a maximum\n              character height for each multi-font, otherwise the array will contain only a single element.  This is\n              cached at load-time or creation time, and is never serialized." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaxCharHeight = { UE4CodeGen_Private::EPropertyClass::Array, "MaxCharHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UFont, MaxCharHeight), METADATA_PARAMS(NewProp_MaxCharHeight_MetaData, ARRAY_COUNT(NewProp_MaxCharHeight_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCharHeight_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "MaxCharHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumCharacters_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Font.h" },
				{ "ToolTip", "Number of characters in the font, not including multiple instances of the same character (for multi-fonts).\n              This is cached at load-time or creation time, and is never serialized." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumCharacters = { UE4CodeGen_Private::EPropertyClass::Int, "NumCharacters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UFont, NumCharacters), METADATA_PARAMS(NewProp_NumCharacters_MetaData, ARRAY_COUNT(NewProp_NumCharacters_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportOptions_MetaData[] = {
				{ "Category", "OfflineFont" },
				{ "ModuleRelativePath", "Classes/Engine/Font.h" },
				{ "ToolTip", "Options used when importing this font" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImportOptions = { UE4CodeGen_Private::EPropertyClass::Struct, "ImportOptions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFont, ImportOptions), Z_Construct_UScriptStruct_FFontImportOptionsData, METADATA_PARAMS(NewProp_ImportOptions_MetaData, ARRAY_COUNT(NewProp_ImportOptions_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kerning_MetaData[] = {
				{ "Category", "OfflineFont" },
				{ "ModuleRelativePath", "Classes/Engine/Font.h" },
				{ "ToolTip", "Default horizontal spacing between characters when rendering text with this font" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Kerning = { UE4CodeGen_Private::EPropertyClass::Int, "Kerning", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFont, Kerning), METADATA_PARAMS(NewProp_Kerning_MetaData, ARRAY_COUNT(NewProp_Kerning_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Leading_MetaData[] = {
				{ "Category", "OfflineFont" },
				{ "ModuleRelativePath", "Classes/Engine/Font.h" },
				{ "ToolTip", "@todo document" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Leading = { UE4CodeGen_Private::EPropertyClass::Float, "Leading", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFont, Leading), METADATA_PARAMS(NewProp_Leading_MetaData, ARRAY_COUNT(NewProp_Leading_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Descent_MetaData[] = {
				{ "Category", "OfflineFont" },
				{ "ModuleRelativePath", "Classes/Engine/Font.h" },
				{ "ToolTip", "@todo document" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Descent = { UE4CodeGen_Private::EPropertyClass::Float, "Descent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFont, Descent), METADATA_PARAMS(NewProp_Descent_MetaData, ARRAY_COUNT(NewProp_Descent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ascent_MetaData[] = {
				{ "Category", "OfflineFont" },
				{ "ModuleRelativePath", "Classes/Engine/Font.h" },
				{ "ToolTip", "@todo document" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ascent = { UE4CodeGen_Private::EPropertyClass::Float, "Ascent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFont, Ascent), METADATA_PARAMS(NewProp_Ascent_MetaData, ARRAY_COUNT(NewProp_Ascent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmScale_MetaData[] = {
				{ "Category", "OfflineFont" },
				{ "ModuleRelativePath", "Classes/Engine/Font.h" },
				{ "ToolTip", "Font metrics." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmScale = { UE4CodeGen_Private::EPropertyClass::Float, "EmScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFont, EmScale), METADATA_PARAMS(NewProp_EmScale_MetaData, ARRAY_COUNT(NewProp_EmScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsRemapped_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Font.h" },
				{ "ToolTip", "True if font is 'remapped'.  That is, the character array is not a direct mapping to unicode values.  Instead,\n              all characters are indexed indirectly through the CharRemap array" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_IsRemapped = { UE4CodeGen_Private::EPropertyClass::Int, "IsRemapped", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UFont, IsRemapped), METADATA_PARAMS(NewProp_IsRemapped_MetaData, ARRAY_COUNT(NewProp_IsRemapped_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Font.h" },
				{ "ToolTip", "Textures that store this font's glyph image data //NOTE: Do not expose this to the editor as it has nasty crash potential" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Textures = { UE4CodeGen_Private::EPropertyClass::Array, "Textures", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UFont, Textures), METADATA_PARAMS(NewProp_Textures_MetaData, ARRAY_COUNT(NewProp_Textures_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Textures_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Textures", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Characters_MetaData[] = {
				{ "Category", "OfflineFont" },
				{ "ModuleRelativePath", "Classes/Engine/Font.h" },
				{ "ToolTip", "List of characters in the font.  For a MultiFont, this will include all characters in all sub-fonts!  Thus,\n              the number of characters in this array isn't necessary the number of characters available in the font" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Characters = { UE4CodeGen_Private::EPropertyClass::Array, "Characters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFont, Characters), METADATA_PARAMS(NewProp_Characters_MetaData, ARRAY_COUNT(NewProp_Characters_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Characters_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Characters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFontCharacter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontCacheType_MetaData[] = {
				{ "Category", "Font" },
				{ "ModuleRelativePath", "Classes/Engine/Font.h" },
				{ "ToolTip", "What kind of font caching should we use? This controls which options we see" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FontCacheType = { UE4CodeGen_Private::EPropertyClass::Enum, "FontCacheType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFont, FontCacheType), Z_Construct_UEnum_Engine_EFontCacheType, METADATA_PARAMS(NewProp_FontCacheType_MetaData, ARRAY_COUNT(NewProp_FontCacheType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_FontCacheType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompositeFont,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LegacyFontName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LegacyFontSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScalingFactor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxCharHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxCharHeight_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumCharacters,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImportOptions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Kerning,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Leading,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Descent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Ascent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsRemapped,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Textures,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Textures_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Characters,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Characters_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FontCacheType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FontCacheType_Underlying,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UFontProviderInterface_NoRegister, (int32)VTABLE_OFFSET(UFont, IFontProviderInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UFont>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UFont::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFont, 54792588);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFont(Z_Construct_UClass_UFont, &UFont::StaticClass, TEXT("/Script/Engine"), TEXT("UFont"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFont);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
