// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/PhysicsEngine/BodySetup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodySetup() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWalkableSlopeOverride();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionTraceFlag();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBodyCollisionResponse();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicsType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKAggregateGeom();
// End Cross Module References
	void UBodySetup::StaticRegisterNativesUBodySetup()
	{
	}
	UClass* Z_Construct_UClass_UBodySetup_NoRegister()
	{
		return UBodySetup::StaticClass();
	}
	UClass* Z_Construct_UClass_UBodySetup()
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
				{ "IncludePath", "PhysicsEngine/BodySetup.h" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
				{ "ToolTip", "BodySetup contains all collision information that is associated with a single asset.\nA single BodySetup instance is shared among many BodyInstances so that geometry data is not duplicated.\nAssets typically implement a GetBodySetup function that is used during physics state creation.\n\n@see GetBodySetup\n@see FBodyInstance" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildScale3D_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
				{ "ToolTip", "Build scale for this body setup (static mesh settings define this value)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BuildScale3D = { UE4CodeGen_Private::EPropertyClass::Struct, "BuildScale3D", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBodySetup, BuildScale3D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_BuildScale3D_MetaData, ARRAY_COUNT(NewProp_BuildScale3D_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BuildScale = { UE4CodeGen_Private::EPropertyClass::Float, "BuildScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UBodySetup, BuildScale_DEPRECATED), METADATA_PARAMS(NewProp_BuildScale_MetaData, ARRAY_COUNT(NewProp_BuildScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkableSlopeOverride_MetaData[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
				{ "ToolTip", "Custom walkable slope setting for this body." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WalkableSlopeOverride = { UE4CodeGen_Private::EPropertyClass::Struct, "WalkableSlopeOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(UBodySetup, WalkableSlopeOverride), Z_Construct_UScriptStruct_FWalkableSlopeOverride, METADATA_PARAMS(NewProp_WalkableSlopeOverride_MetaData, ARRAY_COUNT(NewProp_WalkableSlopeOverride_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultInstance_MetaData[] = {
				{ "Category", "Collision" },
				{ "FullyExpand", "true" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
				{ "ToolTip", "Default properties of the body instance, copied into objects on instantiation, was URB_BodyInstance" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultInstance = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBodySetup, DefaultInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(NewProp_DefaultInstance_MetaData, ARRAY_COUNT(NewProp_DefaultInstance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionTraceFlag_MetaData[] = {
				{ "Category", "Collision" },
				{ "DisplayName", "Collision Complexity" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
				{ "ToolTip", "Collision Trace behavior - by default, it will keep simple(convex)/complex(per-poly) separate *" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionTraceFlag = { UE4CodeGen_Private::EPropertyClass::Byte, "CollisionTraceFlag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBodySetup, CollisionTraceFlag), Z_Construct_UEnum_Engine_ECollisionTraceFlag, METADATA_PARAMS(NewProp_CollisionTraceFlag_MetaData, ARRAY_COUNT(NewProp_CollisionTraceFlag_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionReponse_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
				{ "ToolTip", "Collision Type for this body. This eventually changes response to collision to others *" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionReponse = { UE4CodeGen_Private::EPropertyClass::Byte, "CollisionReponse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBodySetup, CollisionReponse), Z_Construct_UEnum_Engine_EBodyCollisionResponse, METADATA_PARAMS(NewProp_CollisionReponse_MetaData, ARRAY_COUNT(NewProp_CollisionReponse_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysMaterial_MetaData[] = {
				{ "Category", "Physics" },
				{ "DisplayName", "Simple Collision Physical Material" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
				{ "ToolTip", "Physical material to use for simple collision on this body. Encodes information about density, friction etc." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "PhysMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBodySetup, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(NewProp_PhysMaterial_MetaData, ARRAY_COUNT(NewProp_PhysMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateMirroredCollision_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
				{ "ToolTip", "Should we generate data necessary to support collision on mirrored versions of this mesh.\nThis halves the collision data size for this mesh, but disables collision on mirrored instances of the body." },
			};
#endif
			auto NewProp_bGenerateMirroredCollision_SetBit = [](void* Obj){ ((UBodySetup*)Obj)->bGenerateMirroredCollision = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateMirroredCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bGenerateMirroredCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBodySetup), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGenerateMirroredCollision_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGenerateMirroredCollision_MetaData, ARRAY_COUNT(NewProp_bGenerateMirroredCollision_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSharedCookedData_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
				{ "ToolTip", "Whether the cooked data is shared by multiple body setups. This is needed for per poly collision case where we don't want to duplicate cooked data, but still need multiple body setups for in place geometry changes" },
			};
#endif
			auto NewProp_bSharedCookedData_SetBit = [](void* Obj){ ((UBodySetup*)Obj)->bSharedCookedData = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSharedCookedData = { UE4CodeGen_Private::EPropertyClass::Bool, "bSharedCookedData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBodySetup), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSharedCookedData_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSharedCookedData_MetaData, ARRAY_COUNT(NewProp_bSharedCookedData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateNonMirroredCollision_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
				{ "ToolTip", "Should we generate data necessary to support collision on normal (non-mirrored) versions of this body." },
			};
#endif
			auto NewProp_bGenerateNonMirroredCollision_SetBit = [](void* Obj){ ((UBodySetup*)Obj)->bGenerateNonMirroredCollision = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateNonMirroredCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bGenerateNonMirroredCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBodySetup), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGenerateNonMirroredCollision_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGenerateNonMirroredCollision_MetaData, ARRAY_COUNT(NewProp_bGenerateNonMirroredCollision_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoubleSidedGeometry_MetaData[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
				{ "ToolTip", "If true, the physics triangle mesh will use double sided faces when doing scene queries.\nThis is useful for planes and single sided meshes that need traces to work on both sides." },
			};
#endif
			auto NewProp_bDoubleSidedGeometry_SetBit = [](void* Obj){ ((UBodySetup*)Obj)->bDoubleSidedGeometry = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoubleSidedGeometry = { UE4CodeGen_Private::EPropertyClass::Bool, "bDoubleSidedGeometry", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBodySetup), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDoubleSidedGeometry_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDoubleSidedGeometry_MetaData, ARRAY_COUNT(NewProp_bDoubleSidedGeometry_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMeshCollideAll_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
				{ "ToolTip", "If true, the physics of this mesh (only affects static meshes) will always contain ALL elements from the mesh - not just the ones enabled for collision.\nThis is useful for forcing high detail collisions using the entire render mesh." },
			};
#endif
			auto NewProp_bMeshCollideAll_SetBit = [](void* Obj){ ((UBodySetup*)Obj)->bMeshCollideAll = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMeshCollideAll = { UE4CodeGen_Private::EPropertyClass::Bool, "bMeshCollideAll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBodySetup), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMeshCollideAll_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bMeshCollideAll_MetaData, ARRAY_COUNT(NewProp_bMeshCollideAll_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConsiderForBounds_MetaData[] = {
				{ "Category", "BodySetup" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
				{ "ToolTip", "Should this BodySetup be considered for the bounding box of the PhysicsAsset (and hence SkeletalMeshComponent).\nThere is a speed improvement from having less BodySetups processed each frame when updating the bounds." },
			};
#endif
			auto NewProp_bConsiderForBounds_SetBit = [](void* Obj){ ((UBodySetup*)Obj)->bConsiderForBounds = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConsiderForBounds = { UE4CodeGen_Private::EPropertyClass::Bool, "bConsiderForBounds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBodySetup), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bConsiderForBounds_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bConsiderForBounds_MetaData, ARRAY_COUNT(NewProp_bConsiderForBounds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysFullAnimWeight_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
				{ "ToolTip", "If true (and bEnableFullAnimWeightBodies in SkelMeshComp is true), the physics of this bone will always be blended into the skeletal mesh, regardless of what PhysicsWeight of the SkelMeshComp is.\nThis is useful for bones that should always be physics, even when blending physics in and out for hit reactions (eg cloth or pony-tails)." },
			};
#endif
			auto NewProp_bAlwaysFullAnimWeight_SetBit = [](void* Obj){ ((UBodySetup*)Obj)->bAlwaysFullAnimWeight_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysFullAnimWeight = { UE4CodeGen_Private::EPropertyClass::Bool, "bAlwaysFullAnimWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBodySetup), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAlwaysFullAnimWeight_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAlwaysFullAnimWeight_MetaData, ARRAY_COUNT(NewProp_bAlwaysFullAnimWeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsType_MetaData[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
				{ "ToolTip", "If simulated it will use physics, if kinematic it will not be affected by physics, but can interact with physically simulated bodies. Default will inherit from OwnerComponent's behavior." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PhysicsType = { UE4CodeGen_Private::EPropertyClass::Byte, "PhysicsType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBodySetup, PhysicsType), Z_Construct_UEnum_Engine_EPhysicsType, METADATA_PARAMS(NewProp_PhysicsType_MetaData, ARRAY_COUNT(NewProp_PhysicsType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
				{ "Category", "BodySetup" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
				{ "ToolTip", "Used in the PhysicsAsset case. Associates this Body with Bone in a skeletal mesh." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UBodySetup, BoneName), METADATA_PARAMS(NewProp_BoneName_MetaData, ARRAY_COUNT(NewProp_BoneName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AggGeom_MetaData[] = {
				{ "Category", "BodySetup" },
				{ "DisplayName", "Primitives" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
				{ "NoResetToDefault", "" },
				{ "ToolTip", "Simplified collision representation of this" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AggGeom = { UE4CodeGen_Private::EPropertyClass::Struct, "AggGeom", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBodySetup, AggGeom), Z_Construct_UScriptStruct_FKAggregateGeom, METADATA_PARAMS(NewProp_AggGeom_MetaData, ARRAY_COUNT(NewProp_AggGeom_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BuildScale3D,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BuildScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WalkableSlopeOverride,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionTraceFlag,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionReponse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGenerateMirroredCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSharedCookedData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGenerateNonMirroredCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDoubleSidedGeometry,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMeshCollideAll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bConsiderForBounds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAlwaysFullAnimWeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicsType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AggGeom,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBodySetup>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBodySetup::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00082080u,
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
	IMPLEMENT_CLASS(UBodySetup, 38424191);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBodySetup(Z_Construct_UClass_UBodySetup, &UBodySetup::StaticClass, TEXT("/Script/Engine"), TEXT("UBodySetup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBodySetup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
