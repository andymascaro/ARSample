// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Kismet/KismetNodeHelperLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetNodeHelperLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UKismetNodeHelperLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UKismetNodeHelperLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit();
// End Cross Module References
	void UKismetNodeHelperLibrary::StaticRegisterNativesUKismetNodeHelperLibrary()
	{
		UClass* Class = UKismetNodeHelperLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BitIsMarked", (Native)&UKismetNodeHelperLibrary::execBitIsMarked },
			{ "ClearAllBits", (Native)&UKismetNodeHelperLibrary::execClearAllBits },
			{ "ClearBit", (Native)&UKismetNodeHelperLibrary::execClearBit },
			{ "GetEnumeratorName", (Native)&UKismetNodeHelperLibrary::execGetEnumeratorName },
			{ "GetEnumeratorUserFriendlyName", (Native)&UKismetNodeHelperLibrary::execGetEnumeratorUserFriendlyName },
			{ "GetEnumeratorValueFromIndex", (Native)&UKismetNodeHelperLibrary::execGetEnumeratorValueFromIndex },
			{ "GetFirstUnmarkedBit", (Native)&UKismetNodeHelperLibrary::execGetFirstUnmarkedBit },
			{ "GetRandomUnmarkedBit", (Native)&UKismetNodeHelperLibrary::execGetRandomUnmarkedBit },
			{ "GetUnmarkedBit", (Native)&UKismetNodeHelperLibrary::execGetUnmarkedBit },
			{ "GetValidValue", (Native)&UKismetNodeHelperLibrary::execGetValidValue },
			{ "HasMarkedBit", (Native)&UKismetNodeHelperLibrary::execHasMarkedBit },
			{ "HasUnmarkedBit", (Native)&UKismetNodeHelperLibrary::execHasUnmarkedBit },
			{ "MarkBit", (Native)&UKismetNodeHelperLibrary::execMarkBit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked()
	{
		struct KismetNodeHelperLibrary_eventBitIsMarked_Parms
		{
			int32 Data;
			int32 Index;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetNodeHelperLibrary_eventBitIsMarked_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetNodeHelperLibrary_eventBitIsMarked_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventBitIsMarked_Parms, Index), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Data = { UE4CodeGen_Private::EPropertyClass::Int, "Data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventBitIsMarked_Parms, Data), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Data,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "TRUE" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
				{ "ToolTip", "Returns whether the bit at index \"Index\" is set or not in the data\n\n@param Data - The integer containing the bits that are being tested against\n@param Index - The bit index into the Data that we are inquiring\n@return  - Whether the bit at index \"Index\" is set or not" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, "BitIsMarked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(KismetNodeHelperLibrary_eventBitIsMarked_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits()
	{
		struct KismetNodeHelperLibrary_eventClearAllBits_Parms
		{
			int32 Data;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Data = { UE4CodeGen_Private::EPropertyClass::Int, "Data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventClearAllBits_Parms, Data), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Data,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "TRUE" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
				{ "ToolTip", "Clears all of the bit in the data\n\n@param Data - The integer containing the bits that are being cleared" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, "ClearAllBits", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(KismetNodeHelperLibrary_eventClearAllBits_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit()
	{
		struct KismetNodeHelperLibrary_eventClearBit_Parms
		{
			int32 Data;
			int32 Index;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventClearBit_Parms, Index), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Data = { UE4CodeGen_Private::EPropertyClass::Int, "Data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventClearBit_Parms, Data), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Data,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "TRUE" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
				{ "ToolTip", "Clears the bit at index \"Index\" in the data\n\n@param Data - The integer containing the bits that are being cleared\n@param Index - The bit index into the Data that we are clearing" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, "ClearBit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(KismetNodeHelperLibrary_eventClearBit_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName()
	{
		struct KismetNodeHelperLibrary_eventGetEnumeratorName_Parms
		{
			const UEnum* Enum;
			uint8 EnumeratorValue;
			FName ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetEnumeratorName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnumeratorValue = { UE4CodeGen_Private::EPropertyClass::Byte, "EnumeratorValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetEnumeratorName_Parms, EnumeratorValue), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enum = { UE4CodeGen_Private::EPropertyClass::Object, "Enum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetEnumeratorName_Parms, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(NewProp_Enum_MetaData, ARRAY_COUNT(NewProp_Enum_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnumeratorValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Enum,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "TRUE" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
				{ "ToolTip", "Gets enumerator name.\n\n@param Enum - Enumeration\n@param EnumeratorValue - Value of searched enumeration\n@return - name of the searched enumerator, or NAME_None" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, "GetEnumeratorName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetNodeHelperLibrary_eventGetEnumeratorName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName()
	{
		struct KismetNodeHelperLibrary_eventGetEnumeratorUserFriendlyName_Parms
		{
			const UEnum* Enum;
			uint8 EnumeratorValue;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetEnumeratorUserFriendlyName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnumeratorValue = { UE4CodeGen_Private::EPropertyClass::Byte, "EnumeratorValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetEnumeratorUserFriendlyName_Parms, EnumeratorValue), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enum = { UE4CodeGen_Private::EPropertyClass::Object, "Enum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetEnumeratorUserFriendlyName_Parms, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(NewProp_Enum_MetaData, ARRAY_COUNT(NewProp_Enum_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnumeratorValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Enum,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "TRUE" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
				{ "ToolTip", "Gets enumerator name as FString. Use DeisplayName when possible.\n\n@param Enum - Enumeration\n@param EnumeratorValue - Value of searched enumeration\n@return - name of the searched enumerator, or NAME_None" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, "GetEnumeratorUserFriendlyName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetNodeHelperLibrary_eventGetEnumeratorUserFriendlyName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex()
	{
		struct KismetNodeHelperLibrary_eventGetEnumeratorValueFromIndex_Parms
		{
			const UEnum* Enum;
			uint8 EnumeratorIndex;
			uint8 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetEnumeratorValueFromIndex_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnumeratorIndex = { UE4CodeGen_Private::EPropertyClass::Byte, "EnumeratorIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetEnumeratorValueFromIndex_Parms, EnumeratorIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enum = { UE4CodeGen_Private::EPropertyClass::Object, "Enum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetEnumeratorValueFromIndex_Parms, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(NewProp_Enum_MetaData, ARRAY_COUNT(NewProp_Enum_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnumeratorIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Enum,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "TRUE" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
				{ "ToolTip", "@param Enum - Enumeration\n@param EnumeratorIndex - Input index\n@return - The value of the enumerator, or INDEX_NONE" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, "GetEnumeratorValueFromIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetNodeHelperLibrary_eventGetEnumeratorValueFromIndex_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit()
	{
		struct KismetNodeHelperLibrary_eventGetFirstUnmarkedBit_Parms
		{
			int32 Data;
			int32 StartIdx;
			int32 NumBits;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetFirstUnmarkedBit_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumBits = { UE4CodeGen_Private::EPropertyClass::Int, "NumBits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetFirstUnmarkedBit_Parms, NumBits), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartIdx = { UE4CodeGen_Private::EPropertyClass::Int, "StartIdx", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetFirstUnmarkedBit_Parms, StartIdx), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Data = { UE4CodeGen_Private::EPropertyClass::Int, "Data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetFirstUnmarkedBit_Parms, Data), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumBits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartIdx,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Data,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "TRUE" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
				{ "ToolTip", "Gets the first index not already marked starting from a specific index and returns the bit index selected\n\n@param Data - The integer containing the bits that are being set\n@param StartIdx - The index to start looking for an available index from\n@param NumBits - The logical number of bits we want to track\n@return - The index that was selected (returns INDEX_NONE if there was no unmarked bits to choose from)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, "GetFirstUnmarkedBit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(KismetNodeHelperLibrary_eventGetFirstUnmarkedBit_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit()
	{
		struct KismetNodeHelperLibrary_eventGetRandomUnmarkedBit_Parms
		{
			int32 Data;
			int32 StartIdx;
			int32 NumBits;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetRandomUnmarkedBit_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumBits = { UE4CodeGen_Private::EPropertyClass::Int, "NumBits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetRandomUnmarkedBit_Parms, NumBits), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartIdx = { UE4CodeGen_Private::EPropertyClass::Int, "StartIdx", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetRandomUnmarkedBit_Parms, StartIdx), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Data = { UE4CodeGen_Private::EPropertyClass::Int, "Data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetRandomUnmarkedBit_Parms, Data), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumBits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartIdx,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Data,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "TRUE" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
				{ "ToolTip", "Gets a random not already marked bit and returns the bit index selected\n\n@param Data - The integer containing the bits that are being set\n@param NumBits - The logical number of bits we want to track\n@return - The index that was selected (returns INDEX_NONE if there was no unmarked bits to choose from)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, "GetRandomUnmarkedBit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(KismetNodeHelperLibrary_eventGetRandomUnmarkedBit_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit()
	{
		struct KismetNodeHelperLibrary_eventGetUnmarkedBit_Parms
		{
			int32 Data;
			int32 StartIdx;
			int32 NumBits;
			bool bRandom;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetUnmarkedBit_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bRandom_SetBit = [](void* Obj){ ((KismetNodeHelperLibrary_eventGetUnmarkedBit_Parms*)Obj)->bRandom = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandom = { UE4CodeGen_Private::EPropertyClass::Bool, "bRandom", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetNodeHelperLibrary_eventGetUnmarkedBit_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRandom_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumBits = { UE4CodeGen_Private::EPropertyClass::Int, "NumBits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetUnmarkedBit_Parms, NumBits), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartIdx = { UE4CodeGen_Private::EPropertyClass::Int, "StartIdx", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetUnmarkedBit_Parms, StartIdx), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Data = { UE4CodeGen_Private::EPropertyClass::Int, "Data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetUnmarkedBit_Parms, Data), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRandom,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumBits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartIdx,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Data,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "TRUE" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
				{ "ToolTip", "Gets an already unmarked bit and returns the bit index selected\n\n@param Data - The integer containing the bits that are being set\n@param StartIdx - The index to start with when determining the selection'\n@param NumBits - The logical number of bits we want to track\n@param bRandom - Whether to select a random index or not\n@return - The index that was selected (returns INDEX_NONE if there was no unmarked bits to choose from)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, "GetUnmarkedBit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(KismetNodeHelperLibrary_eventGetUnmarkedBit_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue()
	{
		struct KismetNodeHelperLibrary_eventGetValidValue_Parms
		{
			const UEnum* Enum;
			uint8 EnumeratorValue;
			uint8 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetValidValue_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnumeratorValue = { UE4CodeGen_Private::EPropertyClass::Byte, "EnumeratorValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetValidValue_Parms, EnumeratorValue), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enum = { UE4CodeGen_Private::EPropertyClass::Object, "Enum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetValidValue_Parms, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(NewProp_Enum_MetaData, ARRAY_COUNT(NewProp_Enum_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnumeratorValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Enum,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "TRUE" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
				{ "ToolTip", "@param Enum - Enumeration\n@param EnumeratorIndex - Input value\n@return - if EnumeratorIndex is valid return EnumeratorIndex, otherwise return MAX value of Enum" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, "GetValidValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetNodeHelperLibrary_eventGetValidValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit()
	{
		struct KismetNodeHelperLibrary_eventHasMarkedBit_Parms
		{
			int32 Data;
			int32 NumBits;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetNodeHelperLibrary_eventHasMarkedBit_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetNodeHelperLibrary_eventHasMarkedBit_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumBits = { UE4CodeGen_Private::EPropertyClass::Int, "NumBits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventHasMarkedBit_Parms, NumBits), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Data = { UE4CodeGen_Private::EPropertyClass::Int, "Data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventHasMarkedBit_Parms, Data), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumBits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Data,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "TRUE" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
				{ "ToolTip", "Returns whether there exists a marked bit in the data\n\n@param Data - The data being tested against\n@param NumBits - The logical number of bits we want to track\n@return - Whether there is a bit marked in the data" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, "HasMarkedBit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(KismetNodeHelperLibrary_eventHasMarkedBit_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit()
	{
		struct KismetNodeHelperLibrary_eventHasUnmarkedBit_Parms
		{
			int32 Data;
			int32 NumBits;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KismetNodeHelperLibrary_eventHasUnmarkedBit_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetNodeHelperLibrary_eventHasUnmarkedBit_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumBits = { UE4CodeGen_Private::EPropertyClass::Int, "NumBits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventHasUnmarkedBit_Parms, NumBits), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Data = { UE4CodeGen_Private::EPropertyClass::Int, "Data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventHasUnmarkedBit_Parms, Data), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumBits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Data,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "TRUE" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
				{ "ToolTip", "Returns whether there exists an unmarked bit in the data\n\n@param Data - The data being tested against\n@param NumBits - The logical number of bits we want to track\n@return - Whether there is a bit not marked in the data" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, "HasUnmarkedBit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(KismetNodeHelperLibrary_eventHasUnmarkedBit_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit()
	{
		struct KismetNodeHelperLibrary_eventMarkBit_Parms
		{
			int32 Data;
			int32 Index;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventMarkBit_Parms, Index), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Data = { UE4CodeGen_Private::EPropertyClass::Int, "Data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetNodeHelperLibrary_eventMarkBit_Parms, Data), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Data,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "TRUE" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
				{ "ToolTip", "Sets the bit at index \"Index\" in the data\n\n@param Data - The integer containing the bits that are being set\n@param Index - The bit index into the Data that we are setting" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, "MarkBit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(KismetNodeHelperLibrary_eventMarkBit_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKismetNodeHelperLibrary_NoRegister()
	{
		return UKismetNodeHelperLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UKismetNodeHelperLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked, "BitIsMarked" }, // 3481003123
				{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits, "ClearAllBits" }, // 4016169936
				{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit, "ClearBit" }, // 1827977210
				{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName, "GetEnumeratorName" }, // 2974817140
				{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName, "GetEnumeratorUserFriendlyName" }, // 697982350
				{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex, "GetEnumeratorValueFromIndex" }, // 4190546956
				{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit, "GetFirstUnmarkedBit" }, // 2206454461
				{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit, "GetRandomUnmarkedBit" }, // 2282843775
				{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit, "GetUnmarkedBit" }, // 3930440232
				{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue, "GetValidValue" }, // 1551750080
				{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit, "HasMarkedBit" }, // 1057989856
				{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit, "HasUnmarkedBit" }, // 2397747214
				{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit, "MarkBit" }, // 3010885500
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Kismet/KismetNodeHelperLibrary.h" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UKismetNodeHelperLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UKismetNodeHelperLibrary::StaticClass,
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
	IMPLEMENT_CLASS(UKismetNodeHelperLibrary, 1417984408);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKismetNodeHelperLibrary(Z_Construct_UClass_UKismetNodeHelperLibrary, &UKismetNodeHelperLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UKismetNodeHelperLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetNodeHelperLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
