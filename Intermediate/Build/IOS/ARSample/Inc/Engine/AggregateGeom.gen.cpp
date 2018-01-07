// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/PhysicsEngine/AggregateGeom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAggregateGeom() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKAggregateGeom();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKConvexElem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKSphylElem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKBoxElem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKSphereElem();
// End Cross Module References
class UScriptStruct* FKAggregateGeom::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FKAggregateGeom_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKAggregateGeom, Z_Construct_UPackage__Script_Engine(), TEXT("KAggregateGeom"), sizeof(FKAggregateGeom), Get_Z_Construct_UScriptStruct_FKAggregateGeom_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKAggregateGeom(FKAggregateGeom::StaticStruct, TEXT("/Script/Engine"), TEXT("KAggregateGeom"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFKAggregateGeom
{
	FScriptStruct_Engine_StaticRegisterNativesFKAggregateGeom()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KAggregateGeom")),new UScriptStruct::TCppStructOps<FKAggregateGeom>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFKAggregateGeom;
	UScriptStruct* Z_Construct_UScriptStruct_FKAggregateGeom()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKAggregateGeom_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KAggregateGeom"), sizeof(FKAggregateGeom), Get_Z_Construct_UScriptStruct_FKAggregateGeom_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/AggregateGeom.h" },
				{ "ToolTip", "Container for an aggregate of collision shapes" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKAggregateGeom>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConvexElems_MetaData[] = {
				{ "Category", "Aggregate Geometry" },
				{ "DisplayName", "Convex Elements" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/AggregateGeom.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConvexElems = { UE4CodeGen_Private::EPropertyClass::Array, "ConvexElems", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020041, 1, nullptr, STRUCT_OFFSET(FKAggregateGeom, ConvexElems), METADATA_PARAMS(NewProp_ConvexElems_MetaData, ARRAY_COUNT(NewProp_ConvexElems_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConvexElems_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ConvexElems", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FKConvexElem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphylElems_MetaData[] = {
				{ "Category", "Aggregate Geometry" },
				{ "DisplayName", "Capsules" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/AggregateGeom.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SphylElems = { UE4CodeGen_Private::EPropertyClass::Array, "SphylElems", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000041, 1, nullptr, STRUCT_OFFSET(FKAggregateGeom, SphylElems), METADATA_PARAMS(NewProp_SphylElems_MetaData, ARRAY_COUNT(NewProp_SphylElems_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphylElems_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SphylElems", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FKSphylElem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxElems_MetaData[] = {
				{ "Category", "Aggregate Geometry" },
				{ "DisplayName", "Boxes" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/AggregateGeom.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoxElems = { UE4CodeGen_Private::EPropertyClass::Array, "BoxElems", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000041, 1, nullptr, STRUCT_OFFSET(FKAggregateGeom, BoxElems), METADATA_PARAMS(NewProp_BoxElems_MetaData, ARRAY_COUNT(NewProp_BoxElems_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxElems_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BoxElems", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FKBoxElem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereElems_MetaData[] = {
				{ "Category", "Aggregate Geometry" },
				{ "DisplayName", "Spheres" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/AggregateGeom.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SphereElems = { UE4CodeGen_Private::EPropertyClass::Array, "SphereElems", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000041, 1, nullptr, STRUCT_OFFSET(FKAggregateGeom, SphereElems), METADATA_PARAMS(NewProp_SphereElems_MetaData, ARRAY_COUNT(NewProp_SphereElems_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphereElems_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SphereElems", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FKSphereElem, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConvexElems,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConvexElems_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SphylElems,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SphylElems_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoxElems,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoxElems_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SphereElems,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SphereElems_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"KAggregateGeom",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FKAggregateGeom),
				alignof(FKAggregateGeom),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKAggregateGeom_CRC() { return 1573255335U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
