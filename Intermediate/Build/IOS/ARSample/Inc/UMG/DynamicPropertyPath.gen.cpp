// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Binding/DynamicPropertyPath.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicPropertyPath() {}
// Cross Module References
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicPropertyPath();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyPathSegment();
	COREUOBJECT_API UClass* Z_Construct_UClass_UField();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
// End Cross Module References
class UScriptStruct* FDynamicPropertyPath::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FDynamicPropertyPath_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDynamicPropertyPath, Z_Construct_UPackage__Script_UMG(), TEXT("DynamicPropertyPath"), sizeof(FDynamicPropertyPath), Get_Z_Construct_UScriptStruct_FDynamicPropertyPath_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDynamicPropertyPath(FDynamicPropertyPath::StaticStruct, TEXT("/Script/UMG"), TEXT("DynamicPropertyPath"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFDynamicPropertyPath
{
	FScriptStruct_UMG_StaticRegisterNativesFDynamicPropertyPath()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DynamicPropertyPath")),new UScriptStruct::TCppStructOps<FDynamicPropertyPath>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFDynamicPropertyPath;
	UScriptStruct* Z_Construct_UScriptStruct_FDynamicPropertyPath()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDynamicPropertyPath_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DynamicPropertyPath"), sizeof(FDynamicPropertyPath), Get_Z_Construct_UScriptStruct_FDynamicPropertyPath_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Binding/DynamicPropertyPath.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDynamicPropertyPath>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[] = {
				{ "ModuleRelativePath", "Public/Binding/DynamicPropertyPath.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Segments = { UE4CodeGen_Private::EPropertyClass::Array, "Segments", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FDynamicPropertyPath, Segments), METADATA_PARAMS(NewProp_Segments_MetaData, ARRAY_COUNT(NewProp_Segments_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Segments_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Segments", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPropertyPathSegment, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Segments,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Segments_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"DynamicPropertyPath",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FDynamicPropertyPath),
				alignof(FDynamicPropertyPath),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDynamicPropertyPath_CRC() { return 3014800121U; }
class UScriptStruct* FPropertyPathSegment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FPropertyPathSegment_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyPathSegment, Z_Construct_UPackage__Script_UMG(), TEXT("PropertyPathSegment"), sizeof(FPropertyPathSegment), Get_Z_Construct_UScriptStruct_FPropertyPathSegment_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPropertyPathSegment(FPropertyPathSegment::StaticStruct, TEXT("/Script/UMG"), TEXT("PropertyPathSegment"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFPropertyPathSegment
{
	FScriptStruct_UMG_StaticRegisterNativesFPropertyPathSegment()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PropertyPathSegment")),new UScriptStruct::TCppStructOps<FPropertyPathSegment>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFPropertyPathSegment;
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyPathSegment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPropertyPathSegment_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PropertyPathSegment"), sizeof(FPropertyPathSegment), Get_Z_Construct_UScriptStruct_FPropertyPathSegment_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Binding/DynamicPropertyPath.h" },
				{ "ToolTip", "A struct used for caching part of a property path.  Don't use this class directly." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyPathSegment>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[] = {
				{ "ModuleRelativePath", "Public/Binding/DynamicPropertyPath.h" },
				{ "ToolTip", "The cached property on the Struct that this Name resolved to on it last time Resolve was called, if\nthe Struct doesn't change, this value is returned to avoid performing another Field lookup." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Field = { UE4CodeGen_Private::EPropertyClass::Object, "Field", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(FPropertyPathSegment, Field), Z_Construct_UClass_UField, METADATA_PARAMS(NewProp_Field_MetaData, ARRAY_COUNT(NewProp_Field_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[] = {
				{ "ModuleRelativePath", "Public/Binding/DynamicPropertyPath.h" },
				{ "ToolTip", "The cached Class or ScriptStruct that was used last to resolve Name to a property." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Struct = { UE4CodeGen_Private::EPropertyClass::Object, "Struct", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(FPropertyPathSegment, Struct), Z_Construct_UClass_UStruct, METADATA_PARAMS(NewProp_Struct_MetaData, ARRAY_COUNT(NewProp_Struct_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayIndex_MetaData[] = {
				{ "ModuleRelativePath", "Public/Binding/DynamicPropertyPath.h" },
				{ "ToolTip", "The optional array index." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArrayIndex = { UE4CodeGen_Private::EPropertyClass::Int, "ArrayIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPropertyPathSegment, ArrayIndex), METADATA_PARAMS(NewProp_ArrayIndex_MetaData, ARRAY_COUNT(NewProp_ArrayIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "ModuleRelativePath", "Public/Binding/DynamicPropertyPath.h" },
				{ "ToolTip", "The sub-component of the property path, a single value between .'s of the path" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPropertyPathSegment, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Field,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Struct,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArrayIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PropertyPathSegment",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FPropertyPathSegment),
				alignof(FPropertyPathSegment),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPropertyPathSegment_CRC() { return 3305531917U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
