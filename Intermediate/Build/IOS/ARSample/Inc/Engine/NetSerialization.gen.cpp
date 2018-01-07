// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/NetSerialization.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetSerialization() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
// End Cross Module References
class UScriptStruct* FVector_NetQuantizeNormal::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FVector_NetQuantizeNormal_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, Z_Construct_UPackage__Script_Engine(), TEXT("Vector_NetQuantizeNormal"), sizeof(FVector_NetQuantizeNormal), Get_Z_Construct_UScriptStruct_FVector_NetQuantizeNormal_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVector_NetQuantizeNormal(FVector_NetQuantizeNormal::StaticStruct, TEXT("/Script/Engine"), TEXT("Vector_NetQuantizeNormal"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFVector_NetQuantizeNormal
{
	FScriptStruct_Engine_StaticRegisterNativesFVector_NetQuantizeNormal()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Vector_NetQuantizeNormal")),new UScriptStruct::TCppStructOps<FVector_NetQuantizeNormal>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFVector_NetQuantizeNormal;
	UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVector_NetQuantizeNormal_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Vector_NetQuantizeNormal"), sizeof(FVector_NetQuantizeNormal), Get_Z_Construct_UScriptStruct_FVector_NetQuantizeNormal_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetSerialization.h" },
				{ "ToolTip", "FVector_NetQuantizeNormal\n\n16 bits per component\nValid range: -1..+1 inclusive" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector_NetQuantizeNormal>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FVector,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"Vector_NetQuantizeNormal",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000011),
				sizeof(FVector_NetQuantizeNormal),
				alignof(FVector_NetQuantizeNormal),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVector_NetQuantizeNormal_CRC() { return 1773376010U; }
class UScriptStruct* FVector_NetQuantize100::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FVector_NetQuantize100_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector_NetQuantize100, Z_Construct_UPackage__Script_Engine(), TEXT("Vector_NetQuantize100"), sizeof(FVector_NetQuantize100), Get_Z_Construct_UScriptStruct_FVector_NetQuantize100_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVector_NetQuantize100(FVector_NetQuantize100::StaticStruct, TEXT("/Script/Engine"), TEXT("Vector_NetQuantize100"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFVector_NetQuantize100
{
	FScriptStruct_Engine_StaticRegisterNativesFVector_NetQuantize100()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Vector_NetQuantize100")),new UScriptStruct::TCppStructOps<FVector_NetQuantize100>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFVector_NetQuantize100;
	UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVector_NetQuantize100_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Vector_NetQuantize100"), sizeof(FVector_NetQuantize100), Get_Z_Construct_UScriptStruct_FVector_NetQuantize100_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetSerialization.h" },
				{ "ToolTip", "FVector_NetQuantize100\n\n2 decimal place of precision.\nUp to 30 bits per component.\nValid range: 2^30 / 100 = +/- 10,737,418.24" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector_NetQuantize100>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FVector,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"Vector_NetQuantize100",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000011),
				sizeof(FVector_NetQuantize100),
				alignof(FVector_NetQuantize100),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVector_NetQuantize100_CRC() { return 2701610102U; }
class UScriptStruct* FVector_NetQuantize10::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FVector_NetQuantize10_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector_NetQuantize10, Z_Construct_UPackage__Script_Engine(), TEXT("Vector_NetQuantize10"), sizeof(FVector_NetQuantize10), Get_Z_Construct_UScriptStruct_FVector_NetQuantize10_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVector_NetQuantize10(FVector_NetQuantize10::StaticStruct, TEXT("/Script/Engine"), TEXT("Vector_NetQuantize10"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFVector_NetQuantize10
{
	FScriptStruct_Engine_StaticRegisterNativesFVector_NetQuantize10()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Vector_NetQuantize10")),new UScriptStruct::TCppStructOps<FVector_NetQuantize10>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFVector_NetQuantize10;
	UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVector_NetQuantize10_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Vector_NetQuantize10"), sizeof(FVector_NetQuantize10), Get_Z_Construct_UScriptStruct_FVector_NetQuantize10_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetSerialization.h" },
				{ "ToolTip", "FVector_NetQuantize10\n\n1 decimal place of precision.\nUp to 24 bits per component.\nValid range: 2^24 / 10 = +/- 1,677,721.6" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector_NetQuantize10>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FVector,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"Vector_NetQuantize10",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000011),
				sizeof(FVector_NetQuantize10),
				alignof(FVector_NetQuantize10),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVector_NetQuantize10_CRC() { return 450893561U; }
class UScriptStruct* FVector_NetQuantize::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FVector_NetQuantize_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector_NetQuantize, Z_Construct_UPackage__Script_Engine(), TEXT("Vector_NetQuantize"), sizeof(FVector_NetQuantize), Get_Z_Construct_UScriptStruct_FVector_NetQuantize_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVector_NetQuantize(FVector_NetQuantize::StaticStruct, TEXT("/Script/Engine"), TEXT("Vector_NetQuantize"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFVector_NetQuantize
{
	FScriptStruct_Engine_StaticRegisterNativesFVector_NetQuantize()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Vector_NetQuantize")),new UScriptStruct::TCppStructOps<FVector_NetQuantize>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFVector_NetQuantize;
	UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVector_NetQuantize_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Vector_NetQuantize"), sizeof(FVector_NetQuantize), Get_Z_Construct_UScriptStruct_FVector_NetQuantize_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetSerialization.h" },
				{ "ToolTip", "FVector_NetQuantize\n\n0 decimal place of precision.\nUp to 20 bits per component.\nValid range: 2^20 = +/- 1,048,576\n\nNote: this is the historical UE format for vector net serialization" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector_NetQuantize>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FVector,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"Vector_NetQuantize",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000011),
				sizeof(FVector_NetQuantize),
				alignof(FVector_NetQuantize),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVector_NetQuantize_CRC() { return 3014121099U; }
class UScriptStruct* FFastArraySerializer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FFastArraySerializer_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFastArraySerializer, Z_Construct_UPackage__Script_Engine(), TEXT("FastArraySerializer"), sizeof(FFastArraySerializer), Get_Z_Construct_UScriptStruct_FFastArraySerializer_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFastArraySerializer(FFastArraySerializer::StaticStruct, TEXT("/Script/Engine"), TEXT("FastArraySerializer"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFFastArraySerializer
{
	FScriptStruct_Engine_StaticRegisterNativesFFastArraySerializer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FastArraySerializer")),new UScriptStruct::TCppStructOps<FFastArraySerializer>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFFastArraySerializer;
	UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFastArraySerializer_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FastArraySerializer"), sizeof(FFastArraySerializer), Get_Z_Construct_UScriptStruct_FFastArraySerializer_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetSerialization.h" },
				{ "ToolTip", "Base struct for wrapping the array used in Fast TArray Replication" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFastArraySerializer>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"FastArraySerializer",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FFastArraySerializer),
				alignof(FFastArraySerializer),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFastArraySerializer_CRC() { return 916520156U; }
class UScriptStruct* FFastArraySerializerItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FFastArraySerializerItem_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFastArraySerializerItem, Z_Construct_UPackage__Script_Engine(), TEXT("FastArraySerializerItem"), sizeof(FFastArraySerializerItem), Get_Z_Construct_UScriptStruct_FFastArraySerializerItem_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFastArraySerializerItem(FFastArraySerializerItem::StaticStruct, TEXT("/Script/Engine"), TEXT("FastArraySerializerItem"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFFastArraySerializerItem
{
	FScriptStruct_Engine_StaticRegisterNativesFFastArraySerializerItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FastArraySerializerItem")),new UScriptStruct::TCppStructOps<FFastArraySerializerItem>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFFastArraySerializerItem;
	UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFastArraySerializerItem_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FastArraySerializerItem"), sizeof(FFastArraySerializerItem), Get_Z_Construct_UScriptStruct_FFastArraySerializerItem_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetSerialization.h" },
				{ "ToolTip", "Base struct for items using Fast TArray Replication" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFastArraySerializerItem>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MostRecentArrayReplicationKey_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetSerialization.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MostRecentArrayReplicationKey = { UE4CodeGen_Private::EPropertyClass::Int, "MostRecentArrayReplicationKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000080000000, 1, nullptr, STRUCT_OFFSET(FFastArraySerializerItem, MostRecentArrayReplicationKey), METADATA_PARAMS(NewProp_MostRecentArrayReplicationKey_MetaData, ARRAY_COUNT(NewProp_MostRecentArrayReplicationKey_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationKey_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetSerialization.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReplicationKey = { UE4CodeGen_Private::EPropertyClass::Int, "ReplicationKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000080000000, 1, nullptr, STRUCT_OFFSET(FFastArraySerializerItem, ReplicationKey), METADATA_PARAMS(NewProp_ReplicationKey_MetaData, ARRAY_COUNT(NewProp_ReplicationKey_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationID_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetSerialization.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReplicationID = { UE4CodeGen_Private::EPropertyClass::Int, "ReplicationID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000080000000, 1, nullptr, STRUCT_OFFSET(FFastArraySerializerItem, ReplicationID), METADATA_PARAMS(NewProp_ReplicationID_MetaData, ARRAY_COUNT(NewProp_ReplicationID_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MostRecentArrayReplicationKey,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReplicationKey,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReplicationID,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"FastArraySerializerItem",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FFastArraySerializerItem),
				alignof(FFastArraySerializerItem),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFastArraySerializerItem_CRC() { return 4186104035U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
