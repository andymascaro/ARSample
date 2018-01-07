// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/CurveTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveTable() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveTableRowHandle();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UCurveTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveTable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
// End Cross Module References
class UScriptStruct* FCurveTableRowHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCurveTableRowHandle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveTableRowHandle, Z_Construct_UPackage__Script_Engine(), TEXT("CurveTableRowHandle"), sizeof(FCurveTableRowHandle), Get_Z_Construct_UScriptStruct_FCurveTableRowHandle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCurveTableRowHandle(FCurveTableRowHandle::StaticStruct, TEXT("/Script/Engine"), TEXT("CurveTableRowHandle"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCurveTableRowHandle
{
	FScriptStruct_Engine_StaticRegisterNativesFCurveTableRowHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CurveTableRowHandle")),new UScriptStruct::TCppStructOps<FCurveTableRowHandle>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCurveTableRowHandle;
	UScriptStruct* Z_Construct_UScriptStruct_FCurveTableRowHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCurveTableRowHandle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CurveTableRowHandle"), sizeof(FCurveTableRowHandle), Get_Z_Construct_UScriptStruct_FCurveTableRowHandle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Engine/CurveTable.h" },
				{ "ToolTip", "Handle to a particular row in a table." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveTableRowHandle>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[] = {
				{ "Category", "CurveTableRowHandle" },
				{ "ModuleRelativePath", "Classes/Engine/CurveTable.h" },
				{ "ToolTip", "Name of row in the table that we want" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName = { UE4CodeGen_Private::EPropertyClass::Name, "RowName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCurveTableRowHandle, RowName), METADATA_PARAMS(NewProp_RowName_MetaData, ARRAY_COUNT(NewProp_RowName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveTable_MetaData[] = {
				{ "Category", "CurveTableRowHandle" },
				{ "ModuleRelativePath", "Classes/Engine/CurveTable.h" },
				{ "NativeConst", "" },
				{ "ToolTip", "Pointer to table we want a row from" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveTable = { UE4CodeGen_Private::EPropertyClass::Object, "CurveTable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCurveTableRowHandle, CurveTable), Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(NewProp_CurveTable_MetaData, ARRAY_COUNT(NewProp_CurveTable_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RowName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurveTable,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CurveTableRowHandle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FCurveTableRowHandle),
				alignof(FCurveTableRowHandle),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCurveTableRowHandle_CRC() { return 2277498597U; }
	void UCurveTable::StaticRegisterNativesUCurveTable()
	{
	}
	UClass* Z_Construct_UClass_UCurveTable_NoRegister()
	{
		return UCurveTable::StaticClass();
	}
	UClass* Z_Construct_UClass_UCurveTable()
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
				{ "IncludePath", "Engine/CurveTable.h" },
				{ "ModuleRelativePath", "Classes/Engine/CurveTable.h" },
				{ "ToolTip", "Imported spreadsheet table as curves." },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportPath_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/CurveTable.h" },
				{ "ToolTip", "The filename imported to create this object. Relative to this object's package, BaseDir() or absolute" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImportPath = { UE4CodeGen_Private::EPropertyClass::Str, "ImportPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UCurveTable, ImportPath_DEPRECATED), METADATA_PARAMS(NewProp_ImportPath_MetaData, ARRAY_COUNT(NewProp_ImportPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
				{ "Category", "ImportSettings" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/CurveTable.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData = { UE4CodeGen_Private::EPropertyClass::Object, "AssetImportData", RF_Public|RF_Transient|RF_MarkAsNative, 0x00120008000a0009, 1, nullptr, STRUCT_OFFSET(UCurveTable, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(NewProp_AssetImportData_MetaData, ARRAY_COUNT(NewProp_AssetImportData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImportPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetImportData,
			};
#endif // WITH_EDITORONLY_DATA
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCurveTable>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCurveTable::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(UCurveTable, 2960716248);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCurveTable(Z_Construct_UClass_UCurveTable, &UCurveTable::StaticClass, TEXT("/Script/Engine"), TEXT("UCurveTable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveTable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
