// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/DataProviders/AIDataProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIDataProvider() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderTypedValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderIntValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderStructValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UProperty();
	AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FAIDataProviderBoolValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderBoolValue_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderBoolValue, Z_Construct_UPackage__Script_AIModule(), TEXT("AIDataProviderBoolValue"), sizeof(FAIDataProviderBoolValue), Get_Z_Construct_UScriptStruct_FAIDataProviderBoolValue_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIDataProviderBoolValue(FAIDataProviderBoolValue::StaticStruct, TEXT("/Script/AIModule"), TEXT("AIDataProviderBoolValue"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderBoolValue
{
	FScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderBoolValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AIDataProviderBoolValue")),new UScriptStruct::TCppStructOps<FAIDataProviderBoolValue>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderBoolValue;
	UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderBoolValue_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIDataProviderBoolValue"), sizeof(FAIDataProviderBoolValue), Get_Z_Construct_UScriptStruct_FAIDataProviderBoolValue_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDataProviderBoolValue>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
				{ "Category", "Value" },
				{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
			};
#endif
			auto NewProp_DefaultValue_SetBit = [](void* Obj){ ((FAIDataProviderBoolValue*)Obj)->DefaultValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultValue = { UE4CodeGen_Private::EPropertyClass::Bool, "DefaultValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAIDataProviderBoolValue), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DefaultValue_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DefaultValue_MetaData, ARRAY_COUNT(NewProp_DefaultValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultValue,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				Z_Construct_UScriptStruct_FAIDataProviderTypedValue,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AIDataProviderBoolValue",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000205),
				sizeof(FAIDataProviderBoolValue),
				alignof(FAIDataProviderBoolValue),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderBoolValue_CRC() { return 3083442374U; }
class UScriptStruct* FAIDataProviderFloatValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderFloatValue_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderFloatValue, Z_Construct_UPackage__Script_AIModule(), TEXT("AIDataProviderFloatValue"), sizeof(FAIDataProviderFloatValue), Get_Z_Construct_UScriptStruct_FAIDataProviderFloatValue_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIDataProviderFloatValue(FAIDataProviderFloatValue::StaticStruct, TEXT("/Script/AIModule"), TEXT("AIDataProviderFloatValue"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderFloatValue
{
	FScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderFloatValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AIDataProviderFloatValue")),new UScriptStruct::TCppStructOps<FAIDataProviderFloatValue>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderFloatValue;
	UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderFloatValue_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIDataProviderFloatValue"), sizeof(FAIDataProviderFloatValue), Get_Z_Construct_UScriptStruct_FAIDataProviderFloatValue_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDataProviderFloatValue>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
				{ "Category", "Value" },
				{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultValue = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAIDataProviderFloatValue, DefaultValue), METADATA_PARAMS(NewProp_DefaultValue_MetaData, ARRAY_COUNT(NewProp_DefaultValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultValue,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				Z_Construct_UScriptStruct_FAIDataProviderTypedValue,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AIDataProviderFloatValue",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000205),
				sizeof(FAIDataProviderFloatValue),
				alignof(FAIDataProviderFloatValue),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderFloatValue_CRC() { return 3601588716U; }
class UScriptStruct* FAIDataProviderIntValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderIntValue_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderIntValue, Z_Construct_UPackage__Script_AIModule(), TEXT("AIDataProviderIntValue"), sizeof(FAIDataProviderIntValue), Get_Z_Construct_UScriptStruct_FAIDataProviderIntValue_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIDataProviderIntValue(FAIDataProviderIntValue::StaticStruct, TEXT("/Script/AIModule"), TEXT("AIDataProviderIntValue"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderIntValue
{
	FScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderIntValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AIDataProviderIntValue")),new UScriptStruct::TCppStructOps<FAIDataProviderIntValue>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderIntValue;
	UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderIntValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderIntValue_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIDataProviderIntValue"), sizeof(FAIDataProviderIntValue), Get_Z_Construct_UScriptStruct_FAIDataProviderIntValue_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDataProviderIntValue>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
				{ "Category", "Value" },
				{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultValue = { UE4CodeGen_Private::EPropertyClass::Int, "DefaultValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAIDataProviderIntValue, DefaultValue), METADATA_PARAMS(NewProp_DefaultValue_MetaData, ARRAY_COUNT(NewProp_DefaultValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultValue,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				Z_Construct_UScriptStruct_FAIDataProviderTypedValue,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AIDataProviderIntValue",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000205),
				sizeof(FAIDataProviderIntValue),
				alignof(FAIDataProviderIntValue),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderIntValue_CRC() { return 3267092054U; }
class UScriptStruct* FAIDataProviderStructValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderStructValue_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderStructValue, Z_Construct_UPackage__Script_AIModule(), TEXT("AIDataProviderStructValue"), sizeof(FAIDataProviderStructValue), Get_Z_Construct_UScriptStruct_FAIDataProviderStructValue_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIDataProviderStructValue(FAIDataProviderStructValue::StaticStruct, TEXT("/Script/AIModule"), TEXT("AIDataProviderStructValue"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderStructValue
{
	FScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderStructValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AIDataProviderStructValue")),new UScriptStruct::TCppStructOps<FAIDataProviderStructValue>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderStructValue;
	UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderStructValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderStructValue_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIDataProviderStructValue"), sizeof(FAIDataProviderStructValue), Get_Z_Construct_UScriptStruct_FAIDataProviderStructValue_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDataProviderStructValue>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				Z_Construct_UScriptStruct_FAIDataProviderValue,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AIDataProviderStructValue",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000205),
				sizeof(FAIDataProviderStructValue),
				alignof(FAIDataProviderStructValue),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderStructValue_CRC() { return 330091039U; }
class UScriptStruct* FAIDataProviderTypedValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderTypedValue_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderTypedValue, Z_Construct_UPackage__Script_AIModule(), TEXT("AIDataProviderTypedValue"), sizeof(FAIDataProviderTypedValue), Get_Z_Construct_UScriptStruct_FAIDataProviderTypedValue_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIDataProviderTypedValue(FAIDataProviderTypedValue::StaticStruct, TEXT("/Script/AIModule"), TEXT("AIDataProviderTypedValue"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderTypedValue
{
	FScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderTypedValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AIDataProviderTypedValue")),new UScriptStruct::TCppStructOps<FAIDataProviderTypedValue>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderTypedValue;
	UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderTypedValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderTypedValue_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIDataProviderTypedValue"), sizeof(FAIDataProviderTypedValue), Get_Z_Construct_UScriptStruct_FAIDataProviderTypedValue_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDataProviderTypedValue>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyType_MetaData[] = {
				{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
				{ "ToolTip", "type of value" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_PropertyType = { UE4CodeGen_Private::EPropertyClass::Class, "PropertyType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000000, 1, nullptr, STRUCT_OFFSET(FAIDataProviderTypedValue, PropertyType), Z_Construct_UClass_UProperty, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_PropertyType_MetaData, ARRAY_COUNT(NewProp_PropertyType_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyType,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				Z_Construct_UScriptStruct_FAIDataProviderValue,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AIDataProviderTypedValue",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000205),
				sizeof(FAIDataProviderTypedValue),
				alignof(FAIDataProviderTypedValue),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderTypedValue_CRC() { return 64337426U; }
class UScriptStruct* FAIDataProviderValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderValue_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderValue, Z_Construct_UPackage__Script_AIModule(), TEXT("AIDataProviderValue"), sizeof(FAIDataProviderValue), Get_Z_Construct_UScriptStruct_FAIDataProviderValue_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIDataProviderValue(FAIDataProviderValue::StaticStruct, TEXT("/Script/AIModule"), TEXT("AIDataProviderValue"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderValue
{
	FScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AIDataProviderValue")),new UScriptStruct::TCppStructOps<FAIDataProviderValue>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderValue;
	UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderValue_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIDataProviderValue"), sizeof(FAIDataProviderValue), Get_Z_Construct_UScriptStruct_FAIDataProviderValue_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
				{ "ToolTip", "AIDataProvider is an object that can provide collection of properties\nassociated with bound pawn owner or request Id.\n\nEditable properties are used to set up provider instance,\ncreating additional filters or ways of accessing data (e.g. gameplay tag of ability)\n\nNon editable properties are holding data" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDataProviderValue>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataField_MetaData[] = {
				{ "Category", "Value" },
				{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
				{ "ToolTip", "name of provider's value property" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_DataField = { UE4CodeGen_Private::EPropertyClass::Name, "DataField", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAIDataProviderValue, DataField), METADATA_PARAMS(NewProp_DataField_MetaData, ARRAY_COUNT(NewProp_DataField_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataBinding_MetaData[] = {
				{ "Category", "Value" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
				{ "ToolTip", "(optional) provider for dynamic data binding" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataBinding = { UE4CodeGen_Private::EPropertyClass::Object, "DataBinding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0012000000080009, 1, nullptr, STRUCT_OFFSET(FAIDataProviderValue, DataBinding), Z_Construct_UClass_UAIDataProvider_NoRegister, METADATA_PARAMS(NewProp_DataBinding_MetaData, ARRAY_COUNT(NewProp_DataBinding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedProperty_MetaData[] = {
				{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
				{ "ToolTip", "cached uproperty of provider" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedProperty = { UE4CodeGen_Private::EPropertyClass::Object, "CachedProperty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(FAIDataProviderValue, CachedProperty), Z_Construct_UClass_UProperty, METADATA_PARAMS(NewProp_CachedProperty_MetaData, ARRAY_COUNT(NewProp_CachedProperty_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DataField,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DataBinding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedProperty,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AIDataProviderValue",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000205),
				sizeof(FAIDataProviderValue),
				alignof(FAIDataProviderValue),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderValue_CRC() { return 119160380U; }
	void UAIDataProvider::StaticRegisterNativesUAIDataProvider()
	{
	}
	UClass* Z_Construct_UClass_UAIDataProvider_NoRegister()
	{
		return UAIDataProvider::StaticClass();
	}
	UClass* Z_Construct_UClass_UAIDataProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "AutoExpandCategories", "Provider" },
				{ "IncludePath", "DataProviders/AIDataProvider.h" },
				{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAIDataProvider>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAIDataProvider::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00103081u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UAIDataProvider, 53485516);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIDataProvider(Z_Construct_UClass_UAIDataProvider, &UAIDataProvider::StaticClass, TEXT("/Script/AIModule"), TEXT("UAIDataProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIDataProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
