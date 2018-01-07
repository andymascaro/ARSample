// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Kismet/DataTableFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataTableFunctionLibrary() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEvaluateCurveTableResult();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UDataTableFunctionLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTableFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UFunction* Z_Construct_UFunction_UDataTableFunctionLibrary_EvaluateCurveTableRow();
	ENGINE_API UClass* Z_Construct_UClass_UCurveTable_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UDataTableFunctionLibrary_GetDataTableRowFromName();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UDataTableFunctionLibrary_GetDataTableRowNames();
// End Cross Module References
	static UEnum* EEvaluateCurveTableResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EEvaluateCurveTableResult, Z_Construct_UPackage__Script_Engine(), TEXT("EEvaluateCurveTableResult"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEvaluateCurveTableResult(EEvaluateCurveTableResult_StaticEnum, TEXT("/Script/Engine"), TEXT("EEvaluateCurveTableResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EEvaluateCurveTableResult_CRC() { return 1922377277U; }
	UEnum* Z_Construct_UEnum_Engine_EEvaluateCurveTableResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEvaluateCurveTableResult"), 0, Get_Z_Construct_UEnum_Engine_EEvaluateCurveTableResult_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEvaluateCurveTableResult::RowFound", (int64)EEvaluateCurveTableResult::RowFound },
				{ "EEvaluateCurveTableResult::RowNotFound", (int64)EEvaluateCurveTableResult::RowNotFound },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Kismet/DataTableFunctionLibrary.h" },
				{ "RowFound.ToolTip", "Found the row successfully." },
				{ "RowNotFound.ToolTip", "Failed to find the row." },
				{ "ToolTip", "Enum used to indicate success or failure of EvaluateCurveTableRow." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEvaluateCurveTableResult",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EEvaluateCurveTableResult::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UDataTableFunctionLibrary::StaticRegisterNativesUDataTableFunctionLibrary()
	{
		UClass* Class = UDataTableFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EvaluateCurveTableRow", (Native)&UDataTableFunctionLibrary::execEvaluateCurveTableRow },
			{ "GetDataTableRowFromName", (Native)&UDataTableFunctionLibrary::execGetDataTableRowFromName },
			{ "GetDataTableRowNames", (Native)&UDataTableFunctionLibrary::execGetDataTableRowNames },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UDataTableFunctionLibrary_EvaluateCurveTableRow()
	{
		struct DataTableFunctionLibrary_eventEvaluateCurveTableRow_Parms
		{
			UCurveTable* CurveTable;
			FName RowName;
			float InXY;
			TEnumAsByte<EEvaluateCurveTableResult::Type> OutResult;
			float OutXY;
			FString ContextString;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContextString_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContextString = { UE4CodeGen_Private::EPropertyClass::Str, "ContextString", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DataTableFunctionLibrary_eventEvaluateCurveTableRow_Parms, ContextString), METADATA_PARAMS(NewProp_ContextString_MetaData, ARRAY_COUNT(NewProp_ContextString_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutXY = { UE4CodeGen_Private::EPropertyClass::Float, "OutXY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(DataTableFunctionLibrary_eventEvaluateCurveTableRow_Parms, OutXY), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutResult = { UE4CodeGen_Private::EPropertyClass::Byte, "OutResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(DataTableFunctionLibrary_eventEvaluateCurveTableRow_Parms, OutResult), Z_Construct_UEnum_Engine_EEvaluateCurveTableResult, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InXY = { UE4CodeGen_Private::EPropertyClass::Float, "InXY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DataTableFunctionLibrary_eventEvaluateCurveTableRow_Parms, InXY), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName = { UE4CodeGen_Private::EPropertyClass::Name, "RowName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DataTableFunctionLibrary_eventEvaluateCurveTableRow_Parms, RowName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveTable = { UE4CodeGen_Private::EPropertyClass::Object, "CurveTable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DataTableFunctionLibrary_eventEvaluateCurveTableRow_Parms, CurveTable), Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContextString,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutXY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutResult,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InXY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RowName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurveTable,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "DataTable" },
				{ "DataTablePin", "CurveTable" },
				{ "ExpandEnumAsExecs", "OutResult" },
				{ "ModuleRelativePath", "Classes/Kismet/DataTableFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataTableFunctionLibrary, "EvaluateCurveTableRow", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(DataTableFunctionLibrary_eventEvaluateCurveTableRow_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDataTableFunctionLibrary_GetDataTableRowFromName()
	{
		struct DataTableFunctionLibrary_eventGetDataTableRowFromName_Parms
		{
			UDataTable* Table;
			FName RowName;
			FTableRowBase OutRow;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((DataTableFunctionLibrary_eventGetDataTableRowFromName_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(DataTableFunctionLibrary_eventGetDataTableRowFromName_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow = { UE4CodeGen_Private::EPropertyClass::Struct, "OutRow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(DataTableFunctionLibrary_eventGetDataTableRowFromName_Parms, OutRow), Z_Construct_UScriptStruct_FTableRowBase, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName = { UE4CodeGen_Private::EPropertyClass::Name, "RowName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DataTableFunctionLibrary_eventGetDataTableRowFromName_Parms, RowName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Table = { UE4CodeGen_Private::EPropertyClass::Object, "Table", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DataTableFunctionLibrary_eventGetDataTableRowFromName_Parms, Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutRow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RowName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Table,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "DataTable" },
				{ "CustomStructureParam", "OutRow" },
				{ "CustomThunk", "true" },
				{ "ModuleRelativePath", "Classes/Kismet/DataTableFunctionLibrary.h" },
				{ "ToolTip", "Get a Row from a DataTable given a RowName" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataTableFunctionLibrary, "GetDataTableRowFromName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(DataTableFunctionLibrary_eventGetDataTableRowFromName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDataTableFunctionLibrary_GetDataTableRowNames()
	{
		struct DataTableFunctionLibrary_eventGetDataTableRowNames_Parms
		{
			UDataTable* Table;
			TArray<FName> OutRowNames;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutRowNames = { UE4CodeGen_Private::EPropertyClass::Array, "OutRowNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(DataTableFunctionLibrary_eventGetDataTableRowNames_Parms, OutRowNames), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutRowNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "OutRowNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Table = { UE4CodeGen_Private::EPropertyClass::Object, "Table", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DataTableFunctionLibrary_eventGetDataTableRowNames_Parms, Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutRowNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutRowNames_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Table,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "DataTable" },
				{ "ModuleRelativePath", "Classes/Kismet/DataTableFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataTableFunctionLibrary, "GetDataTableRowNames", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(DataTableFunctionLibrary_eventGetDataTableRowNames_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDataTableFunctionLibrary_NoRegister()
	{
		return UDataTableFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UDataTableFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UDataTableFunctionLibrary_EvaluateCurveTableRow, "EvaluateCurveTableRow" }, // 3430462194
				{ &Z_Construct_UFunction_UDataTableFunctionLibrary_GetDataTableRowFromName, "GetDataTableRowFromName" }, // 1243292456
				{ &Z_Construct_UFunction_UDataTableFunctionLibrary_GetDataTableRowNames, "GetDataTableRowNames" }, // 2340476500
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Kismet/DataTableFunctionLibrary.h" },
				{ "ModuleRelativePath", "Classes/Kismet/DataTableFunctionLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDataTableFunctionLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDataTableFunctionLibrary::StaticClass,
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
	IMPLEMENT_CLASS(UDataTableFunctionLibrary, 904891459);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDataTableFunctionLibrary(Z_Construct_UClass_UDataTableFunctionLibrary, &UDataTableFunctionLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UDataTableFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataTableFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
