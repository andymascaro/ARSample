// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/StaticMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshComponent() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPaintedVertex();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPackedNormal();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds();
	ENGINE_API UFunction* Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias();
	ENGINE_API UFunction* Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel();
	ENGINE_API UFunction* Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassPrimitiveSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStreamingTextureBuildInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FStaticMeshComponentLODInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo, Z_Construct_UPackage__Script_Engine(), TEXT("StaticMeshComponentLODInfo"), sizeof(FStaticMeshComponentLODInfo), Get_Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStaticMeshComponentLODInfo(FStaticMeshComponentLODInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("StaticMeshComponentLODInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStaticMeshComponentLODInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFStaticMeshComponentLODInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StaticMeshComponentLODInfo")),new UScriptStruct::TCppStructOps<FStaticMeshComponentLODInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStaticMeshComponentLODInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StaticMeshComponentLODInfo"), sizeof(FStaticMeshComponentLODInfo), Get_Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshComponentLODInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintedVertices_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "Vertex data cached at the time this LOD was painted, if any" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PaintedVertices = { UE4CodeGen_Private::EPropertyClass::Array, "PaintedVertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStaticMeshComponentLODInfo, PaintedVertices), METADATA_PARAMS(NewProp_PaintedVertices_MetaData, ARRAY_COUNT(NewProp_PaintedVertices_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaintedVertices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PaintedVertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPaintedVertex, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PaintedVertices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PaintedVertices_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"StaticMeshComponentLODInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FStaticMeshComponentLODInfo),
				alignof(FStaticMeshComponentLODInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_CRC() { return 183758504U; }
class UScriptStruct* FPaintedVertex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPaintedVertex_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaintedVertex, Z_Construct_UPackage__Script_Engine(), TEXT("PaintedVertex"), sizeof(FPaintedVertex), Get_Z_Construct_UScriptStruct_FPaintedVertex_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPaintedVertex(FPaintedVertex::StaticStruct, TEXT("/Script/Engine"), TEXT("PaintedVertex"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPaintedVertex
{
	FScriptStruct_Engine_StaticRegisterNativesFPaintedVertex()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PaintedVertex")),new UScriptStruct::TCppStructOps<FPaintedVertex>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPaintedVertex;
	UScriptStruct* Z_Construct_UScriptStruct_FPaintedVertex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPaintedVertex_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PaintedVertex"), sizeof(FPaintedVertex), Get_Z_Construct_UScriptStruct_FPaintedVertex_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "Cached vertex information at the time the mesh was painted." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaintedVertex>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color = { UE4CodeGen_Private::EPropertyClass::Struct, "Color", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPaintedVertex, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_Color_MetaData, ARRAY_COUNT(NewProp_Color_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal = { UE4CodeGen_Private::EPropertyClass::Struct, "Normal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPaintedVertex, Normal), Z_Construct_UScriptStruct_FPackedNormal, METADATA_PARAMS(NewProp_Normal_MetaData, ARRAY_COUNT(NewProp_Normal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Struct, "Position", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPaintedVertex, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Position_MetaData, ARRAY_COUNT(NewProp_Position_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Color,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Position,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PaintedVertex",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FPaintedVertex),
				alignof(FPaintedVertex),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPaintedVertex_CRC() { return 905007101U; }
	void UStaticMeshComponent::StaticRegisterNativesUStaticMeshComponent()
	{
		UClass* Class = UStaticMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLocalBounds", (Native)&UStaticMeshComponent::execGetLocalBounds },
			{ "OnRep_StaticMesh", (Native)&UStaticMeshComponent::execOnRep_StaticMesh },
			{ "SetDistanceFieldSelfShadowBias", (Native)&UStaticMeshComponent::execSetDistanceFieldSelfShadowBias },
			{ "SetForcedLodModel", (Native)&UStaticMeshComponent::execSetForcedLodModel },
			{ "SetStaticMesh", (Native)&UStaticMeshComponent::execSetStaticMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds()
	{
		struct StaticMeshComponent_eventGetLocalBounds_Parms
		{
			FVector Min;
			FVector Max;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Max = { UE4CodeGen_Private::EPropertyClass::Struct, "Max", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(StaticMeshComponent_eventGetLocalBounds_Parms, Max), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Min = { UE4CodeGen_Private::EPropertyClass::Struct, "Min", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(StaticMeshComponent_eventGetLocalBounds_Parms, Min), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Max,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Min,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|StaticMesh" },
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "Get Local bounds" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshComponent, "GetLocalBounds", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20401, sizeof(StaticMeshComponent_eventGetLocalBounds_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh()
	{
		struct StaticMeshComponent_eventOnRep_StaticMesh_Parms
		{
			UStaticMesh* OldStaticMesh;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldStaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "OldStaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StaticMeshComponent_eventOnRep_StaticMesh_Parms, OldStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldStaticMesh,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshComponent, "OnRep_StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(StaticMeshComponent_eventOnRep_StaticMesh_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias()
	{
		struct StaticMeshComponent_eventSetDistanceFieldSelfShadowBias_Parms
		{
			float NewValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StaticMeshComponent_eventSetDistanceFieldSelfShadowBias_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "Sets the component's DistanceFieldSelfShadowBias.  bOverrideDistanceFieldSelfShadowBias must be enabled for this to have an effect." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshComponent, "SetDistanceFieldSelfShadowBias", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StaticMeshComponent_eventSetDistanceFieldSelfShadowBias_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel()
	{
		struct StaticMeshComponent_eventSetForcedLodModel_Parms
		{
			int32 NewForcedLodModel;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewForcedLodModel = { UE4CodeGen_Private::EPropertyClass::Int, "NewForcedLodModel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StaticMeshComponent_eventSetForcedLodModel_Parms, NewForcedLodModel), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewForcedLodModel,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|LOD" },
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshComponent, "SetForcedLodModel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StaticMeshComponent_eventSetForcedLodModel_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh()
	{
		struct StaticMeshComponent_eventSetStaticMesh_Parms
		{
			UStaticMesh* NewMesh;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((StaticMeshComponent_eventSetStaticMesh_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(StaticMeshComponent_eventSetStaticMesh_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMesh = { UE4CodeGen_Private::EPropertyClass::Object, "NewMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StaticMeshComponent_eventSetStaticMesh_Parms, NewMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewMesh,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|StaticMesh" },
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "Change the StaticMesh used by this instance." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshComponent, "SetStaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(StaticMeshComponent_eventSetStaticMesh_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister()
	{
		return UStaticMeshComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UStaticMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds, "GetLocalBounds" }, // 1099260640
				{ &Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh, "OnRep_StaticMesh" }, // 3621066397
				{ &Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias, "SetDistanceFieldSelfShadowBias" }, // 576389952
				{ &Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel, "SetForcedLodModel" }, // 3637525499
				{ &Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh, "SetStaticMesh" }, // 1040692202
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Rendering Common" },
				{ "HideCategories", "Object Activation Components|Activation Trigger" },
				{ "IncludePath", "Components/StaticMeshComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "StaticMeshComponent is used to create an instance of a UStaticMesh.\nA static mesh is a piece of geometry that consists of a static set of polygons.\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Content/Types/StaticMeshes/\n@see UStaticMesh" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightmassSettings_MetaData[] = {
				{ "Category", "Lighting" },
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "The Lightmass settings for this object." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightmassSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "LightmassSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, LightmassSettings), Z_Construct_UScriptStruct_FLightmassPrimitiveSettings, METADATA_PARAMS(NewProp_LightmassSettings_MetaData, ARRAY_COUNT(NewProp_LightmassSettings_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialStreamingRelativeBoxes_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "Material Bounds used for texture streaming." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialStreamingRelativeBoxes = { UE4CodeGen_Private::EPropertyClass::Array, "MaterialStreamingRelativeBoxes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000c00000000, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, MaterialStreamingRelativeBoxes), METADATA_PARAMS(NewProp_MaterialStreamingRelativeBoxes_MetaData, ARRAY_COUNT(NewProp_MaterialStreamingRelativeBoxes_MetaData)) };
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaterialStreamingRelativeBoxes_Inner = { UE4CodeGen_Private::EPropertyClass::UInt32, "MaterialStreamingRelativeBoxes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshDerivedDataKey_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "Derived data key of the static mesh, used to determine if an update from the source static mesh is required." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_StaticMeshDerivedDataKey = { UE4CodeGen_Private::EPropertyClass::Str, "StaticMeshDerivedDataKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, StaticMeshDerivedDataKey), METADATA_PARAMS(NewProp_StaticMeshDerivedDataKey_MetaData, ARRAY_COUNT(NewProp_StaticMeshDerivedDataKey_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingTextureData_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "The list of texture, bounds and scales. As computed in the texture streaming build process." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StreamingTextureData = { UE4CodeGen_Private::EPropertyClass::Array, "StreamingTextureData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400000000, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, StreamingTextureData), METADATA_PARAMS(NewProp_StreamingTextureData_MetaData, ARRAY_COUNT(NewProp_StreamingTextureData_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StreamingTextureData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "StreamingTextureData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStreamingTextureBuildInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODData_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "Static mesh LOD data.  Contains static lighting data along with instanced mesh vertex colors." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LODData = { UE4CodeGen_Private::EPropertyClass::Array, "LODData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, LODData), METADATA_PARAMS(NewProp_LODData_MetaData, ARRAY_COUNT(NewProp_LODData_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LODData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LODData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IrrelevantLights_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IrrelevantLights = { UE4CodeGen_Private::EPropertyClass::Array, "IrrelevantLights", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, IrrelevantLights_DEPRECATED), METADATA_PARAMS(NewProp_IrrelevantLights_MetaData, ARRAY_COUNT(NewProp_IrrelevantLights_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_IrrelevantLights_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "IrrelevantLights", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000820000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingDistanceMultiplier_MetaData[] = {
				{ "Category", "TextureStreaming" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "Allows adjusting the desired resolution of streaming textures that uses UV 0.  1.0 is the default, whereas a higher value increases the streamed-in resolution." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StreamingDistanceMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "StreamingDistanceMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, StreamingDistanceMultiplier), METADATA_PARAMS(NewProp_StreamingDistanceMultiplier_MetaData, ARRAY_COUNT(NewProp_StreamingDistanceMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldSelfShadowBias_MetaData[] = {
				{ "Category", "Lighting" },
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "Useful for reducing self shadowing from distance field methods when using world position offset to animate the mesh's vertices." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldSelfShadowBias = { UE4CodeGen_Private::EPropertyClass::Float, "DistanceFieldSelfShadowBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, DistanceFieldSelfShadowBias), METADATA_PARAMS(NewProp_DistanceFieldSelfShadowBias_MetaData, ARRAY_COUNT(NewProp_DistanceFieldSelfShadowBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldIndirectShadowMinVisibility_MetaData[] = {
				{ "Category", "Lighting" },
				{ "DisplayName", "Distance Field Indirect Shadow Min Visibility" },
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "Controls how dark the dynamic indirect shadow can be." },
				{ "UIMax", "1" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldIndirectShadowMinVisibility = { UE4CodeGen_Private::EPropertyClass::Float, "DistanceFieldIndirectShadowMinVisibility", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, DistanceFieldIndirectShadowMinVisibility), METADATA_PARAMS(NewProp_DistanceFieldIndirectShadowMinVisibility_MetaData, ARRAY_COUNT(NewProp_DistanceFieldIndirectShadowMinVisibility_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverriddenLightMapRes_MetaData[] = {
				{ "Category", "Lighting" },
				{ "ClampMax", "4096" },
				{ "editcondition", "bOverrideLightMapRes" },
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "Light map resolution to use on this component, used if bOverrideLightMapRes is true and there is a valid StaticMesh." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OverriddenLightMapRes = { UE4CodeGen_Private::EPropertyClass::Int, "OverriddenLightMapRes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, OverriddenLightMapRes), METADATA_PARAMS(NewProp_OverriddenLightMapRes_MetaData, ARRAY_COUNT(NewProp_OverriddenLightMapRes_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayVertexColors_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
			};
#endif
			auto NewProp_bDisplayVertexColors_SetBit = [](void* Obj){ ((UStaticMeshComponent*)Obj)->bDisplayVertexColors = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayVertexColors = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisplayVertexColors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisplayVertexColors_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisplayVertexColors_MetaData, ARRAY_COUNT(NewProp_bDisplayVertexColors_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomOverrideVertexColorPerLOD_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "The component has some custom painting on LODs or not." },
			};
#endif
			auto NewProp_bCustomOverrideVertexColorPerLOD_SetBit = [](void* Obj){ ((UStaticMeshComponent*)Obj)->bCustomOverrideVertexColorPerLOD = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomOverrideVertexColorPerLOD = { UE4CodeGen_Private::EPropertyClass::Bool, "bCustomOverrideVertexColorPerLOD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCustomOverrideVertexColorPerLOD_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCustomOverrideVertexColorPerLOD_MetaData, ARRAY_COUNT(NewProp_bCustomOverrideVertexColorPerLOD_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultCollision_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "Use the collision profile specified in the StaticMesh asset." },
			};
#endif
			auto NewProp_bUseDefaultCollision_SetBit = [](void* Obj){ ((UStaticMeshComponent*)Obj)->bUseDefaultCollision = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseDefaultCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseDefaultCollision_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseDefaultCollision_MetaData, ARRAY_COUNT(NewProp_bUseDefaultCollision_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSubDivisions_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "Whether to use subdivisions or just the triangle's vertices." },
			};
#endif
			auto NewProp_bUseSubDivisions_SetBit = [](void* Obj){ ((UStaticMeshComponent*)Obj)->bUseSubDivisions = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSubDivisions = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseSubDivisions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseSubDivisions_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseSubDivisions_MetaData, ARRAY_COUNT(NewProp_bUseSubDivisions_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideDistanceFieldSelfShadowBias_MetaData[] = {
				{ "Category", "Lighting" },
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "Whether to override the DistanceFieldSelfShadowBias setting of the static mesh asset with the DistanceFieldSelfShadowBias of this component." },
			};
#endif
			auto NewProp_bOverrideDistanceFieldSelfShadowBias_SetBit = [](void* Obj){ ((UStaticMeshComponent*)Obj)->bOverrideDistanceFieldSelfShadowBias = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideDistanceFieldSelfShadowBias = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideDistanceFieldSelfShadowBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideDistanceFieldSelfShadowBias_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideDistanceFieldSelfShadowBias_MetaData, ARRAY_COUNT(NewProp_bOverrideDistanceFieldSelfShadowBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastDistanceFieldIndirectShadow_MetaData[] = {
				{ "Category", "Lighting" },
				{ "DisplayName", "Distance Field Indirect Shadow" },
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "Whether to use the mesh distance field representation (when present) for shadowing indirect lighting (from lightmaps or skylight) on Movable components.\nThis works like capsule shadows on skeletal meshes, except using the mesh distance field so no physics asset is required.\nThe StaticMesh must have 'Generate Mesh Distance Field' enabled, or the project must have 'Generate Mesh Distance Fields' enabled for this feature to work." },
			};
#endif
			auto NewProp_bCastDistanceFieldIndirectShadow_SetBit = [](void* Obj){ ((UStaticMeshComponent*)Obj)->bCastDistanceFieldIndirectShadow = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastDistanceFieldIndirectShadow = { UE4CodeGen_Private::EPropertyClass::Bool, "bCastDistanceFieldIndirectShadow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCastDistanceFieldIndirectShadow_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCastDistanceFieldIndirectShadow_MetaData, ARRAY_COUNT(NewProp_bCastDistanceFieldIndirectShadow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideLightMapRes_MetaData[] = {
				{ "Category", "Lighting" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "Whether to override the lightmap resolution defined in the static mesh." },
			};
#endif
			auto NewProp_bOverrideLightMapRes_SetBit = [](void* Obj){ ((UStaticMeshComponent*)Obj)->bOverrideLightMapRes = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideLightMapRes = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideLightMapRes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideLightMapRes_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideLightMapRes_MetaData, ARRAY_COUNT(NewProp_bOverrideLightMapRes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreInstanceForTextureStreaming_MetaData[] = {
				{ "Category", "TextureStreaming" },
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "Ignore this instance of this static mesh when calculating streaming information.\nThis can be useful when doing things like applying character textures to static geometry,\nto avoid them using distance-based streaming." },
			};
#endif
			auto NewProp_bIgnoreInstanceForTextureStreaming_SetBit = [](void* Obj){ ((UStaticMeshComponent*)Obj)->bIgnoreInstanceForTextureStreaming = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreInstanceForTextureStreaming = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreInstanceForTextureStreaming", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIgnoreInstanceForTextureStreaming_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIgnoreInstanceForTextureStreaming_MetaData, ARRAY_COUNT(NewProp_bIgnoreInstanceForTextureStreaming_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisallowMeshPaintPerInstance_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "If true, mesh painting is disallowed on this instance. Set if vertex colors are overridden in a construction script." },
			};
#endif
			auto NewProp_bDisallowMeshPaintPerInstance_SetBit = [](void* Obj){ ((UStaticMeshComponent*)Obj)->bDisallowMeshPaintPerInstance = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisallowMeshPaintPerInstance = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisallowMeshPaintPerInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisallowMeshPaintPerInstance_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisallowMeshPaintPerInstance_MetaData, ARRAY_COUNT(NewProp_bDisallowMeshPaintPerInstance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceNavigationObstacle_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "Allows overriding navigation export behavior per component: full collisions or dynamic obstacle" },
			};
#endif
			auto NewProp_bForceNavigationObstacle_SetBit = [](void* Obj){ ((UStaticMeshComponent*)Obj)->bForceNavigationObstacle = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceNavigationObstacle = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceNavigationObstacle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForceNavigationObstacle_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bForceNavigationObstacle_MetaData, ARRAY_COUNT(NewProp_bForceNavigationObstacle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideNavigationExport_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "If true, bForceNavigationObstacle flag will take priority over navigation data stored in StaticMesh" },
			};
#endif
			auto NewProp_bOverrideNavigationExport_SetBit = [](void* Obj){ ((UStaticMeshComponent*)Obj)->bOverrideNavigationExport = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideNavigationExport = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideNavigationExport", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideNavigationExport_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideNavigationExport_MetaData, ARRAY_COUNT(NewProp_bOverrideNavigationExport_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideMinLOD_MetaData[] = {
				{ "Category", "LOD" },
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "Whether to override the MinLOD setting of the static mesh asset with the MinLOD of this component." },
			};
#endif
			auto NewProp_bOverrideMinLOD_SetBit = [](void* Obj){ ((UStaticMeshComponent*)Obj)->bOverrideMinLOD = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideMinLOD = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideMinLOD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideMinLOD_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideMinLOD_MetaData, ARRAY_COUNT(NewProp_bOverrideMinLOD_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideWireframeColor_MetaData[] = {
				{ "Category", "Rendering" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "If true, WireframeColorOverride will be used. If false, color is determined based on mobility and physics simulation settings" },
			};
#endif
			auto NewProp_bOverrideWireframeColor_SetBit = [](void* Obj){ ((UStaticMeshComponent*)Obj)->bOverrideWireframeColor = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideWireframeColor = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideWireframeColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideWireframeColor_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideWireframeColor_MetaData, ARRAY_COUNT(NewProp_bOverrideWireframeColor_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshImportVersion_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "* The import version of the static mesh when it was assign this is update when:\n* - The user assign a new staticmesh to the component\n* - The component is serialize (IsSaving)\n* - Default value is BeforeImportStaticMeshVersionWasAdded\n*\n* If when the component get load (PostLoad) the version of the attach staticmesh is newer\n* then this value, we will remap the material override because the order of the materials list\n* in the staticmesh can be changed. Hopefully there is a remap table save in the staticmesh." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_StaticMeshImportVersion = { UE4CodeGen_Private::EPropertyClass::Int, "StaticMeshImportVersion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, StaticMeshImportVersion), METADATA_PARAMS(NewProp_StaticMeshImportVersion_MetaData, ARRAY_COUNT(NewProp_StaticMeshImportVersion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialIndexPreview_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "Index of the material to preview. If set to INDEX_NONE, all section will be rendered. Used for isolating in Static Mesh Tool *" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialIndexPreview = { UE4CodeGen_Private::EPropertyClass::Int, "MaterialIndexPreview", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, MaterialIndexPreview), METADATA_PARAMS(NewProp_MaterialIndexPreview_MetaData, ARRAY_COUNT(NewProp_MaterialIndexPreview_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionIndexPreview_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "Index of the section to preview. If set to INDEX_NONE, all section will be rendered. Used for isolating in Static Mesh Tool *" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndexPreview = { UE4CodeGen_Private::EPropertyClass::Int, "SectionIndexPreview", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, SectionIndexPreview), METADATA_PARAMS(NewProp_SectionIndexPreview_MetaData, ARRAY_COUNT(NewProp_SectionIndexPreview_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedEditorMaterial_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "The material currently selected in the Editor. Used for highlighting" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectedEditorMaterial = { UE4CodeGen_Private::EPropertyClass::Int, "SelectedEditorMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, SelectedEditorMaterial), METADATA_PARAMS(NewProp_SelectedEditorMaterial_MetaData, ARRAY_COUNT(NewProp_SelectedEditorMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedEditorSection_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "The section currently selected in the Editor. Used for highlighting" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectedEditorSection = { UE4CodeGen_Private::EPropertyClass::Int, "SelectedEditorSection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, SelectedEditorSection), METADATA_PARAMS(NewProp_SelectedEditorSection_MetaData, ARRAY_COUNT(NewProp_SelectedEditorSection_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WireframeColorOverride_MetaData[] = {
				{ "Category", "Rendering" },
				{ "editcondition", "bOverrideWireframeColor" },
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "Wireframe color to use if bOverrideWireframeColor is true" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WireframeColorOverride = { UE4CodeGen_Private::EPropertyClass::Struct, "WireframeColorOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, WireframeColorOverride), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_WireframeColorOverride_MetaData, ARRAY_COUNT(NewProp_WireframeColorOverride_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "StaticMesh" },
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000100000035, 1, "OnRep_StaticMesh", STRUCT_OFFSET(UStaticMeshComponent, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_StaticMesh_MetaData, ARRAY_COUNT(NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubDivisionStepSize_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "Subdivision step size for static vertex lighting." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubDivisionStepSize = { UE4CodeGen_Private::EPropertyClass::Int, "SubDivisionStepSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, SubDivisionStepSize), METADATA_PARAMS(NewProp_SubDivisionStepSize_MetaData, ARRAY_COUNT(NewProp_SubDivisionStepSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLOD_MetaData[] = {
				{ "Category", "LOD" },
				{ "editcondition", "bOverrideMinLOD" },
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "Specifies the smallest LOD that will be used for this component.\nThis is ignored if ForcedLodModel is enabled." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinLOD = { UE4CodeGen_Private::EPropertyClass::Int, "MinLOD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, MinLOD), METADATA_PARAMS(NewProp_MinLOD_MetaData, ARRAY_COUNT(NewProp_MinLOD_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousLODLevel_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "LOD that was desired for rendering this StaticMeshComponent last frame." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreviousLODLevel = { UE4CodeGen_Private::EPropertyClass::Int, "PreviousLODLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, PreviousLODLevel), METADATA_PARAMS(NewProp_PreviousLODLevel_MetaData, ARRAY_COUNT(NewProp_PreviousLODLevel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcedLodModel_MetaData[] = {
				{ "Category", "LOD" },
				{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
				{ "ToolTip", "If 0, auto-select LOD level. if >0, force to (ForcedLodModel-1)." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ForcedLodModel = { UE4CodeGen_Private::EPropertyClass::Int, "ForcedLodModel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, ForcedLodModel), METADATA_PARAMS(NewProp_ForcedLodModel_MetaData, ARRAY_COUNT(NewProp_ForcedLodModel_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightmassSettings,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialStreamingRelativeBoxes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialStreamingRelativeBoxes_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticMeshDerivedDataKey,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StreamingTextureData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StreamingTextureData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODData_Inner,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IrrelevantLights,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IrrelevantLights_Inner,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StreamingDistanceMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistanceFieldSelfShadowBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistanceFieldIndirectShadowMinVisibility,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverriddenLightMapRes,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisplayVertexColors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCustomOverrideVertexColorPerLOD,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseDefaultCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseSubDivisions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideDistanceFieldSelfShadowBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCastDistanceFieldIndirectShadow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideLightMapRes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIgnoreInstanceForTextureStreaming,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisallowMeshPaintPerInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForceNavigationObstacle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideNavigationExport,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideMinLOD,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideWireframeColor,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticMeshImportVersion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialIndexPreview,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionIndexPreview,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectedEditorMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectedEditorSection,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WireframeColorOverride,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubDivisionStepSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinLOD,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviousLODLevel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForcedLodModel,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UStaticMeshComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UStaticMeshComponent::StaticClass,
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
	IMPLEMENT_CLASS(UStaticMeshComponent, 156840868);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStaticMeshComponent(Z_Construct_UClass_UStaticMeshComponent, &UStaticMeshComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UStaticMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
