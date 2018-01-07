// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/TextureLODSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureLODSettings() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureLODGroup();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureMipGenSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureGroup();
	ENGINE_API UClass* Z_Construct_UClass_UTextureLODSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureLODSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FTextureLODGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTextureLODGroup_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureLODGroup, Z_Construct_UPackage__Script_Engine(), TEXT("TextureLODGroup"), sizeof(FTextureLODGroup), Get_Z_Construct_UScriptStruct_FTextureLODGroup_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTextureLODGroup(FTextureLODGroup::StaticStruct, TEXT("/Script/Engine"), TEXT("TextureLODGroup"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTextureLODGroup
{
	FScriptStruct_Engine_StaticRegisterNativesFTextureLODGroup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TextureLODGroup")),new UScriptStruct::TCppStructOps<FTextureLODGroup>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTextureLODGroup;
	UScriptStruct* Z_Construct_UScriptStruct_FTextureLODGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTextureLODGroup_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TextureLODGroup"), sizeof(FTextureLODGroup), Get_Z_Construct_UScriptStruct_FTextureLODGroup_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
				{ "ToolTip", "LOD settings for a single texture group." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureLODGroup>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MipFilter_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_MipFilter = { UE4CodeGen_Private::EPropertyClass::Name, "MipFilter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTextureLODGroup, MipFilter), METADATA_PARAMS(NewProp_MipFilter_MetaData, ARRAY_COUNT(NewProp_MipFilter_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinMagFilter_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_MinMagFilter = { UE4CodeGen_Private::EPropertyClass::Name, "MinMagFilter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTextureLODGroup, MinMagFilter), METADATA_PARAMS(NewProp_MinMagFilter_MetaData, ARRAY_COUNT(NewProp_MinMagFilter_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLODSize_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxLODSize = { UE4CodeGen_Private::EPropertyClass::Int, "MaxLODSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTextureLODGroup, MaxLODSize), METADATA_PARAMS(NewProp_MaxLODSize_MetaData, ARRAY_COUNT(NewProp_MaxLODSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLODSize_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinLODSize = { UE4CodeGen_Private::EPropertyClass::Int, "MinLODSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTextureLODGroup, MinLODSize), METADATA_PARAMS(NewProp_MinLODSize_MetaData, ARRAY_COUNT(NewProp_MinLODSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MipGenSettings_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
				{ "ToolTip", "Defines how the the mip-map generation works, e.g. sharpening" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MipGenSettings = { UE4CodeGen_Private::EPropertyClass::Byte, "MipGenSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTextureLODGroup, MipGenSettings), Z_Construct_UEnum_Engine_TextureMipGenSettings, METADATA_PARAMS(NewProp_MipGenSettings_MetaData, ARRAY_COUNT(NewProp_MipGenSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumStreamedMips_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
				{ "ToolTip", "Number of mip-levels that can be streamed. -1 means all mips can stream." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumStreamedMips = { UE4CodeGen_Private::EPropertyClass::Int, "NumStreamedMips", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTextureLODGroup, NumStreamedMips), METADATA_PARAMS(NewProp_NumStreamedMips_MetaData, ARRAY_COUNT(NewProp_NumStreamedMips_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODBias_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
				{ "ToolTip", "Group LOD bias." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODBias = { UE4CodeGen_Private::EPropertyClass::Int, "LODBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTextureLODGroup, LODBias), METADATA_PARAMS(NewProp_LODBias_MetaData, ARRAY_COUNT(NewProp_LODBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
				{ "ToolTip", "Minimum LOD mip count below which the code won't bias." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Group = { UE4CodeGen_Private::EPropertyClass::Byte, "Group", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTextureLODGroup, Group), Z_Construct_UEnum_Engine_TextureGroup, METADATA_PARAMS(NewProp_Group_MetaData, ARRAY_COUNT(NewProp_Group_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MipFilter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinMagFilter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxLODSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinLODSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MipGenSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumStreamedMips,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Group,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TextureLODGroup",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FTextureLODGroup),
				alignof(FTextureLODGroup),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTextureLODGroup_CRC() { return 3414619525U; }
	void UTextureLODSettings::StaticRegisterNativesUTextureLODSettings()
	{
	}
	UClass* Z_Construct_UClass_UTextureLODSettings_NoRegister()
	{
		return UTextureLODSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UTextureLODSettings()
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
				{ "IncludePath", "Engine/TextureLODSettings.h" },
				{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
				{ "ToolTip", "Structure containing all information related to an LOD group and providing helper functions to calculate\nthe LOD bias of a given group." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureLODGroups_MetaData[] = {
				{ "Category", "Texture LOD Settings" },
				{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
				{ "ToolTip", "Array of LOD settings with entries per group." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TextureLODGroups = { UE4CodeGen_Private::EPropertyClass::Array, "TextureLODGroups", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UTextureLODSettings, TextureLODGroups), METADATA_PARAMS(NewProp_TextureLODGroups_MetaData, ARRAY_COUNT(NewProp_TextureLODGroups_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureLODGroups_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TextureLODGroups", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTextureLODGroup, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureLODGroups,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureLODGroups_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTextureLODSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTextureLODSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100484u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"DeviceProfiles",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextureLODSettings, 3959878148);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextureLODSettings(Z_Construct_UClass_UTextureLODSettings, &UTextureLODSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UTextureLODSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureLODSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
