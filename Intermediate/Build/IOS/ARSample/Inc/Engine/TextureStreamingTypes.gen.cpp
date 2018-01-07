// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/TextureStreamingTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureStreamingTypes() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStreamingTextureBuildInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FStreamingTextureBuildInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreamingTextureBuildInfo, Z_Construct_UPackage__Script_Engine(), TEXT("StreamingTextureBuildInfo"), sizeof(FStreamingTextureBuildInfo), Get_Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreamingTextureBuildInfo(FStreamingTextureBuildInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("StreamingTextureBuildInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStreamingTextureBuildInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFStreamingTextureBuildInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreamingTextureBuildInfo")),new UScriptStruct::TCppStructOps<FStreamingTextureBuildInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStreamingTextureBuildInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FStreamingTextureBuildInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreamingTextureBuildInfo"), sizeof(FStreamingTextureBuildInfo), Get_Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
				{ "ToolTip", "This struct holds the result of TextureStreaming Build for each component texture, as referred by its used materials.\nIt is possible that the entry referred by this data is not actually relevant in a given quality / target.\nIt is also possible that some texture are not referred, and will then fall on fallbacks computation.\nBecause each component holds its precomputed data for each texture, this struct is designed to be as compact as possible." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreamingTextureBuildInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TexelFactor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
				{ "ToolTip", "The texel factor for this texture. This represent the world size a texture square holding with unit UVs.\nThis value is a combination of the TexelFactor from the mesh and also the material scale.\nIt does not take into consideration StreamingDistanceMultiplier, or texture group scale." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TexelFactor = { UE4CodeGen_Private::EPropertyClass::Float, "TexelFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStreamingTextureBuildInfo, TexelFactor), METADATA_PARAMS(NewProp_TexelFactor_MetaData, ARRAY_COUNT(NewProp_TexelFactor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureLevelIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
				{ "ToolTip", "The level scope identifier of the texture. When building the texture streaming data, each level holds a list of all referred texture Guids.\nThis is required to prevent loading textures on platforms which would not require the texture to be loaded, and is a consequence of the texture\nstreaming build not being platform specific (the same streaming data is build for every platform target). Could also apply to quality level." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextureLevelIndex = { UE4CodeGen_Private::EPropertyClass::Int, "TextureLevelIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStreamingTextureBuildInfo, TextureLevelIndex), METADATA_PARAMS(NewProp_TextureLevelIndex_MetaData, ARRAY_COUNT(NewProp_TextureLevelIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackedRelativeBox_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
				{ "ToolTip", "The relative bounding box for this entry. The relative bounds is a bound equal or smaller than the component bounds and represent\nthe merged LOD section bounds of all LOD section referencing the given texture. When the level transform is modified following\na call to ApplyLevelTransform, this relative bound becomes deprecated as it was computed from the transform at build time." },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PackedRelativeBox = { UE4CodeGen_Private::EPropertyClass::UInt32, "PackedRelativeBox", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStreamingTextureBuildInfo, PackedRelativeBox), METADATA_PARAMS(NewProp_PackedRelativeBox_MetaData, ARRAY_COUNT(NewProp_PackedRelativeBox_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TexelFactor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureLevelIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PackedRelativeBox,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"StreamingTextureBuildInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FStreamingTextureBuildInfo),
				alignof(FStreamingTextureBuildInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_CRC() { return 1207739725U; }
class UScriptStruct* FStreamingTexturePrimitiveInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo, Z_Construct_UPackage__Script_Engine(), TEXT("StreamingTexturePrimitiveInfo"), sizeof(FStreamingTexturePrimitiveInfo), Get_Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreamingTexturePrimitiveInfo(FStreamingTexturePrimitiveInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("StreamingTexturePrimitiveInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStreamingTexturePrimitiveInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFStreamingTexturePrimitiveInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreamingTexturePrimitiveInfo")),new UScriptStruct::TCppStructOps<FStreamingTexturePrimitiveInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStreamingTexturePrimitiveInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreamingTexturePrimitiveInfo"), sizeof(FStreamingTexturePrimitiveInfo), Get_Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
				{ "ToolTip", "Information about a streaming texture that a primitive uses for rendering." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreamingTexturePrimitiveInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackedRelativeBox_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
				{ "ToolTip", "When non zero, this represents the relative box used to compute Bounds, using the component bounds as reference.\nIf available, this allows the texture streamer to generate the level streaming data before the level gets visible.\nAt that point, the component are not yet registered, and the bounds are unknown, but the precompiled build data is still available.\nAlso allows to update the relative bounds after a level get moved around from ApplyWorldOffset." },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PackedRelativeBox = { UE4CodeGen_Private::EPropertyClass::UInt32, "PackedRelativeBox", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStreamingTexturePrimitiveInfo, PackedRelativeBox), METADATA_PARAMS(NewProp_PackedRelativeBox_MetaData, ARRAY_COUNT(NewProp_PackedRelativeBox_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TexelFactor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TexelFactor = { UE4CodeGen_Private::EPropertyClass::Float, "TexelFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStreamingTexturePrimitiveInfo, TexelFactor), METADATA_PARAMS(NewProp_TexelFactor_MetaData, ARRAY_COUNT(NewProp_TexelFactor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
				{ "ToolTip", "The streaming bounds of the texture, usually the component material bounds.\nUsually only valid for registered component, as component bounds are only updated when the components are registered.\notherwise only PackedRelativeBox can be used.Irrelevant when the component is not registered, as the component could be moved by ULevel::ApplyWorldOffset()\nIn that case, only PackedRelativeBox is meaningful." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds = { UE4CodeGen_Private::EPropertyClass::Struct, "Bounds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStreamingTexturePrimitiveInfo, Bounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(NewProp_Bounds_MetaData, ARRAY_COUNT(NewProp_Bounds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Object, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStreamingTexturePrimitiveInfo, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_Texture_MetaData, ARRAY_COUNT(NewProp_Texture_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PackedRelativeBox,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TexelFactor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bounds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Texture,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"StreamingTexturePrimitiveInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FStreamingTexturePrimitiveInfo),
				alignof(FStreamingTexturePrimitiveInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_CRC() { return 2678026492U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
