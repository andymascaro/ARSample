// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/HierarchicalInstancedStaticMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHierarchicalInstancedStaticMeshComponent() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FClusterNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
// End Cross Module References
class UScriptStruct* FClusterNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FClusterNode_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClusterNode, Z_Construct_UPackage__Script_Engine(), TEXT("ClusterNode"), sizeof(FClusterNode), Get_Z_Construct_UScriptStruct_FClusterNode_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClusterNode(FClusterNode::StaticStruct, TEXT("/Script/Engine"), TEXT("ClusterNode"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFClusterNode
{
	FScriptStruct_Engine_StaticRegisterNativesFClusterNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClusterNode")),new UScriptStruct::TCppStructOps<FClusterNode>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFClusterNode;
	UScriptStruct* Z_Construct_UScriptStruct_FClusterNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClusterNode_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClusterNode"), sizeof(FClusterNode), Get_Z_Construct_UScriptStruct_FClusterNode_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClusterNode>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastInstance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastInstance = { UE4CodeGen_Private::EPropertyClass::Int, "LastInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClusterNode, LastInstance), METADATA_PARAMS(NewProp_LastInstance_MetaData, ARRAY_COUNT(NewProp_LastInstance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstInstance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_FirstInstance = { UE4CodeGen_Private::EPropertyClass::Int, "FirstInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClusterNode, FirstInstance), METADATA_PARAMS(NewProp_FirstInstance_MetaData, ARRAY_COUNT(NewProp_FirstInstance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastChild_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastChild = { UE4CodeGen_Private::EPropertyClass::Int, "LastChild", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClusterNode, LastChild), METADATA_PARAMS(NewProp_LastChild_MetaData, ARRAY_COUNT(NewProp_LastChild_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundMax_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundMax = { UE4CodeGen_Private::EPropertyClass::Struct, "BoundMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClusterNode, BoundMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_BoundMax_MetaData, ARRAY_COUNT(NewProp_BoundMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstChild_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_FirstChild = { UE4CodeGen_Private::EPropertyClass::Int, "FirstChild", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClusterNode, FirstChild), METADATA_PARAMS(NewProp_FirstChild_MetaData, ARRAY_COUNT(NewProp_FirstChild_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundMin_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundMin = { UE4CodeGen_Private::EPropertyClass::Struct, "BoundMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClusterNode, BoundMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_BoundMin_MetaData, ARRAY_COUNT(NewProp_BoundMin_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FirstInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastChild,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoundMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FirstChild,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoundMin,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ClusterNode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FClusterNode),
				alignof(FClusterNode),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClusterNode_CRC() { return 2181782092U; }
	void UHierarchicalInstancedStaticMeshComponent::StaticRegisterNativesUHierarchicalInstancedStaticMeshComponent()
	{
		UClass* Class = UHierarchicalInstancedStaticMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoveInstances", (Native)&UHierarchicalInstancedStaticMeshComponent::execRemoveInstances },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances()
	{
		struct HierarchicalInstancedStaticMeshComponent_eventRemoveInstances_Parms
		{
			TArray<int32> InstancesToRemove;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((HierarchicalInstancedStaticMeshComponent_eventRemoveInstances_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HierarchicalInstancedStaticMeshComponent_eventRemoveInstances_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancesToRemove_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstancesToRemove = { UE4CodeGen_Private::EPropertyClass::Array, "InstancesToRemove", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(HierarchicalInstancedStaticMeshComponent_eventRemoveInstances_Parms, InstancesToRemove), METADATA_PARAMS(NewProp_InstancesToRemove_MetaData, ARRAY_COUNT(NewProp_InstancesToRemove_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstancesToRemove_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "InstancesToRemove", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstancesToRemove,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstancesToRemove_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|InstancedStaticMesh" },
				{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
				{ "ToolTip", "Removes all the instances with indices specified in the InstancesToRemove array. Returns true on success." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent, "RemoveInstances", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(HierarchicalInstancedStaticMeshComponent_eventRemoveInstances_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister()
	{
		return UHierarchicalInstancedStaticMeshComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInstancedStaticMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances, "RemoveInstances" }, // 6820430
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Rendering" },
				{ "HideCategories", "Object Activation Components|Activation Trigger" },
				{ "IncludePath", "Components/HierarchicalInstancedStaticMeshComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableCollision_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
			};
#endif
			auto NewProp_bDisableCollision_SetBit = [](void* Obj){ ((UHierarchicalInstancedStaticMeshComponent*)Obj)->bDisableCollision = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHierarchicalInstancedStaticMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisableCollision_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisableCollision_MetaData, ARRAY_COUNT(NewProp_bDisableCollision_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CacheMeshExtendedBounds_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
				{ "ToolTip", "The last mesh bounds that was cache" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CacheMeshExtendedBounds = { UE4CodeGen_Private::EPropertyClass::Struct, "CacheMeshExtendedBounds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, CacheMeshExtendedBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(NewProp_CacheMeshExtendedBounds_MetaData, ARRAY_COUNT(NewProp_CacheMeshExtendedBounds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionLayerNumNodes_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
				{ "ToolTip", "The number of nodes in the occlusion layer" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OcclusionLayerNumNodes = { UE4CodeGen_Private::EPropertyClass::Int, "OcclusionLayerNumNodes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, OcclusionLayerNumNodes), METADATA_PARAMS(NewProp_OcclusionLayerNumNodes_MetaData, ARRAY_COUNT(NewProp_OcclusionLayerNumNodes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDensityScaling_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
				{ "ToolTip", "Enable for detail meshes that don't really affect the game. Disable for anything important.\nTypically, this will be enabled for small meshes without collision (e.g. grass) and disabled for large meshes with collision (e.g. trees)" },
			};
#endif
			auto NewProp_bEnableDensityScaling_SetBit = [](void* Obj){ ((UHierarchicalInstancedStaticMeshComponent*)Obj)->bEnableDensityScaling = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDensityScaling = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableDensityScaling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UHierarchicalInstancedStaticMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableDensityScaling_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableDensityScaling_MetaData, ARRAY_COUNT(NewProp_bEnableDensityScaling_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnbuiltInstanceIndexList_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
				{ "ToolTip", "Instance Index of each individual unbuilt instance, used in unbuilt rendering during a wait for the build" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnbuiltInstanceIndexList = { UE4CodeGen_Private::EPropertyClass::Array, "UnbuiltInstanceIndexList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, UnbuiltInstanceIndexList), METADATA_PARAMS(NewProp_UnbuiltInstanceIndexList_MetaData, ARRAY_COUNT(NewProp_UnbuiltInstanceIndexList_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnbuiltInstanceIndexList_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "UnbuiltInstanceIndexList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnbuiltInstanceBoundsList_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
				{ "ToolTip", "Bounds of each individual unbuilt instance, used for LOD calculation" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnbuiltInstanceBoundsList = { UE4CodeGen_Private::EPropertyClass::Array, "UnbuiltInstanceBoundsList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, UnbuiltInstanceBoundsList), METADATA_PARAMS(NewProp_UnbuiltInstanceBoundsList_MetaData, ARRAY_COUNT(NewProp_UnbuiltInstanceBoundsList_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnbuiltInstanceBoundsList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "UnbuiltInstanceBoundsList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnbuiltInstanceBounds_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
				{ "ToolTip", "Bounding box of any unbuilt instances" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnbuiltInstanceBounds = { UE4CodeGen_Private::EPropertyClass::Struct, "UnbuiltInstanceBounds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, UnbuiltInstanceBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(NewProp_UnbuiltInstanceBounds_MetaData, ARRAY_COUNT(NewProp_UnbuiltInstanceBounds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuiltInstanceBounds_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
				{ "ToolTip", "Bounding box of any built instances (cached from the ClusterTree)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BuiltInstanceBounds = { UE4CodeGen_Private::EPropertyClass::Struct, "BuiltInstanceBounds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, BuiltInstanceBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(NewProp_BuiltInstanceBounds_MetaData, ARRAY_COUNT(NewProp_BuiltInstanceBounds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumBuiltInstances_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
				{ "ToolTip", "The number of instances in the ClusterTree. Subsequent instances will always be rendered." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumBuiltInstances = { UE4CodeGen_Private::EPropertyClass::Int, "NumBuiltInstances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, NumBuiltInstances), METADATA_PARAMS(NewProp_NumBuiltInstances_MetaData, ARRAY_COUNT(NewProp_NumBuiltInstances_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortedInstances_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
				{ "ToolTip", "Table for remaping instances from cluster tree to PerInstanceSMData order" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SortedInstances = { UE4CodeGen_Private::EPropertyClass::Array, "SortedInstances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, SortedInstances), METADATA_PARAMS(NewProp_SortedInstances_MetaData, ARRAY_COUNT(NewProp_SortedInstances_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortedInstances_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "SortedInstances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisableCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CacheMeshExtendedBounds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OcclusionLayerNumNodes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableDensityScaling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UnbuiltInstanceIndexList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UnbuiltInstanceIndexList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UnbuiltInstanceBoundsList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UnbuiltInstanceBoundsList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UnbuiltInstanceBounds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BuiltInstanceBounds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumBuiltInstances,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SortedInstances,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SortedInstances_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UHierarchicalInstancedStaticMeshComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UHierarchicalInstancedStaticMeshComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UHierarchicalInstancedStaticMeshComponent, 2005599894);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHierarchicalInstancedStaticMeshComponent(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent, &UHierarchicalInstancedStaticMeshComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UHierarchicalInstancedStaticMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHierarchicalInstancedStaticMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
