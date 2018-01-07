// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Kismet/BlueprintMapLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintMapLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintMapLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintMapLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UBlueprintMapLibrary::StaticRegisterNativesUBlueprintMapLibrary()
	{
		UClass* Class = UBlueprintMapLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Map_Add", (Native)&UBlueprintMapLibrary::execMap_Add },
			{ "Map_Clear", (Native)&UBlueprintMapLibrary::execMap_Clear },
			{ "Map_Contains", (Native)&UBlueprintMapLibrary::execMap_Contains },
			{ "Map_Find", (Native)&UBlueprintMapLibrary::execMap_Find },
			{ "Map_Keys", (Native)&UBlueprintMapLibrary::execMap_Keys },
			{ "Map_Length", (Native)&UBlueprintMapLibrary::execMap_Length },
			{ "Map_Remove", (Native)&UBlueprintMapLibrary::execMap_Remove },
			{ "Map_Values", (Native)&UBlueprintMapLibrary::execMap_Values },
			{ "SetMapPropertyByName", (Native)&UBlueprintMapLibrary::execSetMapPropertyByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add()
	{
		struct BlueprintMapLibrary_eventMap_Add_Parms
		{
			TMap<int32,int32> TargetMap;
			int32 Key;
			int32 Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Int, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Add_Parms, Value), METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Int, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Add_Parms, Key), METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_TargetMap = { UE4CodeGen_Private::EPropertyClass::Map, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Add_Parms, TargetMap), METADATA_PARAMS(NewProp_TargetMap_MetaData, ARRAY_COUNT(NewProp_TargetMap_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetMap_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetMap_ValueProp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "Key, Value" },
				{ "Category", "Utilities|Map" },
				{ "CompactNodeTitle", "ADD" },
				{ "CustomThunk", "true" },
				{ "DisplayName", "Add" },
				{ "MapKeyParam", "Key" },
				{ "MapParam", "TargetMap" },
				{ "MapValueParam", "Value" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
				{ "ToolTip", "Adds a key and value to the map. If something already uses the provided key it will be overwritten with the new value.\nAfter calling Key is guaranteed to be associated with Value until a subsequent mutation of the Map.\n\n@param       TargetMap               The map to add the key and value to\n@param       Key                             The key that will be used to look the value up\n@param       Value                   The value to be retrieved later\n@return      True if a Value was added, or False if the Key was already present and has been overwritten" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, "Map_Add", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BlueprintMapLibrary_eventMap_Add_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear()
	{
		struct BlueprintMapLibrary_eventMap_Clear_Parms
		{
			TMap<int32,int32> TargetMap;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_TargetMap = { UE4CodeGen_Private::EPropertyClass::Map, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Clear_Parms, TargetMap), METADATA_PARAMS(NewProp_TargetMap_MetaData, ARRAY_COUNT(NewProp_TargetMap_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetMap_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetMap_ValueProp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Map" },
				{ "CompactNodeTitle", "CLEAR" },
				{ "CustomThunk", "true" },
				{ "DisplayName", "Clear" },
				{ "MapParam", "TargetMap" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
				{ "ToolTip", "Clears a map of all entries, resetting it to empty\n\n@param       TargetMap               The map to clear" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, "Map_Clear", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BlueprintMapLibrary_eventMap_Clear_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains()
	{
		struct BlueprintMapLibrary_eventMap_Contains_Parms
		{
			TMap<int32,int32> TargetMap;
			int32 Key;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BlueprintMapLibrary_eventMap_Contains_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintMapLibrary_eventMap_Contains_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Int, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Contains_Parms, Key), METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_TargetMap = { UE4CodeGen_Private::EPropertyClass::Map, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Contains_Parms, TargetMap), METADATA_PARAMS(NewProp_TargetMap_MetaData, ARRAY_COUNT(NewProp_TargetMap_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetMap_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetMap_ValueProp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "Key" },
				{ "BlueprintThreadSafe", "" },
				{ "Category", "Utilities|Map" },
				{ "CompactNodeTitle", "CONTAINS" },
				{ "CustomThunk", "true" },
				{ "DisplayName", "Contains" },
				{ "MapKeyParam", "Key" },
				{ "MapParam", "TargetMap" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
				{ "ToolTip", "Checks whether key is in a provided Map\n\n@param       TargetMap               The map to perform the lookup on\n@param       Key                             The key that will be used to lookup\n@return      True if an item was found (False indicates nothing in the map uses the provided key)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, "Map_Contains", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BlueprintMapLibrary_eventMap_Contains_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find()
	{
		struct BlueprintMapLibrary_eventMap_Find_Parms
		{
			TMap<int32,int32> TargetMap;
			int32 Key;
			int32 Value;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BlueprintMapLibrary_eventMap_Find_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintMapLibrary_eventMap_Find_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Int, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Find_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Int, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Find_Parms, Key), METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_TargetMap = { UE4CodeGen_Private::EPropertyClass::Map, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Find_Parms, TargetMap), METADATA_PARAMS(NewProp_TargetMap_MetaData, ARRAY_COUNT(NewProp_TargetMap_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetMap_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetMap_ValueProp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "Key, Value" },
				{ "BlueprintThreadSafe", "" },
				{ "Category", "Utilities|Map" },
				{ "CompactNodeTitle", "FIND" },
				{ "CustomThunk", "true" },
				{ "DisplayName", "Find" },
				{ "MapKeyParam", "Key" },
				{ "MapParam", "TargetMap" },
				{ "MapValueParam", "Value" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
				{ "ToolTip", "Finds the value associated with the provided Key\n\n@param       TargetMap               The map to perform the lookup on\n@param       Key                             The key that will be used to look the value up\n@param       Value                   The value associated with the key, default constructed if key was not found\n@return      True if an item was found (False indicates nothing in the map uses the provided key)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, "Map_Find", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BlueprintMapLibrary_eventMap_Find_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys()
	{
		struct BlueprintMapLibrary_eventMap_Keys_Parms
		{
			TMap<int32,int32> TargetMap;
			TArray<int32> Keys;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keys = { UE4CodeGen_Private::EPropertyClass::Array, "Keys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Keys_Parms, Keys), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Keys_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Keys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_TargetMap = { UE4CodeGen_Private::EPropertyClass::Map, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Keys_Parms, TargetMap), METADATA_PARAMS(NewProp_TargetMap_MetaData, ARRAY_COUNT(NewProp_TargetMap_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Keys,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Keys_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetMap_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetMap_ValueProp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "Keys" },
				{ "Category", "Utilities|Map" },
				{ "CompactNodeTitle", "KEYS" },
				{ "CustomThunk", "true" },
				{ "DisplayName", "Keys" },
				{ "MapKeyParam", "Keys" },
				{ "MapParam", "TargetMap" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
				{ "ToolTip", "Outputs an array of all keys present in the map\n\n@param       TargetMap               The map to get the list of keys from\n@param       Keys                    All keys present in the map" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, "Map_Keys", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BlueprintMapLibrary_eventMap_Keys_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length()
	{
		struct BlueprintMapLibrary_eventMap_Length_Parms
		{
			TMap<int32,int32> TargetMap;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Length_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_TargetMap = { UE4CodeGen_Private::EPropertyClass::Map, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Length_Parms, TargetMap), METADATA_PARAMS(NewProp_TargetMap_MetaData, ARRAY_COUNT(NewProp_TargetMap_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetMap_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetMap_ValueProp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintThreadSafe", "" },
				{ "Category", "Utilities|Map" },
				{ "CompactNodeTitle", "LENGTH" },
				{ "CustomThunk", "true" },
				{ "DisplayName", "Length" },
				{ "Keywords", "num size count" },
				{ "MapParam", "TargetMap" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
				{ "ToolTip", "Determines the number of entries in a provided Map\n\n@param       TargetMap               The map in question\n@return      The number of entries in the map" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, "Map_Length", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BlueprintMapLibrary_eventMap_Length_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove()
	{
		struct BlueprintMapLibrary_eventMap_Remove_Parms
		{
			TMap<int32,int32> TargetMap;
			int32 Key;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BlueprintMapLibrary_eventMap_Remove_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintMapLibrary_eventMap_Remove_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Int, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Remove_Parms, Key), METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_TargetMap = { UE4CodeGen_Private::EPropertyClass::Map, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Remove_Parms, TargetMap), METADATA_PARAMS(NewProp_TargetMap_MetaData, ARRAY_COUNT(NewProp_TargetMap_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetMap_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetMap_ValueProp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "Key" },
				{ "Category", "Utilities|Map" },
				{ "CompactNodeTitle", "REMOVE" },
				{ "CustomThunk", "true" },
				{ "DisplayName", "Remove" },
				{ "MapKeyParam", "Key" },
				{ "MapParam", "TargetMap" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
				{ "ToolTip", "Removes a key and its associated value from the map.\n\n@param       TargetMap               The map to remove the key and its associated value from\n@param       Key                             The key that will be used to look the value up\n@return      True if an item was removed (False indicates nothing in the map uses the provided key)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, "Map_Remove", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BlueprintMapLibrary_eventMap_Remove_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values()
	{
		struct BlueprintMapLibrary_eventMap_Values_Parms
		{
			TMap<int32,int32> TargetMap;
			TArray<int32> Values;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values = { UE4CodeGen_Private::EPropertyClass::Array, "Values", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Values_Parms, Values), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Values_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Values", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_TargetMap = { UE4CodeGen_Private::EPropertyClass::Map, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Values_Parms, TargetMap), METADATA_PARAMS(NewProp_TargetMap_MetaData, ARRAY_COUNT(NewProp_TargetMap_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Values,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Values_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetMap_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetMap_ValueProp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "Values" },
				{ "Category", "Utilities|Map" },
				{ "CompactNodeTitle", "VALUES" },
				{ "CustomThunk", "true" },
				{ "DisplayName", "Values" },
				{ "MapParam", "TargetMap" },
				{ "MapValueParam", "Values" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
				{ "ToolTip", "Outputs an array of all values present in the map\n\n@param       TargetMap               The map to get the list of values from\n@param       Values                  All values present in the map" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, "Map_Values", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BlueprintMapLibrary_eventMap_Values_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName()
	{
		struct BlueprintMapLibrary_eventSetMapPropertyByName_Parms
		{
			UObject* Object;
			FName PropertyName;
			TMap<int32,int32> Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Map, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventSetMapPropertyByName_Parms, Value), METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "Value_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName = { UE4CodeGen_Private::EPropertyClass::Name, "PropertyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventSetMapPropertyByName_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object = { UE4CodeGen_Private::EPropertyClass::Object, "Object", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventSetMapPropertyByName_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Object,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "CustomThunk", "true" },
				{ "MapParam", "Value" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
				{ "ToolTip", "Not exposed to users. Supports setting a map property on an object by name." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, "SetMapPropertyByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BlueprintMapLibrary_eventSetMapPropertyByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlueprintMapLibrary_NoRegister()
	{
		return UBlueprintMapLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UBlueprintMapLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add, "Map_Add" }, // 1677615781
				{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear, "Map_Clear" }, // 824122259
				{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains, "Map_Contains" }, // 1608892366
				{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find, "Map_Find" }, // 4211398634
				{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys, "Map_Keys" }, // 1339805667
				{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length, "Map_Length" }, // 190556721
				{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove, "Map_Remove" }, // 2304227425
				{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values, "Map_Values" }, // 1500763852
				{ &Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName, "SetMapPropertyByName" }, // 3395587865
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DevelopmentStatus", "Experimental" },
				{ "IncludePath", "Kismet/BlueprintMapLibrary.h" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBlueprintMapLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBlueprintMapLibrary::StaticClass,
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
	IMPLEMENT_CLASS(UBlueprintMapLibrary, 553002618);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintMapLibrary(Z_Construct_UClass_UBlueprintMapLibrary, &UBlueprintMapLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UBlueprintMapLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintMapLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
