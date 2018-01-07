// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ClothingSystemRuntimeTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothingSystemRuntimeTypes() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionData();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Convex();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FClothCollisionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIMEINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FClothCollisionData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothCollisionData, Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface(), TEXT("ClothCollisionData"), sizeof(FClothCollisionData), Get_Z_Construct_UScriptStruct_FClothCollisionData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothCollisionData(FClothCollisionData::StaticStruct, TEXT("/Script/ClothingSystemRuntimeInterface"), TEXT("ClothCollisionData"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionData
{
	FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothCollisionData")),new UScriptStruct::TCppStructOps<FClothCollisionData>);
	}
} ScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionData;
	UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothCollisionData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothCollisionData"), sizeof(FClothCollisionData), Get_Z_Construct_UScriptStruct_FClothCollisionData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ClothingSystemRuntimeTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothCollisionData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Convexes_MetaData[] = {
				{ "Category", "Collison" },
				{ "ModuleRelativePath", "Public/ClothingSystemRuntimeTypes.h" },
				{ "ToolTip", "Convex Data" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Convexes = { UE4CodeGen_Private::EPropertyClass::Array, "Convexes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothCollisionData, Convexes), METADATA_PARAMS(NewProp_Convexes_MetaData, ARRAY_COUNT(NewProp_Convexes_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Convexes_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Convexes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FClothCollisionPrim_Convex, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereConnections_MetaData[] = {
				{ "Category", "Collison" },
				{ "ModuleRelativePath", "Public/ClothingSystemRuntimeTypes.h" },
				{ "ToolTip", "Capsule data" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SphereConnections = { UE4CodeGen_Private::EPropertyClass::Array, "SphereConnections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothCollisionData, SphereConnections), METADATA_PARAMS(NewProp_SphereConnections_MetaData, ARRAY_COUNT(NewProp_SphereConnections_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphereConnections_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SphereConnections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spheres_MetaData[] = {
				{ "Category", "Collison" },
				{ "ModuleRelativePath", "Public/ClothingSystemRuntimeTypes.h" },
				{ "ToolTip", "Sphere data" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Spheres = { UE4CodeGen_Private::EPropertyClass::Array, "Spheres", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothCollisionData, Spheres), METADATA_PARAMS(NewProp_Spheres_MetaData, ARRAY_COUNT(NewProp_Spheres_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spheres_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Spheres", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Convexes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Convexes_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SphereConnections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SphereConnections_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Spheres,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Spheres_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ClothCollisionData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FClothCollisionData),
				alignof(FClothCollisionData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothCollisionData_CRC() { return 1721463709U; }
class UScriptStruct* FClothCollisionPrim_Convex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIMEINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothCollisionPrim_Convex, Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface(), TEXT("ClothCollisionPrim_Convex"), sizeof(FClothCollisionPrim_Convex), Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothCollisionPrim_Convex(FClothCollisionPrim_Convex::StaticStruct, TEXT("/Script/ClothingSystemRuntimeInterface"), TEXT("ClothCollisionPrim_Convex"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Convex
{
	FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Convex()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothCollisionPrim_Convex")),new UScriptStruct::TCppStructOps<FClothCollisionPrim_Convex>);
	}
} ScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Convex;
	UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Convex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothCollisionPrim_Convex"), sizeof(FClothCollisionPrim_Convex), Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ClothingSystemRuntimeTypes.h" },
				{ "ToolTip", "Data for a single convex element\nA convex is a collection of planes, in which the clothing will attempt to stay outside of the\nshape created by the planes combined." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothCollisionPrim_Convex>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneIndex_MetaData[] = {
				{ "ModuleRelativePath", "Public/ClothingSystemRuntimeTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoneIndex = { UE4CodeGen_Private::EPropertyClass::Int, "BoneIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothCollisionPrim_Convex, BoneIndex), METADATA_PARAMS(NewProp_BoneIndex_MetaData, ARRAY_COUNT(NewProp_BoneIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Planes_MetaData[] = {
				{ "ModuleRelativePath", "Public/ClothingSystemRuntimeTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Planes = { UE4CodeGen_Private::EPropertyClass::Array, "Planes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothCollisionPrim_Convex, Planes), METADATA_PARAMS(NewProp_Planes_MetaData, ARRAY_COUNT(NewProp_Planes_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Planes_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Planes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Planes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Planes_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ClothCollisionPrim_Convex",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FClothCollisionPrim_Convex),
				alignof(FClothCollisionPrim_Convex),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_CRC() { return 4033764724U; }
class UScriptStruct* FClothCollisionPrim_SphereConnection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIMEINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection, Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface(), TEXT("ClothCollisionPrim_SphereConnection"), sizeof(FClothCollisionPrim_SphereConnection), Get_Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothCollisionPrim_SphereConnection(FClothCollisionPrim_SphereConnection::StaticStruct, TEXT("/Script/ClothingSystemRuntimeInterface"), TEXT("ClothCollisionPrim_SphereConnection"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_SphereConnection
{
	FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_SphereConnection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothCollisionPrim_SphereConnection")),new UScriptStruct::TCppStructOps<FClothCollisionPrim_SphereConnection>);
	}
} ScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_SphereConnection;
	UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothCollisionPrim_SphereConnection"), sizeof(FClothCollisionPrim_SphereConnection), Get_Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ClothingSystemRuntimeTypes.h" },
				{ "ToolTip", "Data for a single connected sphere primitive. This should be configured after all spheres have\nbeen processed as they are really just indexing the existing spheres" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothCollisionPrim_SphereConnection>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereIndices_MetaData[] = {
				{ "ModuleRelativePath", "Public/ClothingSystemRuntimeTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SphereIndices = { UE4CodeGen_Private::EPropertyClass::Int, "SphereIndices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, CPP_ARRAY_DIM(SphereIndices, FClothCollisionPrim_SphereConnection), nullptr, STRUCT_OFFSET(FClothCollisionPrim_SphereConnection, SphereIndices), METADATA_PARAMS(NewProp_SphereIndices_MetaData, ARRAY_COUNT(NewProp_SphereIndices_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SphereIndices,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ClothCollisionPrim_SphereConnection",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FClothCollisionPrim_SphereConnection),
				alignof(FClothCollisionPrim_SphereConnection),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_CRC() { return 903449090U; }
class UScriptStruct* FClothCollisionPrim_Sphere::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIMEINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere, Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface(), TEXT("ClothCollisionPrim_Sphere"), sizeof(FClothCollisionPrim_Sphere), Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothCollisionPrim_Sphere(FClothCollisionPrim_Sphere::StaticStruct, TEXT("/Script/ClothingSystemRuntimeInterface"), TEXT("ClothCollisionPrim_Sphere"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Sphere
{
	FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Sphere()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothCollisionPrim_Sphere")),new UScriptStruct::TCppStructOps<FClothCollisionPrim_Sphere>);
	}
} ScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Sphere;
	UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothCollisionPrim_Sphere"), sizeof(FClothCollisionPrim_Sphere), Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ClothingSystemRuntimeTypes.h" },
				{ "ToolTip", "Data for a single sphere primitive in the clothing simulation. This can either be a\nsphere on its own, or part of a capsule referenced by the indices in FClothCollisionPrim_Capsule" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothCollisionPrim_Sphere>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalPosition_MetaData[] = {
				{ "ModuleRelativePath", "Public/ClothingSystemRuntimeTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "LocalPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothCollisionPrim_Sphere, LocalPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LocalPosition_MetaData, ARRAY_COUNT(NewProp_LocalPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
				{ "ModuleRelativePath", "Public/ClothingSystemRuntimeTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothCollisionPrim_Sphere, Radius), METADATA_PARAMS(NewProp_Radius_MetaData, ARRAY_COUNT(NewProp_Radius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneIndex_MetaData[] = {
				{ "ModuleRelativePath", "Public/ClothingSystemRuntimeTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoneIndex = { UE4CodeGen_Private::EPropertyClass::Int, "BoneIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothCollisionPrim_Sphere, BoneIndex), METADATA_PARAMS(NewProp_BoneIndex_MetaData, ARRAY_COUNT(NewProp_BoneIndex_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneIndex,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ClothCollisionPrim_Sphere",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FClothCollisionPrim_Sphere),
				alignof(FClothCollisionPrim_Sphere),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_CRC() { return 2401915194U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
