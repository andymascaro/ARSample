// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponents() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshUVChannelInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
class UScriptStruct* FMeshUVChannelInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMeshUVChannelInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshUVChannelInfo, Z_Construct_UPackage__Script_Engine(), TEXT("MeshUVChannelInfo"), sizeof(FMeshUVChannelInfo), Get_Z_Construct_UScriptStruct_FMeshUVChannelInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeshUVChannelInfo(FMeshUVChannelInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("MeshUVChannelInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMeshUVChannelInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFMeshUVChannelInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MeshUVChannelInfo")),new UScriptStruct::TCppStructOps<FMeshUVChannelInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMeshUVChannelInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FMeshUVChannelInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeshUVChannelInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeshUVChannelInfo"), sizeof(FMeshUVChannelInfo), Get_Z_Construct_UScriptStruct_FMeshUVChannelInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Components.h" },
				{ "ToolTip", "The world size for each texcoord mapping. Used by the texture streaming." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshUVChannelInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalUVDensities_MetaData[] = {
				{ "Category", "Basic" },
				{ "EditCondition", "bOverrideDensities" },
				{ "ModuleRelativePath", "Public/Components.h" },
				{ "ToolTip", "The UV density in the mesh, before any transform scaling, in world unit per UV.\nThis value represents the length taken to cover a full UV unit." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocalUVDensities = { UE4CodeGen_Private::EPropertyClass::Float, "LocalUVDensities", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, CPP_ARRAY_DIM(LocalUVDensities, FMeshUVChannelInfo), nullptr, STRUCT_OFFSET(FMeshUVChannelInfo, LocalUVDensities), METADATA_PARAMS(NewProp_LocalUVDensities_MetaData, ARRAY_COUNT(NewProp_LocalUVDensities_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideDensities_MetaData[] = {
				{ "Category", "Basic" },
				{ "ModuleRelativePath", "Public/Components.h" },
				{ "ToolTip", "Whether this values was set manually or is auto generated." },
			};
#endif
			auto NewProp_bOverrideDensities_SetBit = [](void* Obj){ ((FMeshUVChannelInfo*)Obj)->bOverrideDensities = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideDensities = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideDensities", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshUVChannelInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideDensities_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideDensities_MetaData, ARRAY_COUNT(NewProp_bOverrideDensities_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitialized_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components.h" },
			};
#endif
			auto NewProp_bInitialized_SetBit = [](void* Obj){ ((FMeshUVChannelInfo*)Obj)->bInitialized = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitialized = { UE4CodeGen_Private::EPropertyClass::Bool, "bInitialized", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshUVChannelInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInitialized_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInitialized_MetaData, ARRAY_COUNT(NewProp_bInitialized_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalUVDensities,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideDensities,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInitialized,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MeshUVChannelInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMeshUVChannelInfo),
				alignof(FMeshUVChannelInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeshUVChannelInfo_CRC() { return 367451708U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
