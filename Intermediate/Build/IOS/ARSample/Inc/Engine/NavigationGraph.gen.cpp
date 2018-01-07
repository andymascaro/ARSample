// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/NavigationGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationGraph() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavGraphNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavGraphEdge();
	ENGINE_API UClass* Z_Construct_UClass_ANavigationGraph_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ANavigationGraph();
	ENGINE_API UClass* Z_Construct_UClass_ANavigationData();
// End Cross Module References
class UScriptStruct* FNavGraphNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNavGraphNode_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavGraphNode, Z_Construct_UPackage__Script_Engine(), TEXT("NavGraphNode"), sizeof(FNavGraphNode), Get_Z_Construct_UScriptStruct_FNavGraphNode_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNavGraphNode(FNavGraphNode::StaticStruct, TEXT("/Script/Engine"), TEXT("NavGraphNode"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNavGraphNode
{
	FScriptStruct_Engine_StaticRegisterNativesFNavGraphNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NavGraphNode")),new UScriptStruct::TCppStructOps<FNavGraphNode>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNavGraphNode;
	UScriptStruct* Z_Construct_UScriptStruct_FNavGraphNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNavGraphNode_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NavGraphNode"), sizeof(FNavGraphNode), Get_Z_Construct_UScriptStruct_FNavGraphNode_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationGraph.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavGraphNode>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationGraph.h" },
				{ "ToolTip", "Who's this node referring to? This will most commonly point to an actor or a component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner = { UE4CodeGen_Private::EPropertyClass::Object, "Owner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNavGraphNode, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_Owner_MetaData, ARRAY_COUNT(NewProp_Owner_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Owner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NavGraphNode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FNavGraphNode),
				alignof(FNavGraphNode),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNavGraphNode_CRC() { return 3002251984U; }
class UScriptStruct* FNavGraphEdge::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNavGraphEdge_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavGraphEdge, Z_Construct_UPackage__Script_Engine(), TEXT("NavGraphEdge"), sizeof(FNavGraphEdge), Get_Z_Construct_UScriptStruct_FNavGraphEdge_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNavGraphEdge(FNavGraphEdge::StaticStruct, TEXT("/Script/Engine"), TEXT("NavGraphEdge"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNavGraphEdge
{
	FScriptStruct_Engine_StaticRegisterNativesFNavGraphEdge()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NavGraphEdge")),new UScriptStruct::TCppStructOps<FNavGraphEdge>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNavGraphEdge;
	UScriptStruct* Z_Construct_UScriptStruct_FNavGraphEdge()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNavGraphEdge_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NavGraphEdge"), sizeof(FNavGraphEdge), Get_Z_Construct_UScriptStruct_FNavGraphEdge_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationGraph.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavGraphEdge>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NavGraphEdge",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FNavGraphEdge),
				alignof(FNavGraphEdge),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNavGraphEdge_CRC() { return 1906385603U; }
	void ANavigationGraph::StaticRegisterNativesANavigationGraph()
	{
	}
	UClass* Z_Construct_UClass_ANavigationGraph_NoRegister()
	{
		return ANavigationGraph::StaticClass();
	}
	UClass* Z_Construct_UClass_ANavigationGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ANavigationData,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AI/Navigation/NavigationGraph.h" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationGraph.h" },
				{ "ToolTip", "currently abstract since it's not full implemented" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ANavigationGraph>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ANavigationGraph::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880087u,
				nullptr, 0,
				nullptr, 0,
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavigationGraph, 3641637677);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavigationGraph(Z_Construct_UClass_ANavigationGraph, &ANavigationGraph::StaticClass, TEXT("/Script/Engine"), TEXT("ANavigationGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavigationGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
