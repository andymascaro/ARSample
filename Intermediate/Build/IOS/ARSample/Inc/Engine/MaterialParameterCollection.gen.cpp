// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialParameterCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialParameterCollection() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionVectorParameter();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionParameterBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionScalarParameter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FCollectionVectorParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCollectionVectorParameter_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionVectorParameter, Z_Construct_UPackage__Script_Engine(), TEXT("CollectionVectorParameter"), sizeof(FCollectionVectorParameter), Get_Z_Construct_UScriptStruct_FCollectionVectorParameter_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCollectionVectorParameter(FCollectionVectorParameter::StaticStruct, TEXT("/Script/Engine"), TEXT("CollectionVectorParameter"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCollectionVectorParameter
{
	FScriptStruct_Engine_StaticRegisterNativesFCollectionVectorParameter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CollectionVectorParameter")),new UScriptStruct::TCppStructOps<FCollectionVectorParameter>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCollectionVectorParameter;
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionVectorParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCollectionVectorParameter_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CollectionVectorParameter"), sizeof(FCollectionVectorParameter), Get_Z_Construct_UScriptStruct_FCollectionVectorParameter_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
				{ "ToolTip", "A vector parameter" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionVectorParameter>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
				{ "Category", "Parameter" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultValue = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FCollectionVectorParameter, DefaultValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_DefaultValue_MetaData, ARRAY_COUNT(NewProp_DefaultValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultValue,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FCollectionParameterBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CollectionVectorParameter",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCollectionVectorParameter),
				alignof(FCollectionVectorParameter),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCollectionVectorParameter_CRC() { return 3396692858U; }
class UScriptStruct* FCollectionScalarParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCollectionScalarParameter_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionScalarParameter, Z_Construct_UPackage__Script_Engine(), TEXT("CollectionScalarParameter"), sizeof(FCollectionScalarParameter), Get_Z_Construct_UScriptStruct_FCollectionScalarParameter_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCollectionScalarParameter(FCollectionScalarParameter::StaticStruct, TEXT("/Script/Engine"), TEXT("CollectionScalarParameter"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCollectionScalarParameter
{
	FScriptStruct_Engine_StaticRegisterNativesFCollectionScalarParameter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CollectionScalarParameter")),new UScriptStruct::TCppStructOps<FCollectionScalarParameter>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCollectionScalarParameter;
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionScalarParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCollectionScalarParameter_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CollectionScalarParameter"), sizeof(FCollectionScalarParameter), Get_Z_Construct_UScriptStruct_FCollectionScalarParameter_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
				{ "ToolTip", "A scalar parameter" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionScalarParameter>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
				{ "Category", "Parameter" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultValue = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FCollectionScalarParameter, DefaultValue), METADATA_PARAMS(NewProp_DefaultValue_MetaData, ARRAY_COUNT(NewProp_DefaultValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultValue,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FCollectionParameterBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CollectionScalarParameter",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCollectionScalarParameter),
				alignof(FCollectionScalarParameter),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCollectionScalarParameter_CRC() { return 2936270274U; }
class UScriptStruct* FCollectionParameterBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCollectionParameterBase_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionParameterBase, Z_Construct_UPackage__Script_Engine(), TEXT("CollectionParameterBase"), sizeof(FCollectionParameterBase), Get_Z_Construct_UScriptStruct_FCollectionParameterBase_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCollectionParameterBase(FCollectionParameterBase::StaticStruct, TEXT("/Script/Engine"), TEXT("CollectionParameterBase"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCollectionParameterBase
{
	FScriptStruct_Engine_StaticRegisterNativesFCollectionParameterBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CollectionParameterBase")),new UScriptStruct::TCppStructOps<FCollectionParameterBase>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCollectionParameterBase;
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionParameterBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCollectionParameterBase_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CollectionParameterBase"), sizeof(FCollectionParameterBase), Get_Z_Construct_UScriptStruct_FCollectionParameterBase_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
				{ "ToolTip", "Base struct for collection parameters" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionParameterBase>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
				{ "ToolTip", "Uniquely identifies the parameter, used for fixing up materials that reference this parameter when renaming." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Id = { UE4CodeGen_Private::EPropertyClass::Struct, "Id", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCollectionParameterBase, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_Id_MetaData, ARRAY_COUNT(NewProp_Id_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
				{ "Category", "Parameter" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
				{ "ToolTip", "The name of the parameter.  Changing this name will break any blueprints that reference the parameter." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FCollectionParameterBase, ParameterName), METADATA_PARAMS(NewProp_ParameterName_MetaData, ARRAY_COUNT(NewProp_ParameterName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Id,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CollectionParameterBase",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCollectionParameterBase),
				alignof(FCollectionParameterBase),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCollectionParameterBase_CRC() { return 981472954U; }
	void UMaterialParameterCollection::StaticRegisterNativesUMaterialParameterCollection()
	{
	}
	UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister()
	{
		return UMaterialParameterCollection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialParameterCollection()
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
				{ "HideCategories", "object" },
				{ "IncludePath", "Materials/MaterialParameterCollection.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
				{ "ToolTip", "Asset class that contains a list of parameter names and their default values.\nAny number of materials can reference these parameters and get new values when the parameter values are changed." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorParameters_MetaData[] = {
				{ "Category", "Material" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VectorParameters = { UE4CodeGen_Private::EPropertyClass::Array, "VectorParameters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialParameterCollection, VectorParameters), METADATA_PARAMS(NewProp_VectorParameters_MetaData, ARRAY_COUNT(NewProp_VectorParameters_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorParameters_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorParameters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCollectionVectorParameter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalarParameters_MetaData[] = {
				{ "Category", "Material" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScalarParameters = { UE4CodeGen_Private::EPropertyClass::Array, "ScalarParameters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialParameterCollection, ScalarParameters), METADATA_PARAMS(NewProp_ScalarParameters_MetaData, ARRAY_COUNT(NewProp_ScalarParameters_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScalarParameters_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ScalarParameters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCollectionScalarParameter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateId_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
				{ "ToolTip", "Used by materials using this collection to know when to recompile." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateId = { UE4CodeGen_Private::EPropertyClass::Struct, "StateId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000200000, 1, nullptr, STRUCT_OFFSET(UMaterialParameterCollection, StateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_StateId_MetaData, ARRAY_COUNT(NewProp_StateId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorParameters,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorParameters_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScalarParameters,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScalarParameters_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StateId,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialParameterCollection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialParameterCollection::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
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
	IMPLEMENT_CLASS(UMaterialParameterCollection, 2170998997);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialParameterCollection(Z_Construct_UClass_UMaterialParameterCollection, &UMaterialParameterCollection::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialParameterCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialParameterCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
