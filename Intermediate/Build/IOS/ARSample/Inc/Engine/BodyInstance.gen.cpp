// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/PhysicsEngine/BodyInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyInstance() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDynamicActorScene();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDOFMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWalkableSlopeOverride();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionResponse();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionEnabled();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESleepFamily();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionResponseContainer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FResponseChannel();
// End Cross Module References
	static UEnum* EDynamicActorScene_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDynamicActorScene, Z_Construct_UPackage__Script_Engine(), TEXT("EDynamicActorScene"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDynamicActorScene(EDynamicActorScene_StaticEnum, TEXT("/Script/Engine"), TEXT("EDynamicActorScene"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EDynamicActorScene_CRC() { return 1007932638U; }
	UEnum* Z_Construct_UEnum_Engine_EDynamicActorScene()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDynamicActorScene"), 0, Get_Z_Construct_UEnum_Engine_EDynamicActorScene_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDynamicActorScene::Default", (int64)EDynamicActorScene::Default },
				{ "EDynamicActorScene::UseSyncScene", (int64)EDynamicActorScene::UseSyncScene },
				{ "EDynamicActorScene::UseAsyncScene", (int64)EDynamicActorScene::UseAsyncScene },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Default.ToolTip", "Use whatever the body instance wants" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Whether to override the sync/async scene used by a dynamic actor" },
				{ "UseAsyncScene.ToolTip", "use async scene" },
				{ "UseSyncScene.ToolTip", "use sync scene" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EDynamicActorScene",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EDynamicActorScene",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDOFMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDOFMode, Z_Construct_UPackage__Script_Engine(), TEXT("EDOFMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDOFMode(EDOFMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EDOFMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EDOFMode_CRC() { return 2661365307U; }
	UEnum* Z_Construct_UEnum_Engine_EDOFMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDOFMode"), 0, Get_Z_Construct_UEnum_Engine_EDOFMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDOFMode::Default", (int64)EDOFMode::Default },
				{ "EDOFMode::SixDOF", (int64)EDOFMode::SixDOF },
				{ "EDOFMode::YZPlane", (int64)EDOFMode::YZPlane },
				{ "EDOFMode::XZPlane", (int64)EDOFMode::XZPlane },
				{ "EDOFMode::XYPlane", (int64)EDOFMode::XYPlane },
				{ "EDOFMode::CustomPlane", (int64)EDOFMode::CustomPlane },
				{ "EDOFMode::None", (int64)EDOFMode::None },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CustomPlane.ToolTip", "Allows 2D movement along the plane of a given normal" },
				{ "Default.ToolTip", "Inherits the degrees of freedom from the project settings." },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "None.ToolTip", "No constraints." },
				{ "SixDOF.ToolTip", "Specifies which axis to freeze rotation and movement along." },
				{ "XYPlane.ToolTip", "Allows 2D movement along the X-Y plane." },
				{ "XZPlane.ToolTip", "Allows 2D movement along the X-Z plane." },
				{ "YZPlane.ToolTip", "Allows 2D movement along the Y-Z plane." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EDOFMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EDOFMode::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FBodyInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBodyInstance_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyInstance, Z_Construct_UPackage__Script_Engine(), TEXT("BodyInstance"), sizeof(FBodyInstance), Get_Z_Construct_UScriptStruct_FBodyInstance_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBodyInstance(FBodyInstance::StaticStruct, TEXT("/Script/Engine"), TEXT("BodyInstance"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBodyInstance
{
	FScriptStruct_Engine_StaticRegisterNativesFBodyInstance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BodyInstance")),new UScriptStruct::TCppStructOps<FBodyInstance>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBodyInstance;
	UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBodyInstance_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BodyInstance"), sizeof(FBodyInstance), Get_Z_Construct_UScriptStruct_FBodyInstance_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Container for a physics representation of an object" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyInstance>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocitySolverIterationCount_MetaData[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "This physics body's solver iteration count for velocity. Increasing this will be more CPU intensive, but better stabilized." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_VelocitySolverIterationCount = { UE4CodeGen_Private::EPropertyClass::Int, "VelocitySolverIterationCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(FBodyInstance, VelocitySolverIterationCount), METADATA_PARAMS(NewProp_VelocitySolverIterationCount_MetaData, ARRAY_COUNT(NewProp_VelocitySolverIterationCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RigidActorAsyncId_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Internal use. Physics-engine id of the actor used during serialization.  Needs to be outside the ifdef for serialization purposes" },
			};
#endif
			static const UE4CodeGen_Private::FUInt64PropertyParams NewProp_RigidActorAsyncId = { UE4CodeGen_Private::EPropertyClass::UInt64, "RigidActorAsyncId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBodyInstance, RigidActorAsyncId), METADATA_PARAMS(NewProp_RigidActorAsyncId_MetaData, ARRAY_COUNT(NewProp_RigidActorAsyncId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RigidActorSyncId_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Internal use. Physics-engine id of the actor used during serialization. Needs to be outside the ifdef for serialization purposes" },
			};
#endif
			static const UE4CodeGen_Private::FUInt64PropertyParams NewProp_RigidActorSyncId = { UE4CodeGen_Private::EPropertyClass::UInt64, "RigidActorSyncId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBodyInstance, RigidActorSyncId), METADATA_PARAMS(NewProp_RigidActorSyncId_MetaData, ARRAY_COUNT(NewProp_RigidActorSyncId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionSolverIterationCount_MetaData[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "This physics body's solver iteration count for position. Increasing this will be more CPU intensive, but better stabilized." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PositionSolverIterationCount = { UE4CodeGen_Private::EPropertyClass::Int, "PositionSolverIterationCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(FBodyInstance, PositionSolverIterationCount), METADATA_PARAMS(NewProp_PositionSolverIterationCount_MetaData, ARRAY_COUNT(NewProp_PositionSolverIterationCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsBlendWeight_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Provide appropriate interface for doing this instead of allowing BlueprintReadWrite *" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PhysicsBlendWeight = { UE4CodeGen_Private::EPropertyClass::Float, "PhysicsBlendWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBodyInstance, PhysicsBlendWeight), METADATA_PARAMS(NewProp_PhysicsBlendWeight_MetaData, ARRAY_COUNT(NewProp_PhysicsBlendWeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StabilizationThresholdMultiplier_MetaData[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Stabilization factor for this body if Physics stabilization is enabled. A higher number will cause more aggressive stabilization at the risk of loss of momentum at low speeds. A value of 0 will disable stabilization for this body." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StabilizationThresholdMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "StabilizationThresholdMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(FBodyInstance, StabilizationThresholdMultiplier), METADATA_PARAMS(NewProp_StabilizationThresholdMultiplier_MetaData, ARRAY_COUNT(NewProp_StabilizationThresholdMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomSleepThresholdMultiplier_MetaData[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "If the SleepFamily is set to custom, multiply the natural sleep threshold by this amount. A higher number will cause the body to sleep sooner." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CustomSleepThresholdMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "CustomSleepThresholdMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(FBodyInstance, CustomSleepThresholdMultiplier), METADATA_PARAMS(NewProp_CustomSleepThresholdMultiplier_MetaData, ARRAY_COUNT(NewProp_CustomSleepThresholdMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAngularVelocity_MetaData[] = {
				{ "Category", "Physics" },
				{ "editcondition", "bOverrideMaxAngularVelocity" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "The maximum angular velocity for this instance" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAngularVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "MaxAngularVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(FBodyInstance, MaxAngularVelocity), METADATA_PARAMS(NewProp_MaxAngularVelocity_MetaData, ARRAY_COUNT(NewProp_MaxAngularVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysMaterialOverride_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Allows you to override the PhysicalMaterial to use for simple collision on this body." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysMaterialOverride = { UE4CodeGen_Private::EPropertyClass::Object, "PhysMaterialOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000015, 1, nullptr, STRUCT_OFFSET(FBodyInstance, PhysMaterialOverride), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(NewProp_PhysMaterialOverride_MetaData, ARRAY_COUNT(NewProp_PhysMaterialOverride_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkableSlopeOverride_MetaData[] = {
				{ "Category", "Physics" },
				{ "editcondition", "bOverrideWalkableSlopeOnInstance" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Custom walkable slope override setting for this instance.\n@see GetWalkableSlopeOverride(), SetWalkableSlopeOverride()" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WalkableSlopeOverride = { UE4CodeGen_Private::EPropertyClass::Struct, "WalkableSlopeOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c0000000015, 1, nullptr, STRUCT_OFFSET(FBodyInstance, WalkableSlopeOverride), Z_Construct_UScriptStruct_FWalkableSlopeOverride, METADATA_PARAMS(NewProp_WalkableSlopeOverride_MetaData, ARRAY_COUNT(NewProp_WalkableSlopeOverride_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectType_MetaData[] = {
				{ "Category", "Custom" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Enum indicating what type of object this should be considered as when it moves" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectType = { UE4CodeGen_Private::EPropertyClass::Byte, "ObjectType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(FBodyInstance, ObjectType), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(NewProp_ObjectType_MetaData, ARRAY_COUNT(NewProp_ObjectType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InertiaTensorScale_MetaData[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Per-instance scaling of inertia (bigger number means  it'll be harder to rotate)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InertiaTensorScale = { UE4CodeGen_Private::EPropertyClass::Struct, "InertiaTensorScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FBodyInstance, InertiaTensorScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_InertiaTensorScale_MetaData, ARRAY_COUNT(NewProp_InertiaTensorScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MassScale_MetaData[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Per-instance scaling of mass" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MassScale = { UE4CodeGen_Private::EPropertyClass::Float, "MassScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FBodyInstance, MassScale), METADATA_PARAMS(NewProp_MassScale_MetaData, ARRAY_COUNT(NewProp_MassScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_COMNudge_MetaData[] = {
				{ "Category", "Physics" },
				{ "DisplayName", "Center Of Mass Offset" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "User specified offset for the center of mass of this object, from the calculated location" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_COMNudge = { UE4CodeGen_Private::EPropertyClass::Struct, "COMNudge", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FBodyInstance, COMNudge), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_COMNudge_MetaData, ARRAY_COUNT(NewProp_COMNudge_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDOFPlaneNormal_MetaData[] = {
				{ "Category", "Physics" },
				{ "DisplayName", "Plane Normal" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Locks physical movement along a custom plane for a given normal." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomDOFPlaneNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "CustomDOFPlaneNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBodyInstance, CustomDOFPlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_CustomDOFPlaneNormal_MetaData, ARRAY_COUNT(NewProp_CustomDOFPlaneNormal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularDamping_MetaData[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "'Drag' force added to reduce angular movement" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularDamping = { UE4CodeGen_Private::EPropertyClass::Float, "AngularDamping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBodyInstance, AngularDamping), METADATA_PARAMS(NewProp_AngularDamping_MetaData, ARRAY_COUNT(NewProp_AngularDamping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearDamping_MetaData[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "'Drag' force added to reduce linear movement" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearDamping = { UE4CodeGen_Private::EPropertyClass::Float, "LinearDamping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBodyInstance, LinearDamping), METADATA_PARAMS(NewProp_LinearDamping_MetaData, ARRAY_COUNT(NewProp_LinearDamping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MassInKgOverride_MetaData[] = {
				{ "Category", "Physics" },
				{ "ClampMin", "0.001" },
				{ "DisplayName", "MassInKg" },
				{ "editcondition", "bOverrideMass" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Mass of the body in KG. By default we compute this based on physical material and mass scale.\n@see bOverrideMass to set this directly" },
				{ "UIMin", "0.001" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MassInKgOverride = { UE4CodeGen_Private::EPropertyClass::Float, "MassInKgOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000015, 1, nullptr, STRUCT_OFFSET(FBodyInstance, MassInKgOverride), METADATA_PARAMS(NewProp_MassInKgOverride_MetaData, ARRAY_COUNT(NewProp_MassInKgOverride_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDepenetrationVelocity_MetaData[] = {
				{ "Category", "Physics" },
				{ "ClampMin", "0.0" },
				{ "editcondition", "bOverrideMaxDepenetrationVelocity" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "The maximum velocity used to depenetrate this object" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDepenetrationVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "MaxDepenetrationVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c0000000015, 1, nullptr, STRUCT_OFFSET(FBodyInstance, MaxDepenetrationVelocity), METADATA_PARAMS(NewProp_MaxDepenetrationVelocity_MetaData, ARRAY_COUNT(NewProp_MaxDepenetrationVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideWalkableSlopeOnInstance_MetaData[] = {
				{ "Category", "Physics" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Whether this instance of the object has its own custom walkable slope override setting." },
			};
#endif
			auto NewProp_bOverrideWalkableSlopeOnInstance_SetBit = [](void* Obj){ ((FBodyInstance*)Obj)->bOverrideWalkableSlopeOnInstance = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideWalkableSlopeOnInstance = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideWalkableSlopeOnInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideWalkableSlopeOnInstance_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideWalkableSlopeOnInstance_MetaData, ARRAY_COUNT(NewProp_bOverrideWalkableSlopeOnInstance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideMaxDepenetrationVelocity_MetaData[] = {
				{ "Category", "Physics" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Whether this body instance has its own custom MaxDepenetrationVelocity" },
			};
#endif
			auto NewProp_bOverrideMaxDepenetrationVelocity_SetBit = [](void* Obj){ ((FBodyInstance*)Obj)->bOverrideMaxDepenetrationVelocity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideMaxDepenetrationVelocity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideMaxDepenetrationVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideMaxDepenetrationVelocity_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideMaxDepenetrationVelocity_MetaData, ARRAY_COUNT(NewProp_bOverrideMaxDepenetrationVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAsyncScene_MetaData[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "If true, this body will be put into the asynchronous physics scene. If false, it will be put into the synchronous physics scene.\nIf the body is static, it will be placed into both scenes regardless of the value of bUseAsyncScene." },
			};
#endif
			auto NewProp_bUseAsyncScene_SetBit = [](void* Obj){ ((FBodyInstance*)Obj)->bUseAsyncScene = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAsyncScene = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseAsyncScene", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseAsyncScene_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseAsyncScene_MetaData, ARRAY_COUNT(NewProp_bUseAsyncScene_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideMaxAngularVelocity_MetaData[] = {
				{ "Category", "Physics" },
				{ "editcondition", "bSimulatePhysics" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Override the default max angular velocity" },
			};
#endif
			auto NewProp_bOverrideMaxAngularVelocity_SetBit = [](void* Obj){ ((FBodyInstance*)Obj)->bOverrideMaxAngularVelocity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideMaxAngularVelocity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideMaxAngularVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideMaxAngularVelocity_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideMaxAngularVelocity_MetaData, ARRAY_COUNT(NewProp_bOverrideMaxAngularVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockZRotation_MetaData[] = {
				{ "Category", "Physics" },
				{ "DisplayName", "Z" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Lock rotation about the Z-axis" },
			};
#endif
			auto NewProp_bLockZRotation_SetBit = [](void* Obj){ ((FBodyInstance*)Obj)->bLockZRotation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockZRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockZRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLockZRotation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLockZRotation_MetaData, ARRAY_COUNT(NewProp_bLockZRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockYRotation_MetaData[] = {
				{ "Category", "Physics" },
				{ "DisplayName", "Y" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Lock rotation about the Y-axis" },
			};
#endif
			auto NewProp_bLockYRotation_SetBit = [](void* Obj){ ((FBodyInstance*)Obj)->bLockYRotation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockYRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockYRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLockYRotation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLockYRotation_MetaData, ARRAY_COUNT(NewProp_bLockYRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockXRotation_MetaData[] = {
				{ "Category", "Physics" },
				{ "DisplayName", "X" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Lock rotation about the X-axis" },
			};
#endif
			auto NewProp_bLockXRotation_SetBit = [](void* Obj){ ((FBodyInstance*)Obj)->bLockXRotation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockXRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockXRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLockXRotation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLockXRotation_MetaData, ARRAY_COUNT(NewProp_bLockXRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockZTranslation_MetaData[] = {
				{ "Category", "Physics" },
				{ "DisplayName", "Z" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Lock translation along the Z-axis" },
			};
#endif
			auto NewProp_bLockZTranslation_SetBit = [](void* Obj){ ((FBodyInstance*)Obj)->bLockZTranslation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockZTranslation = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockZTranslation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLockZTranslation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLockZTranslation_MetaData, ARRAY_COUNT(NewProp_bLockZTranslation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockYTranslation_MetaData[] = {
				{ "Category", "Physics" },
				{ "DisplayName", "Y" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Lock translation along the Y-axis" },
			};
#endif
			auto NewProp_bLockYTranslation_SetBit = [](void* Obj){ ((FBodyInstance*)Obj)->bLockYTranslation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockYTranslation = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockYTranslation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLockYTranslation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLockYTranslation_MetaData, ARRAY_COUNT(NewProp_bLockYTranslation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockXTranslation_MetaData[] = {
				{ "Category", "Physics" },
				{ "DisplayName", "X" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Lock translation along the X-axis" },
			};
#endif
			auto NewProp_bLockXTranslation_SetBit = [](void* Obj){ ((FBodyInstance*)Obj)->bLockXTranslation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockXTranslation = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockXTranslation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLockXTranslation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLockXTranslation_MetaData, ARRAY_COUNT(NewProp_bLockXTranslation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockRotation_MetaData[] = {
				{ "Category", "Physics" },
				{ "DisplayName", "Lock Axis Rotation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "When a Locked Axis Mode is selected, will lock rotation to the specified axis" },
			};
#endif
			auto NewProp_bLockRotation_SetBit = [](void* Obj){ ((FBodyInstance*)Obj)->bLockRotation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLockRotation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLockRotation_MetaData, ARRAY_COUNT(NewProp_bLockRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockTranslation_MetaData[] = {
				{ "Category", "Physics" },
				{ "DisplayName", "Lock Axis Translation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "When a Locked Axis Mode is selected, will lock translation on the specified axis" },
			};
#endif
			auto NewProp_bLockTranslation_SetBit = [](void* Obj){ ((FBodyInstance*)Obj)->bLockTranslation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockTranslation = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockTranslation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLockTranslation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLockTranslation_MetaData, ARRAY_COUNT(NewProp_bLockTranslation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateMassWhenScaleChanges_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "If true, it will update mass when scale changes *" },
			};
#endif
			auto NewProp_bUpdateMassWhenScaleChanges_SetBit = [](void* Obj){ ((FBodyInstance*)Obj)->bUpdateMassWhenScaleChanges = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMassWhenScaleChanges = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMassWhenScaleChanges", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateMassWhenScaleChanges_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUpdateMassWhenScaleChanges_MetaData, ARRAY_COUNT(NewProp_bUpdateMassWhenScaleChanges_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateWakeEvents_MetaData[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Should 'wake/sleep' events fire when this object is woken up or put to sleep by the physics simulation." },
			};
#endif
			auto NewProp_bGenerateWakeEvents_SetBit = [](void* Obj){ ((FBodyInstance*)Obj)->bGenerateWakeEvents = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateWakeEvents = { UE4CodeGen_Private::EPropertyClass::Bool, "bGenerateWakeEvents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGenerateWakeEvents_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGenerateWakeEvents_MetaData, ARRAY_COUNT(NewProp_bGenerateWakeEvents_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartAwake_MetaData[] = {
				{ "Category", "Physics" },
				{ "editcondition", "bSimulatePhysics" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "If object should start awake, or if it should initially be sleeping" },
			};
#endif
			auto NewProp_bStartAwake_SetBit = [](void* Obj){ ((FBodyInstance*)Obj)->bStartAwake = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartAwake = { UE4CodeGen_Private::EPropertyClass::Bool, "bStartAwake", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStartAwake_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bStartAwake_MetaData, ARRAY_COUNT(NewProp_bStartAwake_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoWeld_MetaData[] = {
				{ "Category", "Physics" },
				{ "editcondition", "!bSimulatePhysics" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "If true and is attached to a parent, the two bodies will be joined into a single rigid body. Physical settings like collision profile and body settings are determined by the root" },
			};
#endif
			auto NewProp_bAutoWeld_SetBit = [](void* Obj){ ((FBodyInstance*)Obj)->bAutoWeld = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoWeld = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoWeld", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoWeld_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutoWeld_MetaData, ARRAY_COUNT(NewProp_bAutoWeld_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableGravity_MetaData[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "If object should have the force of gravity applied" },
			};
#endif
			auto NewProp_bEnableGravity_SetBit = [](void* Obj){ ((FBodyInstance*)Obj)->bEnableGravity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableGravity = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableGravity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableGravity_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableGravity_MetaData, ARRAY_COUNT(NewProp_bEnableGravity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideMass_MetaData[] = {
				{ "Category", "Physics" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "If true, mass will not be automatically computed and you must set it directly" },
			};
#endif
			auto NewProp_bOverrideMass_SetBit = [](void* Obj){ ((FBodyInstance*)Obj)->bOverrideMass = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideMass = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideMass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideMass_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideMass_MetaData, ARRAY_COUNT(NewProp_bOverrideMass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSimulatePhysics_MetaData[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "If true, this body will use simulation. If false, will be 'fixed' (ie kinematic) and move where it is told.\nFor a Skeletal Mesh Component, simulating requires a physics asset setup and assigned on the SkeletalMesh asset.\nFor a Static Mesh Component, simulating requires simple collision to be setup on the StaticMesh asset." },
			};
#endif
			auto NewProp_bSimulatePhysics_SetBit = [](void* Obj){ ((FBodyInstance*)Obj)->bSimulatePhysics = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimulatePhysics = { UE4CodeGen_Private::EPropertyClass::Bool, "bSimulatePhysics", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSimulatePhysics_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSimulatePhysics_MetaData, ARRAY_COUNT(NewProp_bSimulatePhysics_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNotifyRigidBodyCollision_MetaData[] = {
				{ "Category", "Collision" },
				{ "DisplayName", "Simulation Generates Hit Events" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Should 'Hit' events fire when this object collides during physics simulation." },
			};
#endif
			auto NewProp_bNotifyRigidBodyCollision_SetBit = [](void* Obj){ ((FBodyInstance*)Obj)->bNotifyRigidBodyCollision = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotifyRigidBodyCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bNotifyRigidBodyCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNotifyRigidBodyCollision_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNotifyRigidBodyCollision_MetaData, ARRAY_COUNT(NewProp_bNotifyRigidBodyCollision_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCCD_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "If true Continuous Collision Detection (CCD) will be used for this component" },
			};
#endif
			auto NewProp_bUseCCD_SetBit = [](void* Obj){ ((FBodyInstance*)Obj)->bUseCCD = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCCD = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseCCD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseCCD_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseCCD_MetaData, ARRAY_COUNT(NewProp_bUseCCD_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionResponses_MetaData[] = {
				{ "Category", "Custom" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Custom Channels for Responses" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionResponses = { UE4CodeGen_Private::EPropertyClass::Struct, "CollisionResponses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(FBodyInstance, CollisionResponses), Z_Construct_UScriptStruct_FCollisionResponse, METADATA_PARAMS(NewProp_CollisionResponses_MetaData, ARRAY_COUNT(NewProp_CollisionResponses_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionProfileName_MetaData[] = {
				{ "Category", "Custom" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Collision Profile Name *" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_CollisionProfileName = { UE4CodeGen_Private::EPropertyClass::Name, "CollisionProfileName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(FBodyInstance, CollisionProfileName), METADATA_PARAMS(NewProp_CollisionProfileName_MetaData, ARRAY_COUNT(NewProp_CollisionProfileName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionEnabled_MetaData[] = {
				{ "Category", "Custom" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Type of collision enabled.\n\n     No Collision      : Will not create any representation in the physics engine. Cannot be used for spatial queries (raycasts, sweeps, overlaps) or simulation (rigid body, constraints). Best performance possible (especially for moving objects)\n     Query Only        : Only used for spatial queries (raycasts, sweeps, and overlaps). Cannot be used for simulation (rigid body, constraints). Useful for character movement and things that do not need physical simulation. Performance gains by keeping data out of simulation tree.\n     Physics Only      : Only used only for physics simulation (rigid body, constraints). Cannot be used for spatial queries (raycasts, sweeps, overlaps). Useful for jiggly bits on characters that do not need per bone detection. Performance gains by keeping data out of query tree\n     Collision Enabled : Can be used for both spatial queries (raycasts, sweeps, overlaps) and simulation (rigid body, constraints)." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionEnabled = { UE4CodeGen_Private::EPropertyClass::Byte, "CollisionEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(FBodyInstance, CollisionEnabled), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(NewProp_CollisionEnabled_MetaData, ARRAY_COUNT(NewProp_CollisionEnabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DOFMode_MetaData[] = {
				{ "Category", "Physics" },
				{ "DisplayName", "Mode" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Locks physical movement along specified axis." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DOFMode = { UE4CodeGen_Private::EPropertyClass::Byte, "DOFMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBodyInstance, DOFMode), Z_Construct_UEnum_Engine_EDOFMode, METADATA_PARAMS(NewProp_DOFMode_MetaData, ARRAY_COUNT(NewProp_DOFMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SleepFamily_MetaData[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "The set of values used in considering when put this body to sleep." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SleepFamily = { UE4CodeGen_Private::EPropertyClass::Enum, "SleepFamily", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FBodyInstance, SleepFamily), Z_Construct_UEnum_Engine_ESleepFamily, METADATA_PARAMS(NewProp_SleepFamily_MetaData, ARRAY_COUNT(NewProp_SleepFamily_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SleepFamily_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseToChannels_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Types of objects that this physics objects will collide with." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResponseToChannels = { UE4CodeGen_Private::EPropertyClass::Struct, "ResponseToChannels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FBodyInstance, ResponseToChannels_DEPRECATED), Z_Construct_UScriptStruct_FCollisionResponseContainer, METADATA_PARAMS(NewProp_ResponseToChannels_MetaData, ARRAY_COUNT(NewProp_ResponseToChannels_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VelocitySolverIterationCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RigidActorAsyncId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RigidActorSyncId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PositionSolverIterationCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicsBlendWeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StabilizationThresholdMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomSleepThresholdMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxAngularVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysMaterialOverride,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WalkableSlopeOverride,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InertiaTensorScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MassScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_COMNudge,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomDOFPlaneNormal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularDamping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearDamping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MassInKgOverride,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxDepenetrationVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideWalkableSlopeOnInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideMaxDepenetrationVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseAsyncScene,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideMaxAngularVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLockZRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLockYRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLockXRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLockZTranslation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLockYTranslation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLockXTranslation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLockRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLockTranslation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateMassWhenScaleChanges,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGenerateWakeEvents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStartAwake,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoWeld,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableGravity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideMass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSimulatePhysics,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNotifyRigidBodyCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseCCD,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionResponses,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionProfileName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionEnabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DOFMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SleepFamily,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SleepFamily_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResponseToChannels,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BodyInstance",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FBodyInstance),
				alignof(FBodyInstance),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBodyInstance_CRC() { return 2037732U; }
class UScriptStruct* FCollisionResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCollisionResponse_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionResponse, Z_Construct_UPackage__Script_Engine(), TEXT("CollisionResponse"), sizeof(FCollisionResponse), Get_Z_Construct_UScriptStruct_FCollisionResponse_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCollisionResponse(FCollisionResponse::StaticStruct, TEXT("/Script/Engine"), TEXT("CollisionResponse"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCollisionResponse
{
	FScriptStruct_Engine_StaticRegisterNativesFCollisionResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CollisionResponse")),new UScriptStruct::TCppStructOps<FCollisionResponse>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCollisionResponse;
	UScriptStruct* Z_Construct_UScriptStruct_FCollisionResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCollisionResponse_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CollisionResponse"), sizeof(FCollisionResponse), Get_Z_Construct_UScriptStruct_FCollisionResponse_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionResponse>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseArray_MetaData[] = {
				{ "Category", "Custom" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Custom Channels for Responses" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResponseArray = { UE4CodeGen_Private::EPropertyClass::Array, "ResponseArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(FCollisionResponse, ResponseArray), METADATA_PARAMS(NewProp_ResponseArray_MetaData, ARRAY_COUNT(NewProp_ResponseArray_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResponseArray_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ResponseArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FResponseChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseToChannels_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Types of objects that this physics objects will collide with. // we have to still load them until resave" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResponseToChannels = { UE4CodeGen_Private::EPropertyClass::Struct, "ResponseToChannels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(FCollisionResponse, ResponseToChannels), Z_Construct_UScriptStruct_FCollisionResponseContainer, METADATA_PARAMS(NewProp_ResponseToChannels_MetaData, ARRAY_COUNT(NewProp_ResponseToChannels_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResponseArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResponseArray_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResponseToChannels,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CollisionResponse",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FCollisionResponse),
				alignof(FCollisionResponse),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCollisionResponse_CRC() { return 3200265160U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
