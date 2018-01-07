// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/PlatformInterfaceBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformInterfaceBase() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPlatformInterfaceDataType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDelegateArray();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformInterfaceData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPlatformInterfaceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPlatformInterfaceBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature()
	{
		struct _Script_Engine_eventPlatformInterfaceDelegate_Parms
		{
			FPlatformInterfaceDelegateResult Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Struct, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventPlatformInterfaceDelegate_Parms, Result), Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult, METADATA_PARAMS(NewProp_Result_MetaData, ARRAY_COUNT(NewProp_Result_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
				{ "ToolTip", "Generic platform interface delegate signature" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "PlatformInterfaceDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, sizeof(_Script_Engine_eventPlatformInterfaceDelegate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EPlatformInterfaceDataType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPlatformInterfaceDataType, Z_Construct_UPackage__Script_Engine(), TEXT("EPlatformInterfaceDataType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlatformInterfaceDataType(EPlatformInterfaceDataType_StaticEnum, TEXT("/Script/Engine"), TEXT("EPlatformInterfaceDataType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EPlatformInterfaceDataType_CRC() { return 4151854006U; }
	UEnum* Z_Construct_UEnum_Engine_EPlatformInterfaceDataType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlatformInterfaceDataType"), 0, Get_Z_Construct_UEnum_Engine_EPlatformInterfaceDataType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PIDT_None", (int64)PIDT_None },
				{ "PIDT_Int", (int64)PIDT_Int },
				{ "PIDT_Float", (int64)PIDT_Float },
				{ "PIDT_String", (int64)PIDT_String },
				{ "PIDT_Object", (int64)PIDT_Object },
				{ "PIDT_Custom", (int64)PIDT_Custom },
				{ "PIDT_MAX", (int64)PIDT_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
				{ "PIDT_Custom.ToolTip", "A custom type where more than one value may be filled out." },
				{ "PIDT_None.ToolTip", "No data type specified." },
				{ "ToolTip", "An enum for the types of data used in a PlatformInterfaceData struct." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPlatformInterfaceDataType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EPlatformInterfaceDataType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FDelegateArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDelegateArray_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDelegateArray, Z_Construct_UPackage__Script_Engine(), TEXT("DelegateArray"), sizeof(FDelegateArray), Get_Z_Construct_UScriptStruct_FDelegateArray_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDelegateArray(FDelegateArray::StaticStruct, TEXT("/Script/Engine"), TEXT("DelegateArray"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDelegateArray
{
	FScriptStruct_Engine_StaticRegisterNativesFDelegateArray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DelegateArray")),new UScriptStruct::TCppStructOps<FDelegateArray>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFDelegateArray;
	UScriptStruct* Z_Construct_UScriptStruct_FDelegateArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDelegateArray_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DelegateArray"), sizeof(FDelegateArray), Get_Z_Construct_UScriptStruct_FDelegateArray_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
				{ "ToolTip", "Helper struct, since UnrealScript doesn't allow arrays of arrays, but\narrays of structs of arrays are okay." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDelegateArray>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delegates_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Delegates = { UE4CodeGen_Private::EPropertyClass::Array, "Delegates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000000, 1, nullptr, STRUCT_OFFSET(FDelegateArray, Delegates), METADATA_PARAMS(NewProp_Delegates_MetaData, ARRAY_COUNT(NewProp_Delegates_MetaData)) };
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Delegates_Inner = { UE4CodeGen_Private::EPropertyClass::Delegate, "Delegates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080000, 1, nullptr, 0, Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Delegates,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Delegates_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"DelegateArray",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FDelegateArray),
				alignof(FDelegateArray),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDelegateArray_CRC() { return 2546464140U; }
class UScriptStruct* FPlatformInterfaceDelegateResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult, Z_Construct_UPackage__Script_Engine(), TEXT("PlatformInterfaceDelegateResult"), sizeof(FPlatformInterfaceDelegateResult), Get_Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlatformInterfaceDelegateResult(FPlatformInterfaceDelegateResult::StaticStruct, TEXT("/Script/Engine"), TEXT("PlatformInterfaceDelegateResult"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPlatformInterfaceDelegateResult
{
	FScriptStruct_Engine_StaticRegisterNativesFPlatformInterfaceDelegateResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlatformInterfaceDelegateResult")),new UScriptStruct::TCppStructOps<FPlatformInterfaceDelegateResult>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPlatformInterfaceDelegateResult;
	UScriptStruct* Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlatformInterfaceDelegateResult"), sizeof(FPlatformInterfaceDelegateResult), Get_Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
				{ "ToolTip", "Generic structure for returning most any kind of data from C++ to delegate functions" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlatformInterfaceDelegateResult>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
				{ "ToolTip", "The result actual data" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data = { UE4CodeGen_Private::EPropertyClass::Struct, "Data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPlatformInterfaceDelegateResult, Data), Z_Construct_UScriptStruct_FPlatformInterfaceData, METADATA_PARAMS(NewProp_Data_MetaData, ARRAY_COUNT(NewProp_Data_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuccessful_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
				{ "ToolTip", "This is always usable, no matter the type" },
			};
#endif
			auto NewProp_bSuccessful_SetBit = [](void* Obj){ ((FPlatformInterfaceDelegateResult*)Obj)->bSuccessful = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccessful = { UE4CodeGen_Private::EPropertyClass::Bool, "bSuccessful", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FPlatformInterfaceDelegateResult), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSuccessful_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSuccessful_MetaData, ARRAY_COUNT(NewProp_bSuccessful_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Data,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSuccessful,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PlatformInterfaceDelegateResult",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FPlatformInterfaceDelegateResult),
				alignof(FPlatformInterfaceDelegateResult),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_CRC() { return 625627702U; }
class UScriptStruct* FPlatformInterfaceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPlatformInterfaceData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlatformInterfaceData, Z_Construct_UPackage__Script_Engine(), TEXT("PlatformInterfaceData"), sizeof(FPlatformInterfaceData), Get_Z_Construct_UScriptStruct_FPlatformInterfaceData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlatformInterfaceData(FPlatformInterfaceData::StaticStruct, TEXT("/Script/Engine"), TEXT("PlatformInterfaceData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPlatformInterfaceData
{
	FScriptStruct_Engine_StaticRegisterNativesFPlatformInterfaceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlatformInterfaceData")),new UScriptStruct::TCppStructOps<FPlatformInterfaceData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPlatformInterfaceData;
	UScriptStruct* Z_Construct_UScriptStruct_FPlatformInterfaceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlatformInterfaceData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlatformInterfaceData"), sizeof(FPlatformInterfaceData), Get_Z_Construct_UScriptStruct_FPlatformInterfaceData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
				{ "ToolTip", "Struct that encompasses the most common types of data. This is the data payload\nof PlatformInterfaceDelegateResult." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlatformInterfaceData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectValue_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectValue = { UE4CodeGen_Private::EPropertyClass::Object, "ObjectValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPlatformInterfaceData, ObjectValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_ObjectValue_MetaData, ARRAY_COUNT(NewProp_ObjectValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringValue = { UE4CodeGen_Private::EPropertyClass::Str, "StringValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPlatformInterfaceData, StringValue), METADATA_PARAMS(NewProp_StringValue_MetaData, ARRAY_COUNT(NewProp_StringValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatValue = { UE4CodeGen_Private::EPropertyClass::Float, "FloatValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPlatformInterfaceData, FloatValue), METADATA_PARAMS(NewProp_FloatValue_MetaData, ARRAY_COUNT(NewProp_FloatValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
				{ "ToolTip", "Various typed result values" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntValue = { UE4CodeGen_Private::EPropertyClass::Int, "IntValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPlatformInterfaceData, IntValue), METADATA_PARAMS(NewProp_IntValue_MetaData, ARRAY_COUNT(NewProp_IntValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
				{ "ToolTip", "Specifies which value is valid for this structure" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Byte, "Type", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPlatformInterfaceData, Type), Z_Construct_UEnum_Engine_EPlatformInterfaceDataType, METADATA_PARAMS(NewProp_Type_MetaData, ARRAY_COUNT(NewProp_Type_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
				{ "ToolTip", "An optional tag for this data" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_DataName = { UE4CodeGen_Private::EPropertyClass::Name, "DataName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPlatformInterfaceData, DataName), METADATA_PARAMS(NewProp_DataName_MetaData, ARRAY_COUNT(NewProp_DataName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StringValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloatValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IntValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Type,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DataName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PlatformInterfaceData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FPlatformInterfaceData),
				alignof(FPlatformInterfaceData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlatformInterfaceData_CRC() { return 951310973U; }
	void UPlatformInterfaceBase::StaticRegisterNativesUPlatformInterfaceBase()
	{
	}
	UClass* Z_Construct_UClass_UPlatformInterfaceBase_NoRegister()
	{
		return UPlatformInterfaceBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UPlatformInterfaceBase()
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
				{ "IncludePath", "Engine/PlatformInterfaceBase.h" },
				{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllDelegates_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
				{ "ToolTip", "Array of delegate arrays. Only add and remove via helper functions, and call via the helper delegate call function" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllDelegates = { UE4CodeGen_Private::EPropertyClass::Array, "AllDelegates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000000, 1, nullptr, STRUCT_OFFSET(UPlatformInterfaceBase, AllDelegates), METADATA_PARAMS(NewProp_AllDelegates_MetaData, ARRAY_COUNT(NewProp_AllDelegates_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllDelegates_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AllDelegates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FDelegateArray, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllDelegates,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllDelegates_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPlatformInterfaceBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPlatformInterfaceBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880088u,
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
	IMPLEMENT_CLASS(UPlatformInterfaceBase, 2741213867);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlatformInterfaceBase(Z_Construct_UClass_UPlatformInterfaceBase, &UPlatformInterfaceBase::StaticClass, TEXT("/Script/Engine"), TEXT("UPlatformInterfaceBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformInterfaceBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
