// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/Texture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexture() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureCompressionQuality();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureSourceFormat();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureSourceArtType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureMipCount();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECompositeTextureMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureFilter();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureCompressionSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTexturePlatformData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureSource();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureGroup();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureMipGenSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETexturePowerOfTwoSetting();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
// End Cross Module References
	static UEnum* ETextureCompressionQuality_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureCompressionQuality, Z_Construct_UPackage__Script_Engine(), TEXT("ETextureCompressionQuality"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextureCompressionQuality(ETextureCompressionQuality_StaticEnum, TEXT("/Script/Engine"), TEXT("ETextureCompressionQuality"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETextureCompressionQuality_CRC() { return 1787446363U; }
	UEnum* Z_Construct_UEnum_Engine_ETextureCompressionQuality()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextureCompressionQuality"), 0, Get_Z_Construct_UEnum_Engine_ETextureCompressionQuality_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TCQ_Default", (int64)TCQ_Default },
				{ "TCQ_Lowest", (int64)TCQ_Lowest },
				{ "TCQ_Low", (int64)TCQ_Low },
				{ "TCQ_Medium", (int64)TCQ_Medium },
				{ "TCQ_High", (int64)TCQ_High },
				{ "TCQ_Highest", (int64)TCQ_Highest },
				{ "TCQ_MAX", (int64)TCQ_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "TCQ_Default.DisplayName", "Default" },
				{ "TCQ_High.DisplayName", "High" },
				{ "TCQ_Highest.DisplayName", "Highest" },
				{ "TCQ_Low.DisplayName", "Low" },
				{ "TCQ_Lowest.DisplayName", "Lowest" },
				{ "TCQ_Medium.DisplayName", "Medium" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETextureCompressionQuality",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ETextureCompressionQuality",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETextureSourceFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureSourceFormat, Z_Construct_UPackage__Script_Engine(), TEXT("ETextureSourceFormat"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextureSourceFormat(ETextureSourceFormat_StaticEnum, TEXT("/Script/Engine"), TEXT("ETextureSourceFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETextureSourceFormat_CRC() { return 529474868U; }
	UEnum* Z_Construct_UEnum_Engine_ETextureSourceFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextureSourceFormat"), 0, Get_Z_Construct_UEnum_Engine_ETextureSourceFormat_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TSF_Invalid", (int64)TSF_Invalid },
				{ "TSF_G8", (int64)TSF_G8 },
				{ "TSF_BGRA8", (int64)TSF_BGRA8 },
				{ "TSF_BGRE8", (int64)TSF_BGRE8 },
				{ "TSF_RGBA16", (int64)TSF_RGBA16 },
				{ "TSF_RGBA16F", (int64)TSF_RGBA16F },
				{ "TSF_RGBA8", (int64)TSF_RGBA8 },
				{ "TSF_RGBE8", (int64)TSF_RGBE8 },
				{ "TSF_MAX", (int64)TSF_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "TSF_RGBA8.ToolTip", "@todo: Deprecated!" },
				{ "TSF_RGBE8.ToolTip", "@todo: Deprecated!" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETextureSourceFormat",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ETextureSourceFormat",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETextureSourceArtType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureSourceArtType, Z_Construct_UPackage__Script_Engine(), TEXT("ETextureSourceArtType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextureSourceArtType(ETextureSourceArtType_StaticEnum, TEXT("/Script/Engine"), TEXT("ETextureSourceArtType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETextureSourceArtType_CRC() { return 3365606121U; }
	UEnum* Z_Construct_UEnum_Engine_ETextureSourceArtType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextureSourceArtType"), 0, Get_Z_Construct_UEnum_Engine_ETextureSourceArtType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TSAT_Uncompressed", (int64)TSAT_Uncompressed },
				{ "TSAT_PNGCompressed", (int64)TSAT_PNGCompressed },
				{ "TSAT_DDSFile", (int64)TSAT_DDSFile },
				{ "TSAT_MAX", (int64)TSAT_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "TSAT_DDSFile.ToolTip", "DDS file with header." },
				{ "TSAT_PNGCompressed.ToolTip", "PNG compresed version of FColor Data[SrcWidth * SrcHeight]." },
				{ "TSAT_Uncompressed.ToolTip", "FColor Data[SrcWidth * SrcHeight]." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETextureSourceArtType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ETextureSourceArtType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETextureMipCount_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureMipCount, Z_Construct_UPackage__Script_Engine(), TEXT("ETextureMipCount"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextureMipCount(ETextureMipCount_StaticEnum, TEXT("/Script/Engine"), TEXT("ETextureMipCount"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETextureMipCount_CRC() { return 1306806979U; }
	UEnum* Z_Construct_UEnum_Engine_ETextureMipCount()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextureMipCount"), 0, Get_Z_Construct_UEnum_Engine_ETextureMipCount_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TMC_ResidentMips", (int64)TMC_ResidentMips },
				{ "TMC_AllMips", (int64)TMC_AllMips },
				{ "TMC_AllMipsBiased", (int64)TMC_AllMipsBiased },
				{ "TMC_MAX", (int64)TMC_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETextureMipCount",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ETextureMipCount",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECompositeTextureMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECompositeTextureMode, Z_Construct_UPackage__Script_Engine(), TEXT("ECompositeTextureMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECompositeTextureMode(ECompositeTextureMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ECompositeTextureMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECompositeTextureMode_CRC() { return 1292755258U; }
	UEnum* Z_Construct_UEnum_Engine_ECompositeTextureMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECompositeTextureMode"), 0, Get_Z_Construct_UEnum_Engine_ECompositeTextureMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CTM_Disabled", (int64)CTM_Disabled },
				{ "CTM_NormalRoughnessToRed", (int64)CTM_NormalRoughnessToRed },
				{ "CTM_NormalRoughnessToGreen", (int64)CTM_NormalRoughnessToGreen },
				{ "CTM_NormalRoughnessToBlue", (int64)CTM_NormalRoughnessToBlue },
				{ "CTM_NormalRoughnessToAlpha", (int64)CTM_NormalRoughnessToAlpha },
				{ "CTM_MAX", (int64)CTM_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CTM_Disabled.DisplayName", "Disabled" },
				{ "CTM_NormalRoughnessToAlpha.DisplayName", "Add Normal Roughness To Alpha" },
				{ "CTM_NormalRoughnessToAlpha.ToolTip", "CompositingTexture needs to be a normal map with the same or larger size." },
				{ "CTM_NormalRoughnessToBlue.DisplayName", "Add Normal Roughness To Blue" },
				{ "CTM_NormalRoughnessToBlue.ToolTip", "CompositingTexture needs to be a normal map with the same or larger size." },
				{ "CTM_NormalRoughnessToGreen.DisplayName", "Add Normal Roughness To Green" },
				{ "CTM_NormalRoughnessToGreen.ToolTip", "CompositingTexture needs to be a normal map with the same or larger size." },
				{ "CTM_NormalRoughnessToRed.DisplayName", "Add Normal Roughness To Red" },
				{ "CTM_NormalRoughnessToRed.ToolTip", "CompositingTexture needs to be a normal map with the same or larger size." },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECompositeTextureMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ECompositeTextureMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* TextureAddress_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_TextureAddress, Z_Construct_UPackage__Script_Engine(), TEXT("TextureAddress"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_TextureAddress(TextureAddress_StaticEnum, TEXT("/Script/Engine"), TEXT("TextureAddress"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_TextureAddress_CRC() { return 2317966004U; }
	UEnum* Z_Construct_UEnum_Engine_TextureAddress()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("TextureAddress"), 0, Get_Z_Construct_UEnum_Engine_TextureAddress_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TA_Wrap", (int64)TA_Wrap },
				{ "TA_Clamp", (int64)TA_Clamp },
				{ "TA_Mirror", (int64)TA_Mirror },
				{ "TA_MAX", (int64)TA_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "TA_Clamp.DisplayName", "Clamp" },
				{ "TA_Mirror.DisplayName", "Mirror" },
				{ "TA_Wrap.DisplayName", "Wrap" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"TextureAddress",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"TextureAddress",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* TextureFilter_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_TextureFilter, Z_Construct_UPackage__Script_Engine(), TEXT("TextureFilter"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_TextureFilter(TextureFilter_StaticEnum, TEXT("/Script/Engine"), TEXT("TextureFilter"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_TextureFilter_CRC() { return 3496394073U; }
	UEnum* Z_Construct_UEnum_Engine_TextureFilter()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("TextureFilter"), 0, Get_Z_Construct_UEnum_Engine_TextureFilter_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TF_Nearest", (int64)TF_Nearest },
				{ "TF_Bilinear", (int64)TF_Bilinear },
				{ "TF_Trilinear", (int64)TF_Trilinear },
				{ "TF_Default", (int64)TF_Default },
				{ "TF_MAX", (int64)TF_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "TF_Bilinear.DisplayName", "Bi-linear" },
				{ "TF_Default.DisplayName", "Default (from Texture Group)" },
				{ "TF_Default.ToolTip", "Use setting from the Texture Group." },
				{ "TF_Nearest.DisplayName", "Nearest" },
				{ "TF_Trilinear.DisplayName", "Tri-linear" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"TextureFilter",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"TextureFilter",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* TextureCompressionSettings_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_TextureCompressionSettings, Z_Construct_UPackage__Script_Engine(), TEXT("TextureCompressionSettings"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_TextureCompressionSettings(TextureCompressionSettings_StaticEnum, TEXT("/Script/Engine"), TEXT("TextureCompressionSettings"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_TextureCompressionSettings_CRC() { return 2475167524U; }
	UEnum* Z_Construct_UEnum_Engine_TextureCompressionSettings()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("TextureCompressionSettings"), 0, Get_Z_Construct_UEnum_Engine_TextureCompressionSettings_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TC_Default", (int64)TC_Default },
				{ "TC_Normalmap", (int64)TC_Normalmap },
				{ "TC_Masks", (int64)TC_Masks },
				{ "TC_Grayscale", (int64)TC_Grayscale },
				{ "TC_Displacementmap", (int64)TC_Displacementmap },
				{ "TC_VectorDisplacementmap", (int64)TC_VectorDisplacementmap },
				{ "TC_HDR", (int64)TC_HDR },
				{ "TC_EditorIcon", (int64)TC_EditorIcon },
				{ "TC_Alpha", (int64)TC_Alpha },
				{ "TC_DistanceFieldFont", (int64)TC_DistanceFieldFont },
				{ "TC_HDR_Compressed", (int64)TC_HDR_Compressed },
				{ "TC_BC7", (int64)TC_BC7 },
				{ "TC_MAX", (int64)TC_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "TC_Alpha.DisplayName", "Alpha (no sRGB, BC4 on DX11)" },
				{ "TC_BC7.DisplayName", "BC7 (DX11, optional A)" },
				{ "TC_Default.DisplayName", "Default (DXT1/5, BC1/3 on DX11)" },
				{ "TC_Displacementmap.DisplayName", "Displacementmap (8/16bit)" },
				{ "TC_DistanceFieldFont.DisplayName", "DistanceFieldFont (R8)" },
				{ "TC_EditorIcon.DisplayName", "UserInterface2D (RGBA)" },
				{ "TC_Grayscale.DisplayName", "Grayscale (R8, RGB8 sRGB)" },
				{ "TC_HDR.DisplayName", "HDR (RGB, no sRGB)" },
				{ "TC_HDR_Compressed.DisplayName", "HDRCompressed (RGB, BC6H, DX11)" },
				{ "TC_Masks.DisplayName", "Masks (no sRGB)" },
				{ "TC_Normalmap.DisplayName", "Normalmap (DXT5, BC5 on DX11)" },
				{ "TC_VectorDisplacementmap.DisplayName", "VectorDisplacementmap (RGBA8)" },
				{ "ToolTip", "This needs to be mirrored in EditorFactories.cpp." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"TextureCompressionSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"TextureCompressionSettings",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FTexturePlatformData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTexturePlatformData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTexturePlatformData, Z_Construct_UPackage__Script_Engine(), TEXT("TexturePlatformData"), sizeof(FTexturePlatformData), Get_Z_Construct_UScriptStruct_FTexturePlatformData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTexturePlatformData(FTexturePlatformData::StaticStruct, TEXT("/Script/Engine"), TEXT("TexturePlatformData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTexturePlatformData
{
	FScriptStruct_Engine_StaticRegisterNativesFTexturePlatformData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TexturePlatformData")),new UScriptStruct::TCppStructOps<FTexturePlatformData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTexturePlatformData;
	UScriptStruct* Z_Construct_UScriptStruct_FTexturePlatformData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTexturePlatformData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TexturePlatformData"), sizeof(FTexturePlatformData), Get_Z_Construct_UScriptStruct_FTexturePlatformData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "Platform-specific data used by the texture resource at runtime." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTexturePlatformData>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TexturePlatformData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FTexturePlatformData),
				alignof(FTexturePlatformData),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTexturePlatformData_CRC() { return 557873845U; }
class UScriptStruct* FTextureSource::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTextureSource_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureSource, Z_Construct_UPackage__Script_Engine(), TEXT("TextureSource"), sizeof(FTextureSource), Get_Z_Construct_UScriptStruct_FTextureSource_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTextureSource(FTextureSource::StaticStruct, TEXT("/Script/Engine"), TEXT("TextureSource"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTextureSource
{
	FScriptStruct_Engine_StaticRegisterNativesFTextureSource()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TextureSource")),new UScriptStruct::TCppStructOps<FTextureSource>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTextureSource;
	UScriptStruct* Z_Construct_UScriptStruct_FTextureSource()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTextureSource_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TextureSource"), sizeof(FTextureSource), Get_Z_Construct_UScriptStruct_FTextureSource_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "Texture source data management." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureSource>(); };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[] = {
				{ "Category", "TextureSource" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "Format in which the source data is stored." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Format = { UE4CodeGen_Private::EPropertyClass::Byte, "Format", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800020001, 1, nullptr, STRUCT_OFFSET(FTextureSource, Format), Z_Construct_UEnum_Engine_ETextureSourceFormat, METADATA_PARAMS(NewProp_Format_MetaData, ARRAY_COUNT(NewProp_Format_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGuidIsHash_MetaData[] = {
				{ "Category", "TextureSource" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "Legacy textures use a hash instead of a GUID." },
			};
#endif
			auto NewProp_bGuidIsHash_SetBit = [](void* Obj){ ((FTextureSource*)Obj)->bGuidIsHash = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGuidIsHash = { UE4CodeGen_Private::EPropertyClass::Bool, "bGuidIsHash", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800020001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FTextureSource), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGuidIsHash_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGuidIsHash_MetaData, ARRAY_COUNT(NewProp_bGuidIsHash_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPNGCompressed_MetaData[] = {
				{ "Category", "TextureSource" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "RGBA8 source data is optionally compressed as PNG." },
			};
#endif
			auto NewProp_bPNGCompressed_SetBit = [](void* Obj){ ((FTextureSource*)Obj)->bPNGCompressed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPNGCompressed = { UE4CodeGen_Private::EPropertyClass::Bool, "bPNGCompressed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800020001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FTextureSource), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPNGCompressed_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPNGCompressed_MetaData, ARRAY_COUNT(NewProp_bPNGCompressed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumMips_MetaData[] = {
				{ "Category", "TextureSource" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "Number of mips provided as source data for the texture." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumMips = { UE4CodeGen_Private::EPropertyClass::Int, "NumMips", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800020001, 1, nullptr, STRUCT_OFFSET(FTextureSource, NumMips), METADATA_PARAMS(NewProp_NumMips_MetaData, ARRAY_COUNT(NewProp_NumMips_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSlices_MetaData[] = {
				{ "Category", "TextureSource" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "Depth (volume textures) or faces (cube maps)." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSlices = { UE4CodeGen_Private::EPropertyClass::Int, "NumSlices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800020001, 1, nullptr, STRUCT_OFFSET(FTextureSource, NumSlices), METADATA_PARAMS(NewProp_NumSlices_MetaData, ARRAY_COUNT(NewProp_NumSlices_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[] = {
				{ "Category", "TextureSource" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "Height of the texture." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeY = { UE4CodeGen_Private::EPropertyClass::Int, "SizeY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800020001, 1, nullptr, STRUCT_OFFSET(FTextureSource, SizeY), METADATA_PARAMS(NewProp_SizeY_MetaData, ARRAY_COUNT(NewProp_SizeY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[] = {
				{ "Category", "TextureSource" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "Width of the texture." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX = { UE4CodeGen_Private::EPropertyClass::Int, "SizeX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800020001, 1, nullptr, STRUCT_OFFSET(FTextureSource, SizeX), METADATA_PARAMS(NewProp_SizeX_MetaData, ARRAY_COUNT(NewProp_SizeX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
				{ "Category", "TextureSource" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "GUID used to track changes to the source data." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Id = { UE4CodeGen_Private::EPropertyClass::Struct, "Id", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800020001, 1, nullptr, STRUCT_OFFSET(FTextureSource, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_Id_MetaData, ARRAY_COUNT(NewProp_Id_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Format,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGuidIsHash,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPNGCompressed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumMips,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumSlices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SizeY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SizeX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Id,
			};
#endif // WITH_EDITORONLY_DATA
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TextureSource",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FTextureSource),
				alignof(FTextureSource),
				IF_WITH_EDITORONLY_DATA(PropPointers, nullptr), IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(PropPointers), 0),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTextureSource_CRC() { return 1601336906U; }
	void UTexture::StaticRegisterNativesUTexture()
	{
	}
	UClass* Z_Construct_UClass_UTexture_NoRegister()
	{
		return UTexture::StaticClass();
	}
	UClass* Z_Construct_UClass_UTexture()
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
				{ "BlueprintType", "true" },
				{ "IncludePath", "Engine/Texture.h" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODGroup_MetaData[] = {
				{ "Category", "LevelOfDetail" },
				{ "DisplayName", "Texture Group" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "Texture group this texture belongs to" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LODGroup = { UE4CodeGen_Private::EPropertyClass::Byte, "LODGroup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000005, 1, nullptr, STRUCT_OFFSET(UTexture, LODGroup), Z_Construct_UEnum_Engine_TextureGroup, METADATA_PARAMS(NewProp_LODGroup_MetaData, ARRAY_COUNT(NewProp_LODGroup_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
				{ "Category", "Texture" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "The texture filtering mode to use when sampling this texture." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Filter = { UE4CodeGen_Private::EPropertyClass::Byte, "Filter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010050000000005, 1, nullptr, STRUCT_OFFSET(UTexture, Filter), Z_Construct_UEnum_Engine_TextureFilter, METADATA_PARAMS(NewProp_Filter_MetaData, ARRAY_COUNT(NewProp_Filter_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionSettings_MetaData[] = {
				{ "Category", "Compression" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "Compression settings to use when building the texture." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompressionSettings = { UE4CodeGen_Private::EPropertyClass::Byte, "CompressionSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000005, 1, nullptr, STRUCT_OFFSET(UTexture, CompressionSettings), Z_Construct_UEnum_Engine_TextureCompressionSettings, METADATA_PARAMS(NewProp_CompressionSettings_MetaData, ARRAY_COUNT(NewProp_CompressionSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAsyncResourceReleaseHasBeenStarted_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "Whether the async resource release process has already been kicked off or not" },
			};
#endif
			auto NewProp_bAsyncResourceReleaseHasBeenStarted_SetBit = [](void* Obj){ ((UTexture*)Obj)->bAsyncResourceReleaseHasBeenStarted = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAsyncResourceReleaseHasBeenStarted = { UE4CodeGen_Private::EPropertyClass::Bool, "bAsyncResourceReleaseHasBeenStarted", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTexture), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAsyncResourceReleaseHasBeenStarted_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAsyncResourceReleaseHasBeenStarted_MetaData, ARRAY_COUNT(NewProp_bAsyncResourceReleaseHasBeenStarted_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedCombinedLODBias_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "Cached combined group and texture LOD bias to use." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CachedCombinedLODBias = { UE4CodeGen_Private::EPropertyClass::Int, "CachedCombinedLODBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UTexture, CachedCombinedLODBias), METADATA_PARAMS(NewProp_CachedCombinedLODBias_MetaData, ARRAY_COUNT(NewProp_CachedCombinedLODBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[] = {
				{ "Category", "Texture" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "Array of user data stored with the asset" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetUserData = { UE4CodeGen_Private::EPropertyClass::Array, "AssetUserData", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c8000000009, 1, nullptr, STRUCT_OFFSET(UTexture, AssetUserData), METADATA_PARAMS(NewProp_AssetUserData_MetaData, ARRAY_COUNT(NewProp_AssetUserData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[] = {
				{ "Category", "Texture" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "Array of user data stored with the asset" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AssetUserData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(NewProp_AssetUserData_Inner_MetaData, ARRAY_COUNT(NewProp_AssetUserData_Inner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCinematicMipLevels_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "Whether to use the extra cinematic quality mip-levels, when we're forcing mip-levels to be resident." },
			};
#endif
			auto NewProp_bUseCinematicMipLevels_SetBit = [](void* Obj){ ((UTexture*)Obj)->bUseCinematicMipLevels = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCinematicMipLevels = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseCinematicMipLevels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTexture), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseCinematicMipLevels_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseCinematicMipLevels_MetaData, ARRAY_COUNT(NewProp_bUseCinematicMipLevels_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoTiling_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "If true, the RHI texture will be created using TexCreate_NoTiling" },
			};
#endif
			auto NewProp_bNoTiling_SetBit = [](void* Obj){ ((UTexture*)Obj)->bNoTiling = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoTiling = { UE4CodeGen_Private::EPropertyClass::Bool, "bNoTiling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTexture), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNoTiling_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNoTiling_MetaData, ARRAY_COUNT(NewProp_bNoTiling_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeverStream_MetaData[] = {
				{ "Category", "Texture" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
			};
#endif
			auto NewProp_NeverStream_SetBit = [](void* Obj){ ((UTexture*)Obj)->NeverStream = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeverStream = { UE4CodeGen_Private::EPropertyClass::Bool, "NeverStream", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010050000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTexture), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_NeverStream_SetBit)>::SetBit, METADATA_PARAMS(NewProp_NeverStream_MetaData, ARRAY_COUNT(NewProp_NeverStream_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyGamma_MetaData[] = {
				{ "Category", "Texture" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "A flag for using the simplified legacy gamma space e.g pow(color,1/2.2) for converting from FColor to FLinearColor, if we're doing sRGB." },
			};
#endif
			auto NewProp_bUseLegacyGamma_SetBit = [](void* Obj){ ((UTexture*)Obj)->bUseLegacyGamma = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyGamma = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseLegacyGamma", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTexture), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseLegacyGamma_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseLegacyGamma_MetaData, ARRAY_COUNT(NewProp_bUseLegacyGamma_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SRGB_MetaData[] = {
				{ "Category", "Texture" },
				{ "DisplayName", "sRGB" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "This should be unchecked if using alpha channels individually as masks." },
			};
#endif
			auto NewProp_SRGB_SetBit = [](void* Obj){ ((UTexture*)Obj)->SRGB = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SRGB = { UE4CodeGen_Private::EPropertyClass::Bool, "SRGB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTexture), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_SRGB_SetBit)>::SetBit, METADATA_PARAMS(NewProp_SRGB_MetaData, ARRAY_COUNT(NewProp_SRGB_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumCinematicMipLevels_MetaData[] = {
				{ "Category", "LevelOfDetail" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "Number of mip-levels to use for cinematic quality." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumCinematicMipLevels = { UE4CodeGen_Private::EPropertyClass::Int, "NumCinematicMipLevels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UTexture, NumCinematicMipLevels), METADATA_PARAMS(NewProp_NumCinematicMipLevels_MetaData, ARRAY_COUNT(NewProp_NumCinematicMipLevels_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODBias_MetaData[] = {
				{ "Category", "LevelOfDetail" },
				{ "DisplayName", "LOD Bias" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "A bias to the index of the top mip level to use." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODBias = { UE4CodeGen_Private::EPropertyClass::Int, "LODBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000005, 1, nullptr, STRUCT_OFFSET(UTexture, LODBias), METADATA_PARAMS(NewProp_LODBias_MetaData, ARRAY_COUNT(NewProp_LODBias_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompositePower_MetaData[] = {
				{ "Category", "Compositing" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "default 1, high values result in a stronger effect e.g 1, 2, 4, 8\nthis is no slider because the texture update would not be fast enough" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CompositePower = { UE4CodeGen_Private::EPropertyClass::Float, "CompositePower", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800000005, 1, nullptr, STRUCT_OFFSET(UTexture, CompositePower), METADATA_PARAMS(NewProp_CompositePower_MetaData, ARRAY_COUNT(NewProp_CompositePower_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompositeTextureMode_MetaData[] = {
				{ "Category", "Compositing" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "defines how the CompositeTexture is applied, e.g. CTM_RoughnessFromNormalAlpha" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompositeTextureMode = { UE4CodeGen_Private::EPropertyClass::Byte, "CompositeTextureMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800000005, 1, nullptr, STRUCT_OFFSET(UTexture, CompositeTextureMode), Z_Construct_UEnum_Engine_ECompositeTextureMode, METADATA_PARAMS(NewProp_CompositeTextureMode_MetaData, ARRAY_COUNT(NewProp_CompositeTextureMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompositeTexture_MetaData[] = {
				{ "Category", "Compositing" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "Can be defined to modify the roughness based on the normal map variation (mostly from mip maps).\nMaxAlpha comes in handy to define a base roughness if no source alpha was there.\nMake sure the normal map has at least as many mips as this texture." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CompositeTexture = { UE4CodeGen_Private::EPropertyClass::Object, "CompositeTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000005, 1, nullptr, STRUCT_OFFSET(UTexture, CompositeTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(NewProp_CompositeTexture_MetaData, ARRAY_COUNT(NewProp_CompositeTexture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MipGenSettings_MetaData[] = {
				{ "Category", "LevelOfDetail" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "Per asset specific setting to define the mip-map generation properties like sharpening and kernel size." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MipGenSettings = { UE4CodeGen_Private::EPropertyClass::Byte, "MipGenSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000005, 1, nullptr, STRUCT_OFFSET(UTexture, MipGenSettings), Z_Construct_UEnum_Engine_TextureMipGenSettings, METADATA_PARAMS(NewProp_MipGenSettings_MetaData, ARRAY_COUNT(NewProp_MipGenSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChromaKeyColor_MetaData[] = {
				{ "Category", "Adjustments" },
				{ "EditCondition", "bChromaKeyTexture" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "The color that will be replaced with transparent black if chroma keying is enabled" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChromaKeyColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ChromaKeyColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000005, 1, nullptr, STRUCT_OFFSET(UTexture, ChromaKeyColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_ChromaKeyColor_MetaData, ARRAY_COUNT(NewProp_ChromaKeyColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChromaKeyThreshold_MetaData[] = {
				{ "Category", "Adjustments" },
				{ "ClampMin", "0" },
				{ "EditCondition", "bChromaKeyTexture" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "The threshold that components have to match for the texel to be considered equal to the ChromaKeyColor when chroma keying (<=, set to 0 to require a perfect exact match)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChromaKeyThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "ChromaKeyThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000005, 1, nullptr, STRUCT_OFFSET(UTexture, ChromaKeyThreshold), METADATA_PARAMS(NewProp_ChromaKeyThreshold_MetaData, ARRAY_COUNT(NewProp_ChromaKeyThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChromaKeyTexture_MetaData[] = {
				{ "Category", "Adjustments" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "Whether to chroma key the image, replacing any pixels that match ChromaKeyColor with transparent black" },
			};
#endif
			auto NewProp_bChromaKeyTexture_SetBit = [](void* Obj){ ((UTexture*)Obj)->bChromaKeyTexture = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChromaKeyTexture = { UE4CodeGen_Private::EPropertyClass::Bool, "bChromaKeyTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UTexture), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bChromaKeyTexture_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bChromaKeyTexture_MetaData, ARRAY_COUNT(NewProp_bChromaKeyTexture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaddingColor_MetaData[] = {
				{ "Category", "Texture" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "The color used to pad the texture out if it is resized due to PowerOfTwoMode" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaddingColor = { UE4CodeGen_Private::EPropertyClass::Struct, "PaddingColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000005, 1, nullptr, STRUCT_OFFSET(UTexture, PaddingColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_PaddingColor_MetaData, ARRAY_COUNT(NewProp_PaddingColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerOfTwoMode_MetaData[] = {
				{ "Category", "Texture" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "How to pad the texture to a power of 2 size (if necessary)" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PowerOfTwoMode = { UE4CodeGen_Private::EPropertyClass::Byte, "PowerOfTwoMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000005, 1, nullptr, STRUCT_OFFSET(UTexture, PowerOfTwoMode), Z_Construct_UEnum_Engine_ETexturePowerOfTwoSetting, METADATA_PARAMS(NewProp_PowerOfTwoMode_MetaData, ARRAY_COUNT(NewProp_PowerOfTwoMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForcePVRTC4_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "For DXT1 textures, setting this will cause the texture to be twice the size, but better looking, on iPhone" },
			};
#endif
			auto NewProp_bForcePVRTC4_SetBit = [](void* Obj){ ((UTexture*)Obj)->bForcePVRTC4 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForcePVRTC4 = { UE4CodeGen_Private::EPropertyClass::Bool, "bForcePVRTC4", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTexture), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForcePVRTC4_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bForcePVRTC4_MetaData, ARRAY_COUNT(NewProp_bForcePVRTC4_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlipGreenChannel_MetaData[] = {
				{ "Category", "Texture" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "When true the texture's green channel will be inverted. This is useful for some normal maps." },
			};
#endif
			auto NewProp_bFlipGreenChannel_SetBit = [](void* Obj){ ((UTexture*)Obj)->bFlipGreenChannel = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlipGreenChannel = { UE4CodeGen_Private::EPropertyClass::Bool, "bFlipGreenChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTexture), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFlipGreenChannel_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFlipGreenChannel_MetaData, ARRAY_COUNT(NewProp_bFlipGreenChannel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreserveBorder_MetaData[] = {
				{ "Category", "LevelOfDetail" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "When true the texture's border will be preserved during mipmap generation." },
			};
#endif
			auto NewProp_bPreserveBorder_SetBit = [](void* Obj){ ((UTexture*)Obj)->bPreserveBorder = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreserveBorder = { UE4CodeGen_Private::EPropertyClass::Bool, "bPreserveBorder", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTexture), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPreserveBorder_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPreserveBorder_MetaData, ARRAY_COUNT(NewProp_bPreserveBorder_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaCoverageThresholds_MetaData[] = {
				{ "Category", "Texture" },
				{ "ClampMax", "1" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "Alpha values per channel to compare to when preserving alpha coverage." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaCoverageThresholds = { UE4CodeGen_Private::EPropertyClass::Struct, "AlphaCoverageThresholds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800000005, 1, nullptr, STRUCT_OFFSET(UTexture, AlphaCoverageThresholds), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(NewProp_AlphaCoverageThresholds_MetaData, ARRAY_COUNT(NewProp_AlphaCoverageThresholds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDitherMipMapAlpha_MetaData[] = {
				{ "Category", "Texture" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "When true, the alpha channel of mip-maps and the base image are dithered for smooth LOD transitions." },
			};
#endif
			auto NewProp_bDitherMipMapAlpha_SetBit = [](void* Obj){ ((UTexture*)Obj)->bDitherMipMapAlpha = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDitherMipMapAlpha = { UE4CodeGen_Private::EPropertyClass::Bool, "bDitherMipMapAlpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTexture), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDitherMipMapAlpha_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDitherMipMapAlpha_MetaData, ARRAY_COUNT(NewProp_bDitherMipMapAlpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionQuality_MetaData[] = {
				{ "Category", "Compression" },
				{ "DisplayName", "Compression Quality" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "The compression quality for generated textures." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompressionQuality = { UE4CodeGen_Private::EPropertyClass::Byte, "CompressionQuality", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800000005, 1, nullptr, STRUCT_OFFSET(UTexture, CompressionQuality), Z_Construct_UEnum_Engine_ETextureCompressionQuality, METADATA_PARAMS(NewProp_CompressionQuality_MetaData, ARRAY_COUNT(NewProp_CompressionQuality_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTextureSize_MetaData[] = {
				{ "Category", "Compression" },
				{ "ClampMin", "0.0" },
				{ "DisplayName", "Maximum Texture Size" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "The maximum resolution for generated textures. A value of 0 means the maximum size for the format on each platform, except HDR long/lat cubemaps, which default to a resolution of 512." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTextureSize = { UE4CodeGen_Private::EPropertyClass::Int, "MaxTextureSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800000015, 1, nullptr, STRUCT_OFFSET(UTexture, MaxTextureSize), METADATA_PARAMS(NewProp_MaxTextureSize_MetaData, ARRAY_COUNT(NewProp_MaxTextureSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeferCompression_MetaData[] = {
				{ "Category", "Compression" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "If enabled, defer compression of the texture until save." },
			};
#endif
			auto NewProp_DeferCompression_SetBit = [](void* Obj){ ((UTexture*)Obj)->DeferCompression = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeferCompression = { UE4CodeGen_Private::EPropertyClass::Bool, "DeferCompression", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTexture), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DeferCompression_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DeferCompression_MetaData, ARRAY_COUNT(NewProp_DeferCompression_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionNone_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
			};
#endif
			auto NewProp_CompressionNone_SetBit = [](void* Obj){ ((UTexture*)Obj)->CompressionNone = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CompressionNone = { UE4CodeGen_Private::EPropertyClass::Bool, "CompressionNone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTexture), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_CompressionNone_SetBit)>::SetBit, METADATA_PARAMS(NewProp_CompressionNone_MetaData, ARRAY_COUNT(NewProp_CompressionNone_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionNoAlpha_MetaData[] = {
				{ "Category", "Compression" },
				{ "DisplayName", "Compress Without Alpha" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "If enabled, the texture's alpha channel will be discarded during compression" },
			};
#endif
			auto NewProp_CompressionNoAlpha_SetBit = [](void* Obj){ ((UTexture*)Obj)->CompressionNoAlpha = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CompressionNoAlpha = { UE4CodeGen_Private::EPropertyClass::Bool, "CompressionNoAlpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTexture), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_CompressionNoAlpha_SetBit)>::SetBit, METADATA_PARAMS(NewProp_CompressionNoAlpha_MetaData, ARRAY_COUNT(NewProp_CompressionNoAlpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustMaxAlpha_MetaData[] = {
				{ "Category", "Adjustments" },
				{ "DisplayName", "Max Alpha" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "Remaps the alpha to the specified min/max range, defines the new value of 1 (Non-destructive; Requires texture source art to be available.)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustMaxAlpha = { UE4CodeGen_Private::EPropertyClass::Float, "AdjustMaxAlpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000005, 1, nullptr, STRUCT_OFFSET(UTexture, AdjustMaxAlpha), METADATA_PARAMS(NewProp_AdjustMaxAlpha_MetaData, ARRAY_COUNT(NewProp_AdjustMaxAlpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustMinAlpha_MetaData[] = {
				{ "Category", "Adjustments" },
				{ "DisplayName", "Min Alpha" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "Remaps the alpha to the specified min/max range, defines the new value of 0 (Non-destructive; Requires texture source art to be available.)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustMinAlpha = { UE4CodeGen_Private::EPropertyClass::Float, "AdjustMinAlpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000005, 1, nullptr, STRUCT_OFFSET(UTexture, AdjustMinAlpha), METADATA_PARAMS(NewProp_AdjustMinAlpha_MetaData, ARRAY_COUNT(NewProp_AdjustMinAlpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustHue_MetaData[] = {
				{ "Category", "Adjustments" },
				{ "ClampMax", "360.0" },
				{ "ClampMin", "0.0" },
				{ "DisplayName", "Hue" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "Static texture hue adjustment (0 - 360) (offsets HSV hue by value in degrees.)  (Non-destructive; Requires texture source art to be available.)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustHue = { UE4CodeGen_Private::EPropertyClass::Float, "AdjustHue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000005, 1, nullptr, STRUCT_OFFSET(UTexture, AdjustHue), METADATA_PARAMS(NewProp_AdjustHue_MetaData, ARRAY_COUNT(NewProp_AdjustHue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustRGBCurve_MetaData[] = {
				{ "Category", "Adjustments" },
				{ "DisplayName", "RGBCurve" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "Static texture RGB curve adjustment (raises linear-space RGB color to the specified power.)  (Non-destructive; Requires texture source art to be available.)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustRGBCurve = { UE4CodeGen_Private::EPropertyClass::Float, "AdjustRGBCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000005, 1, nullptr, STRUCT_OFFSET(UTexture, AdjustRGBCurve), METADATA_PARAMS(NewProp_AdjustRGBCurve_MetaData, ARRAY_COUNT(NewProp_AdjustRGBCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustSaturation_MetaData[] = {
				{ "Category", "Adjustments" },
				{ "DisplayName", "Saturation" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "Static texture saturation adjustment (scales HSV saturation.)  (Non-destructive; Requires texture source art to be available.)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustSaturation = { UE4CodeGen_Private::EPropertyClass::Float, "AdjustSaturation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000005, 1, nullptr, STRUCT_OFFSET(UTexture, AdjustSaturation), METADATA_PARAMS(NewProp_AdjustSaturation_MetaData, ARRAY_COUNT(NewProp_AdjustSaturation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustVibrance_MetaData[] = {
				{ "Category", "Adjustments" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0" },
				{ "DisplayName", "Vibrance" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "Static texture \"vibrance\" adjustment (0 - 1) (HSV saturation algorithm adjustment.)  (Non-destructive; Requires texture source art to be available.)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustVibrance = { UE4CodeGen_Private::EPropertyClass::Float, "AdjustVibrance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000005, 1, nullptr, STRUCT_OFFSET(UTexture, AdjustVibrance), METADATA_PARAMS(NewProp_AdjustVibrance_MetaData, ARRAY_COUNT(NewProp_AdjustVibrance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustBrightnessCurve_MetaData[] = {
				{ "Category", "Adjustments" },
				{ "DisplayName", "Brightness Curve" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "Static texture curve adjustment (raises HSV value to the specified power.)  (Non-destructive; Requires texture source art to be available.)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustBrightnessCurve = { UE4CodeGen_Private::EPropertyClass::Float, "AdjustBrightnessCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000005, 1, nullptr, STRUCT_OFFSET(UTexture, AdjustBrightnessCurve), METADATA_PARAMS(NewProp_AdjustBrightnessCurve_MetaData, ARRAY_COUNT(NewProp_AdjustBrightnessCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustBrightness_MetaData[] = {
				{ "Category", "Adjustments" },
				{ "DisplayName", "Brightness" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "Static texture brightness adjustment (scales HSV value.)  (Non-destructive; Requires texture source art to be available.)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustBrightness = { UE4CodeGen_Private::EPropertyClass::Float, "AdjustBrightness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000005, 1, nullptr, STRUCT_OFFSET(UTexture, AdjustBrightness), METADATA_PARAMS(NewProp_AdjustBrightness_MetaData, ARRAY_COUNT(NewProp_AdjustBrightness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
				{ "Category", "ImportSettings" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData = { UE4CodeGen_Private::EPropertyClass::Object, "AssetImportData", RF_Public|RF_Transient|RF_MarkAsNative, 0x00120008000a0009, 1, nullptr, STRUCT_OFFSET(UTexture, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(NewProp_AssetImportData_MetaData, ARRAY_COUNT(NewProp_AssetImportData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "SourceFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UTexture, SourceFilePath_DEPRECATED), METADATA_PARAMS(NewProp_SourceFilePath_MetaData, ARRAY_COUNT(NewProp_SourceFilePath_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingGuid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "ToolTip", "Unique ID for this material, used for caching during distributed lighting" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightingGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "LightingGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UTexture, LightingGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_LightingGuid_MetaData, ARRAY_COUNT(NewProp_LightingGuid_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Source = { UE4CodeGen_Private::EPropertyClass::Struct, "Source", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UTexture, Source), Z_Construct_UScriptStruct_FTextureSource, METADATA_PARAMS(NewProp_Source_MetaData, ARRAY_COUNT(NewProp_Source_MetaData)) };
#endif // WITH_EDITORONLY_DATA
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODGroup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Filter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressionSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAsyncResourceReleaseHasBeenStarted,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedCombinedLODBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetUserData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetUserData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseCinematicMipLevels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNoTiling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NeverStream,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseLegacyGamma,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SRGB,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumCinematicMipLevels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODBias,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompositePower,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompositeTextureMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompositeTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MipGenSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChromaKeyColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChromaKeyThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bChromaKeyTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PaddingColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PowerOfTwoMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForcePVRTC4,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFlipGreenChannel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPreserveBorder,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AlphaCoverageThresholds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDitherMipMapAlpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressionQuality,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxTextureSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeferCompression,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressionNone,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressionNoAlpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdjustMaxAlpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdjustMinAlpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdjustHue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdjustRGBCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdjustSaturation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdjustVibrance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdjustBrightnessCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdjustBrightness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetImportData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceFilePath,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightingGuid,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Source,
#endif // WITH_EDITORONLY_DATA
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(UTexture, IInterface_AssetUserData), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTexture>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTexture::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880081u,
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
	IMPLEMENT_CLASS(UTexture, 2555641799);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTexture(Z_Construct_UClass_UTexture, &UTexture::StaticClass, TEXT("/Script/Engine"), TEXT("UTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTexture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
