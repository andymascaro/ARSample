// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Kismet/KismetStringTableLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetStringTableLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UKismetStringTableLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UKismetStringTableLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId();
// End Cross Module References
	void UKismetStringTableLibrary::StaticRegisterNativesUKismetStringTableLibrary()
	{
		UClass* Class = UKismetStringTableLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetKeysFromStringTable", (Native)&UKismetStringTableLibrary::execGetKeysFromStringTable },
			{ "GetMetaDataIdsFromStringTableEntry", (Native)&UKismetStringTableLibrary::execGetMetaDataIdsFromStringTableEntry },
			{ "GetRegisteredStringTables", (Native)&UKismetStringTableLibrary::execGetRegisteredStringTables },
			{ "GetTableEntryMetaData", (Native)&UKismetStringTableLibrary::execGetTableEntryMetaData },
			{ "GetTableEntrySourceString", (Native)&UKismetStringTableLibrary::execGetTableEntrySourceString },
			{ "GetTableNamespace", (Native)&UKismetStringTableLibrary::execGetTableNamespace },
			{ "IsRegisteredTableEntry", (Native)&UKismetStringTableLibrary::execIsRegisteredTableEntry },
			{ "IsRegisteredTableId", (Native)&UKismetStringTableLibrary::execIsRegisteredTableId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable()
	{
		struct KismetStringTableLibrary_eventGetKeysFromStringTable_Parms
		{
			FName TableId;
			TArray<FString> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventGetKeysFromStringTable_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableId_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TableId = { UE4CodeGen_Private::EPropertyClass::Name, "TableId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventGetKeysFromStringTable_Parms, TableId), METADATA_PARAMS(NewProp_TableId_MetaData, ARRAY_COUNT(NewProp_TableId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TableId,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|String Table" },
				{ "DisplayName", "Get Keys from String Table" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetStringTableLibrary.h" },
				{ "ToolTip", "Returns an array of all keys within the given string table" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetStringTableLibrary, "GetKeysFromStringTable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetStringTableLibrary_eventGetKeysFromStringTable_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry()
	{
		struct KismetStringTableLibrary_eventGetMetaDataIdsFromStringTableEntry_Parms
		{
			FName TableId;
			FString Key;
			TArray<FName> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventGetMetaDataIdsFromStringTableEntry_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Str, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventGetMetaDataIdsFromStringTableEntry_Parms, Key), METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableId_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TableId = { UE4CodeGen_Private::EPropertyClass::Name, "TableId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventGetMetaDataIdsFromStringTableEntry_Parms, TableId), METADATA_PARAMS(NewProp_TableId_MetaData, ARRAY_COUNT(NewProp_TableId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TableId,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|String Table" },
				{ "DisplayName", "Get Meta-Data IDs from String Table Entry" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetStringTableLibrary.h" },
				{ "ToolTip", "Returns an array of all meta-data IDs within the given string table entry" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetStringTableLibrary, "GetMetaDataIdsFromStringTableEntry", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetStringTableLibrary_eventGetMetaDataIdsFromStringTableEntry_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables()
	{
		struct KismetStringTableLibrary_eventGetRegisteredStringTables_Parms
		{
			TArray<FName> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventGetRegisteredStringTables_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|String Table" },
				{ "DisplayName", "Get Registered String Tables" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetStringTableLibrary.h" },
				{ "ToolTip", "Returns an array of all registered string table IDs" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetStringTableLibrary, "GetRegisteredStringTables", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetStringTableLibrary_eventGetRegisteredStringTables_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData()
	{
		struct KismetStringTableLibrary_eventGetTableEntryMetaData_Parms
		{
			FName TableId;
			FString Key;
			FName MetaDataId;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventGetTableEntryMetaData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaDataId_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_MetaDataId = { UE4CodeGen_Private::EPropertyClass::Name, "MetaDataId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventGetTableEntryMetaData_Parms, MetaDataId), METADATA_PARAMS(NewProp_MetaDataId_MetaData, ARRAY_COUNT(NewProp_MetaDataId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Str, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventGetTableEntryMetaData_Parms, Key), METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableId_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TableId = { UE4CodeGen_Private::EPropertyClass::Name, "TableId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventGetTableEntryMetaData_Parms, TableId), METADATA_PARAMS(NewProp_TableId_MetaData, ARRAY_COUNT(NewProp_TableId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MetaDataId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TableId,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|String Table" },
				{ "DisplayName", "Get String Table Entry Meta-Data" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetStringTableLibrary.h" },
				{ "ToolTip", "Returns the specified meta-data of the given string table entry (or an empty string)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetStringTableLibrary, "GetTableEntryMetaData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetStringTableLibrary_eventGetTableEntryMetaData_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString()
	{
		struct KismetStringTableLibrary_eventGetTableEntrySourceString_Parms
		{
			FName TableId;
			FString Key;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventGetTableEntrySourceString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Str, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventGetTableEntrySourceString_Parms, Key), METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableId_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TableId = { UE4CodeGen_Private::EPropertyClass::Name, "TableId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventGetTableEntrySourceString_Parms, TableId), METADATA_PARAMS(NewProp_TableId_MetaData, ARRAY_COUNT(NewProp_TableId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TableId,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|String Table" },
				{ "DisplayName", "Get String Table Entry Source String" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetStringTableLibrary.h" },
				{ "ToolTip", "Returns the source string of the given string table entry (or an empty string)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetStringTableLibrary, "GetTableEntrySourceString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetStringTableLibrary_eventGetTableEntrySourceString_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace()
	{
		struct KismetStringTableLibrary_eventGetTableNamespace_Parms
		{
			FName TableId;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventGetTableNamespace_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableId_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TableId = { UE4CodeGen_Private::EPropertyClass::Name, "TableId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventGetTableNamespace_Parms, TableId), METADATA_PARAMS(NewProp_TableId_MetaData, ARRAY_COUNT(NewProp_TableId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TableId,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|String Table" },
				{ "DisplayName", "Get String Table Namespace" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetStringTableLibrary.h" },
				{ "ToolTip", "Returns the namespace of the given string table." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetStringTableLibrary, "GetTableNamespace", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetStringTableLibrary_eventGetTableNamespace_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry()
	{
		struct KismetStringTableLibrary_eventIsRegisteredTableEntry_Parms
		{
			FName TableId;
			FString Key;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetStringTableLibrary_eventIsRegisteredTableEntry_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetStringTableLibrary_eventIsRegisteredTableEntry_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Str, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventIsRegisteredTableEntry_Parms, Key), METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableId_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TableId = { UE4CodeGen_Private::EPropertyClass::Name, "TableId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventIsRegisteredTableEntry_Parms, TableId), METADATA_PARAMS(NewProp_TableId_MetaData, ARRAY_COUNT(NewProp_TableId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TableId,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|String Table" },
				{ "DisplayName", "Is String Table Entry Registered" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetStringTableLibrary.h" },
				{ "ToolTip", "Returns true if the given table ID corresponds to a registered string table, and that table has." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetStringTableLibrary, "IsRegisteredTableEntry", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetStringTableLibrary_eventIsRegisteredTableEntry_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId()
	{
		struct KismetStringTableLibrary_eventIsRegisteredTableId_Parms
		{
			FName TableId;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetStringTableLibrary_eventIsRegisteredTableId_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetStringTableLibrary_eventIsRegisteredTableId_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableId_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TableId = { UE4CodeGen_Private::EPropertyClass::Name, "TableId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventIsRegisteredTableId_Parms, TableId), METADATA_PARAMS(NewProp_TableId_MetaData, ARRAY_COUNT(NewProp_TableId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TableId,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|String Table" },
				{ "DisplayName", "Is String Table Registered" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetStringTableLibrary.h" },
				{ "ToolTip", "Returns true if the given table ID corresponds to a registered string table." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetStringTableLibrary, "IsRegisteredTableId", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetStringTableLibrary_eventIsRegisteredTableId_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKismetStringTableLibrary_NoRegister()
	{
		return UKismetStringTableLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UKismetStringTableLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable, "GetKeysFromStringTable" }, // 796263856
				{ &Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry, "GetMetaDataIdsFromStringTableEntry" }, // 3596574872
				{ &Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables, "GetRegisteredStringTables" }, // 13458422
				{ &Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData, "GetTableEntryMetaData" }, // 981826900
				{ &Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString, "GetTableEntrySourceString" }, // 3603498045
				{ &Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace, "GetTableNamespace" }, // 2338638070
				{ &Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry, "IsRegisteredTableEntry" }, // 2193195008
				{ &Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId, "IsRegisteredTableId" }, // 3085466148
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintThreadSafe", "" },
				{ "IncludePath", "Kismet/KismetStringTableLibrary.h" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetStringTableLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UKismetStringTableLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UKismetStringTableLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKismetStringTableLibrary, 1133217216);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKismetStringTableLibrary(Z_Construct_UClass_UKismetStringTableLibrary, &UKismetStringTableLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UKismetStringTableLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetStringTableLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
