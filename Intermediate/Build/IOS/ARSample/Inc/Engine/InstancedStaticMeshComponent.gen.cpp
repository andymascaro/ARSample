// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/InstancedStaticMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInstancedStaticMeshComponent() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace();
	ENGINE_API UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances();
	ENGINE_API UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount();
	ENGINE_API UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	ENGINE_API UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform();
	ENGINE_API UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance();
	ENGINE_API UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances();
	ENGINE_API UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsSerializer_NoRegister();
// End Cross Module References
class UScriptStruct* FInstancedStaticMeshMappingInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo, Z_Construct_UPackage__Script_Engine(), TEXT("InstancedStaticMeshMappingInfo"), sizeof(FInstancedStaticMeshMappingInfo), Get_Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInstancedStaticMeshMappingInfo(FInstancedStaticMeshMappingInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("InstancedStaticMeshMappingInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInstancedStaticMeshMappingInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFInstancedStaticMeshMappingInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InstancedStaticMeshMappingInfo")),new UScriptStruct::TCppStructOps<FInstancedStaticMeshMappingInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInstancedStaticMeshMappingInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InstancedStaticMeshMappingInfo"), sizeof(FInstancedStaticMeshMappingInfo), Get_Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstancedStaticMeshMappingInfo>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"InstancedStaticMeshMappingInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FInstancedStaticMeshMappingInfo),
				alignof(FInstancedStaticMeshMappingInfo),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_CRC() { return 2034212016U; }
class UScriptStruct* FInstancedStaticMeshInstanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData, Z_Construct_UPackage__Script_Engine(), TEXT("InstancedStaticMeshInstanceData"), sizeof(FInstancedStaticMeshInstanceData), Get_Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInstancedStaticMeshInstanceData(FInstancedStaticMeshInstanceData::StaticStruct, TEXT("/Script/Engine"), TEXT("InstancedStaticMeshInstanceData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInstancedStaticMeshInstanceData
{
	FScriptStruct_Engine_StaticRegisterNativesFInstancedStaticMeshInstanceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InstancedStaticMeshInstanceData")),new UScriptStruct::TCppStructOps<FInstancedStaticMeshInstanceData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInstancedStaticMeshInstanceData;
	UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InstancedStaticMeshInstanceData"), sizeof(FInstancedStaticMeshInstanceData), Get_Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstancedStaticMeshInstanceData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowmapUVBias_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
				{ "ToolTip", "Legacy, this is now stored in FMeshMapBuildData.  Still serialized for backwards compatibility." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowmapUVBias = { UE4CodeGen_Private::EPropertyClass::Struct, "ShadowmapUVBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FInstancedStaticMeshInstanceData, ShadowmapUVBias_DEPRECATED), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_ShadowmapUVBias_MetaData, ARRAY_COUNT(NewProp_ShadowmapUVBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightmapUVBias_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
				{ "ToolTip", "Legacy, this is now stored in FMeshMapBuildData.  Still serialized for backwards compatibility." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightmapUVBias = { UE4CodeGen_Private::EPropertyClass::Struct, "LightmapUVBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FInstancedStaticMeshInstanceData, LightmapUVBias_DEPRECATED), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_LightmapUVBias_MetaData, ARRAY_COUNT(NewProp_LightmapUVBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
				{ "Category", "Instances" },
				{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform = { UE4CodeGen_Private::EPropertyClass::Struct, "Transform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FInstancedStaticMeshInstanceData, Transform), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(NewProp_Transform_MetaData, ARRAY_COUNT(NewProp_Transform_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShadowmapUVBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightmapUVBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Transform,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"InstancedStaticMeshInstanceData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FInstancedStaticMeshInstanceData),
				alignof(FInstancedStaticMeshInstanceData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_CRC() { return 1328895984U; }
	void UInstancedStaticMeshComponent::StaticRegisterNativesUInstancedStaticMeshComponent()
	{
		UClass* Class = UInstancedStaticMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddInstance", (Native)&UInstancedStaticMeshComponent::execAddInstance },
			{ "AddInstanceWorldSpace", (Native)&UInstancedStaticMeshComponent::execAddInstanceWorldSpace },
			{ "ClearInstances", (Native)&UInstancedStaticMeshComponent::execClearInstances },
			{ "GetInstanceCount", (Native)&UInstancedStaticMeshComponent::execGetInstanceCount },
			{ "GetInstancesOverlappingBox", (Native)&UInstancedStaticMeshComponent::execGetInstancesOverlappingBox },
			{ "GetInstancesOverlappingSphere", (Native)&UInstancedStaticMeshComponent::execGetInstancesOverlappingSphere },
			{ "GetInstanceTransform", (Native)&UInstancedStaticMeshComponent::execGetInstanceTransform },
			{ "RemoveInstance", (Native)&UInstancedStaticMeshComponent::execRemoveInstance },
			{ "SetCullDistances", (Native)&UInstancedStaticMeshComponent::execSetCullDistances },
			{ "UpdateInstanceTransform", (Native)&UInstancedStaticMeshComponent::execUpdateInstanceTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance()
	{
		struct InstancedStaticMeshComponent_eventAddInstance_Parms
		{
			FTransform InstanceTransform;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventAddInstance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceTransform_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "InstanceTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventAddInstance_Parms, InstanceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_InstanceTransform_MetaData, ARRAY_COUNT(NewProp_InstanceTransform_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceTransform,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|InstancedStaticMesh" },
				{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
				{ "ToolTip", "Add an instance to this component. Transform is given in local space of this component." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, "AddInstance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20400, sizeof(InstancedStaticMeshComponent_eventAddInstance_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace()
	{
		struct InstancedStaticMeshComponent_eventAddInstanceWorldSpace_Parms
		{
			FTransform WorldTransform;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventAddInstanceWorldSpace_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventAddInstanceWorldSpace_Parms, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_WorldTransform_MetaData, ARRAY_COUNT(NewProp_WorldTransform_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldTransform,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|InstancedStaticMesh" },
				{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
				{ "ToolTip", "Add an instance to this component. Transform is given in world space." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, "AddInstanceWorldSpace", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(InstancedStaticMeshComponent_eventAddInstanceWorldSpace_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|InstancedStaticMesh" },
				{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
				{ "ToolTip", "Clear all instances being rendered by this component." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, "ClearInstances", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount()
	{
		struct InstancedStaticMeshComponent_eventGetInstanceCount_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstanceCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|InstancedStaticMesh" },
				{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
				{ "ToolTip", "Get the number of instances in this component." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, "GetInstanceCount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(InstancedStaticMeshComponent_eventGetInstanceCount_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox()
	{
		struct InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms
		{
			FBox Box;
			bool bBoxInWorldSpace;
			TArray<int32> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bBoxInWorldSpace_SetBit = [](void* Obj){ ((InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms*)Obj)->bBoxInWorldSpace = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBoxInWorldSpace = { UE4CodeGen_Private::EPropertyClass::Bool, "bBoxInWorldSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBoxInWorldSpace_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Box = { UE4CodeGen_Private::EPropertyClass::Struct, "Box", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(NewProp_Box_MetaData, ARRAY_COUNT(NewProp_Box_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBoxInWorldSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Box,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|InstancedStaticMesh" },
				{ "CPP_Default_bBoxInWorldSpace", "true" },
				{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
				{ "ToolTip", "Returns the instances with instance bounds overlapping the specified box. The return value is an array of instance indices." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, "GetInstancesOverlappingBox", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20400, sizeof(InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere()
	{
		struct InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms
		{
			FVector Center;
			float Radius;
			bool bSphereInWorldSpace;
			TArray<int32> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bSphereInWorldSpace_SetBit = [](void* Obj){ ((InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms*)Obj)->bSphereInWorldSpace = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSphereInWorldSpace = { UE4CodeGen_Private::EPropertyClass::Bool, "bSphereInWorldSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSphereInWorldSpace_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center = { UE4CodeGen_Private::EPropertyClass::Struct, "Center", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Center_MetaData, ARRAY_COUNT(NewProp_Center_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSphereInWorldSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Center,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|InstancedStaticMesh" },
				{ "CPP_Default_bSphereInWorldSpace", "true" },
				{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
				{ "ToolTip", "Returns the instances with instance bounds overlapping the specified sphere. The return value is an array of instance indices." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, "GetInstancesOverlappingSphere", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20400, sizeof(InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform()
	{
		struct InstancedStaticMeshComponent_eventGetInstanceTransform_Parms
		{
			int32 InstanceIndex;
			FTransform OutInstanceTransform;
			bool bWorldSpace;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((InstancedStaticMeshComponent_eventGetInstanceTransform_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InstancedStaticMeshComponent_eventGetInstanceTransform_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bWorldSpace_SetBit = [](void* Obj){ ((InstancedStaticMeshComponent_eventGetInstanceTransform_Parms*)Obj)->bWorldSpace = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace = { UE4CodeGen_Private::EPropertyClass::Bool, "bWorldSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InstancedStaticMeshComponent_eventGetInstanceTransform_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bWorldSpace_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutInstanceTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "OutInstanceTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstanceTransform_Parms, OutInstanceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceIndex = { UE4CodeGen_Private::EPropertyClass::Int, "InstanceIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstanceTransform_Parms, InstanceIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bWorldSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutInstanceTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|InstancedStaticMesh" },
				{ "CPP_Default_bWorldSpace", "false" },
				{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
				{ "ToolTip", "Get the transform for the instance specified. Instance is returned in local space of this component unless bWorldSpace is set.  Returns True on success." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, "GetInstanceTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20401, sizeof(InstancedStaticMeshComponent_eventGetInstanceTransform_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance()
	{
		struct InstancedStaticMeshComponent_eventRemoveInstance_Parms
		{
			int32 InstanceIndex;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((InstancedStaticMeshComponent_eventRemoveInstance_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InstancedStaticMeshComponent_eventRemoveInstance_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceIndex = { UE4CodeGen_Private::EPropertyClass::Int, "InstanceIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventRemoveInstance_Parms, InstanceIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|InstancedStaticMesh" },
				{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
				{ "ToolTip", "Remove the instance specified. Returns True on success. Note that this will leave the array in order, but may shrink it." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, "RemoveInstance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(InstancedStaticMeshComponent_eventRemoveInstance_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances()
	{
		struct InstancedStaticMeshComponent_eventSetCullDistances_Parms
		{
			int32 StartCullDistance;
			int32 EndCullDistance;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndCullDistance = { UE4CodeGen_Private::EPropertyClass::Int, "EndCullDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventSetCullDistances_Parms, EndCullDistance), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartCullDistance = { UE4CodeGen_Private::EPropertyClass::Int, "StartCullDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventSetCullDistances_Parms, StartCullDistance), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndCullDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartCullDistance,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|InstancedStaticMesh" },
				{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
				{ "ToolTip", "Sets the fading start and culling end distances for this component." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, "SetCullDistances", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(InstancedStaticMeshComponent_eventSetCullDistances_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform()
	{
		struct InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms
		{
			int32 InstanceIndex;
			FTransform NewInstanceTransform;
			bool bWorldSpace;
			bool bMarkRenderStateDirty;
			bool bTeleport;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bTeleport_SetBit = [](void* Obj){ ((InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms*)Obj)->bTeleport = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport = { UE4CodeGen_Private::EPropertyClass::Bool, "bTeleport", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTeleport_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bMarkRenderStateDirty_SetBit = [](void* Obj){ ((InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms*)Obj)->bMarkRenderStateDirty = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMarkRenderStateDirty = { UE4CodeGen_Private::EPropertyClass::Bool, "bMarkRenderStateDirty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMarkRenderStateDirty_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bWorldSpace_SetBit = [](void* Obj){ ((InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms*)Obj)->bWorldSpace = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace = { UE4CodeGen_Private::EPropertyClass::Bool, "bWorldSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bWorldSpace_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewInstanceTransform_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewInstanceTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "NewInstanceTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms, NewInstanceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_NewInstanceTransform_MetaData, ARRAY_COUNT(NewProp_NewInstanceTransform_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceIndex = { UE4CodeGen_Private::EPropertyClass::Int, "InstanceIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms, InstanceIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTeleport,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMarkRenderStateDirty,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bWorldSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewInstanceTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|InstancedStaticMesh" },
				{ "CPP_Default_bMarkRenderStateDirty", "false" },
				{ "CPP_Default_bTeleport", "false" },
				{ "CPP_Default_bWorldSpace", "false" },
				{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
				{ "ToolTip", "Update the transform for the instance specified.\n\n@param InstanceIndex                  The index of the instance to update\n@param NewInstanceTransform   The new transform\n@param bWorldSpace                    If true, the new transform interpreted as a World Space transform, otherwise it is interpreted as Local Space\n@param bMarkRenderStateDirty  If true, the change should be visible immediately. If you are updating many instances you should only set this to true for the last instance.\n@param bTeleport                              Whether or not the instance's physics should be moved normally, or teleported (moved instantly, ignoring velocity).\n@return                                               True on success." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, "UpdateInstanceTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20400, sizeof(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister()
	{
		return UInstancedStaticMeshComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UInstancedStaticMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance, "AddInstance" }, // 871422223
				{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace, "AddInstanceWorldSpace" }, // 81453463
				{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances, "ClearInstances" }, // 1873822358
				{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount, "GetInstanceCount" }, // 668802685
				{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox, "GetInstancesOverlappingBox" }, // 2953073032
				{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere, "GetInstancesOverlappingSphere" }, // 916568535
				{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform, "GetInstanceTransform" }, // 549651255
				{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance, "RemoveInstance" }, // 2718750536
				{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances, "SetCullDistances" }, // 1613839712
				{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform, "UpdateInstanceTransform" }, // 1870169959
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Rendering" },
				{ "HideCategories", "Object Activation Components|Activation Trigger" },
				{ "IncludePath", "Components/InstancedStaticMeshComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
				{ "ToolTip", "A component that efficiently renders multiple instances of the same StaticMesh." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedMappings_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
				{ "ToolTip", "The mappings for all the instances of this component." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedMappings = { UE4CodeGen_Private::EPropertyClass::Array, "CachedMappings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020480000202000, 1, nullptr, STRUCT_OFFSET(UInstancedStaticMeshComponent, CachedMappings), METADATA_PARAMS(NewProp_CachedMappings_MetaData, ARRAY_COUNT(NewProp_CachedMappings_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedMappings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CachedMappings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumPendingLightmaps_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
				{ "ToolTip", "Number of pending lightmaps still to be calculated (Apply()'d)." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumPendingLightmaps = { UE4CodeGen_Private::EPropertyClass::Int, "NumPendingLightmaps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020480000202000, 1, nullptr, STRUCT_OFFSET(UInstancedStaticMeshComponent, NumPendingLightmaps), METADATA_PARAMS(NewProp_NumPendingLightmaps_MetaData, ARRAY_COUNT(NewProp_NumPendingLightmaps_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsSerializer_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
				{ "ToolTip", "Serialization of all the InstanceBodies. Helps speed up physics creation time." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicsSerializer = { UE4CodeGen_Private::EPropertyClass::Object, "PhysicsSerializer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(UInstancedStaticMeshComponent, PhysicsSerializer), Z_Construct_UClass_UPhysicsSerializer_NoRegister, METADATA_PARAMS(NewProp_PhysicsSerializer_MetaData, ARRAY_COUNT(NewProp_PhysicsSerializer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeepInstanceBufferCPUAccess_MetaData[] = {
				{ "Category", "InstancedStaticMeshComponent" },
				{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
				{ "ToolTip", "Set to true to keep instance buffer accessible by the CPU, otherwise it's discarded and considered never changing, only GPU has a copy of the data." },
			};
#endif
			auto NewProp_KeepInstanceBufferCPUAccess_SetBit = [](void* Obj){ ((UInstancedStaticMeshComponent*)Obj)->KeepInstanceBufferCPUAccess = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_KeepInstanceBufferCPUAccess = { UE4CodeGen_Private::EPropertyClass::Bool, "KeepInstanceBufferCPUAccess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UInstancedStaticMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_KeepInstanceBufferCPUAccess_SetBit)>::SetBit, METADATA_PARAMS(NewProp_KeepInstanceBufferCPUAccess_MetaData, ARRAY_COUNT(NewProp_KeepInstanceBufferCPUAccess_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseDynamicInstanceBuffer_MetaData[] = {
				{ "Category", "InstancedStaticMeshComponent" },
				{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
				{ "ToolTip", "Set to true to permit updating the vertex buffer used in the instance buffer without recreating it completely. This should be used if you plan on dynamically changing the instances at run-time." },
			};
#endif
			auto NewProp_UseDynamicInstanceBuffer_SetBit = [](void* Obj){ ((UInstancedStaticMeshComponent*)Obj)->UseDynamicInstanceBuffer = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseDynamicInstanceBuffer = { UE4CodeGen_Private::EPropertyClass::Bool, "UseDynamicInstanceBuffer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UInstancedStaticMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_UseDynamicInstanceBuffer_SetBit)>::SetBit, METADATA_PARAMS(NewProp_UseDynamicInstanceBuffer_MetaData, ARRAY_COUNT(NewProp_UseDynamicInstanceBuffer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemovedInstances_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
				{ "ToolTip", "The render indices of any removed items we should not render." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RemovedInstances = { UE4CodeGen_Private::EPropertyClass::Array, "RemovedInstances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInstancedStaticMeshComponent, RemovedInstances), METADATA_PARAMS(NewProp_RemovedInstances_MetaData, ARRAY_COUNT(NewProp_RemovedInstances_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RemovedInstances_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "RemovedInstances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceReorderTable_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
				{ "ToolTip", "Mapping from PerInstanceSMData order to instance render buffer order. If empty, the PerInstanceSMData order is used." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstanceReorderTable = { UE4CodeGen_Private::EPropertyClass::Array, "InstanceReorderTable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInstancedStaticMeshComponent, InstanceReorderTable), METADATA_PARAMS(NewProp_InstanceReorderTable_MetaData, ARRAY_COUNT(NewProp_InstanceReorderTable_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceReorderTable_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "InstanceReorderTable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceEndCullDistance_MetaData[] = {
				{ "Category", "Culling" },
				{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
				{ "ToolTip", "Distance from camera at which each instance completely fades out." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceEndCullDistance = { UE4CodeGen_Private::EPropertyClass::Int, "InstanceEndCullDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UInstancedStaticMeshComponent, InstanceEndCullDistance), METADATA_PARAMS(NewProp_InstanceEndCullDistance_MetaData, ARRAY_COUNT(NewProp_InstanceEndCullDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceStartCullDistance_MetaData[] = {
				{ "Category", "Culling" },
				{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
				{ "ToolTip", "Distance from camera at which each instance begins to fade out." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceStartCullDistance = { UE4CodeGen_Private::EPropertyClass::Int, "InstanceStartCullDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UInstancedStaticMeshComponent, InstanceStartCullDistance), METADATA_PARAMS(NewProp_InstanceStartCullDistance_MetaData, ARRAY_COUNT(NewProp_InstanceStartCullDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancingRandomSeed_MetaData[] = {
				{ "Category", "InstancedStaticMeshComponent" },
				{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
				{ "ToolTip", "Value used to seed the random number stream that generates random numbers for each of this mesh's instances.\n              The random number is stored in a buffer accessible to materials through the PerInstanceRandom expression. If\n              this is set to zero (default), it will be populated automatically by the editor." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstancingRandomSeed = { UE4CodeGen_Private::EPropertyClass::Int, "InstancingRandomSeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UInstancedStaticMeshComponent, InstancingRandomSeed), METADATA_PARAMS(NewProp_InstancingRandomSeed_MetaData, ARRAY_COUNT(NewProp_InstancingRandomSeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerInstanceSMData_MetaData[] = {
				{ "Category", "Instances" },
				{ "DisplayName", "Instances" },
				{ "EditFixedOrder", "" },
				{ "MakeEditWidget", "TRUE" },
				{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
				{ "ToolTip", "Array of instances, bulk serialized." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerInstanceSMData = { UE4CodeGen_Private::EPropertyClass::Array, "PerInstanceSMData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0090000000000001, 1, nullptr, STRUCT_OFFSET(UInstancedStaticMeshComponent, PerInstanceSMData), METADATA_PARAMS(NewProp_PerInstanceSMData_MetaData, ARRAY_COUNT(NewProp_PerInstanceSMData_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerInstanceSMData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PerInstanceSMData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedMappings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedMappings_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumPendingLightmaps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicsSerializer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeepInstanceBufferCPUAccess,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UseDynamicInstanceBuffer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RemovedInstances,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RemovedInstances_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceReorderTable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceReorderTable_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceEndCullDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceStartCullDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstancingRandomSeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PerInstanceSMData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PerInstanceSMData_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInstancedStaticMeshComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInstancedStaticMeshComponent::StaticClass,
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
	IMPLEMENT_CLASS(UInstancedStaticMeshComponent, 58557559);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInstancedStaticMeshComponent(Z_Construct_UClass_UInstancedStaticMeshComponent, &UInstancedStaticMeshComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UInstancedStaticMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInstancedStaticMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
