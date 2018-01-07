// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AssetEditorMessages.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetEditorMessages() {}
// Cross Module References
	UNREALEDMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset();
	UPackage* Z_Construct_UPackage__Script_UnrealEdMessages();
// End Cross Module References
class UScriptStruct* FAssetEditorRequestOpenAsset::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALEDMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset, Z_Construct_UPackage__Script_UnrealEdMessages(), TEXT("AssetEditorRequestOpenAsset"), sizeof(FAssetEditorRequestOpenAsset), Get_Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetEditorRequestOpenAsset(FAssetEditorRequestOpenAsset::StaticStruct, TEXT("/Script/UnrealEdMessages"), TEXT("AssetEditorRequestOpenAsset"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEdMessages_StaticRegisterNativesFAssetEditorRequestOpenAsset
{
	FScriptStruct_UnrealEdMessages_StaticRegisterNativesFAssetEditorRequestOpenAsset()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetEditorRequestOpenAsset")),new UScriptStruct::TCppStructOps<FAssetEditorRequestOpenAsset>);
	}
} ScriptStruct_UnrealEdMessages_StaticRegisterNativesFAssetEditorRequestOpenAsset;
	UScriptStruct* Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEdMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetEditorRequestOpenAsset"), sizeof(FAssetEditorRequestOpenAsset), Get_Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AssetEditorMessages.h" },
				{ "ToolTip", "Implements a message for opening an asset in the asset browser." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetEditorRequestOpenAsset>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Classes/AssetEditorMessages.h" },
				{ "ToolTip", "Holds the name of the asset to open." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetName = { UE4CodeGen_Private::EPropertyClass::Str, "AssetName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAssetEditorRequestOpenAsset, AssetName), METADATA_PARAMS(NewProp_AssetName_MetaData, ARRAY_COUNT(NewProp_AssetName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_UnrealEdMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AssetEditorRequestOpenAsset",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAssetEditorRequestOpenAsset),
				alignof(FAssetEditorRequestOpenAsset),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_CRC() { return 2839110255U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
