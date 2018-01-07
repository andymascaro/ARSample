// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GeometryCacheMeshData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheMeshData() {}
// Cross Module References
	GEOMETRYCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCacheMeshData();
	UPackage* Z_Construct_UPackage__Script_GeometryCache();
	GEOMETRYCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo();
// End Cross Module References
class UScriptStruct* FGeometryCacheMeshData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEOMETRYCACHE_API uint32 Get_Z_Construct_UScriptStruct_FGeometryCacheMeshData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCacheMeshData, Z_Construct_UPackage__Script_GeometryCache(), TEXT("GeometryCacheMeshData"), sizeof(FGeometryCacheMeshData), Get_Z_Construct_UScriptStruct_FGeometryCacheMeshData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGeometryCacheMeshData(FGeometryCacheMeshData::StaticStruct, TEXT("/Script/GeometryCache"), TEXT("GeometryCacheMeshData"), false, nullptr, nullptr);
static struct FScriptStruct_GeometryCache_StaticRegisterNativesFGeometryCacheMeshData
{
	FScriptStruct_GeometryCache_StaticRegisterNativesFGeometryCacheMeshData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GeometryCacheMeshData")),new UScriptStruct::TCppStructOps<FGeometryCacheMeshData>);
	}
} ScriptStruct_GeometryCache_StaticRegisterNativesFGeometryCacheMeshData;
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryCacheMeshData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGeometryCacheMeshData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCache();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GeometryCacheMeshData"), sizeof(FGeometryCacheMeshData), Get_Z_Construct_UScriptStruct_FGeometryCacheMeshData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GeometryCacheMeshData.h" },
				{ "ToolTip", "Stores per Track/Mesh data used for rendering" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCacheMeshData>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GeometryCacheMeshData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FGeometryCacheMeshData),
				alignof(FGeometryCacheMeshData),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGeometryCacheMeshData_CRC() { return 299089381U; }
class UScriptStruct* FGeometryCacheMeshBatchInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEOMETRYCACHE_API uint32 Get_Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo, Z_Construct_UPackage__Script_GeometryCache(), TEXT("GeometryCacheMeshBatchInfo"), sizeof(FGeometryCacheMeshBatchInfo), Get_Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGeometryCacheMeshBatchInfo(FGeometryCacheMeshBatchInfo::StaticStruct, TEXT("/Script/GeometryCache"), TEXT("GeometryCacheMeshBatchInfo"), false, nullptr, nullptr);
static struct FScriptStruct_GeometryCache_StaticRegisterNativesFGeometryCacheMeshBatchInfo
{
	FScriptStruct_GeometryCache_StaticRegisterNativesFGeometryCacheMeshBatchInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GeometryCacheMeshBatchInfo")),new UScriptStruct::TCppStructOps<FGeometryCacheMeshBatchInfo>);
	}
} ScriptStruct_GeometryCache_StaticRegisterNativesFGeometryCacheMeshBatchInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCache();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GeometryCacheMeshBatchInfo"), sizeof(FGeometryCacheMeshBatchInfo), Get_Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GeometryCacheMeshData.h" },
				{ "ToolTip", "Stores per-batch data used for rendering" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCacheMeshBatchInfo>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GeometryCacheMeshBatchInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FGeometryCacheMeshBatchInfo),
				alignof(FGeometryCacheMeshBatchInfo),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_CRC() { return 2747375557U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
