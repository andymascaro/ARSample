// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/NodeHierarchy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodeHierarchy() {}
// Cross Module References
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNodeHierarchyWithUserData();
	UPackage* Z_Construct_UPackage__Script_AnimationCore();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNodeHierarchyData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNodeObject();
// End Cross Module References
class UScriptStruct* FNodeHierarchyWithUserData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeHierarchyWithUserData, Z_Construct_UPackage__Script_AnimationCore(), TEXT("NodeHierarchyWithUserData"), sizeof(FNodeHierarchyWithUserData), Get_Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNodeHierarchyWithUserData(FNodeHierarchyWithUserData::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("NodeHierarchyWithUserData"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFNodeHierarchyWithUserData
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFNodeHierarchyWithUserData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NodeHierarchyWithUserData")),new UScriptStruct::TCppStructOps<FNodeHierarchyWithUserData>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFNodeHierarchyWithUserData;
	UScriptStruct* Z_Construct_UScriptStruct_FNodeHierarchyWithUserData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NodeHierarchyWithUserData"), sizeof(FNodeHierarchyWithUserData), Get_Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/NodeHierarchy.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeHierarchyWithUserData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hierarchy_MetaData[] = {
				{ "ModuleRelativePath", "Public/NodeHierarchy.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hierarchy = { UE4CodeGen_Private::EPropertyClass::Struct, "Hierarchy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FNodeHierarchyWithUserData, Hierarchy), Z_Construct_UScriptStruct_FNodeHierarchyData, METADATA_PARAMS(NewProp_Hierarchy_MetaData, ARRAY_COUNT(NewProp_Hierarchy_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hierarchy,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NodeHierarchyWithUserData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FNodeHierarchyWithUserData),
				alignof(FNodeHierarchyWithUserData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_CRC() { return 16644718U; }
class UScriptStruct* FNodeHierarchyData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FNodeHierarchyData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeHierarchyData, Z_Construct_UPackage__Script_AnimationCore(), TEXT("NodeHierarchyData"), sizeof(FNodeHierarchyData), Get_Z_Construct_UScriptStruct_FNodeHierarchyData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNodeHierarchyData(FNodeHierarchyData::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("NodeHierarchyData"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFNodeHierarchyData
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFNodeHierarchyData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NodeHierarchyData")),new UScriptStruct::TCppStructOps<FNodeHierarchyData>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFNodeHierarchyData;
	UScriptStruct* Z_Construct_UScriptStruct_FNodeHierarchyData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNodeHierarchyData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NodeHierarchyData"), sizeof(FNodeHierarchyData), Get_Z_Construct_UScriptStruct_FNodeHierarchyData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/NodeHierarchy.h" },
				{ "ToolTip", "Hierarchy of nodes" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeHierarchyData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeNameToIndexMapping_MetaData[] = {
				{ "ModuleRelativePath", "Public/NodeHierarchy.h" },
				{ "ToolTip", "Transient look up mapping from name to index to array" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_NodeNameToIndexMapping = { UE4CodeGen_Private::EPropertyClass::Map, "NodeNameToIndexMapping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNodeHierarchyData, NodeNameToIndexMapping), METADATA_PARAMS(NewProp_NodeNameToIndexMapping_MetaData, ARRAY_COUNT(NewProp_NodeNameToIndexMapping_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_NodeNameToIndexMapping_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "NodeNameToIndexMapping_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeNameToIndexMapping_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "NodeNameToIndexMapping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[] = {
				{ "ModuleRelativePath", "Public/NodeHierarchy.h" },
				{ "ToolTip", "Node transform data" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Transforms = { UE4CodeGen_Private::EPropertyClass::Array, "Transforms", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNodeHierarchyData, Transforms), METADATA_PARAMS(NewProp_Transforms_MetaData, ARRAY_COUNT(NewProp_Transforms_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Transforms", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[] = {
				{ "ModuleRelativePath", "Public/NodeHierarchy.h" },
				{ "ToolTip", "Node hierarchy data" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Nodes = { UE4CodeGen_Private::EPropertyClass::Array, "Nodes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNodeHierarchyData, Nodes), METADATA_PARAMS(NewProp_Nodes_MetaData, ARRAY_COUNT(NewProp_Nodes_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Nodes_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Nodes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNodeObject, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeNameToIndexMapping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeNameToIndexMapping_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeNameToIndexMapping_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Transforms,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Transforms_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Nodes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Nodes_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NodeHierarchyData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FNodeHierarchyData),
				alignof(FNodeHierarchyData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNodeHierarchyData_CRC() { return 257119840U; }
class UScriptStruct* FNodeObject::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FNodeObject_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeObject, Z_Construct_UPackage__Script_AnimationCore(), TEXT("NodeObject"), sizeof(FNodeObject), Get_Z_Construct_UScriptStruct_FNodeObject_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNodeObject(FNodeObject::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("NodeObject"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFNodeObject
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFNodeObject()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NodeObject")),new UScriptStruct::TCppStructOps<FNodeObject>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFNodeObject;
	UScriptStruct* Z_Construct_UScriptStruct_FNodeObject()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNodeObject_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NodeObject"), sizeof(FNodeObject), Get_Z_Construct_UScriptStruct_FNodeObject_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/NodeHierarchy.h" },
				{ "ToolTip", "A node in a named hierarchy" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeObject>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentName_MetaData[] = {
				{ "ModuleRelativePath", "Public/NodeHierarchy.h" },
				{ "ToolTip", "The name of this node's parent" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParentName = { UE4CodeGen_Private::EPropertyClass::Name, "ParentName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNodeObject, ParentName), METADATA_PARAMS(NewProp_ParentName_MetaData, ARRAY_COUNT(NewProp_ParentName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "ModuleRelativePath", "Public/NodeHierarchy.h" },
				{ "ToolTip", "The name of this node" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNodeObject, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NodeObject",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FNodeObject),
				alignof(FNodeObject),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNodeObject_CRC() { return 3868727258U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
