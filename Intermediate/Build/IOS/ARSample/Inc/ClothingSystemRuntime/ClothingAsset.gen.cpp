// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Assets/ClothingAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothingAsset() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIME_API UEnum* Z_Construct_UEnum_ClothingSystemRuntime_EClothingWindMethod();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntime();
	CLOTHINGSYSTEMRUNTIME_API UEnum* Z_Construct_UEnum_ClothingSystemRuntime_MaskTarget_PhysMesh();
	CLOTHINGSYSTEMRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FClothConfig();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CLOTHINGSYSTEMRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FClothConstraintSetup();
	CLOTHINGSYSTEMRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FClothLODData();
	CLOTHINGSYSTEMRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionData();
	CLOTHINGSYSTEMRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FClothPhysicalMeshData();
	CLOTHINGSYSTEMRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FClothVertBoneData();
	CLOTHINGSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UClothingAssetCustomData_NoRegister();
	CLOTHINGSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UClothingAssetCustomData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CLOTHINGSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UClothingAsset_NoRegister();
	CLOTHINGSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UClothingAsset();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingAssetBase();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
// End Cross Module References
	static UEnum* EClothingWindMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ClothingSystemRuntime_EClothingWindMethod, Z_Construct_UPackage__Script_ClothingSystemRuntime(), TEXT("EClothingWindMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EClothingWindMethod(EClothingWindMethod_StaticEnum, TEXT("/Script/ClothingSystemRuntime"), TEXT("EClothingWindMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ClothingSystemRuntime_EClothingWindMethod_CRC() { return 3224780726U; }
	UEnum* Z_Construct_UEnum_ClothingSystemRuntime_EClothingWindMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EClothingWindMethod"), 0, Get_Z_Construct_UEnum_ClothingSystemRuntime_EClothingWindMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EClothingWindMethod::Legacy", (int64)EClothingWindMethod::Legacy },
				{ "EClothingWindMethod::Accurate", (int64)EClothingWindMethod::Accurate },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Accurate.Hidden", "" },
				{ "Accurate.ToolTip", "Use updated wind calculation for NvCloth based solved taking into account\ndrag and lift, this will require those properties to be correctly set in\nthe clothing configuration" },
				{ "Legacy.ToolTip", "Use legacy wind mode, where accelerations are modified directly by the simulation\nwith no regard for drag or lift" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ClothingSystemRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EClothingWindMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EClothingWindMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* MaskTarget_PhysMesh_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ClothingSystemRuntime_MaskTarget_PhysMesh, Z_Construct_UPackage__Script_ClothingSystemRuntime(), TEXT("MaskTarget_PhysMesh"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_MaskTarget_PhysMesh(MaskTarget_PhysMesh_StaticEnum, TEXT("/Script/ClothingSystemRuntime"), TEXT("MaskTarget_PhysMesh"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ClothingSystemRuntime_MaskTarget_PhysMesh_CRC() { return 1154474204U; }
	UEnum* Z_Construct_UEnum_ClothingSystemRuntime_MaskTarget_PhysMesh()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("MaskTarget_PhysMesh"), 0, Get_Z_Construct_UEnum_ClothingSystemRuntime_MaskTarget_PhysMesh_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MaskTarget_PhysMesh::None", (int64)MaskTarget_PhysMesh::None },
				{ "MaskTarget_PhysMesh::MaxDistance", (int64)MaskTarget_PhysMesh::MaxDistance },
				{ "MaskTarget_PhysMesh::BackstopDistance", (int64)MaskTarget_PhysMesh::BackstopDistance },
				{ "MaskTarget_PhysMesh::BackstopRadius", (int64)MaskTarget_PhysMesh::BackstopRadius },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "The possible targets for a physical mesh mask" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ClothingSystemRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"MaskTarget_PhysMesh",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"MaskTarget_PhysMesh",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FClothConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FClothConfig_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothConfig, Z_Construct_UPackage__Script_ClothingSystemRuntime(), TEXT("ClothConfig"), sizeof(FClothConfig), Get_Z_Construct_UScriptStruct_FClothConfig_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothConfig(FClothConfig::StaticStruct, TEXT("/Script/ClothingSystemRuntime"), TEXT("ClothConfig"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothConfig
{
	FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothConfig")),new UScriptStruct::TCppStructOps<FClothConfig>);
	}
} ScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothConfig;
	UScriptStruct* Z_Construct_UScriptStruct_FClothConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothConfig_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothConfig"), sizeof(FClothConfig), Get_Z_Construct_UScriptStruct_FClothConfig_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Holds initial, asset level config for clothing actors." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothConfig>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionThickness_MetaData[] = {
				{ "Category", "ClothConfig" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "'Thickness' of the simulated cloth, used to adjust collisions" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionThickness = { UE4CodeGen_Private::EPropertyClass::Float, "CollisionThickness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothConfig, CollisionThickness), METADATA_PARAMS(NewProp_CollisionThickness_MetaData, ARRAY_COUNT(NewProp_CollisionThickness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TetherLimit_MetaData[] = {
				{ "Category", "ClothConfig" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Scale for the limit of particle tethers (how far they can separate)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TetherLimit = { UE4CodeGen_Private::EPropertyClass::Float, "TetherLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothConfig, TetherLimit), METADATA_PARAMS(NewProp_TetherLimit_MetaData, ARRAY_COUNT(NewProp_TetherLimit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TetherStiffness_MetaData[] = {
				{ "Category", "ClothConfig" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Scale for stiffness of particle tethers between each other" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TetherStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "TetherStiffness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothConfig, TetherStiffness), METADATA_PARAMS(NewProp_TetherStiffness_MetaData, ARRAY_COUNT(NewProp_TetherStiffness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[] = {
				{ "Category", "ClothConfig" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Scale of gravity effect on particles" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravityScale = { UE4CodeGen_Private::EPropertyClass::Float, "GravityScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothConfig, GravityScale), METADATA_PARAMS(NewProp_GravityScale_MetaData, ARRAY_COUNT(NewProp_GravityScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StiffnessFrequency_MetaData[] = {
				{ "Category", "ClothConfig" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Frequency for stiffness calculations, lower values will degrade stiffness of constraints" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StiffnessFrequency = { UE4CodeGen_Private::EPropertyClass::Float, "StiffnessFrequency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothConfig, StiffnessFrequency), METADATA_PARAMS(NewProp_StiffnessFrequency_MetaData, ARRAY_COUNT(NewProp_StiffnessFrequency_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SolverFrequency_MetaData[] = {
				{ "Category", "ClothConfig" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Frequency of the position solver, lower values will lead to stretchier, bouncier cloth" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SolverFrequency = { UE4CodeGen_Private::EPropertyClass::Float, "SolverFrequency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothConfig, SolverFrequency), METADATA_PARAMS(NewProp_SolverFrequency_MetaData, ARRAY_COUNT(NewProp_SolverFrequency_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CentrifugalInertiaScale_MetaData[] = {
				{ "Category", "ClothConfig" },
				{ "ClampMax", "1" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Scale for centrifugal particle inertia, how much movement should translate to angular motion (per-axis)" },
				{ "UIMax", "1" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CentrifugalInertiaScale = { UE4CodeGen_Private::EPropertyClass::Struct, "CentrifugalInertiaScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothConfig, CentrifugalInertiaScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_CentrifugalInertiaScale_MetaData, ARRAY_COUNT(NewProp_CentrifugalInertiaScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularInertiaScale_MetaData[] = {
				{ "Category", "ClothConfig" },
				{ "ClampMax", "1" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Scale for angular particle inertia, how much movement should translate to angular motion (per-axis)" },
				{ "UIMax", "1" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularInertiaScale = { UE4CodeGen_Private::EPropertyClass::Struct, "AngularInertiaScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothConfig, AngularInertiaScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_AngularInertiaScale_MetaData, ARRAY_COUNT(NewProp_AngularInertiaScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearInertiaScale_MetaData[] = {
				{ "Category", "ClothConfig" },
				{ "ClampMax", "1" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Scale for linear particle inertia, how much movement should translate to linear motion (per-axis)" },
				{ "UIMax", "1" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearInertiaScale = { UE4CodeGen_Private::EPropertyClass::Struct, "LinearInertiaScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothConfig, LinearInertiaScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LinearInertiaScale_MetaData, ARRAY_COUNT(NewProp_LinearInertiaScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularDrag_MetaData[] = {
				{ "Category", "ClothConfig" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Drag applied to angular particle movement, higher values should limit material bending (per-axis)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularDrag = { UE4CodeGen_Private::EPropertyClass::Struct, "AngularDrag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothConfig, AngularDrag), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_AngularDrag_MetaData, ARRAY_COUNT(NewProp_AngularDrag_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearDrag_MetaData[] = {
				{ "Category", "ClothConfig" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Drag applied to linear particle movement per-axis" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearDrag = { UE4CodeGen_Private::EPropertyClass::Struct, "LinearDrag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothConfig, LinearDrag), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LinearDrag_MetaData, ARRAY_COUNT(NewProp_LinearDrag_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindLiftCoefficient_MetaData[] = {
				{ "Category", "ClothConfig" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Lift coefficient for wind calculations, higher values make cloth rise easier in wind" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindLiftCoefficient = { UE4CodeGen_Private::EPropertyClass::Float, "WindLiftCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothConfig, WindLiftCoefficient), METADATA_PARAMS(NewProp_WindLiftCoefficient_MetaData, ARRAY_COUNT(NewProp_WindLiftCoefficient_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindDragCoefficient_MetaData[] = {
				{ "Category", "ClothConfig" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Drag coefficient for wind calculations, higher values mean wind has more lateral effect on cloth" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindDragCoefficient = { UE4CodeGen_Private::EPropertyClass::Float, "WindDragCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothConfig, WindDragCoefficient), METADATA_PARAMS(NewProp_WindDragCoefficient_MetaData, ARRAY_COUNT(NewProp_WindDragCoefficient_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[] = {
				{ "Category", "ClothConfig" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Friction of the surface when colliding" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Friction = { UE4CodeGen_Private::EPropertyClass::Float, "Friction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothConfig, Friction), METADATA_PARAMS(NewProp_Friction_MetaData, ARRAY_COUNT(NewProp_Friction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[] = {
				{ "Category", "ClothConfig" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Damping of particle motion per-axis" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Damping = { UE4CodeGen_Private::EPropertyClass::Struct, "Damping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothConfig, Damping), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Damping_MetaData, ARRAY_COUNT(NewProp_Damping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionCullScale_MetaData[] = {
				{ "Category", "ClothConfig" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Scale to use for the radius of the culling checks for self collisions.\nAny other self collision body within the radius of this check will be culled.\nThis helps performance with higher resolution meshes by reducing the number\nof colliding bodies within the cloth. Reducing this will have a negative\neffect on performance!" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionCullScale = { UE4CodeGen_Private::EPropertyClass::Float, "SelfCollisionCullScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothConfig, SelfCollisionCullScale), METADATA_PARAMS(NewProp_SelfCollisionCullScale_MetaData, ARRAY_COUNT(NewProp_SelfCollisionCullScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionStiffness_MetaData[] = {
				{ "Category", "ClothConfig" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Stiffness of the spring force that will resolve self collisions" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "SelfCollisionStiffness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothConfig, SelfCollisionStiffness), METADATA_PARAMS(NewProp_SelfCollisionStiffness_MetaData, ARRAY_COUNT(NewProp_SelfCollisionStiffness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionRadius_MetaData[] = {
				{ "Category", "ClothConfig" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Size of self collision spheres centered on each vert" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionRadius = { UE4CodeGen_Private::EPropertyClass::Float, "SelfCollisionRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothConfig, SelfCollisionRadius), METADATA_PARAMS(NewProp_SelfCollisionRadius_MetaData, ARRAY_COUNT(NewProp_SelfCollisionRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShearConstraintConfig_MetaData[] = {
				{ "Category", "ClothConfig" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Constraint data for shear constraints" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShearConstraintConfig = { UE4CodeGen_Private::EPropertyClass::Struct, "ShearConstraintConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothConfig, ShearConstraintConfig), Z_Construct_UScriptStruct_FClothConstraintSetup, METADATA_PARAMS(NewProp_ShearConstraintConfig_MetaData, ARRAY_COUNT(NewProp_ShearConstraintConfig_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BendConstraintConfig_MetaData[] = {
				{ "Category", "ClothConfig" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Constraint data for bend constraints" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BendConstraintConfig = { UE4CodeGen_Private::EPropertyClass::Struct, "BendConstraintConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothConfig, BendConstraintConfig), Z_Construct_UScriptStruct_FClothConstraintSetup, METADATA_PARAMS(NewProp_BendConstraintConfig_MetaData, ARRAY_COUNT(NewProp_BendConstraintConfig_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalConstraintConfig_MetaData[] = {
				{ "Category", "ClothConfig" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Constraint data for horizontal constraints" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HorizontalConstraintConfig = { UE4CodeGen_Private::EPropertyClass::Struct, "HorizontalConstraintConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothConfig, HorizontalConstraintConfig), Z_Construct_UScriptStruct_FClothConstraintSetup, METADATA_PARAMS(NewProp_HorizontalConstraintConfig_MetaData, ARRAY_COUNT(NewProp_HorizontalConstraintConfig_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalConstraintConfig_MetaData[] = {
				{ "Category", "ClothConfig" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Constraint data for vertical constraints" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VerticalConstraintConfig = { UE4CodeGen_Private::EPropertyClass::Struct, "VerticalConstraintConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothConfig, VerticalConstraintConfig), Z_Construct_UScriptStruct_FClothConstraintSetup, METADATA_PARAMS(NewProp_VerticalConstraintConfig_MetaData, ARRAY_COUNT(NewProp_VerticalConstraintConfig_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindMethod_MetaData[] = {
				{ "Category", "ClothConfig" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "How wind should be processed, Accurate uses drag and lift to make the cloth react differently, legacy applies similar forces to all clothing without drag and lift (similar to APEX)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WindMethod = { UE4CodeGen_Private::EPropertyClass::Enum, "WindMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothConfig, WindMethod), Z_Construct_UEnum_ClothingSystemRuntime_EClothingWindMethod, METADATA_PARAMS(NewProp_WindMethod_MetaData, ARRAY_COUNT(NewProp_WindMethod_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_WindMethod_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionThickness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TetherLimit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TetherStiffness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GravityScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StiffnessFrequency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SolverFrequency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CentrifugalInertiaScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularInertiaScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearInertiaScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularDrag,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearDrag,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WindLiftCoefficient,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WindDragCoefficient,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Friction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Damping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelfCollisionCullScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelfCollisionStiffness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelfCollisionRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShearConstraintConfig,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BendConstraintConfig,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HorizontalConstraintConfig,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VerticalConstraintConfig,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WindMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WindMethod_Underlying,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ClothConfig",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FClothConfig),
				alignof(FClothConfig),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothConfig_CRC() { return 2401864058U; }
class UScriptStruct* FClothConstraintSetup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FClothConstraintSetup_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothConstraintSetup, Z_Construct_UPackage__Script_ClothingSystemRuntime(), TEXT("ClothConstraintSetup"), sizeof(FClothConstraintSetup), Get_Z_Construct_UScriptStruct_FClothConstraintSetup_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothConstraintSetup(FClothConstraintSetup::StaticStruct, TEXT("/Script/ClothingSystemRuntime"), TEXT("ClothConstraintSetup"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothConstraintSetup
{
	FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothConstraintSetup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothConstraintSetup")),new UScriptStruct::TCppStructOps<FClothConstraintSetup>);
	}
} ScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothConstraintSetup;
	UScriptStruct* Z_Construct_UScriptStruct_FClothConstraintSetup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothConstraintSetup_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothConstraintSetup"), sizeof(FClothConstraintSetup), Get_Z_Construct_UScriptStruct_FClothConstraintSetup_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Container for a constraint setup, these can be horizontal, vertical, shear and bend" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothConstraintSetup>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionLimit_MetaData[] = {
				{ "Category", "Constraint" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "The hard limit on how far this constraint can compress" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CompressionLimit = { UE4CodeGen_Private::EPropertyClass::Float, "CompressionLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothConstraintSetup, CompressionLimit), METADATA_PARAMS(NewProp_CompressionLimit_MetaData, ARRAY_COUNT(NewProp_CompressionLimit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StretchLimit_MetaData[] = {
				{ "Category", "Constraint" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "The hard limit on how far this constarint can stretch" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StretchLimit = { UE4CodeGen_Private::EPropertyClass::Float, "StretchLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothConstraintSetup, StretchLimit), METADATA_PARAMS(NewProp_StretchLimit_MetaData, ARRAY_COUNT(NewProp_StretchLimit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StiffnessMultiplier_MetaData[] = {
				{ "Category", "Constraint" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "A multiplier affecting the above value" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StiffnessMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "StiffnessMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothConstraintSetup, StiffnessMultiplier), METADATA_PARAMS(NewProp_StiffnessMultiplier_MetaData, ARRAY_COUNT(NewProp_StiffnessMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[] = {
				{ "Category", "Constraint" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "How stiff this constraint is, this affects how closely it will follow the desired position" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Stiffness = { UE4CodeGen_Private::EPropertyClass::Float, "Stiffness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothConstraintSetup, Stiffness), METADATA_PARAMS(NewProp_Stiffness_MetaData, ARRAY_COUNT(NewProp_Stiffness_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressionLimit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StretchLimit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StiffnessMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Stiffness,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ClothConstraintSetup",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FClothConstraintSetup),
				alignof(FClothConstraintSetup),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothConstraintSetup_CRC() { return 3306759985U; }
class UScriptStruct* FClothLODData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FClothLODData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothLODData, Z_Construct_UPackage__Script_ClothingSystemRuntime(), TEXT("ClothLODData"), sizeof(FClothLODData), Get_Z_Construct_UScriptStruct_FClothLODData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothLODData(FClothLODData::StaticStruct, TEXT("/Script/ClothingSystemRuntime"), TEXT("ClothLODData"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothLODData
{
	FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothLODData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothLODData")),new UScriptStruct::TCppStructOps<FClothLODData>);
	}
} ScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothLODData;
	UScriptStruct* Z_Construct_UScriptStruct_FClothLODData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothLODData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothLODData"), sizeof(FClothLODData), Get_Z_Construct_UScriptStruct_FClothLODData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothLODData>(); };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterMasks_MetaData[] = {
				{ "Category", "Masks" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Parameter masks defining the physics mesh masked data" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParameterMasks = { UE4CodeGen_Private::EPropertyClass::Array, "ParameterMasks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(FClothLODData, ParameterMasks), METADATA_PARAMS(NewProp_ParameterMasks_MetaData, ARRAY_COUNT(NewProp_ParameterMasks_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterMasks_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ParameterMasks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionData_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Collision primitive and covex data for clothing collisions" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionData = { UE4CodeGen_Private::EPropertyClass::Struct, "CollisionData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothLODData, CollisionData), Z_Construct_UScriptStruct_FClothCollisionData, METADATA_PARAMS(NewProp_CollisionData_MetaData, ARRAY_COUNT(NewProp_CollisionData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalMeshData_MetaData[] = {
				{ "Category", "SimMesh" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Raw phys mesh data" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicalMeshData = { UE4CodeGen_Private::EPropertyClass::Struct, "PhysicalMeshData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothLODData, PhysicalMeshData), Z_Construct_UScriptStruct_FClothPhysicalMeshData, METADATA_PARAMS(NewProp_PhysicalMeshData_MetaData, ARRAY_COUNT(NewProp_PhysicalMeshData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterMasks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterMasks_Inner,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicalMeshData,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ClothLODData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FClothLODData),
				alignof(FClothLODData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothLODData_CRC() { return 4215034727U; }
class UScriptStruct* FClothPhysicalMeshData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FClothPhysicalMeshData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothPhysicalMeshData, Z_Construct_UPackage__Script_ClothingSystemRuntime(), TEXT("ClothPhysicalMeshData"), sizeof(FClothPhysicalMeshData), Get_Z_Construct_UScriptStruct_FClothPhysicalMeshData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothPhysicalMeshData(FClothPhysicalMeshData::StaticStruct, TEXT("/Script/ClothingSystemRuntime"), TEXT("ClothPhysicalMeshData"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothPhysicalMeshData
{
	FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothPhysicalMeshData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothPhysicalMeshData")),new UScriptStruct::TCppStructOps<FClothPhysicalMeshData>);
	}
} ScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothPhysicalMeshData;
	UScriptStruct* Z_Construct_UScriptStruct_FClothPhysicalMeshData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothPhysicalMeshData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothPhysicalMeshData"), sizeof(FClothPhysicalMeshData), Get_Z_Construct_UScriptStruct_FClothPhysicalMeshData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Physical mesh data created during asset import or created from a skeletal mesh" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothPhysicalMeshData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionIndices_MetaData[] = {
				{ "Category", "SimMesh" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Valid indices to use for self collisions (reduced set of Indices)" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SelfCollisionIndices = { UE4CodeGen_Private::EPropertyClass::Array, "SelfCollisionIndices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothPhysicalMeshData, SelfCollisionIndices), METADATA_PARAMS(NewProp_SelfCollisionIndices_MetaData, ARRAY_COUNT(NewProp_SelfCollisionIndices_MetaData)) };
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SelfCollisionIndices_Inner = { UE4CodeGen_Private::EPropertyClass::UInt32, "SelfCollisionIndices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumFixedVerts_MetaData[] = {
				{ "Category", "SimMesh" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Number of fixed verts in the simulation mesh (fixed verts are just skinned and do not simulate)" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumFixedVerts = { UE4CodeGen_Private::EPropertyClass::Int, "NumFixedVerts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothPhysicalMeshData, NumFixedVerts), METADATA_PARAMS(NewProp_NumFixedVerts_MetaData, ARRAY_COUNT(NewProp_NumFixedVerts_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBoneWeights_MetaData[] = {
				{ "Category", "SimMesh" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Maximum number of bone weights of any vetex" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxBoneWeights = { UE4CodeGen_Private::EPropertyClass::Int, "MaxBoneWeights", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothPhysicalMeshData, MaxBoneWeights), METADATA_PARAMS(NewProp_MaxBoneWeights_MetaData, ARRAY_COUNT(NewProp_MaxBoneWeights_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneData_MetaData[] = {
				{ "Category", "SimMesh" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Indices and weights for each vertex, used to skin the mesh to create the reference pose" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneData = { UE4CodeGen_Private::EPropertyClass::Array, "BoneData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothPhysicalMeshData, BoneData), METADATA_PARAMS(NewProp_BoneData_MetaData, ARRAY_COUNT(NewProp_BoneData_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BoneData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FClothVertBoneData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InverseMasses_MetaData[] = {
				{ "Category", "SimMesh" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Inverse mass for each vertex in the physical mesh" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InverseMasses = { UE4CodeGen_Private::EPropertyClass::Array, "InverseMasses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothPhysicalMeshData, InverseMasses), METADATA_PARAMS(NewProp_InverseMasses_MetaData, ARRAY_COUNT(NewProp_InverseMasses_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InverseMasses_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "InverseMasses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackstopRadiuses_MetaData[] = {
				{ "Category", "SimMesh" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Radius of movement to allow for backstop movement" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BackstopRadiuses = { UE4CodeGen_Private::EPropertyClass::Array, "BackstopRadiuses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothPhysicalMeshData, BackstopRadiuses), METADATA_PARAMS(NewProp_BackstopRadiuses_MetaData, ARRAY_COUNT(NewProp_BackstopRadiuses_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BackstopRadiuses_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "BackstopRadiuses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackstopDistances_MetaData[] = {
				{ "Category", "SimMesh" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Distance along the plane of the surface that the particles can travel (separation constraint)" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BackstopDistances = { UE4CodeGen_Private::EPropertyClass::Array, "BackstopDistances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothPhysicalMeshData, BackstopDistances), METADATA_PARAMS(NewProp_BackstopDistances_MetaData, ARRAY_COUNT(NewProp_BackstopDistances_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BackstopDistances_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "BackstopDistances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistances_MetaData[] = {
				{ "Category", "SimMesh" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "The distance that each vertex can move away from its reference (skinned) position" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaxDistances = { UE4CodeGen_Private::EPropertyClass::Array, "MaxDistances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothPhysicalMeshData, MaxDistances), METADATA_PARAMS(NewProp_MaxDistances_MetaData, ARRAY_COUNT(NewProp_MaxDistances_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistances_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "MaxDistances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[] = {
				{ "Category", "SimMesh" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Indices of the simulation mesh triangles" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Indices = { UE4CodeGen_Private::EPropertyClass::Array, "Indices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothPhysicalMeshData, Indices), METADATA_PARAMS(NewProp_Indices_MetaData, ARRAY_COUNT(NewProp_Indices_MetaData)) };
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Indices_Inner = { UE4CodeGen_Private::EPropertyClass::UInt32, "Indices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[] = {
				{ "Category", "SimMesh" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Normal at each vertex" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals = { UE4CodeGen_Private::EPropertyClass::Array, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothPhysicalMeshData, Normals), METADATA_PARAMS(NewProp_Normals_MetaData, ARRAY_COUNT(NewProp_Normals_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
				{ "Category", "SimMesh" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Positions of each simulation vertex" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices = { UE4CodeGen_Private::EPropertyClass::Array, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothPhysicalMeshData, Vertices), METADATA_PARAMS(NewProp_Vertices_MetaData, ARRAY_COUNT(NewProp_Vertices_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelfCollisionIndices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelfCollisionIndices_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumFixedVerts,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxBoneWeights,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InverseMasses,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InverseMasses_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackstopRadiuses,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackstopRadiuses_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackstopDistances,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackstopDistances_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxDistances,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxDistances_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Indices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Indices_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normals,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normals_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ClothPhysicalMeshData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FClothPhysicalMeshData),
				alignof(FClothPhysicalMeshData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothPhysicalMeshData_CRC() { return 590044645U; }
class UScriptStruct* FClothVertBoneData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FClothVertBoneData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothVertBoneData, Z_Construct_UPackage__Script_ClothingSystemRuntime(), TEXT("ClothVertBoneData"), sizeof(FClothVertBoneData), Get_Z_Construct_UScriptStruct_FClothVertBoneData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothVertBoneData(FClothVertBoneData::StaticStruct, TEXT("/Script/ClothingSystemRuntime"), TEXT("ClothVertBoneData"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothVertBoneData
{
	FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothVertBoneData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothVertBoneData")),new UScriptStruct::TCppStructOps<FClothVertBoneData>);
	}
} ScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothVertBoneData;
	UScriptStruct* Z_Construct_UScriptStruct_FClothVertBoneData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothVertBoneData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothVertBoneData"), sizeof(FClothVertBoneData), Get_Z_Construct_UScriptStruct_FClothVertBoneData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Bone data for a vertex" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothVertBoneData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneWeights_MetaData[] = {
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "The weights for each entry in BoneIndices" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoneWeights = { UE4CodeGen_Private::EPropertyClass::Float, "BoneWeights", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, CPP_ARRAY_DIM(BoneWeights, FClothVertBoneData), nullptr, STRUCT_OFFSET(FClothVertBoneData, BoneWeights), METADATA_PARAMS(NewProp_BoneWeights_MetaData, ARRAY_COUNT(NewProp_BoneWeights_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneIndices_MetaData[] = {
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Up to MAX_TOTAL_INFLUENCES bone indices that this vert is weighted to" },
			};
#endif
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_BoneIndices = { UE4CodeGen_Private::EPropertyClass::UInt16, "BoneIndices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, CPP_ARRAY_DIM(BoneIndices, FClothVertBoneData), nullptr, STRUCT_OFFSET(FClothVertBoneData, BoneIndices), METADATA_PARAMS(NewProp_BoneIndices_MetaData, ARRAY_COUNT(NewProp_BoneIndices_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumInfluences_MetaData[] = {
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Number of influences for this vertex." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumInfluences = { UE4CodeGen_Private::EPropertyClass::Int, "NumInfluences", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothVertBoneData, NumInfluences), METADATA_PARAMS(NewProp_NumInfluences_MetaData, ARRAY_COUNT(NewProp_NumInfluences_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneWeights,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneIndices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumInfluences,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ClothVertBoneData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FClothVertBoneData),
				alignof(FClothVertBoneData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothVertBoneData_CRC() { return 1949480530U; }
class UScriptStruct* FClothParameterMask_PhysMesh::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh, Z_Construct_UPackage__Script_ClothingSystemRuntime(), TEXT("ClothParameterMask_PhysMesh"), sizeof(FClothParameterMask_PhysMesh), Get_Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothParameterMask_PhysMesh(FClothParameterMask_PhysMesh::StaticStruct, TEXT("/Script/ClothingSystemRuntime"), TEXT("ClothParameterMask_PhysMesh"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothParameterMask_PhysMesh
{
	FScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothParameterMask_PhysMesh()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothParameterMask_PhysMesh")),new UScriptStruct::TCppStructOps<FClothParameterMask_PhysMesh>);
	}
} ScriptStruct_ClothingSystemRuntime_StaticRegisterNativesFClothParameterMask_PhysMesh;
	UScriptStruct* Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothParameterMask_PhysMesh"), sizeof(FClothParameterMask_PhysMesh), Get_Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "A mask is simply some storage for a physical mesh parameter painted onto clothing.\nUsed in the editor for users to paint onto and then target to a parameter, which\nis then later applied to a phys mesh" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothParameterMask_PhysMesh>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Whether this mask is enabled and able to effect final mesh values" },
			};
#endif
			auto NewProp_bEnabled_SetBit = [](void* Obj){ ((FClothParameterMask_PhysMesh*)Obj)->bEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FClothParameterMask_PhysMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnabled_MetaData, ARRAY_COUNT(NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "The actual values stored in the mask" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values = { UE4CodeGen_Private::EPropertyClass::Array, "Values", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothParameterMask_PhysMesh, Values), METADATA_PARAMS(NewProp_Values_MetaData, ARRAY_COUNT(NewProp_Values_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Values_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "Values", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[] = {
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "The maximum value currently in the mask value array" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinValue = { UE4CodeGen_Private::EPropertyClass::Float, "MinValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothParameterMask_PhysMesh, MinValue), METADATA_PARAMS(NewProp_MinValue_MetaData, ARRAY_COUNT(NewProp_MinValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[] = {
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "The maximum value currently in the mask value array" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxValue = { UE4CodeGen_Private::EPropertyClass::Float, "MaxValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothParameterMask_PhysMesh, MaxValue), METADATA_PARAMS(NewProp_MaxValue_MetaData, ARRAY_COUNT(NewProp_MaxValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[] = {
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "The currently targeted parameter for the mask" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentTarget = { UE4CodeGen_Private::EPropertyClass::Enum, "CurrentTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothParameterMask_PhysMesh, CurrentTarget), Z_Construct_UEnum_ClothingSystemRuntime_MaskTarget_PhysMesh, METADATA_PARAMS(NewProp_CurrentTarget_MetaData, ARRAY_COUNT(NewProp_CurrentTarget_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentTarget_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskName_MetaData[] = {
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Name of the mask, mainly for users to differentiate" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_MaskName = { UE4CodeGen_Private::EPropertyClass::Name, "MaskName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothParameterMask_PhysMesh, MaskName), METADATA_PARAMS(NewProp_MaskName_MetaData, ARRAY_COUNT(NewProp_MaskName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Values,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Values_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentTarget_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaskName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ClothParameterMask_PhysMesh",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FClothParameterMask_PhysMesh),
				alignof(FClothParameterMask_PhysMesh),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_CRC() { return 239288166U; }
	void UClothingAssetCustomData::StaticRegisterNativesUClothingAssetCustomData()
	{
	}
	UClass* Z_Construct_UClass_UClothingAssetCustomData_NoRegister()
	{
		return UClothingAssetCustomData::StaticClass();
	}
	UClass* Z_Construct_UClass_UClothingAssetCustomData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Assets/ClothingAsset.h" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Custom data wrapper for clothing assets\nIf writing a new clothing asset importer, creating a new derived custom data is how to store importer (and possibly simulation)\ndata that importer will create. This needs to be set to the CustomData member on the asset your factory creates.\nTesting whether a UClothingAsset was made from a custom plugin can be achieved with\nif(AssetPtr->CustomData->IsA(UMyCustomData::StaticClass()))" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UClothingAssetCustomData>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UClothingAssetCustomData::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080081u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClothingAssetCustomData, 2164619572);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothingAssetCustomData(Z_Construct_UClass_UClothingAssetCustomData, &UClothingAssetCustomData::StaticClass, TEXT("/Script/ClothingSystemRuntime"), TEXT("UClothingAssetCustomData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingAssetCustomData);
	void UClothingAsset::StaticRegisterNativesUClothingAsset()
	{
	}
	UClass* Z_Construct_UClass_UClothingAsset_NoRegister()
	{
		return UClothingAsset::StaticClass();
	}
	UClass* Z_Construct_UClass_UClothingAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UClothingAssetBase,
				(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Assets/ClothingAsset.h" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[] = {
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Custom data applied by the importer depending on where the asset was imported from" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomData = { UE4CodeGen_Private::EPropertyClass::Object, "CustomData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UClothingAsset, CustomData), Z_Construct_UClass_UClothingAssetCustomData_NoRegister, METADATA_PARAMS(NewProp_CustomData_MetaData, ARRAY_COUNT(NewProp_CustomData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceBoneIndex_MetaData[] = {
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Bone to treat as the root of the simulation space" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReferenceBoneIndex = { UE4CodeGen_Private::EPropertyClass::Int, "ReferenceBoneIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UClothingAsset, ReferenceBoneIndex), METADATA_PARAMS(NewProp_ReferenceBoneIndex_MetaData, ARRAY_COUNT(NewProp_ReferenceBoneIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsedBoneIndices_MetaData[] = {
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "List of the indices for the bones in UsedBoneNames, used for remapping" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UsedBoneIndices = { UE4CodeGen_Private::EPropertyClass::Array, "UsedBoneIndices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UClothingAsset, UsedBoneIndices), METADATA_PARAMS(NewProp_UsedBoneIndices_MetaData, ARRAY_COUNT(NewProp_UsedBoneIndices_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_UsedBoneIndices_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "UsedBoneIndices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsedBoneNames_MetaData[] = {
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "List of bones this asset uses inside its parent mesh" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UsedBoneNames = { UE4CodeGen_Private::EPropertyClass::Array, "UsedBoneNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UClothingAsset, UsedBoneNames), METADATA_PARAMS(NewProp_UsedBoneNames_MetaData, ARRAY_COUNT(NewProp_UsedBoneNames_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_UsedBoneNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "UsedBoneNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LodMap_MetaData[] = {
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Tracks which clothing LOD each skel mesh LOD corresponds to (LodMap[SkelLod]=ClothingLod)" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LodMap = { UE4CodeGen_Private::EPropertyClass::Array, "LodMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UClothingAsset, LodMap), METADATA_PARAMS(NewProp_LodMap_MetaData, ARRAY_COUNT(NewProp_LodMap_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LodMap_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "LodMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LodData_MetaData[] = {
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "The actual asset data, listed by LOD" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LodData = { UE4CodeGen_Private::EPropertyClass::Array, "LodData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UClothingAsset, LodData), METADATA_PARAMS(NewProp_LodData_MetaData, ARRAY_COUNT(NewProp_LodData_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LodData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LodData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FClothLODData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClothConfig_MetaData[] = {
				{ "Category", "Config" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "Configuration of the cloth, contains all the parameters for how the clothing behaves" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClothConfig = { UE4CodeGen_Private::EPropertyClass::Struct, "ClothConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UClothingAsset, ClothConfig), Z_Construct_UScriptStruct_FClothConfig, METADATA_PARAMS(NewProp_ClothConfig_MetaData, ARRAY_COUNT(NewProp_ClothConfig_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsAsset_MetaData[] = {
				{ "Category", "Config" },
				{ "ModuleRelativePath", "Public/Assets/ClothingAsset.h" },
				{ "ToolTip", "The physics asset to extract collisions from when building a simulation" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicsAsset = { UE4CodeGen_Private::EPropertyClass::Object, "PhysicsAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UClothingAsset, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(NewProp_PhysicsAsset_MetaData, ARRAY_COUNT(NewProp_PhysicsAsset_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReferenceBoneIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UsedBoneIndices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UsedBoneIndices_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UsedBoneNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UsedBoneNames_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LodMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LodMap_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LodData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LodData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClothConfig,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicsAsset,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UClothingAsset>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UClothingAsset::StaticClass,
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
	IMPLEMENT_CLASS(UClothingAsset, 2325115472);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothingAsset(Z_Construct_UClass_UClothingAsset, &UClothingAsset::StaticClass, TEXT("/Script/ClothingSystemRuntime"), TEXT("UClothingAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
