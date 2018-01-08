// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EdGraph/EdGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraph() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGraphReference();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema_NoRegister();
// End Cross Module References
class UScriptStruct* FGraphReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FGraphReference_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGraphReference, Z_Construct_UPackage__Script_Engine(), TEXT("GraphReference"), sizeof(FGraphReference), Get_Z_Construct_UScriptStruct_FGraphReference_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGraphReference(FGraphReference::StaticStruct, TEXT("/Script/Engine"), TEXT("GraphReference"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFGraphReference
{
	FScriptStruct_Engine_StaticRegisterNativesFGraphReference()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GraphReference")),new UScriptStruct::TCppStructOps<FGraphReference>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFGraphReference;
	UScriptStruct* Z_Construct_UScriptStruct_FGraphReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGraphReference_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GraphReference"), sizeof(FGraphReference), Get_Z_Construct_UScriptStruct_FGraphReference_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGraphReference>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphGuid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
				{ "ToolTip", "The graph GUID so we can refind it if it has been renamed" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GraphGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "GraphGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FGraphReference, GraphGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_GraphGuid_MetaData, ARRAY_COUNT(NewProp_GraphGuid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphBlueprint_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
				{ "ToolTip", "The blueprint the graph is contained within" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphBlueprint = { UE4CodeGen_Private::EPropertyClass::Object, "GraphBlueprint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FGraphReference, GraphBlueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(NewProp_GraphBlueprint_MetaData, ARRAY_COUNT(NewProp_GraphBlueprint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MacroGraph_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
				{ "ToolTip", "Reference to the actual graph" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MacroGraph = { UE4CodeGen_Private::EPropertyClass::Object, "MacroGraph", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FGraphReference, MacroGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(NewProp_MacroGraph_MetaData, ARRAY_COUNT(NewProp_MacroGraph_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GraphGuid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GraphBlueprint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MacroGraph,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GraphReference",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FGraphReference),
				alignof(FGraphReference),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGraphReference_CRC() { return 3234069890U; }
	void UEdGraph::StaticRegisterNativesUEdGraph()
	{
	}
	UClass* Z_Construct_UClass_UEdGraph_NoRegister()
	{
		return UEdGraph::StaticClass();
	}
	UClass* Z_Construct_UClass_UEdGraph()
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
				{ "IncludePath", "EdGraph/EdGraph.h" },
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterfaceGuid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
				{ "ToolTip", "Guid of interface graph this graph comes from (used for conforming)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InterfaceGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "InterfaceGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UEdGraph, InterfaceGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_InterfaceGuid_MetaData, ARRAY_COUNT(NewProp_InterfaceGuid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphGuid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
				{ "ToolTip", "Guid for this graph" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GraphGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "GraphGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UEdGraph, GraphGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_GraphGuid_MetaData, ARRAY_COUNT(NewProp_GraphGuid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubGraphs_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
				{ "ToolTip", "Child graphs that are a part of this graph; the separation is purely visual" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubGraphs = { UE4CodeGen_Private::EPropertyClass::Array, "SubGraphs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UEdGraph, SubGraphs), METADATA_PARAMS(NewProp_SubGraphs_MetaData, ARRAY_COUNT(NewProp_SubGraphs_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubGraphs_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SubGraphs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowRenaming_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
				{ "ToolTip", "If true, graph can be renamed; Note: Graph can also be renamed if bAllowDeletion is true currently" },
			};
#endif
			auto NewProp_bAllowRenaming_SetBit = [](void* Obj){ ((UEdGraph*)Obj)->bAllowRenaming = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowRenaming = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowRenaming", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEdGraph), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowRenaming_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowRenaming_MetaData, ARRAY_COUNT(NewProp_bAllowRenaming_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowDeletion_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
				{ "ToolTip", "If true, graph can be deleted from the whatever container it is in. For FunctionGraphs\nthis flag is reset to false on load (unless the function is the construction script or\nAnimGraph)" },
			};
#endif
			auto NewProp_bAllowDeletion_SetBit = [](void* Obj){ ((UEdGraph*)Obj)->bAllowDeletion = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowDeletion = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowDeletion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEdGraph), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowDeletion_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowDeletion_MetaData, ARRAY_COUNT(NewProp_bAllowDeletion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEditable_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
				{ "ToolTip", "If true, graph can be edited by the user" },
			};
#endif
			auto NewProp_bEditable_SetBit = [](void* Obj){ ((UEdGraph*)Obj)->bEditable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEditable = { UE4CodeGen_Private::EPropertyClass::Bool, "bEditable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEdGraph), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEditable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEditable_MetaData, ARRAY_COUNT(NewProp_bEditable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
				{ "ToolTip", "Set of all nodes in this graph" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Nodes = { UE4CodeGen_Private::EPropertyClass::Array, "Nodes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEdGraph, Nodes), METADATA_PARAMS(NewProp_Nodes_MetaData, ARRAY_COUNT(NewProp_Nodes_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Nodes_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Nodes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Schema_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
				{ "ToolTip", "The schema that this graph obeys" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_Schema = { UE4CodeGen_Private::EPropertyClass::Class, "Schema", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000000, 1, nullptr, STRUCT_OFFSET(UEdGraph, Schema), Z_Construct_UClass_UEdGraphSchema_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_Schema_MetaData, ARRAY_COUNT(NewProp_Schema_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterfaceGuid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GraphGuid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubGraphs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubGraphs_Inner,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowRenaming,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowDeletion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEditable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Nodes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Nodes_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Schema,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEdGraph>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEdGraph::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UEdGraph, 3905587709);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEdGraph(Z_Construct_UClass_UEdGraph, &UEdGraph::StaticClass, TEXT("/Script/Engine"), TEXT("UEdGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
