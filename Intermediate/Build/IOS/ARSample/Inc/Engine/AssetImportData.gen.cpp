// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EditorFramework/AssetImportData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetImportData() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAssetImportInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FAssetImportInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAssetImportInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetImportInfo, Z_Construct_UPackage__Script_Engine(), TEXT("AssetImportInfo"), sizeof(FAssetImportInfo), Get_Z_Construct_UScriptStruct_FAssetImportInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetImportInfo(FAssetImportInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("AssetImportInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAssetImportInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFAssetImportInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetImportInfo")),new UScriptStruct::TCppStructOps<FAssetImportInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAssetImportInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FAssetImportInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetImportInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetImportInfo"), sizeof(FAssetImportInfo), Get_Z_Construct_UScriptStruct_FAssetImportInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EditorFramework/AssetImportData.h" },
				{ "ToolTip", "Struct that is used to store an array of asset import data as an asset registry tag" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetImportInfo>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AssetImportInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAssetImportInfo),
				alignof(FAssetImportInfo),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetImportInfo_CRC() { return 1820547024U; }
	void UAssetImportData::StaticRegisterNativesUAssetImportData()
	{
	}
	UClass* Z_Construct_UClass_UAssetImportData_NoRegister()
	{
		return UAssetImportData::StaticClass();
	}
	UClass* Z_Construct_UClass_UAssetImportData()
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
				{ "IncludePath", "EditorFramework/AssetImportData.h" },
				{ "ModuleRelativePath", "Classes/EditorFramework/AssetImportData.h" },
				{ "ToolTip", "todo: Make this class better suited to multiple import paths - maybe have FAssetImportInfo use a map rather than array?" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceData_MetaData[] = {
				{ "Category", "File Path" },
				{ "ModuleRelativePath", "Classes/EditorFramework/AssetImportData.h" },
				{ "ToolTip", "Source file data describing the files that were used to import this asset." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceData = { UE4CodeGen_Private::EPropertyClass::Struct, "SourceData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800020001, 1, nullptr, STRUCT_OFFSET(UAssetImportData, SourceData), Z_Construct_UScriptStruct_FAssetImportInfo, METADATA_PARAMS(NewProp_SourceData_MetaData, ARRAY_COUNT(NewProp_SourceData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFileTimestamp_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EditorFramework/AssetImportData.h" },
				{ "ToolTip", "Date/Time-stamp of the file from the last import" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFileTimestamp = { UE4CodeGen_Private::EPropertyClass::Str, "SourceFileTimestamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UAssetImportData, SourceFileTimestamp_DEPRECATED), METADATA_PARAMS(NewProp_SourceFileTimestamp_MetaData, ARRAY_COUNT(NewProp_SourceFileTimestamp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EditorFramework/AssetImportData.h" },
				{ "ToolTip", "Path to the resource used to construct this static mesh. Relative to the object's package, BaseDir() or absolute" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "SourceFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UAssetImportData, SourceFilePath_DEPRECATED), METADATA_PARAMS(NewProp_SourceFilePath_MetaData, ARRAY_COUNT(NewProp_SourceFilePath_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceFileTimestamp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceFilePath,
			};
#endif // WITH_EDITORONLY_DATA
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAssetImportData>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAssetImportData::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00101080u,
				nullptr, 0,
				IF_WITH_EDITORONLY_DATA(PropPointers, nullptr), IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(PropPointers), 0),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetImportData, 2199511311);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetImportData(Z_Construct_UClass_UAssetImportData, &UAssetImportData::StaticClass, TEXT("/Script/Engine"), TEXT("UAssetImportData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetImportData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
