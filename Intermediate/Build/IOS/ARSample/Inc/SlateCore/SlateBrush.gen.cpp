// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Styling/SlateBrush.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateBrush() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateBrushImageType();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateBrushMirrorType();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateBrushTileType();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateBrushDrawType();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	static UEnum* ESlateBrushImageType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateBrushImageType, Z_Construct_UPackage__Script_SlateCore(), TEXT("ESlateBrushImageType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESlateBrushImageType(ESlateBrushImageType_StaticEnum, TEXT("/Script/SlateCore"), TEXT("ESlateBrushImageType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_ESlateBrushImageType_CRC() { return 4227855609U; }
	UEnum* Z_Construct_UEnum_SlateCore_ESlateBrushImageType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESlateBrushImageType"), 0, Get_Z_Construct_UEnum_SlateCore_ESlateBrushImageType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESlateBrushImageType::NoImage", (int64)ESlateBrushImageType::NoImage },
				{ "ESlateBrushImageType::FullColor", (int64)ESlateBrushImageType::FullColor },
				{ "ESlateBrushImageType::Linear", (int64)ESlateBrushImageType::Linear },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FullColor.ToolTip", "The image to be loaded is in full color." },
				{ "Linear.ToolTip", "The image is a special texture in linear space (usually a rendering resource such as a lookup table)." },
				{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
				{ "NoImage.ToolTip", "No image is loaded.  Color only brushes, transparent brushes etc." },
				{ "ToolTip", "Enumerates brush image types." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESlateBrushImageType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ESlateBrushImageType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESlateBrushMirrorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateBrushMirrorType, Z_Construct_UPackage__Script_SlateCore(), TEXT("ESlateBrushMirrorType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESlateBrushMirrorType(ESlateBrushMirrorType_StaticEnum, TEXT("/Script/SlateCore"), TEXT("ESlateBrushMirrorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_ESlateBrushMirrorType_CRC() { return 2775399440U; }
	UEnum* Z_Construct_UEnum_SlateCore_ESlateBrushMirrorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESlateBrushMirrorType"), 0, Get_Z_Construct_UEnum_SlateCore_ESlateBrushMirrorType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESlateBrushMirrorType::NoMirror", (int64)ESlateBrushMirrorType::NoMirror },
				{ "ESlateBrushMirrorType::Horizontal", (int64)ESlateBrushMirrorType::Horizontal },
				{ "ESlateBrushMirrorType::Vertical", (int64)ESlateBrushMirrorType::Vertical },
				{ "ESlateBrushMirrorType::Both", (int64)ESlateBrushMirrorType::Both },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Both.ToolTip", "Mirror in both directions." },
				{ "Horizontal.ToolTip", "Mirror the image horizontally." },
				{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
				{ "NoMirror.ToolTip", "Don't mirror anything, just draw the texture as it is." },
				{ "ToolTip", "Possible options for mirroring the brush image" },
				{ "Vertical.ToolTip", "Mirror the image vertically." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESlateBrushMirrorType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ESlateBrushMirrorType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESlateBrushTileType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateBrushTileType, Z_Construct_UPackage__Script_SlateCore(), TEXT("ESlateBrushTileType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESlateBrushTileType(ESlateBrushTileType_StaticEnum, TEXT("/Script/SlateCore"), TEXT("ESlateBrushTileType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_ESlateBrushTileType_CRC() { return 199402321U; }
	UEnum* Z_Construct_UEnum_SlateCore_ESlateBrushTileType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESlateBrushTileType"), 0, Get_Z_Construct_UEnum_SlateCore_ESlateBrushTileType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESlateBrushTileType::NoTile", (int64)ESlateBrushTileType::NoTile },
				{ "ESlateBrushTileType::Horizontal", (int64)ESlateBrushTileType::Horizontal },
				{ "ESlateBrushTileType::Vertical", (int64)ESlateBrushTileType::Vertical },
				{ "ESlateBrushTileType::Both", (int64)ESlateBrushTileType::Both },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Both.ToolTip", "Tile in both directions" },
				{ "Horizontal.ToolTip", "Tile the image horizontally" },
				{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
				{ "NoTile.ToolTip", "Just stretch" },
				{ "ToolTip", "Enumerates tiling options for image drawing." },
				{ "Vertical.ToolTip", "Tile the image vertically" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESlateBrushTileType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ESlateBrushTileType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESlateBrushDrawType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateBrushDrawType, Z_Construct_UPackage__Script_SlateCore(), TEXT("ESlateBrushDrawType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESlateBrushDrawType(ESlateBrushDrawType_StaticEnum, TEXT("/Script/SlateCore"), TEXT("ESlateBrushDrawType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_ESlateBrushDrawType_CRC() { return 3440864035U; }
	UEnum* Z_Construct_UEnum_SlateCore_ESlateBrushDrawType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESlateBrushDrawType"), 0, Get_Z_Construct_UEnum_SlateCore_ESlateBrushDrawType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESlateBrushDrawType::NoDrawType", (int64)ESlateBrushDrawType::NoDrawType },
				{ "ESlateBrushDrawType::Box", (int64)ESlateBrushDrawType::Box },
				{ "ESlateBrushDrawType::Border", (int64)ESlateBrushDrawType::Border },
				{ "ESlateBrushDrawType::Image", (int64)ESlateBrushDrawType::Image },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Border.ToolTip", "Draw a 3x3 border where the sides tile and the middle is empty" },
				{ "Box.ToolTip", "Draw a 3x3 box, where the sides and the middle stretch based on the Margin" },
				{ "Image.ToolTip", "Draw an image; margin is ignored" },
				{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
				{ "NoDrawType.DisplayName", "None" },
				{ "NoDrawType.ToolTip", "Don't do anything" },
				{ "ToolTip", "Enumerates ways in which an image can be drawn." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESlateBrushDrawType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ESlateBrushDrawType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSlateBrush::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FSlateBrush_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlateBrush, Z_Construct_UPackage__Script_SlateCore(), TEXT("SlateBrush"), sizeof(FSlateBrush), Get_Z_Construct_UScriptStruct_FSlateBrush_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSlateBrush(FSlateBrush::StaticStruct, TEXT("/Script/SlateCore"), TEXT("SlateBrush"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFSlateBrush
{
	FScriptStruct_SlateCore_StaticRegisterNativesFSlateBrush()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SlateBrush")),new UScriptStruct::TCppStructOps<FSlateBrush>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFSlateBrush;
	UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSlateBrush_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SlateBrush"), sizeof(FSlateBrush), Get_Z_Construct_UScriptStruct_FSlateBrush_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
				{ "ToolTip", "An brush which contains information about how to draw a Slate element" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlateBrush>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasUObject_MetaData[] = {
				{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
				{ "ToolTip", "Whether or not the brush has a UTexture resource" },
			};
#endif
			auto NewProp_bHasUObject_SetBit = [](void* Obj){ ((FSlateBrush*)Obj)->bHasUObject_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasUObject = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasUObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080020000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSlateBrush), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasUObject_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasUObject_MetaData, ARRAY_COUNT(NewProp_bHasUObject_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDynamicallyLoaded_MetaData[] = {
				{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
				{ "ToolTip", "Whether or not the brush path is a path to a UObject" },
			};
#endif
			auto NewProp_bIsDynamicallyLoaded_SetBit = [](void* Obj){ ((FSlateBrush*)Obj)->bIsDynamicallyLoaded = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDynamicallyLoaded = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsDynamicallyLoaded", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSlateBrush), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsDynamicallyLoaded_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsDynamicallyLoaded_MetaData, ARRAY_COUNT(NewProp_bIsDynamicallyLoaded_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageType_MetaData[] = {
				{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
				{ "ToolTip", "The type of image" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ImageType = { UE4CodeGen_Private::EPropertyClass::Byte, "ImageType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSlateBrush, ImageType), Z_Construct_UEnum_SlateCore_ESlateBrushImageType, METADATA_PARAMS(NewProp_ImageType_MetaData, ARRAY_COUNT(NewProp_ImageType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mirroring_MetaData[] = {
				{ "Category", "Brush" },
				{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
				{ "ToolTip", "How to mirror the image in Image mode.  This is normally only used for dynamic image brushes where the source texture\n          comes from a hardware device such as a web camera." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mirroring = { UE4CodeGen_Private::EPropertyClass::Byte, "Mirroring", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSlateBrush, Mirroring), Z_Construct_UEnum_SlateCore_ESlateBrushMirrorType, METADATA_PARAMS(NewProp_Mirroring_MetaData, ARRAY_COUNT(NewProp_Mirroring_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tiling_MetaData[] = {
				{ "Category", "Brush" },
				{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
				{ "ToolTip", "How to tile the image in Image mode" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Tiling = { UE4CodeGen_Private::EPropertyClass::Byte, "Tiling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSlateBrush, Tiling), Z_Construct_UEnum_SlateCore_ESlateBrushTileType, METADATA_PARAMS(NewProp_Tiling_MetaData, ARRAY_COUNT(NewProp_Tiling_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawAs_MetaData[] = {
				{ "Category", "Brush" },
				{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
				{ "ToolTip", "How to draw the image" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawAs = { UE4CodeGen_Private::EPropertyClass::Byte, "DrawAs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSlateBrush, DrawAs), Z_Construct_UEnum_SlateCore_ESlateBrushDrawType, METADATA_PARAMS(NewProp_DrawAs_MetaData, ARRAY_COUNT(NewProp_DrawAs_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVRegion_MetaData[] = {
				{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
				{ "ToolTip", "Optional UV region for an image\nWhen valid - overrides UV region specified in resource proxy" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVRegion = { UE4CodeGen_Private::EPropertyClass::Struct, "UVRegion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FSlateBrush, UVRegion), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(NewProp_UVRegion_MetaData, ARRAY_COUNT(NewProp_UVRegion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceName_MetaData[] = {
				{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
				{ "ToolTip", "The name of the rendering resource to use" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ResourceName = { UE4CodeGen_Private::EPropertyClass::Name, "ResourceName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FSlateBrush, ResourceName), METADATA_PARAMS(NewProp_ResourceName_MetaData, ARRAY_COUNT(NewProp_ResourceName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceObject_MetaData[] = {
				{ "AllowedClasses", "Texture,MaterialInterface,SlateTextureAtlasInterface" },
				{ "Category", "Brush" },
				{ "DisplayName", "Image" },
				{ "DisplayThumbnail", "true" },
				{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
				{ "ToolTip", "The image to render for this brush, can be a UTexture or UMaterialInterface or an object implementing\nthe AtlasedTextureInterface." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResourceObject = { UE4CodeGen_Private::EPropertyClass::Object, "ResourceObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(FSlateBrush, ResourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_ResourceObject_MetaData, ARRAY_COUNT(NewProp_ResourceObject_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TintColor_MetaData[] = {
				{ "Category", "Brush" },
				{ "DisplayName", "Tint" },
				{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
				{ "sRGB", "true" },
				{ "ToolTip", "Tinting applied to the image." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TintColor = { UE4CodeGen_Private::EPropertyClass::Struct, "TintColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSlateBrush, TintColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_TintColor_MetaData, ARRAY_COUNT(NewProp_TintColor_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tint_MetaData[] = {
				{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
				{ "ToolTip", "Tinting applied to the image." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tint = { UE4CodeGen_Private::EPropertyClass::Struct, "Tint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FSlateBrush, Tint_DEPRECATED), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_Tint_MetaData, ARRAY_COUNT(NewProp_Tint_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Margin_MetaData[] = {
				{ "Category", "Brush" },
				{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
				{ "ToolTip", "The margin to use in Box and Border modes" },
				{ "UVSpace", "true" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Margin = { UE4CodeGen_Private::EPropertyClass::Struct, "Margin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSlateBrush, Margin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(NewProp_Margin_MetaData, ARRAY_COUNT(NewProp_Margin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageSize_MetaData[] = {
				{ "Category", "Brush" },
				{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
				{ "ToolTip", "Size of the resource in Slate Units" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImageSize = { UE4CodeGen_Private::EPropertyClass::Struct, "ImageSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSlateBrush, ImageSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_ImageSize_MetaData, ARRAY_COUNT(NewProp_ImageSize_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasUObject,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsDynamicallyLoaded,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImageType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mirroring,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tiling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawAs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UVRegion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResourceName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResourceObject,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TintColor,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tint,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Margin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImageSize,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SlateBrush",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FSlateBrush),
				alignof(FSlateBrush),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSlateBrush_CRC() { return 2477892229U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
