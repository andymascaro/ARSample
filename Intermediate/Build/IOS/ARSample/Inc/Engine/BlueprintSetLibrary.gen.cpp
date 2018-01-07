// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Kismet/BlueprintSetLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintSetLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintSetLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintSetLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_Add();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_Clear();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_Length();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_ToArray();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_SetSetPropertyByName();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UBlueprintSetLibrary::StaticRegisterNativesUBlueprintSetLibrary()
	{
		UClass* Class = UBlueprintSetLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Set_Add", (Native)&UBlueprintSetLibrary::execSet_Add },
			{ "Set_AddItems", (Native)&UBlueprintSetLibrary::execSet_AddItems },
			{ "Set_Clear", (Native)&UBlueprintSetLibrary::execSet_Clear },
			{ "Set_Contains", (Native)&UBlueprintSetLibrary::execSet_Contains },
			{ "Set_Difference", (Native)&UBlueprintSetLibrary::execSet_Difference },
			{ "Set_Intersection", (Native)&UBlueprintSetLibrary::execSet_Intersection },
			{ "Set_Length", (Native)&UBlueprintSetLibrary::execSet_Length },
			{ "Set_Remove", (Native)&UBlueprintSetLibrary::execSet_Remove },
			{ "Set_RemoveItems", (Native)&UBlueprintSetLibrary::execSet_RemoveItems },
			{ "Set_ToArray", (Native)&UBlueprintSetLibrary::execSet_ToArray },
			{ "Set_Union", (Native)&UBlueprintSetLibrary::execSet_Union },
			{ "SetSetPropertyByName", (Native)&UBlueprintSetLibrary::execSetSetPropertyByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_Add()
	{
		struct BlueprintSetLibrary_eventSet_Add_Parms
		{
			TSet<int32> TargetSet;
			int32 NewItem;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewItem_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewItem = { UE4CodeGen_Private::EPropertyClass::Int, "NewItem", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Add_Parms, NewItem), METADATA_PARAMS(NewProp_NewItem_MetaData, ARRAY_COUNT(NewProp_NewItem_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSet_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FSetPropertyParams NewProp_TargetSet = { UE4CodeGen_Private::EPropertyClass::Set, "TargetSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Add_Parms, TargetSet), METADATA_PARAMS(NewProp_TargetSet_MetaData, ARRAY_COUNT(NewProp_TargetSet_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetSet_ElementProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewItem,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetSet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetSet_ElementProp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "NewItem" },
				{ "Category", "Utilities|Set" },
				{ "CompactNodeTitle", "ADD" },
				{ "CustomThunk", "true" },
				{ "DisplayName", "Add" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintSetLibrary.h" },
				{ "SetParam", "TargetSet|NewItem" },
				{ "ToolTip", "Adds item to set. Output value indicates whether the item was successfully added, meaning an\noutput of False indicates the item was already in the Set.\n\n@param       TargetSet               The set to add item to\n@param       NewItem                 The item to add to the set\n@return      True if NewItem was added to the set (False indicates an equivalent item was present)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintSetLibrary, "Set_Add", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BlueprintSetLibrary_eventSet_Add_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems()
	{
		struct BlueprintSetLibrary_eventSet_AddItems_Parms
		{
			TSet<int32> TargetSet;
			TArray<int32> NewItems;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewItems_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewItems = { UE4CodeGen_Private::EPropertyClass::Array, "NewItems", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_AddItems_Parms, NewItems), METADATA_PARAMS(NewProp_NewItems_MetaData, ARRAY_COUNT(NewProp_NewItems_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewItems_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "NewItems", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSet_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FSetPropertyParams NewProp_TargetSet = { UE4CodeGen_Private::EPropertyClass::Set, "TargetSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_AddItems_Parms, TargetSet), METADATA_PARAMS(NewProp_TargetSet_MetaData, ARRAY_COUNT(NewProp_TargetSet_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetSet_ElementProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewItems,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewItems_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetSet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetSet_ElementProp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "NewItems" },
				{ "Category", "Utilities|Set" },
				{ "CompactNodeTitle", "ADD ITEMS" },
				{ "CustomThunk", "true" },
				{ "DisplayName", "Add Items" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintSetLibrary.h" },
				{ "SetParam", "TargetSet|NewItems" },
				{ "ToolTip", "Adds all elements from an Array to a Set\n\n@param       TargetSet               The set to search for the item\n@param       NewItems                The items to add to the set" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintSetLibrary, "Set_AddItems", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BlueprintSetLibrary_eventSet_AddItems_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_Clear()
	{
		struct BlueprintSetLibrary_eventSet_Clear_Parms
		{
			TSet<int32> TargetSet;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSet_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FSetPropertyParams NewProp_TargetSet = { UE4CodeGen_Private::EPropertyClass::Set, "TargetSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Clear_Parms, TargetSet), METADATA_PARAMS(NewProp_TargetSet_MetaData, ARRAY_COUNT(NewProp_TargetSet_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetSet_ElementProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetSet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetSet_ElementProp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Set" },
				{ "CompactNodeTitle", "CLEAR" },
				{ "CustomThunk", "true" },
				{ "DisplayName", "Clear" },
				{ "Keywords", "empty" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintSetLibrary.h" },
				{ "SetParam", "TargetSet" },
				{ "ToolTip", "Clear a set, removes all content.\n\n@param       TargetSet               The set to clear" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintSetLibrary, "Set_Clear", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BlueprintSetLibrary_eventSet_Clear_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains()
	{
		struct BlueprintSetLibrary_eventSet_Contains_Parms
		{
			TSet<int32> TargetSet;
			int32 ItemToFind;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BlueprintSetLibrary_eventSet_Contains_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintSetLibrary_eventSet_Contains_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemToFind_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemToFind = { UE4CodeGen_Private::EPropertyClass::Int, "ItemToFind", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Contains_Parms, ItemToFind), METADATA_PARAMS(NewProp_ItemToFind_MetaData, ARRAY_COUNT(NewProp_ItemToFind_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSet_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FSetPropertyParams NewProp_TargetSet = { UE4CodeGen_Private::EPropertyClass::Set, "TargetSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Contains_Parms, TargetSet), METADATA_PARAMS(NewProp_TargetSet_MetaData, ARRAY_COUNT(NewProp_TargetSet_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetSet_ElementProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemToFind,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetSet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetSet_ElementProp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "ItemToFind" },
				{ "BlueprintThreadSafe", "" },
				{ "Category", "Utilities|Set" },
				{ "CompactNodeTitle", "CONTAINS" },
				{ "CustomThunk", "true" },
				{ "DisplayName", "Contains Item" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintSetLibrary.h" },
				{ "SetParam", "TargetSet|ItemToFind" },
				{ "ToolTip", "Returns true if the set contains the given item.\n\n@param       TargetSet               The set to search for the item\n@param       ItemToFind              The item to look for\n@return      True if the item was found within the set" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintSetLibrary, "Set_Contains", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BlueprintSetLibrary_eventSet_Contains_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference()
	{
		struct BlueprintSetLibrary_eventSet_Difference_Parms
		{
			TSet<int32> A;
			TSet<int32> B;
			TSet<int32> Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FSetPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Set, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Difference_Parms, Result), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Result_ElementProp = { UE4CodeGen_Private::EPropertyClass::Int, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FSetPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Set, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Difference_Parms, B), METADATA_PARAMS(NewProp_B_MetaData, ARRAY_COUNT(NewProp_B_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_B_ElementProp = { UE4CodeGen_Private::EPropertyClass::Int, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FSetPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Set, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Difference_Parms, A), METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_A_ElementProp = { UE4CodeGen_Private::EPropertyClass::Int, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_ElementProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B_ElementProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A_ElementProp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Set" },
				{ "CompactNodeTitle", "DIFFERENCE" },
				{ "CustomThunk", "true" },
				{ "DisplayName", "Difference" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintSetLibrary.h" },
				{ "SetParam", "A|B|Result" },
				{ "ToolTip", "Assigns Result to the relative difference of two sets, A and B. That is, Result will\ncontain  all elements that are in Set A but are not found in Set B. Note that the\ndifference between two sets  is not commutative. The Set whose elements you wish to\npreserve should be the first (top) parameter. Also called the relative complement.\n\n@param               A               Starting set\n@param               B               Set of elements to remove from set A\n@param               Result  Set containing all elements in A that are not found in B" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintSetLibrary, "Set_Difference", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BlueprintSetLibrary_eventSet_Difference_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection()
	{
		struct BlueprintSetLibrary_eventSet_Intersection_Parms
		{
			TSet<int32> A;
			TSet<int32> B;
			TSet<int32> Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FSetPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Set, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Intersection_Parms, Result), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Result_ElementProp = { UE4CodeGen_Private::EPropertyClass::Int, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FSetPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Set, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Intersection_Parms, B), METADATA_PARAMS(NewProp_B_MetaData, ARRAY_COUNT(NewProp_B_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_B_ElementProp = { UE4CodeGen_Private::EPropertyClass::Int, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FSetPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Set, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Intersection_Parms, A), METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_A_ElementProp = { UE4CodeGen_Private::EPropertyClass::Int, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_ElementProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B_ElementProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A_ElementProp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Set" },
				{ "CompactNodeTitle", "INTERSECTION" },
				{ "CustomThunk", "true" },
				{ "DisplayName", "Intersection" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintSetLibrary.h" },
				{ "SetParam", "A|B|Result" },
				{ "ToolTip", "Assigns Result to the intersection of Set A and Set B. That is, Result will contain\nall elements that are in both Set A and Set B. To intersect with the empty set use\nClear.\n\n@param               A               One set to intersect\n@param               B               Another set to intersect\n@param               Result  Set to store results in" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintSetLibrary, "Set_Intersection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BlueprintSetLibrary_eventSet_Intersection_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_Length()
	{
		struct BlueprintSetLibrary_eventSet_Length_Parms
		{
			TSet<int32> TargetSet;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Length_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSet_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FSetPropertyParams NewProp_TargetSet = { UE4CodeGen_Private::EPropertyClass::Set, "TargetSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Length_Parms, TargetSet), METADATA_PARAMS(NewProp_TargetSet_MetaData, ARRAY_COUNT(NewProp_TargetSet_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetSet_ElementProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetSet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetSet_ElementProp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintThreadSafe", "" },
				{ "Category", "Utilities|Set" },
				{ "CompactNodeTitle", "LENGTH" },
				{ "CustomThunk", "true" },
				{ "DisplayName", "Length" },
				{ "Keywords", "num size count" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintSetLibrary.h" },
				{ "SetParam", "TargetSet" },
				{ "ToolTip", "Get the number of items in a set.\n\n@param       TargetSet               The set to get the length of\n@return      The length of the set" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintSetLibrary, "Set_Length", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BlueprintSetLibrary_eventSet_Length_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove()
	{
		struct BlueprintSetLibrary_eventSet_Remove_Parms
		{
			TSet<int32> TargetSet;
			int32 Item;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BlueprintSetLibrary_eventSet_Remove_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintSetLibrary_eventSet_Remove_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Item = { UE4CodeGen_Private::EPropertyClass::Int, "Item", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Remove_Parms, Item), METADATA_PARAMS(NewProp_Item_MetaData, ARRAY_COUNT(NewProp_Item_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSet_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FSetPropertyParams NewProp_TargetSet = { UE4CodeGen_Private::EPropertyClass::Set, "TargetSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Remove_Parms, TargetSet), METADATA_PARAMS(NewProp_TargetSet_MetaData, ARRAY_COUNT(NewProp_TargetSet_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetSet_ElementProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Item,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetSet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetSet_ElementProp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "Item" },
				{ "Category", "Utilities|Set" },
				{ "CompactNodeTitle", "REMOVE" },
				{ "CustomThunk", "true" },
				{ "DisplayName", "Remove" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintSetLibrary.h" },
				{ "SetParam", "TargetSet|Item" },
				{ "ToolTip", "Remove item from set. Output value indicates if something was actually removed. False\nindicates no equivalent item was found.\n\n@param       TargetSet               The set to remove from\n@param       Item                    The item to remove from the set\n@return      True if an item was removed (False indicates no equivalent item was present)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintSetLibrary, "Set_Remove", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BlueprintSetLibrary_eventSet_Remove_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems()
	{
		struct BlueprintSetLibrary_eventSet_RemoveItems_Parms
		{
			TSet<int32> TargetSet;
			TArray<int32> Items;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items = { UE4CodeGen_Private::EPropertyClass::Array, "Items", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_RemoveItems_Parms, Items), METADATA_PARAMS(NewProp_Items_MetaData, ARRAY_COUNT(NewProp_Items_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Items_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Items", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSet_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FSetPropertyParams NewProp_TargetSet = { UE4CodeGen_Private::EPropertyClass::Set, "TargetSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_RemoveItems_Parms, TargetSet), METADATA_PARAMS(NewProp_TargetSet_MetaData, ARRAY_COUNT(NewProp_TargetSet_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetSet_ElementProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Items,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Items_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetSet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetSet_ElementProp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "Items" },
				{ "Category", "Utilities|Set" },
				{ "CompactNodeTitle", "REMOVE ITEMS" },
				{ "CustomThunk", "true" },
				{ "DisplayName", "Remove Items" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintSetLibrary.h" },
				{ "SetParam", "TargetSet|Items" },
				{ "ToolTip", "Removes all elements in an Array from a set.\n\n@param       TargetSet               The set to remove from\n@param       Items                   The items to remove from the set" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintSetLibrary, "Set_RemoveItems", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BlueprintSetLibrary_eventSet_RemoveItems_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_ToArray()
	{
		struct BlueprintSetLibrary_eventSet_ToArray_Parms
		{
			TSet<int32> A;
			TArray<int32> Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Array, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_ToArray_Parms, Result), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Result_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FSetPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Set, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_ToArray_Parms, A), METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_A_ElementProp = { UE4CodeGen_Private::EPropertyClass::Int, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A_ElementProp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Set" },
				{ "CompactNodeTitle", "TO ARRAY" },
				{ "CustomThunk", "true" },
				{ "DisplayName", "To Array" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintSetLibrary.h" },
				{ "SetParam", "A|Result" },
				{ "ToolTip", "Outputs an Array containing copies of the entries of a Set.\n\n@param               A               Set\n@param               Result  Array" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintSetLibrary, "Set_ToArray", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BlueprintSetLibrary_eventSet_ToArray_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union()
	{
		struct BlueprintSetLibrary_eventSet_Union_Parms
		{
			TSet<int32> A;
			TSet<int32> B;
			TSet<int32> Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FSetPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Set, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Union_Parms, Result), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Result_ElementProp = { UE4CodeGen_Private::EPropertyClass::Int, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FSetPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Set, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Union_Parms, B), METADATA_PARAMS(NewProp_B_MetaData, ARRAY_COUNT(NewProp_B_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_B_ElementProp = { UE4CodeGen_Private::EPropertyClass::Int, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FSetPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Set, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Union_Parms, A), METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_A_ElementProp = { UE4CodeGen_Private::EPropertyClass::Int, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_ElementProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B_ElementProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A_ElementProp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities|Set" },
				{ "CompactNodeTitle", "UNION" },
				{ "CustomThunk", "true" },
				{ "DisplayName", "Union" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintSetLibrary.h" },
				{ "SetParam", "A|B|Result" },
				{ "ToolTip", "Assigns Result to the union of two sets, A and B. That is, Result will contain\nall elements that are in Set A and in addition all elements in Set B. Note that\na Set is a collection of unique elements, so duplicates will be eliminated.\n\n@param               A               One set to union\n@param               B               Another set to union\n@param               Result  Set to store results in" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintSetLibrary, "Set_Union", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BlueprintSetLibrary_eventSet_Union_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_SetSetPropertyByName()
	{
		struct BlueprintSetLibrary_eventSetSetPropertyByName_Parms
		{
			UObject* Object;
			FName PropertyName;
			TSet<int32> Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FSetPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Set, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintSetLibrary_eventSetSetPropertyByName_Parms, Value), METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value_ElementProp = { UE4CodeGen_Private::EPropertyClass::Int, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName = { UE4CodeGen_Private::EPropertyClass::Name, "PropertyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintSetLibrary_eventSetSetPropertyByName_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object = { UE4CodeGen_Private::EPropertyClass::Object, "Object", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintSetLibrary_eventSetSetPropertyByName_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value_ElementProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Object,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "CustomThunk", "true" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintSetLibrary.h" },
				{ "SetParam", "Value" },
				{ "ToolTip", "Not exposed to users. Supports setting a set property on an object by name." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintSetLibrary, "SetSetPropertyByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BlueprintSetLibrary_eventSetSetPropertyByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlueprintSetLibrary_NoRegister()
	{
		return UBlueprintSetLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UBlueprintSetLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UBlueprintSetLibrary_Set_Add, "Set_Add" }, // 3726902905
				{ &Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems, "Set_AddItems" }, // 1451620984
				{ &Z_Construct_UFunction_UBlueprintSetLibrary_Set_Clear, "Set_Clear" }, // 772105125
				{ &Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains, "Set_Contains" }, // 2745098353
				{ &Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference, "Set_Difference" }, // 1766112636
				{ &Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection, "Set_Intersection" }, // 4144063960
				{ &Z_Construct_UFunction_UBlueprintSetLibrary_Set_Length, "Set_Length" }, // 249244832
				{ &Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove, "Set_Remove" }, // 2251318532
				{ &Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems, "Set_RemoveItems" }, // 1855362824
				{ &Z_Construct_UFunction_UBlueprintSetLibrary_Set_ToArray, "Set_ToArray" }, // 1685726406
				{ &Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union, "Set_Union" }, // 2770464220
				{ &Z_Construct_UFunction_UBlueprintSetLibrary_SetSetPropertyByName, "SetSetPropertyByName" }, // 2101770186
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DevelopmentStatus", "Experimental" },
				{ "IncludePath", "Kismet/BlueprintSetLibrary.h" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintSetLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBlueprintSetLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBlueprintSetLibrary::StaticClass,
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
	IMPLEMENT_CLASS(UBlueprintSetLibrary, 3804973361);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintSetLibrary(Z_Construct_UClass_UBlueprintSetLibrary, &UBlueprintSetLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UBlueprintSetLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintSetLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
