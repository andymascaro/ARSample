// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/DataTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataTable() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableCategoryHandle();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
// End Cross Module References
class UScriptStruct* FDataTableCategoryHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDataTableCategoryHandle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataTableCategoryHandle, Z_Construct_UPackage__Script_Engine(), TEXT("DataTableCategoryHandle"), sizeof(FDataTableCategoryHandle), Get_Z_Construct_UScriptStruct_FDataTableCategoryHandle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataTableCategoryHandle(FDataTableCategoryHandle::StaticStruct, TEXT("/Script/Engine"), TEXT("DataTableCategoryHandle"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDataTableCategoryHandle
{
	FScriptStruct_Engine_StaticRegisterNativesFDataTableCategoryHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DataTableCategoryHandle")),new UScriptStruct::TCppStructOps<FDataTableCategoryHandle>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFDataTableCategoryHandle;
	UScriptStruct* Z_Construct_UScriptStruct_FDataTableCategoryHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataTableCategoryHandle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataTableCategoryHandle"), sizeof(FDataTableCategoryHandle), Get_Z_Construct_UScriptStruct_FDataTableCategoryHandle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
				{ "ToolTip", "Handle to a particular row in a table" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataTableCategoryHandle>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowContents_MetaData[] = {
				{ "Category", "DataTableCategoryHandle" },
				{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
				{ "ToolTip", "Contents of rows in the table that we want" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowContents = { UE4CodeGen_Private::EPropertyClass::Name, "RowContents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDataTableCategoryHandle, RowContents), METADATA_PARAMS(NewProp_RowContents_MetaData, ARRAY_COUNT(NewProp_RowContents_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColumnName_MetaData[] = {
				{ "Category", "DataTableCategoryHandle" },
				{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
				{ "ToolTip", "Name of column in the table that we want" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ColumnName = { UE4CodeGen_Private::EPropertyClass::Name, "ColumnName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDataTableCategoryHandle, ColumnName), METADATA_PARAMS(NewProp_ColumnName_MetaData, ARRAY_COUNT(NewProp_ColumnName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[] = {
				{ "Category", "DataTableCategoryHandle" },
				{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
				{ "NativeConst", "" },
				{ "ToolTip", "Pointer to table we want a row from" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTable = { UE4CodeGen_Private::EPropertyClass::Object, "DataTable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDataTableCategoryHandle, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(NewProp_DataTable_MetaData, ARRAY_COUNT(NewProp_DataTable_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RowContents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColumnName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DataTable,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"DataTableCategoryHandle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FDataTableCategoryHandle),
				alignof(FDataTableCategoryHandle),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataTableCategoryHandle_CRC() { return 1941431419U; }
class UScriptStruct* FDataTableRowHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDataTableRowHandle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataTableRowHandle, Z_Construct_UPackage__Script_Engine(), TEXT("DataTableRowHandle"), sizeof(FDataTableRowHandle), Get_Z_Construct_UScriptStruct_FDataTableRowHandle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataTableRowHandle(FDataTableRowHandle::StaticStruct, TEXT("/Script/Engine"), TEXT("DataTableRowHandle"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDataTableRowHandle
{
	FScriptStruct_Engine_StaticRegisterNativesFDataTableRowHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DataTableRowHandle")),new UScriptStruct::TCppStructOps<FDataTableRowHandle>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFDataTableRowHandle;
	UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataTableRowHandle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataTableRowHandle"), sizeof(FDataTableRowHandle), Get_Z_Construct_UScriptStruct_FDataTableRowHandle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
				{ "ToolTip", "Handle to a particular row in a table" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataTableRowHandle>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[] = {
				{ "Category", "DataTableRowHandle" },
				{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
				{ "ToolTip", "Name of row in the table that we want" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName = { UE4CodeGen_Private::EPropertyClass::Name, "RowName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDataTableRowHandle, RowName), METADATA_PARAMS(NewProp_RowName_MetaData, ARRAY_COUNT(NewProp_RowName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[] = {
				{ "Category", "DataTableRowHandle" },
				{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
				{ "NativeConst", "" },
				{ "ToolTip", "Pointer to table we want a row from" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTable = { UE4CodeGen_Private::EPropertyClass::Object, "DataTable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDataTableRowHandle, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(NewProp_DataTable_MetaData, ARRAY_COUNT(NewProp_DataTable_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RowName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DataTable,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"DataTableRowHandle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FDataTableRowHandle),
				alignof(FDataTableRowHandle),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataTableRowHandle_CRC() { return 1890688040U; }
class UScriptStruct* FTableRowBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTableRowBase_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTableRowBase, Z_Construct_UPackage__Script_Engine(), TEXT("TableRowBase"), sizeof(FTableRowBase), Get_Z_Construct_UScriptStruct_FTableRowBase_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTableRowBase(FTableRowBase::StaticStruct, TEXT("/Script/Engine"), TEXT("TableRowBase"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTableRowBase
{
	FScriptStruct_Engine_StaticRegisterNativesFTableRowBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TableRowBase")),new UScriptStruct::TCppStructOps<FTableRowBase>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTableRowBase;
	UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTableRowBase_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TableRowBase"), sizeof(FTableRowBase), Get_Z_Construct_UScriptStruct_FTableRowBase_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
				{ "ToolTip", "Base class for all table row structs to inherit from." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTableRowBase>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TableRowBase",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FTableRowBase),
				alignof(FTableRowBase),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTableRowBase_CRC() { return 557187403U; }
	void UDataTable::StaticRegisterNativesUDataTable()
	{
	}
	UClass* Z_Construct_UClass_UDataTable_NoRegister()
	{
		return UDataTable::StaticClass();
	}
	UClass* Z_Construct_UClass_UDataTable()
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
				{ "IncludePath", "Engine/DataTable.h" },
				{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
				{ "ToolTip", "Imported spreadsheet table." },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowStructName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
				{ "ToolTip", "The name of the RowStruct we were using when we were last saved" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowStructName = { UE4CodeGen_Private::EPropertyClass::Name, "RowStructName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UDataTable, RowStructName), METADATA_PARAMS(NewProp_RowStructName_MetaData, ARRAY_COUNT(NewProp_RowStructName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportPath_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
				{ "ToolTip", "The filename imported to create this object. Relative to this object's package, BaseDir() or absolute" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImportPath = { UE4CodeGen_Private::EPropertyClass::Str, "ImportPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UDataTable, ImportPath_DEPRECATED), METADATA_PARAMS(NewProp_ImportPath_MetaData, ARRAY_COUNT(NewProp_ImportPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
				{ "Category", "ImportSettings" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData = { UE4CodeGen_Private::EPropertyClass::Object, "AssetImportData", RF_Public|RF_Transient|RF_MarkAsNative, 0x00120008000a0009, 1, nullptr, STRUCT_OFFSET(UDataTable, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(NewProp_AssetImportData_MetaData, ARRAY_COUNT(NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowStruct_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
				{ "ToolTip", "Structure to use for each row of the table, must inherit from FTableRowBase" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RowStruct = { UE4CodeGen_Private::EPropertyClass::Object, "RowStruct", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UDataTable, RowStruct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(NewProp_RowStruct_MetaData, ARRAY_COUNT(NewProp_RowStruct_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RowStructName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImportPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RowStruct,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDataTable>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDataTable::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(UDataTable, 2912801511);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDataTable(Z_Construct_UClass_UDataTable, &UDataTable::StaticClass, TEXT("/Script/Engine"), TEXT("UDataTable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataTable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
