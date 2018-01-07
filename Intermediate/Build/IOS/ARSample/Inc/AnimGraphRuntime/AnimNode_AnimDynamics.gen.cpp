// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BoneControllers/AnimNode_AnimDynamics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_AnimDynamics() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_AnimPhysAngularConstraintType();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AnimDynamics();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_AnimPhysCollisionType();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysSphericalLimit();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysPlanarLimit();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysConstraintSetup();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_AnimPhysTwistAxis();
// End Cross Module References
	static UEnum* ESphericalLimitType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ESphericalLimitType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESphericalLimitType(ESphericalLimitType_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("ESphericalLimitType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType_CRC() { return 3900946342U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESphericalLimitType"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESphericalLimitType::Inner", (int64)ESphericalLimitType::Inner },
				{ "ESphericalLimitType::Outer", (int64)ESphericalLimitType::Outer },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Whether spheres keep bodies inside, or outside of their shape" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESphericalLimitType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ESphericalLimitType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* AnimPhysSimSpaceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimPhysSimSpaceType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AnimPhysSimSpaceType(AnimPhysSimSpaceType_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimPhysSimSpaceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType_CRC() { return 3322456124U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AnimPhysSimSpaceType"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AnimPhysSimSpaceType::Component", (int64)AnimPhysSimSpaceType::Component },
				{ "AnimPhysSimSpaceType::Actor", (int64)AnimPhysSimSpaceType::Actor },
				{ "AnimPhysSimSpaceType::World", (int64)AnimPhysSimSpaceType::World },
				{ "AnimPhysSimSpaceType::RootRelative", (int64)AnimPhysSimSpaceType::RootRelative },
				{ "AnimPhysSimSpaceType::BoneRelative", (int64)AnimPhysSimSpaceType::BoneRelative },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Actor.ToolTip", "Sim origin is the location/orientation of the actor containing the skeletal mesh component." },
				{ "BlueprintType", "true" },
				{ "BoneRelative.ToolTip", "Sim origin is the location/orientation of the bone specified in RelativeSpaceBone" },
				{ "Component.ToolTip", "Sim origin is the location/orientation of the skeletal mesh component." },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "RootRelative.ToolTip", "Sim origin is the location/orientation of the root bone." },
				{ "World.ToolTip", "Sim origin is the world origin. Teleporting characters is not recommended in this mode." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"AnimPhysSimSpaceType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"AnimPhysSimSpaceType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* AnimPhysLinearConstraintType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimPhysLinearConstraintType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AnimPhysLinearConstraintType(AnimPhysLinearConstraintType_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimPhysLinearConstraintType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType_CRC() { return 1868089121U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AnimPhysLinearConstraintType"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AnimPhysLinearConstraintType::Free", (int64)AnimPhysLinearConstraintType::Free },
				{ "AnimPhysLinearConstraintType::Limited", (int64)AnimPhysLinearConstraintType::Limited },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Supported linear axis constraints" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"AnimPhysLinearConstraintType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"AnimPhysLinearConstraintType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* AnimPhysAngularConstraintType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_AnimPhysAngularConstraintType, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimPhysAngularConstraintType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AnimPhysAngularConstraintType(AnimPhysAngularConstraintType_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimPhysAngularConstraintType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_AnimPhysAngularConstraintType_CRC() { return 1262113503U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_AnimPhysAngularConstraintType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AnimPhysAngularConstraintType"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_AnimPhysAngularConstraintType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AnimPhysAngularConstraintType::Angular", (int64)AnimPhysAngularConstraintType::Angular },
				{ "AnimPhysAngularConstraintType::Cone", (int64)AnimPhysAngularConstraintType::Cone },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Supported angular constraint types" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"AnimPhysAngularConstraintType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"AnimPhysAngularConstraintType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAnimNode_AnimDynamics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_AnimDynamics"), sizeof(FAnimNode_AnimDynamics), Get_Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_AnimDynamics(FAnimNode_AnimDynamics::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_AnimDynamics"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_AnimDynamics
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_AnimDynamics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_AnimDynamics")),new UScriptStruct::TCppStructOps<FAnimNode_AnimDynamics>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_AnimDynamics;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AnimDynamics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_AnimDynamics"), sizeof(FAnimNode_AnimDynamics), Get_Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_AnimDynamics>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalForce_MetaData[] = {
				{ "Category", "Forces" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "PinShownByDefault", "" },
				{ "ToolTip", "An external force to apply to all bodies in the simulation when ticked, specified in world space" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalForce = { UE4CodeGen_Private::EPropertyClass::Struct, "ExternalForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, ExternalForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ExternalForce_MetaData, ARRAY_COUNT(NewProp_ExternalForce_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereCollisionRadius_MetaData[] = {
				{ "Category", "Collision" },
				{ "ClampMin", "1" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Radius to use if CollisionType is set to CustomSphere" },
				{ "UIMin", "1" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SphereCollisionRadius = { UE4CodeGen_Private::EPropertyClass::Float, "SphereCollisionRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, SphereCollisionRadius), METADATA_PARAMS(NewProp_SphereCollisionRadius_MetaData, ARRAY_COUNT(NewProp_SphereCollisionRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Resolution method for planar limits" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CollisionType = { UE4CodeGen_Private::EPropertyClass::Enum, "CollisionType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, CollisionType), Z_Construct_UEnum_Engine_AnimPhysCollisionType, METADATA_PARAMS(NewProp_CollisionType_MetaData, ARRAY_COUNT(NewProp_CollisionType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphericalLimits_MetaData[] = {
				{ "Category", "SphericalLimit" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "List of available spherical limits for this node" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SphericalLimits = { UE4CodeGen_Private::EPropertyClass::Array, "SphericalLimits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, SphericalLimits), METADATA_PARAMS(NewProp_SphericalLimits_MetaData, ARRAY_COUNT(NewProp_SphericalLimits_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphericalLimits_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SphericalLimits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAnimPhysSphericalLimit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSphericalLimits_MetaData[] = {
				{ "Category", "SphericalLimit" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Whether to evaluate spherical limits" },
			};
#endif
			auto NewProp_bUseSphericalLimits_SetBit = [](void* Obj){ ((FAnimNode_AnimDynamics*)Obj)->bUseSphericalLimits = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSphericalLimits = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseSphericalLimits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_AnimDynamics), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseSphericalLimits_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseSphericalLimits_MetaData, ARRAY_COUNT(NewProp_bUseSphericalLimits_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlanarLimits_MetaData[] = {
				{ "Category", "PlanarLimit" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "List of available planar limits for this node" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlanarLimits = { UE4CodeGen_Private::EPropertyClass::Array, "PlanarLimits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, PlanarLimits), METADATA_PARAMS(NewProp_PlanarLimits_MetaData, ARRAY_COUNT(NewProp_PlanarLimits_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlanarLimits_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PlanarLimits", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAnimPhysPlanarLimit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePlanarLimit_MetaData[] = {
				{ "Category", "PlanarLimit" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Whether to evaluate planar limits" },
			};
#endif
			auto NewProp_bUsePlanarLimit_SetBit = [](void* Obj){ ((FAnimNode_AnimDynamics*)Obj)->bUsePlanarLimit = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePlanarLimit = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsePlanarLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_AnimDynamics), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsePlanarLimit_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUsePlanarLimit_MetaData, ARRAY_COUNT(NewProp_bUsePlanarLimit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintSetup_MetaData[] = {
				{ "Category", "Constraint" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Data describing the constraints we will apply to the body" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstraintSetup = { UE4CodeGen_Private::EPropertyClass::Struct, "ConstraintSetup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, ConstraintSetup), Z_Construct_UScriptStruct_FAnimPhysConstraintSetup, METADATA_PARAMS(NewProp_ConstraintSetup_MetaData, ARRAY_COUNT(NewProp_ConstraintSetup_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSolverIterationsPostUpdate_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Number of update passes on the linear and angular limits after we solve the position of the bodies, recommended to be around a quarter of NumSolverIterationsPreUpdate" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSolverIterationsPostUpdate = { UE4CodeGen_Private::EPropertyClass::Int, "NumSolverIterationsPostUpdate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, NumSolverIterationsPostUpdate), METADATA_PARAMS(NewProp_NumSolverIterationsPostUpdate_MetaData, ARRAY_COUNT(NewProp_NumSolverIterationsPostUpdate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSolverIterationsPreUpdate_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Number of update passes on the linear and angular limits before we solve the position of the bodies recommended to be four times the value of NumSolverIterationsPostUpdate" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSolverIterationsPreUpdate = { UE4CodeGen_Private::EPropertyClass::Int, "NumSolverIterationsPreUpdate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, NumSolverIterationsPreUpdate), METADATA_PARAMS(NewProp_NumSolverIterationsPreUpdate_MetaData, ARRAY_COUNT(NewProp_NumSolverIterationsPreUpdate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoEval_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "If true we will perform bone transform evaluation, otherwise skip - allows visualisation of the initial anim state compared to the physics sim" },
			};
#endif
			auto NewProp_bDoEval_SetBit = [](void* Obj){ ((FAnimNode_AnimDynamics*)Obj)->bDoEval = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoEval = { UE4CodeGen_Private::EPropertyClass::Bool, "bDoEval", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_AnimDynamics), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDoEval_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDoEval_MetaData, ARRAY_COUNT(NewProp_bDoEval_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoUpdate_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "If true we will perform physics update, otherwise skip - allows visualisation of the initial state of the bodies" },
			};
#endif
			auto NewProp_bDoUpdate_SetBit = [](void* Obj){ ((FAnimNode_AnimDynamics*)Obj)->bDoUpdate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoUpdate = { UE4CodeGen_Private::EPropertyClass::Bool, "bDoUpdate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_AnimDynamics), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDoUpdate_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDoUpdate_MetaData, ARRAY_COUNT(NewProp_bDoUpdate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularBiasOverride_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "PinHiddenByDefault", "" },
				{ "ToolTip", "Overridden angular bias value\nAngular bias is essentially a twist reduction for chain forces and defaults to a value to keep chains stability\nin check. When using single-body systems sometimes angular forces will look like they are \"catching-up\" with\nthe mesh, if that's the case override this and push it towards 1.0f until it settles correctly" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularBiasOverride = { UE4CodeGen_Private::EPropertyClass::Float, "AngularBiasOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, AngularBiasOverride), METADATA_PARAMS(NewProp_AngularBiasOverride_MetaData, ARRAY_COUNT(NewProp_AngularBiasOverride_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAngularBias_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "If true, the override value will be used for the angular bias for bodies in this node.\nAngular bias is essentially a twist reduction for chain forces and defaults to a value to keep chains stability\nin check. When using single-body systems sometimes angular forces will look like they are \"catching-up\" with\nthe mesh, if that's the case override this and push it towards 1.0f until it settles correctly" },
			};
#endif
			auto NewProp_bOverrideAngularBias_SetBit = [](void* Obj){ ((FAnimNode_AnimDynamics*)Obj)->bOverrideAngularBias = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAngularBias = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideAngularBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_AnimDynamics), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideAngularBias_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideAngularBias_MetaData, ARRAY_COUNT(NewProp_bOverrideAngularBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularDampingOverride_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "PinHiddenByDefault", "" },
				{ "ToolTip", "Overridden angular damping value" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularDampingOverride = { UE4CodeGen_Private::EPropertyClass::Float, "AngularDampingOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, AngularDampingOverride), METADATA_PARAMS(NewProp_AngularDampingOverride_MetaData, ARRAY_COUNT(NewProp_AngularDampingOverride_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAngularDamping_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "If true, the override value will be used for angular damping" },
			};
#endif
			auto NewProp_bOverrideAngularDamping_SetBit = [](void* Obj){ ((FAnimNode_AnimDynamics*)Obj)->bOverrideAngularDamping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAngularDamping = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideAngularDamping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_AnimDynamics), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideAngularDamping_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideAngularDamping_MetaData, ARRAY_COUNT(NewProp_bOverrideAngularDamping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearDampingOverride_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "PinHiddenByDefault", "" },
				{ "ToolTip", "Overridden linear damping value" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearDampingOverride = { UE4CodeGen_Private::EPropertyClass::Float, "LinearDampingOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, LinearDampingOverride), METADATA_PARAMS(NewProp_LinearDampingOverride_MetaData, ARRAY_COUNT(NewProp_LinearDampingOverride_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideLinearDamping_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "If true, the override value will be used for linear damping" },
			};
#endif
			auto NewProp_bOverrideLinearDamping_SetBit = [](void* Obj){ ((FAnimNode_AnimDynamics*)Obj)->bOverrideLinearDamping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideLinearDamping = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideLinearDamping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_AnimDynamics), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideLinearDamping_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideLinearDamping_MetaData, ARRAY_COUNT(NewProp_bOverrideLinearDamping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindScale_MetaData[] = {
				{ "Category", "Wind" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Scale to apply to calculated wind velocities in the solver" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindScale = { UE4CodeGen_Private::EPropertyClass::Float, "WindScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, WindScale), METADATA_PARAMS(NewProp_WindScale_MetaData, ARRAY_COUNT(NewProp_WindScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWindWasEnabled_MetaData[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
			};
#endif
			auto NewProp_bWindWasEnabled_SetBit = [](void* Obj){ ((FAnimNode_AnimDynamics*)Obj)->bWindWasEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWindWasEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bWindWasEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_AnimDynamics), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bWindWasEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bWindWasEnabled_MetaData, ARRAY_COUNT(NewProp_bWindWasEnabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableWind_MetaData[] = {
				{ "Category", "Wind" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Whether or not wind is enabled for the bodies in this simulation" },
			};
#endif
			auto NewProp_bEnableWind_SetBit = [](void* Obj){ ((FAnimNode_AnimDynamics*)Obj)->bEnableWind = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableWind = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableWind", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_AnimDynamics), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableWind_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableWind_MetaData, ARRAY_COUNT(NewProp_bEnableWind_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularSpringConstant_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "PinHiddenByDefault", "" },
				{ "ToolTip", "Spring constant to use when calculating angular springs, higher values mean a stronger spring" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularSpringConstant = { UE4CodeGen_Private::EPropertyClass::Float, "AngularSpringConstant", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, AngularSpringConstant), METADATA_PARAMS(NewProp_AngularSpringConstant_MetaData, ARRAY_COUNT(NewProp_AngularSpringConstant_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearSpringConstant_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "PinHiddenByDefault", "" },
				{ "ToolTip", "Spring constant to use when calculating linear springs, higher values mean a stronger spring." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearSpringConstant = { UE4CodeGen_Private::EPropertyClass::Float, "LinearSpringConstant", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, LinearSpringConstant), METADATA_PARAMS(NewProp_LinearSpringConstant_MetaData, ARRAY_COUNT(NewProp_LinearSpringConstant_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAngularSpring_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "If true the body will attempt to align itself with the specified angular target" },
			};
#endif
			auto NewProp_bAngularSpring_SetBit = [](void* Obj){ ((FAnimNode_AnimDynamics*)Obj)->bAngularSpring = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAngularSpring = { UE4CodeGen_Private::EPropertyClass::Bool, "bAngularSpring", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_AnimDynamics), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAngularSpring_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAngularSpring_MetaData, ARRAY_COUNT(NewProp_bAngularSpring_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinearSpring_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "If true the body will attempt to spring back to its initial position" },
			};
#endif
			auto NewProp_bLinearSpring_SetBit = [](void* Obj){ ((FAnimNode_AnimDynamics*)Obj)->bLinearSpring = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinearSpring = { UE4CodeGen_Private::EPropertyClass::Bool, "bLinearSpring", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_AnimDynamics), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLinearSpring_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLinearSpring_MetaData, ARRAY_COUNT(NewProp_bLinearSpring_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "PinHiddenByDefault", "" },
				{ "ToolTip", "Scale for gravity, higher values increase forces due to gravity" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravityScale = { UE4CodeGen_Private::EPropertyClass::Float, "GravityScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, GravityScale), METADATA_PARAMS(NewProp_GravityScale_MetaData, ARRAY_COUNT(NewProp_GravityScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalJointOffset_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Vector relative to the body being simulated to attach the constraint to" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalJointOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "LocalJointOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, LocalJointOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LocalJointOffset_MetaData, ARRAY_COUNT(NewProp_LocalJointOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxExtents_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Extents of the box to use for simulation" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxExtents = { UE4CodeGen_Private::EPropertyClass::Struct, "BoxExtents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, BoxExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_BoxExtents_MetaData, ARRAY_COUNT(NewProp_BoxExtents_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChainEnd_MetaData[] = {
				{ "Category", "Setup" },
				{ "EditCondition", "bChain" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "If bChain is true this is the bottom of the chain, otherwise ignored" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChainEnd = { UE4CodeGen_Private::EPropertyClass::Struct, "ChainEnd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, ChainEnd), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_ChainEnd_MetaData, ARRAY_COUNT(NewProp_ChainEnd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundBone_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "The bone to attach the physics body to, if bChain is true this is the top of the chain" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundBone = { UE4CodeGen_Private::EPropertyClass::Struct, "BoundBone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, BoundBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_BoundBone_MetaData, ARRAY_COUNT(NewProp_BoundBone_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChain_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Set to true to use the solver to simulate a connected chain" },
			};
#endif
			auto NewProp_bChain_SetBit = [](void* Obj){ ((FAnimNode_AnimDynamics*)Obj)->bChain = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChain = { UE4CodeGen_Private::EPropertyClass::Bool, "bChain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_AnimDynamics), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bChain_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bChain_MetaData, ARRAY_COUNT(NewProp_bChain_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeSpaceBone_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "When in BoneRelative sim space, the simulation will use this bone as the origin" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeSpaceBone = { UE4CodeGen_Private::EPropertyClass::Struct, "RelativeSpaceBone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, RelativeSpaceBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_RelativeSpaceBone_MetaData, ARRAY_COUNT(NewProp_RelativeSpaceBone_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationSpace_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "PinHiddenByDefault", "" },
				{ "ToolTip", "The space used to run the simulation" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SimulationSpace = { UE4CodeGen_Private::EPropertyClass::Enum, "SimulationSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, SimulationSpace), Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType, METADATA_PARAMS(NewProp_SimulationSpace_MetaData, ARRAY_COUNT(NewProp_SimulationSpace_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SimulationSpace_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExternalForce,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SphereCollisionRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SphericalLimits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SphericalLimits_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseSphericalLimits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlanarLimits,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlanarLimits_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsePlanarLimit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstraintSetup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumSolverIterationsPostUpdate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumSolverIterationsPreUpdate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDoEval,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDoUpdate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularBiasOverride,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideAngularBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularDampingOverride,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideAngularDamping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearDampingOverride,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideLinearDamping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WindScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bWindWasEnabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableWind,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularSpringConstant,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearSpringConstant,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAngularSpring,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLinearSpring,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GravityScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalJointOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoxExtents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChainEnd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoundBone,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bChain,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RelativeSpaceBone,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SimulationSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SimulationSpace_Underlying,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_AnimDynamics",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_AnimDynamics),
				alignof(FAnimNode_AnimDynamics),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_CRC() { return 2044871891U; }
class UScriptStruct* FAnimPhysSphericalLimit::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimPhysSphericalLimit, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimPhysSphericalLimit"), sizeof(FAnimPhysSphericalLimit), Get_Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimPhysSphericalLimit(FAnimPhysSphericalLimit::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimPhysSphericalLimit"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimPhysSphericalLimit
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimPhysSphericalLimit()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimPhysSphericalLimit")),new UScriptStruct::TCppStructOps<FAnimPhysSphericalLimit>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimPhysSphericalLimit;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysSphericalLimit()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimPhysSphericalLimit"), sizeof(FAnimPhysSphericalLimit), Get_Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimPhysSphericalLimit>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitType_MetaData[] = {
				{ "Category", "SphericalLimit" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Whether to lock bodies inside or outside of the sphere" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LimitType = { UE4CodeGen_Private::EPropertyClass::Enum, "LimitType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimPhysSphericalLimit, LimitType), Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType, METADATA_PARAMS(NewProp_LimitType_MetaData, ARRAY_COUNT(NewProp_LimitType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LimitType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitRadius_MetaData[] = {
				{ "Category", "SphericalLimit" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Radius of the sphere" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimitRadius = { UE4CodeGen_Private::EPropertyClass::Float, "LimitRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimPhysSphericalLimit, LimitRadius), METADATA_PARAMS(NewProp_LimitRadius_MetaData, ARRAY_COUNT(NewProp_LimitRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereLocalOffset_MetaData[] = {
				{ "Category", "SphericalLimit" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Local offset for the sphere, if no driving bone is set this is in node space, otherwise bone space" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphereLocalOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "SphereLocalOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimPhysSphericalLimit, SphereLocalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_SphereLocalOffset_MetaData, ARRAY_COUNT(NewProp_SphereLocalOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrivingBone_MetaData[] = {
				{ "Category", "SphericalLimit" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Bone to attach the sphere to" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrivingBone = { UE4CodeGen_Private::EPropertyClass::Struct, "DrivingBone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimPhysSphericalLimit, DrivingBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_DrivingBone_MetaData, ARRAY_COUNT(NewProp_DrivingBone_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LimitType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LimitType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LimitRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SphereLocalOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrivingBone,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimPhysSphericalLimit",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAnimPhysSphericalLimit),
				alignof(FAnimPhysSphericalLimit),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_CRC() { return 2956668617U; }
class UScriptStruct* FAnimPhysPlanarLimit::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimPhysPlanarLimit, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimPhysPlanarLimit"), sizeof(FAnimPhysPlanarLimit), Get_Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimPhysPlanarLimit(FAnimPhysPlanarLimit::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimPhysPlanarLimit"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimPhysPlanarLimit
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimPhysPlanarLimit()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimPhysPlanarLimit")),new UScriptStruct::TCppStructOps<FAnimPhysPlanarLimit>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimPhysPlanarLimit;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysPlanarLimit()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimPhysPlanarLimit"), sizeof(FAnimPhysPlanarLimit), Get_Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimPhysPlanarLimit>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneTransform_MetaData[] = {
				{ "Category", "PlanarLimit" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Transform of the plane, this is either in component-space if no DrivinBone is specified\nor in bone-space if a driving bone is present." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaneTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "PlaneTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimPhysPlanarLimit, PlaneTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_PlaneTransform_MetaData, ARRAY_COUNT(NewProp_PlaneTransform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrivingBone_MetaData[] = {
				{ "Category", "PlanarLimit" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "When using a driving bone, the plane transform will be relative to the bone transform" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrivingBone = { UE4CodeGen_Private::EPropertyClass::Struct, "DrivingBone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimPhysPlanarLimit, DrivingBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_DrivingBone_MetaData, ARRAY_COUNT(NewProp_DrivingBone_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlaneTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrivingBone,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimPhysPlanarLimit",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAnimPhysPlanarLimit),
				alignof(FAnimPhysPlanarLimit),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_CRC() { return 3493745096U; }
class UScriptStruct* FAnimPhysConstraintSetup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimPhysConstraintSetup"), sizeof(FAnimPhysConstraintSetup), Get_Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimPhysConstraintSetup(FAnimPhysConstraintSetup::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimPhysConstraintSetup"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimPhysConstraintSetup
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimPhysConstraintSetup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimPhysConstraintSetup")),new UScriptStruct::TCppStructOps<FAnimPhysConstraintSetup>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimPhysConstraintSetup;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysConstraintSetup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimPhysConstraintSetup"), sizeof(FAnimPhysConstraintSetup), Get_Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Constraint setup struct, holds data required to build a physics constraint" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimPhysConstraintSetup>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinearFullyLocked_MetaData[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "If all axes are locked we can use 3 linear limits instead of the 6 needed for limited axes" },
			};
#endif
			auto NewProp_bLinearFullyLocked_SetBit = [](void* Obj){ ((FAnimPhysConstraintSetup*)Obj)->bLinearFullyLocked = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinearFullyLocked = { UE4CodeGen_Private::EPropertyClass::Bool, "bLinearFullyLocked", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimPhysConstraintSetup), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLinearFullyLocked_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLinearFullyLocked_MetaData, ARRAY_COUNT(NewProp_bLinearFullyLocked_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularTarget_MetaData[] = {
				{ "Category", "Angular" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Target direction to face for body1 (in body0 local space)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "AngularTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimPhysConstraintSetup, AngularTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_AngularTarget_MetaData, ARRAY_COUNT(NewProp_AngularTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularTargetAxis_MetaData[] = {
				{ "Category", "Angular" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Axis on body1 to match to the angular target direction." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AngularTargetAxis = { UE4CodeGen_Private::EPropertyClass::Enum, "AngularTargetAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimPhysConstraintSetup, AngularTargetAxis), Z_Construct_UEnum_Engine_AnimPhysTwistAxis, METADATA_PARAMS(NewProp_AngularTargetAxis_MetaData, ARRAY_COUNT(NewProp_AngularTargetAxis_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AngularTargetAxis_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularLimitsMax_MetaData[] = {
				{ "Category", "Angular" },
				{ "ClampMax", "180" },
				{ "ClampMin", "-180" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "UIMax", "180" },
				{ "UIMin", "-180" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularLimitsMax = { UE4CodeGen_Private::EPropertyClass::Struct, "AngularLimitsMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimPhysConstraintSetup, AngularLimitsMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_AngularLimitsMax_MetaData, ARRAY_COUNT(NewProp_AngularLimitsMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularLimitsMin_MetaData[] = {
				{ "Category", "Angular" },
				{ "ClampMax", "180" },
				{ "ClampMin", "-180" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "UIMax", "180" },
				{ "UIMin", "-180" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularLimitsMin = { UE4CodeGen_Private::EPropertyClass::Struct, "AngularLimitsMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimPhysConstraintSetup, AngularLimitsMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_AngularLimitsMin_MetaData, ARRAY_COUNT(NewProp_AngularLimitsMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularZAngle_MetaData[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Z-axis limit for angular motion when using the \"Angular\" constraint type (Set to 0 to lock, or 180 to remain free)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularZAngle = { UE4CodeGen_Private::EPropertyClass::Float, "AngularZAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FAnimPhysConstraintSetup, AngularZAngle_DEPRECATED), METADATA_PARAMS(NewProp_AngularZAngle_MetaData, ARRAY_COUNT(NewProp_AngularZAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularYAngle_MetaData[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Y-axis limit for angular motion when using the \"Angular\" constraint type (Set to 0 to lock, or 180 to remain free)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularYAngle = { UE4CodeGen_Private::EPropertyClass::Float, "AngularYAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FAnimPhysConstraintSetup, AngularYAngle_DEPRECATED), METADATA_PARAMS(NewProp_AngularYAngle_MetaData, ARRAY_COUNT(NewProp_AngularYAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularXAngle_MetaData[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "X-axis limit for angular motion when using the \"Angular\" constraint type (Set to 0 to lock, or 180 to remain free)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularXAngle = { UE4CodeGen_Private::EPropertyClass::Float, "AngularXAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FAnimPhysConstraintSetup, AngularXAngle_DEPRECATED), METADATA_PARAMS(NewProp_AngularXAngle_MetaData, ARRAY_COUNT(NewProp_AngularXAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConeAngle_MetaData[] = {
				{ "Category", "Angular" },
				{ "ClampMax", "90" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Angle to use when constraining using a cone" },
				{ "UIMax", "90" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConeAngle = { UE4CodeGen_Private::EPropertyClass::Float, "ConeAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimPhysConstraintSetup, ConeAngle), METADATA_PARAMS(NewProp_ConeAngle_MetaData, ARRAY_COUNT(NewProp_ConeAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistAxis_MetaData[] = {
				{ "Category", "Angular" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Axis to consider for twist when constraining angular motion (forward axis)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TwistAxis = { UE4CodeGen_Private::EPropertyClass::Enum, "TwistAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimPhysConstraintSetup, TwistAxis), Z_Construct_UEnum_Engine_AnimPhysTwistAxis, METADATA_PARAMS(NewProp_TwistAxis_MetaData, ARRAY_COUNT(NewProp_TwistAxis_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TwistAxis_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularConstraintType_MetaData[] = {
				{ "Category", "Angular" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Method to use when constraining angular motion" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AngularConstraintType = { UE4CodeGen_Private::EPropertyClass::Enum, "AngularConstraintType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimPhysConstraintSetup, AngularConstraintType), Z_Construct_UEnum_AnimGraphRuntime_AnimPhysAngularConstraintType, METADATA_PARAMS(NewProp_AngularConstraintType_MetaData, ARRAY_COUNT(NewProp_AngularConstraintType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AngularConstraintType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearAxesMax_MetaData[] = {
				{ "Category", "Linear" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Maximum linear movement per-axis (Set zero here and in the min limit to lock)" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearAxesMax = { UE4CodeGen_Private::EPropertyClass::Struct, "LinearAxesMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimPhysConstraintSetup, LinearAxesMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LinearAxesMax_MetaData, ARRAY_COUNT(NewProp_LinearAxesMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearAxesMin_MetaData[] = {
				{ "Category", "Linear" },
				{ "ClampMax", "0" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Minimum linear movement per-axis (Set zero here and in the max limit to lock)" },
				{ "UIMax", "0" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearAxesMin = { UE4CodeGen_Private::EPropertyClass::Struct, "LinearAxesMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimPhysConstraintSetup, LinearAxesMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LinearAxesMin_MetaData, ARRAY_COUNT(NewProp_LinearAxesMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearZLimitType_MetaData[] = {
				{ "Category", "Linear" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Whether to limit the linear Z axis" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LinearZLimitType = { UE4CodeGen_Private::EPropertyClass::Enum, "LinearZLimitType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimPhysConstraintSetup, LinearZLimitType), Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType, METADATA_PARAMS(NewProp_LinearZLimitType_MetaData, ARRAY_COUNT(NewProp_LinearZLimitType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LinearZLimitType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearYLimitType_MetaData[] = {
				{ "Category", "Linear" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Whether to limit the linear Y axis" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LinearYLimitType = { UE4CodeGen_Private::EPropertyClass::Enum, "LinearYLimitType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimPhysConstraintSetup, LinearYLimitType), Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType, METADATA_PARAMS(NewProp_LinearYLimitType_MetaData, ARRAY_COUNT(NewProp_LinearYLimitType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LinearYLimitType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearXLimitType_MetaData[] = {
				{ "Category", "Linear" },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
				{ "ToolTip", "Whether to limit the linear X axis" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LinearXLimitType = { UE4CodeGen_Private::EPropertyClass::Enum, "LinearXLimitType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimPhysConstraintSetup, LinearXLimitType), Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType, METADATA_PARAMS(NewProp_LinearXLimitType_MetaData, ARRAY_COUNT(NewProp_LinearXLimitType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LinearXLimitType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLinearFullyLocked,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularTargetAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularTargetAxis_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularLimitsMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularLimitsMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularZAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularYAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularXAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConeAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TwistAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TwistAxis_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularConstraintType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularConstraintType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearAxesMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearAxesMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearZLimitType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearZLimitType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearYLimitType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearYLimitType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearXLimitType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearXLimitType_Underlying,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimPhysConstraintSetup",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAnimPhysConstraintSetup),
				alignof(FAnimPhysConstraintSetup),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_CRC() { return 4283259828U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
